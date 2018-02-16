#include "TSpectrum.h"
#include "Riostream.h"
#include "TApplication.h"
#include "TROOT.h"
#include "TFile.h"
#include "TNtuple.h"
#include "TClasTool.h"
#include "TIdentificator.h"
#include "TMath.h"
#include "TBenchmark.h"
#include "TLorentzVector.h"
#include "TCanvas.h"
#include "TH2F.h"
#include "TLatex.h"
#include "TDatabasePDG.h"
#include "TParticlePDG.h"
#include "TMatrixD.h"
#include "TClonesArray.h"
#include <vector>
#include <sys/stat.h>
#include <cstdarg>
#include <algorithm>
#include <map>
#include <string.h>
#include "do_pid.h"

TH1F *hW;
TH1F *hW2;
TH1F *hWmb;
TH1F *hW2mb;
TH1F *hT;
TH1F *hcfm;
TH2F *hEpi0_th;
Float_t kMPi0=1.33196e-1;//Got from sim.
Float_t kSPi0=1.94034e-2;//Got from sim.
//Float_t kMPi0=5.39609e-01;
//Float_t kSPi0=5.98542e-02;
bool GSIM=false;
int data_type=0;
Float_t kPt2,kEvent; 
TNtuple *tuple;
//TNtuple *tuple_sim;
TNtuple *tuplemb;
TNtuple *tuplePi0_gamma, *tupleGamma;
Float_t kEbeam=5.014,E,Ee,Ee_prev,Ep,P,Px,Py,Pz,evnt,evnt_prev,Zec,Zec_prev,Yec,Yec_prev,Xec,Xec_prev,TEc,Q2,Q2_prev,W,W_prev,Nu,Nu_prev,Pex,Pex_prev,Pey,Pey_prev,Pez,Pez_prev,pid,vx,vy,vz;
long Ne = -1;
char st[3]= "C"; // solid target: C Fe Pb
char tt[3] = "C"; // cut on solid target or Deuterium : (st) or D.
Float_t zBin[6]={0.3, 0.4, 0.5, 0.6, 0.7, 0.8};
Float_t Q2Bin[4]={1.0, 1.33, 1.77, 4.1};
Float_t nuBin[4]={2.2, 3.2, 3.73, 4.25};
Float_t Pt2Bin[7]={0., 0.1, 0.25, 0.4, 0.55, 0.75, 0.9};

Float_t kMprt=0.938272, kMntr =0.939565;
TClonesArray *P4Arr;

class Particle: public TLorentzVector
{
public:
  Float_t vx,vy,vz,pid,time;
  //TParticlePDG *info;
  Particle() : TLorentzVector(), vx(0),vy(0),vz(0),pid(0),time(0){}
  Particle(Float_t px,Float_t py, Float_t pz, Float_t e, Float_t x, Float_t y, Float_t z, Float_t pid=0, Float_t t=0): TLorentzVector(px,py,pz,e),vx(x),vy(y),vz(z),pid(pid),time(t){}
  Particle(TLorentzVector lv, Float_t x=0, Float_t y=0, Float_t z=0, Float_t pid=0, Float_t t=0): TLorentzVector(lv),vx(x),vy(y),vz(z),pid(pid),time(time){}
  Particle(Particle &p):vx(p.vx),vy(p.vy),vz(p.vz),pid(p.pid),time(p.time) {SetVect(p.Vect()); SetT(p.T());}
  inline Double_t P2() const {return P()*P();}
  inline Particle operator + (const Particle & q) const //const: the object that owns the method will not be modified by this method
  {
    Particle p;
    p.SetVect(Vect()+q.Vect());
    p.SetT(E()+q.T());
    return p;
  }

  inline Particle operator += (const Particle & q) 
  {
    SetVect(Vect()+q.Vect());
    SetT(E()+q.T());
    return *this;
  }
  const char *getName()
  {
    return ((TDatabasePDG::Instance())->GetParticle(pid))->GetName(); 
  }
};

class Combo
{
public:
  std::vector<Particle*> kParticles;
  int Npart;
  Float_t lastEvent;
  Combo(): Npart(0),lastEvent(0){}
  
  Combo(Combo &c)
  {
    Npart=0;
    for (int k=0;k<c.Npart;k++)
    {
      addParticle(c.kParticles[k]);
      lastEvent=c.lastEvent;
    }
  }
  inline  Double_t Px(){return getSum().Px();}
  inline  Double_t Py(){return getSum().Py();}
  inline  Double_t Pz(){return getSum().Pz();}
  inline  Double_t P2(){return getSum().P2();}
  inline  Double_t P(){return getSum().P();}
  inline  Double_t E(){return getSum().E();}
  inline  Double_t M(){return getSum().M();}


  //  Combo(Particle *&p): {}
  ~Combo()
  {
    //    std::cout<<"Combo destructor called: "<<kParticles.size()<<"\n";
    //for (int k=0;k< kParticles.size();k++)
    // delete kParticles[k];
    clear();
  }
  void clear(){ kParticles.clear();Npart=0;}

  void boost() //Go to CM frame.
  {
    Particle *p=&getSum();
    for (int k =0;k<Npart;k++)
      kParticles[k]->Boost(-p->BoostVector());
  }

  int addParticle(Particle *p,Float_t ev=0)
  {
    Npart++;
    kParticles.push_back(p);
    lastEvent=ev;
    return Npart;
  }

  Particle getSum()
  {
    //    Particle *p= new Particle();
    Particle p;
      
    for (int k=0;k<Npart;k++)
    {
      p+=*kParticles[k];
    }
    return p;
  }

  Int_t findPid(Int_t pid)
  {
    Int_t ret =0;
    for (int k=0;k<Npart;k++)
      if (pid==kParticles[k]->pid)
	ret++;
    return ret;
  }

  
  inline Particle* operator [] (const int & i) const
  {
    if (i>=Npart||i<0)
    {
      std::cout << "Index out of bounds" <<std::endl; 
      exit(1);
    }
    return kParticles[i];
  } 


  inline Combo operator + (const Combo & c) const //const: the object that owns the method will not be modified by this method
  {
    
    Combo r;
    for (int k=0;k<c.Npart;k++)
    {
      r.addParticle(c[k]);
    }
    for (int k=0;k<this->Npart;k++)
    {
      r.addParticle((*this)[k]);
    }

    return r;
  }

  inline Combo operator += (const Combo &q) 
  {
    for (int k =0;k<q.Npart;k++)
    {
      addParticle( q[k] );
    }
    return *this;
  }
  
  void print()
  {
    
    for (int k=0;k<Npart;k++)
      std::cout<<kParticles[k]->getName()<<" ";
    std::cout << std::endl;
  }

};


class Reaction
{
public:
  char name[50];
  char filename[50];
  Combo *kPrimary; //primary

  TParticlePDG *kPdgInfo;
  std::vector<Particle*> *kSecondary; //all secondary


  //std::vector<Particle*> *kCombo; //partial combinations.
  std::vector <Combo *> *kCombo;//partial combinations.
  std::vector <Combo *> kBkgnd;//background combinations.


  std::vector<TH1F*> hSPid;
  TFile *kOutFile;
  Float_t *kData;
  Float_t *keData;

  TNtuple  *kElecData;

  TTree *kOutData, *kOutBkgnd;

  //  TTree *kP4Tree;
  bool fEMatch;
  
  int kPPid;
  int kNSecondary;
  std::vector<int>::iterator kSIt;
  std::vector<int> kSPid;
  std::map<int,int> kNSPid;
  Reaction(){strcpy(name,"eta -> pi+ pi- a"),strcpy(filename,"test_eta_pippima.root");init();}
  Reaction(const char *n,const char *fn,bool fEMatch=false): fEMatch(fEMatch) {strcpy(name,n); strcpy(filename,fn); init();}
  int store()
  {
    for (int k=0;k<kSPid.size();k++)
    {
      hSPid[k]->Write("",TObject::kOverwrite);
    }
    kOutBkgnd->Write("",TObject::kOverwrite);
    kElecData->Write("",TObject::kOverwrite);
    //kP4Tree->Write("",TObject::kOverwrite);
    return kOutData->Write("",TObject::kOverwrite);
  }
  ~Reaction()
  {
    clear();
    delete[] kSecondary;
    delete[] kCombo;
    delete kOutData;
    delete kOutBkgnd;
    delete[] kData;
    delete[] keData;
    delete P4Arr;
    kOutFile->Close();
    delete kOutFile;
    delete kPdgInfo;
    hSPid.clear();
  }
  void clear()
  {
    for (int k=0;k<kSPid.size();k++)
    {
      kSecondary[k].clear();
      kCombo[k].clear();
    }
    
  }

  //// To store different information modify init() and fill()
  int init()
  {

    kNSecondary=0;
    kOutFile = new TFile(filename,"recreate");
    //kOutData=new TNtuple("outdata",Form("%s",name),"M:Phx:Phy:Phz:Nu:Q2:Z:Cospq:Pt2:Event:M2_01:M2_02:M_c:Phx_c:Phy_c:Phz_c:Z_c:Cospq_c:Pt2_c:Chi2:qx1:qy1:qz1:qx2:qy2:qz2");
    //kOutData = new TNtuple("outdata",Form("%s",name),
    TString varlist="M:Phx:Phy:Phz:Nu:Q2:Z:Cospq:Pt2:Event:M2_01:M2_02:vzec:z1:z2:z3:W:vxec:vyec:qx1:qy1:qz1:qx2:qy2:qz2:E1:E2:E1c:E2c:x1:y1:x2:y2";
    kElecData = new TNtuple("ElecData",Form("%s",name),"Nu:Q2:Event:vzec:Ee:Pex:Pey:Pez:W");


    kData = new Float_t[varlist.CountChar(':')+1];
    keData = new Float_t[kElecData->GetNvar()];
    P4Arr = new TClonesArray("TLorentzVector");
    kOutData = new TTree("outdata",Form("%s",name));
    kOutData->Branch("P4",&P4Arr,6);
    kOutData->Branch("primary",kData,varlist);

    kOutBkgnd = kOutData->CloneTree(0);
    kOutBkgnd->SetName("outbkgnd");

    
    return 0;
  }

  int fill()
  {
    fill(kPrimary,kOutData);
  }

  int fill_elec()
  {

    keData[0] = Nu_prev;
    keData[1] = Q2_prev;
    keData[2] = evnt_prev;
    keData[3] = Zec_prev;
    keData[4] = Ee_prev;
    keData[5] = Pex_prev;
    keData[6] = Pey_prev;
    keData[7] = Pez_prev;
    keData[8] = W_prev;
    kElecData->Fill(keData);
  }


  int fill(Combo *comb,TTree *ttree)
  {
    Double_t Px = comb->Px();
    Double_t Py = comb->Py();
    Double_t Pz = comb->Pz();
    Double_t E = comb->E();
    Double_t P2 = comb->P2();
    Double_t M =  comb->M();
    Float_t cospq = ((kEbeam-Pez_prev)*Pz - Pex_prev*Px - Pey_prev*Py)/( sqrt((Q2_prev + Nu_prev*Nu_prev)*P2) );
    Float_t Pt2 = P2*(1-cospq*cospq);
    
    kData[0] = M;
    kData[1] = Px;
    kData[2] = Py;
    kData[3] = Pz;
    kData[4] = Nu_prev;
    kData[5] = Q2_prev;
    kData[6] = E/Nu_prev;
    kData[7] = cospq;
    kData[8] = Pt2;
    kData[9] = evnt_prev;

    //    std::cout<<std::endl<<__LINE__<<": Npart:"<<comb->kParticles.size()<<std::endl;

    kData[10]=((comb->Npart==3)? ( *(*comb)[0] + *(*comb)[1]).M2() : 0);
    kData[11]=((comb->Npart==3)? ( *(*comb)[0] + *(*comb)[2]).M2() : 0);
    kData[12] = Zec_prev; // z electron corrected.

    kData[13] = (*comb)[0]->vz;
    kData[14] = ((comb->Npart>1)?(*comb)[1]->vz:0);
    kData[15] = ((comb->Npart>2)?(*comb)[2]->vz:0);
    kData[16] = W_prev;
    kData[17] = Xec_prev;
    kData[18] = Yec_prev;

    Double_t qx1,qy1,qz1,qx2,qy2,qz2;
    qx1=(*comb)[0]->Px();
    qy1=(*comb)[0]->Py();
    qz1=(*comb)[0]->Pz();
    qx2=((comb->Npart>1)?(*comb)[1]->Px():0);
    qy2=((comb->Npart>1)?(*comb)[1]->Py():0);
    qz2=((comb->Npart>1)?(*comb)[1]->Pz():0);
    Float_t E1=(*comb)[0]->E(); 
    Float_t E2=((comb->Npart>1)?(*comb)[1]->E():0); 
    kData[19] = qx1;
    kData[20] = qy1;
    kData[21] = qz1;
    kData[22] = qx2;
    kData[23] = qy2;
    kData[24] = qz2;
    kData[25] = E1;
    kData[26] = E2;
    kData[27] = E1;
    kData[28] = E2;
    if (0.35<E1&&E1<1.2) kData[27] /= hcfm->GetBinContent(hcfm->FindBin(E1));
    if (0.35<E2&&E2<1.2) kData[28] /= hcfm->GetBinContent(hcfm->FindBin(E2));
    kData[29] =(*comb)[0]->vx;
    kData[30] =(*comb)[0]->vy;
    kData[29] =((comb->Npart>1)?(*comb)[1]->vx:0);
    kData[30] =((comb->Npart>1)?(*comb)[1]->vy:0);

    /*  
    Double_t *W = new Double_t[4];
    Double_t *Wa = new Double_t[4];
    TMatrixD V(4,4);

    V(0,0) = 3.5*0.103/TMath::Sqrt(E);
    V(1,1) = 3.5*0.103/TMath::Sqrt(E);
    V(2,2) = 3.5*0.103/TMath::Sqrt(E);
    V(3,3) = 3.5*0.103/TMath::Sqrt(E);


    W[0]=Px;W[1]=Py;W[2]=Pz;W[3]=E;
    Wa[0]=Px;Wa[1]=Py;Wa[2]=Pz;Wa[3]=E;

    Double_t Chi2 =0;

    for (int k=0;k<1;k++){
          Chi2 = kinFit(W,Wa,V);
      
    }
    Double_t Phx_c = W[0], Phy_c= W[1], Phz_c= W[2], E_c = W[3], Z_c,Cospq_c, Pt2_c,M_c,M2_c,P2_c;
    P2_c =  Phx_c* Phx_c + Phy_c* Phy_c + Phz_c* Phz_c ; 
    M2_c = E_c*E_c -  P2_c;
    M_c=(M2_c>0)?TMath::Sqrt(E_c*E_c -  P2_c):M2_c;
    Cospq_c = ((kEbeam-Pez_prev)*Phz_c -Pex_prev*Phx_c - Pey_prev*Phy_c)/( sqrt((Q2_prev + Nu_prev*Nu_prev)*P2_c) );
    Pt2_c = P2_c*(1-Cospq_c*Cospq_c);
    Z_c = E_c/Nu_prev;

    delete[] W;
    delete[] Wa;

    kData[12] = M_c;
    kData[13] = Phx_c;
    kData[14] = Phy_c;
    kData[15] = Phz_c;
    kData[16] = Z_c;
    kData[17] = Cospq_c;
    kData[18] = Pt2_c; 
    kData[19] = Chi2;
    Double_t qx1,qy1,qz1,qx2,qy2,qz2;
    qx1=(*comb)[0]->Px();
    qy1=(*comb)[0]->Py();
    qz1=(*comb)[0]->Pz();
    qx2=(*comb)[1]->Px();
    qy2=(*comb)[1]->Py();
    qz2=(*comb)[1]->Pz();
  
    kData[20] = qx1;
    kData[21] = qy1;
    kData[22] = qz1;
    kData[23] = qx2;
    kData[24] = qy2;
    kData[25] = qz2;
*/

    ////// 3pi0-> 6a ///////////////////////////////////////////
    Double_t dist=1e7;
    Double_t M2_etaN=0;
    Double_t M2_eta0=3*0.135*0.135;
    Int_t order=654321;
    Int_t indexes[15]={654321, 654231, 654132, 645321, 645231, 645123, 635421, 635241,\
		   635124, 625431, 625341, 625143, 615432, 615342, 615234};
    Int_t kk=0;
    for (int j=0;j<15;j++)
    {
      kk=indexes[j];
      M2_etaN=(*(*comb)[kk/int(1e5)-1]+ *(*comb)[kk%int(1e5)/int(1e4)-1]).M2() \
	    + (*(*comb)[kk%int(1e4)/int(1e3)-1]+ *(*comb)[kk%int(1e3)/int(1e2)-1]).M2() \
            + (*(*comb)[kk%int(1e2)/int(1e1)-1]+ *(*comb)[kk%int(1e1)-1]).M2();
      if (TMath::Abs(M2_etaN - M2_eta0)<dist)
      {
	order=indexes[j];
	dist=TMath::Abs(M2_etaN - M2_eta0);
      }
    }
    Int_t ind[6]={order/int(1e5), order%int(1e5)/int(1e4), order%int(1e4)/int(1e3), order%int(1e3)/int(1e2), order%int(1e2)/int(1e1), order%int(1e1)};
    ////////////////////////////////////////////////////////

    for (int k=0;k<kNSecondary;k++)
    {
      
      Double_t px= (*comb)[ind[k]-1]->Px();
      Double_t py= (*comb)[ind[k]-1]->Py();
      Double_t pz= (*comb)[ind[k]-1]->Pz();
      Double_t e= (*comb)[ind[k]-1]->E();
      
      new ((*P4Arr)[k]) TLorentzVector(px,py,pz,e);
    }

    return ttree->Fill();
      

  }
  //////////////////////////
  inline   Double_t kinFit(Double_t *W, Double_t *Wa, TMatrixD &V ){
    bool db=false;
    if (db)std::cout<<"V Matrix on  "<<__LINE__<<std::endl;
    if (db)V.Print();


    //    TMatrixD V(4,4) = *Vm;//covariance matrix
    TMatrixD V_new(4,4);//covariance matrix updated
    TMatrixD VD(1,1);//auxiliary matrix
    TMatrixD D(1,4);//derivatives of restriction on xa
    TMatrixD d(1,1);//restriction on xa
    TMatrixD x(4,1);//corrected point
    TMatrixD xa(4,1);//linearization point
    TMatrixD x0(4,1);// initial point
    TMatrixD lam(1,1);//constrain multiplier
    Double_t Chi2 =0;//chi2 value
    
   
    D(0,0) = -2*Wa[0]; D(0,1) = -2*Wa[1]; D(0,2) = -2*Wa[2]; D(0,3) = 2*Wa[3];
    if (db)std::cout<<"D Matrix on  "<<__LINE__<<std::endl;
    if (db)D.Print();
    //    x(0,0) = W[0]; x(1,0) = W[1]; x(2,0) = W[2]; x(3,0) = W[3];
    xa(0,0) = Wa[0]; xa(1,0) = Wa[1]; xa(2,0) = Wa[2]; xa(3,0) = Wa[3];
    x0(0,0) = W[0]; x0(1,0) = W[1]; x0(2,0) = W[2]; x0(3,0) = W[3];
    
    //lam(0,0) = 0;
    d(0,0)=Wa[3]*Wa[3] - Wa[0]*Wa[0] - Wa[1]*Wa[1] - Wa[2]*Wa[2] - kPdgInfo->Mass()*kPdgInfo->Mass();
    
    TMatrixD DT =(D).Transpose(D);
    if (db)std::cout<<"DT Matrix on  "<<__LINE__<<std::endl;
    if (db) DT.Print();
    D.Transpose(D);
    
    TMatrixD VDL = (D*V);
    if (db)std::cout<<"VDL Matrix on  "<<__LINE__<<std::endl;
    if (db)VDL.Print();
    VD=VDL*DT;
    if (db)std::cout<<"VD Matrix on  "<<__LINE__<<std::endl;
    if (db)VD.Print();
    VD.Invert();
    if (db)std::cout<<"VD Matrix on  "<<__LINE__<<std::endl;
    if (db)VD.Print();
    lam = VD*(D*(x0-xa) + d);
    
    TMatrixD lamT = lam.Transpose(lam);
    lam.Transpose(lam);
    
    x = x0 + (V*DT)*lam;
    W[0]=x(0,0);W[1]=x(1,0);W[2]=x(2,0);W[3]=x(3,0);
    V_new = V - (V*DT)*VD*(D*V);
    V=V_new;
    TMatrixD aux=(lamT*(D*(x0 - xa) + d));
    //aux.Print();
    Chi2=aux(0,0);
    
    return Chi2;
}
  int pushSecondary(int pid)
  {
    kNSecondary++;
    if (!isPid(pid))
    {
      kSPid.push_back(pid);
      kNSPid[pid]=1;
      int k = kSPid.size();
      hSPid.push_back(new TH1F(Form("hNPart%d",k), TDatabasePDG::Instance()->GetParticle(pid)->GetName(),20,0,20) );
    }
    else
      kNSPid[pid]++;


    return pid;
  }

  int addSecondary(int pid)
  {
    pid = TDatabasePDG::Instance()->GetParticle(pid)->PdgCode();
    pushSecondary(pid);
    return pid;
  }

  int addSecondary(const char *name)
  {
    int pid  = TDatabasePDG::Instance()->GetParticle(name)->PdgCode();
    pushSecondary(pid);
    return pid;
  }


  int addPrimary(int pid){kPdgInfo = TDatabasePDG::Instance()->GetParticle(pid); kPPid=kPdgInfo->PdgCode(); return kPPid;}
  int addPrimary(const char *name){kPdgInfo = TDatabasePDG::Instance()->GetParticle(name); kPPid=kPdgInfo->PdgCode(); return kPPid;}


  bool isPid(int pid)
  {
    kSIt = std::find (kSPid.begin(), kSPid.end(), pid);
    if (kSIt!=kSPid.end())
      return true;
    else
      return false;
  }
  bool checkMinPart()
  {
    bool minPart=true;
    for (int k=0;k<kSPid.size();k++)
    {
      if (fEMatch)
	minPart=minPart && (kSecondary[k].size() == kNSPid[kSPid[k]]);
      else
	minPart=minPart && (kSecondary[k].size() >= kNSPid[kSPid[k]]);

      //      std::cout<<__LINE__<<": minPart "<<minPart<<" : "<<kSecondary[k].size()<<std::endl;
      hSPid[k]->Fill(kSecondary[k].size());
    }
    return minPart;
  }

  bool checkMinPart(Combo *c)
  {
    bool minPart=true;
    for (int k=0;k<kSPid.size();k++)
    {
	minPart=minPart && (c->findPid(kSPid[k]) == kNSPid[kSPid[k]]);
    }
    return minPart;
  }


  void setElectVar()
  {
    Nu_prev=Nu;
    Q2_prev=Q2;
    Zec_prev=Zec;
    Xec_prev=Xec;
    Yec_prev=Yec;
    W_prev = W;
    Pex_prev=Pex;
    Pey_prev=Pey;
    Pez_prev=Pez;
    Ee_prev = Ee;
  }

  //int takeN(int N,int kspid, int pos=0,Particle p=Particle(),int count=0)
  int takeN(int N,int kspid, int pos=0,Combo *c= new Combo() ,int count=0)
  {
    if (N<1) return -1;
    if (N!=1)
    {
      for (int k =pos;k<kSecondary[kspid].size()-N+1;k++)
      {
	c->addParticle(kSecondary[kspid][pos]);
	count=takeN(N-1,kspid,pos+1,c,count);
      }
    }

    else
    {
      for (int k=pos;k<kSecondary[kspid].size();k++)
      {
	c->addParticle(kSecondary[kspid][k]);
	kCombo[kspid].push_back(new Combo(*c) );
	//kParticles.push_back(new Particle(*kSecondary[kspid][k]));
	//std::cout<<__LINE__<<" "<< kCombo[kspid].back()->M()<<std::endl;
	count++;
      }
    }
    return count;
  }
  int findSecondary()
  { 
    int count=0;
    for (int k =0;k<kSPid.size();k++)
    {
      if(pid == kSPid[k])
      {
	kSecondary[k].push_back(new Particle(Px,Py,Pz,Ep,vx,vy,vz,pid));
	count++;
      }
    }
    return count;
  }

  int getCombinations(TChain *t)
  {
    kSecondary=new std::vector<Particle*> [kSPid.size()];
    kCombo = new std::vector<Combo*> [kSPid.size()];

    t->GetEntry(0);
    setElectVar();
    evnt_prev=evnt;
    std::cout<<"processing...\n";
    std::cout.fill('.');
    for ( int i = 0; i < Ne; i++)
    {
      t->GetEntry(i);
      Ep=E;
      if (data_type<2)// not gsim
      {
	Ep = (pid==22)? (E/0.272):( (pid==211 || pid==-211)?(sqrt(P*P+ TMath::Power(TDatabasePDG::Instance()->GetParticle("pi-")->Mass(),2)) ):E);

      }
      if (evnt==evnt_prev)
      {
	//std::cout<<__LINE__<<" "<<findSecondary()<<std::endl;
	Particle *p = new Particle(Px,Py,Pz,Ep,vx,vy,vz,pid);
	push_bkgnd(p);
	findSecondary();
      }
      else
      {
	//	fill_elec();
	pop_bkgnd();
	if (checkMinPart())
	{
	  int Npart = 1;
	  for (int k =0;k<kSPid.size();k++)
	  {

	    takeN(kNSPid[kSPid[k]] ,k);

	    Npart*=kCombo[k].size();
	  }

	  for(int k=0;k<Npart;k++)
	  {
	    kPrimary = new Combo();
	    int div=1;
	    for (int l =0;l<kSPid.size();l++)
	    {
	      int size = kCombo[l].size();
	      //std::cout<<__LINE__<<": \n";
	      
	      *kPrimary+=*kCombo[l][ (k/div)%size ];
	      //std::cout<<__LINE__<<": \n";

	      div*=size;
	    }
  	    fill();
	    delete kPrimary;
	  }
	}
	clear();
	setElectVar();
	evnt_prev=evnt;
	Particle *p =new Particle(Px,Py,Pz,Ep,vx,vy,vz,pid);
	push_bkgnd(p);
	findSecondary();

      }
      std::cout<<setw(15)<<float(i+1)/Ne*100<<" %"<<"\r";
      std::cout.flush();
    } 
    return 0;
  }

  int push_bkgnd(Particle *p)
  {
    if (isPid(p->pid))
    { 
      if (!kBkgnd.empty())
      {
	int i;
	for (i =0;i<kBkgnd.size();i++)
	{
	  if ((kBkgnd[i]->findPid(p->pid)<kNSPid[p->pid] ) && (kBkgnd[i]->lastEvent!=evnt))
	  {
	    kBkgnd[i]->addParticle(p,evnt);
	    break;
	  }
	  
	}
	if (i==kBkgnd.size())
	{
	  Combo *c = new Combo();
	  c->addParticle(p,evnt);
	  kBkgnd.push_back(c);
	}
      }
      else 
      {
	Combo *c = new Combo();
	c->addParticle(p,evnt);
	kBkgnd.push_back(c);
      }
    }
    return 0;
  }

  bool pop_bkgnd()
  {
    bool ret = false;
    if (!kBkgnd.empty())
    {
     for (int i =0;i<kBkgnd.size();i++)
      {
	if (checkMinPart(kBkgnd[i]))
	{
	  fill(kBkgnd[i],kOutBkgnd);
	  delete kBkgnd[i];
	  kBkgnd.erase(kBkgnd.begin()+i);
	  ret = true;
	}
      } 
    } 
    return ret;
  }

  int getBkgnd(TChain *t)
  {
    
    t->GetEntry(0);
    setElectVar();
    evnt_prev=evnt;
    std::cout<<"processing...\n";
    std::cout.fill('.');
    for ( int i = 0; i < Ne; i++)
    {
      t->GetEntry(i);
      Ep = (pid==22)? (E/0.272):sqrt(P*P+ TMath::Power(TDatabasePDG::Instance()->GetParticle("pi-")->Mass(),2));
      if (evnt==evnt_prev)
      {
	//std::cout<<__LINE__<<" "<<findSecondary()<<std::endl;
	Particle *p = new Particle(Px,Py,Pz,Ep,vx,vy,vz,pid);
	push_bkgnd(p);
      }
      else
      {
	pop_bkgnd();	
	setElectVar();
	evnt_prev=evnt;

	Particle *p = new Particle(Px,Py,Pz,Ep,vx,vy,vz,pid);
	push_bkgnd(p);
      }
      std::cout<<setw(15)<<float(i+1)/Ne*100<<" %"<<"\r";
      std::cout.flush();
    } 
    return 0;
  }
};

void check_dir(const char *outdir)
{
  struct stat sb;
  if (stat(outdir, &sb) != 0)
  {
      system(Form("mkdir %s",outdir));
  }
  
}

int main(int argc, char *argv[])
{
  TBenchmark *bm = new TBenchmark();
  bm->Start("get_eta");
  parseopt(argc,argv);
  TFile * corrfile = new TFile("gammECorr.root","read");
  hcfm = (TH1F*)corrfile->Get("hcfm");
  //char outdir[50];
  //strcpy(outdir,Form("test_eta_%sD_%s",st,tt));

  TChain *t = new TChain();
  if (data_type==1) t->Add("data.root/ntuple_accept");
  else if (data_type==2) t->Add("data.root/ntuple_thrown");
  else 
    t->Add("data.root/ntuple_data");
  
  //  t->Add("/user/o/orsosa/osoto_ana/local/prune_simul.root/ntuple_accept"); //simrec test
  //t->Add("/data/atlas/users/orsosa/eg2_sim_pruned/C/pruned_simul_*.root/ntuple_accept"); //C  sim rec 
  //  t->Add("/data/atlas/users/orsosa/eg2_sim_pruned/C/pruned_simul_*.root/ntuple_thrown"); //C sim gsim 
  //  t->Add("/data/atlas/users/orsosa/eg2_sim_pruned/C_D/pruned*.root/ntuple_accept"); //C D sim rec
  //  t->Add("/data/atlas/users/orsosa/eg2_sim_pruned/C_D/pruned*.root/ntuple_thrown"); //C D sim rec

  //  t->Add("/data/atlas/users/orsosa/eg2_data_pruned/C-thickD2/pruned*.root/ntuple_data"); //data C and D
  //t->Add("/data/atlas/users/orsosa/eg2_data_pruned/Pb-thinD2/pruned*.root/ntuple_data"); //data Pb and D
  //t->Add("/data/atlas/users/orsosa/eg2_data_pruned/Fe-thickD2/pruned*.root/ntuple_data"); //data Fe and D


  //check_dir(outdir);


  t->SetBranchStatus("*",0);
  t->SetBranchStatus("E",1);
  t->SetBranchStatus("Ee",1);
  t->SetBranchStatus("P",1);
  t->SetBranchStatus("Px",1);
  t->SetBranchStatus("Py",1);
  t->SetBranchStatus("Pz",1);
  t->SetBranchStatus("evnt",1);
  t->SetBranchStatus("Zec",1);
  t->SetBranchStatus("Yec",1);
  t->SetBranchStatus("Xec",1);
  t->SetBranchStatus("TEc",1);
  t->SetBranchStatus("Q2",1);
  t->SetBranchStatus("Nu",1);
  t->SetBranchStatus("W",1);
  t->SetBranchStatus("Pex",1);
  t->SetBranchStatus("Pey",1);
  t->SetBranchStatus("Pez",1);
  t->SetBranchStatus("pid",1);
  t->SetBranchStatus("vxh",1);
  t->SetBranchStatus("vyh",1);
  t->SetBranchStatus("vzh",1);


  t->SetBranchAddress("E",&E);
  t->SetBranchAddress("Ee",&Ee);
  t->SetBranchAddress("P",&P);
  t->SetBranchAddress("Px",&Px);
  t->SetBranchAddress("Py",&Py);
  t->SetBranchAddress("Pz",&Pz);
  t->SetBranchAddress("Zec",&Zec);
  t->SetBranchAddress("Yec",&Yec);
  t->SetBranchAddress("Xec",&Xec);
  t->SetBranchAddress("evnt",&evnt);
  t->SetBranchAddress("TEc",&TEc);
  t->SetBranchAddress("Q2",&Q2);
  t->SetBranchAddress("Nu",&Nu);
  t->SetBranchAddress("W",&W);
  t->SetBranchAddress("Pex",&Pex);
  t->SetBranchAddress("Pey",&Pey);
  t->SetBranchAddress("Pez",&Pez);
  t->SetBranchAddress("pid",&pid);
  t->SetBranchAddress("vxh",&vx);
  t->SetBranchAddress("vyh",&vy);
  t->SetBranchAddress("vzh",&vz);

  //  t->SetMaxEntryLoop(1e4);
  //  t->SetAlias("Eh",Form("(pid==22)*E/0.272 + (pid!=22)*(TMath::Sqrt(P**2 + %f**2)",TDatabasePDG::Instance()->GetParticle("pi-")->Mass() ));
  if (Ne==-1)  Ne = t->GetEntries();
  std::cout<<"Number of entries to be processed: "<<Ne<<std::endl;

  
  
  /*
  /// eta -> pi+ pi- a
  Reaction r("eta -> pi+ pi- a","test_pipapimOnly.root",true); 
  r.addPrimary("eta");
  r.addSecondary("pi+");
  r.addSecondary("gamma");
  r.addSecondary("pi-");
  */

  /*    
  // K+ -> pi+ pi+ pi-
  Reaction r("K+ -> pi- pi+ pi+","test_pimpippipOnlyC_sim.root",true);
  r.addPrimary("K+");
  r.addSecondary("pi-");
  r.addSecondary("pi+");
  r.addSecondary("pi+");
  */

  /*
  // K- -> pi- pi- pi+
  Reaction r("K- -> pi- pi- pi+","test_pimpimpip.root");
  r.addPrimary("K-");
  r.addSecondary("pi-");
  r.addSecondary("pi-");
  r.addSecondary("pi+");
  */ 

  /*
  // eta -> pi0 pi0 -> 6a
  Reaction r("eta -> 6a","test_6a.root",true); //exact match of secondary
  r.addPrimary("eta");
  r.addSecondary("gamma");
  r.addSecondary("gamma");
  r.addSecondary("gamma");
  r.addSecondary("gamma");
  r.addSecondary("gamma");
  r.addSecondary("gamma");
  */

  /*  
  // pi0 -> e- e+ a
  Reaction r("pi0 -> e- e+ a","pi0_CD_e-e+a.root",true);
  r.addPrimary("pi0");
  r.addSecondary("e-");
  r.addSecondary("e+");  
  r.addSecondary("gamma");
  */
  /*  

  // pi0 -> a a
  Reaction r("pi0 -> a a","pi0_CD_2aonly_c.root");
  r.addPrimary("pi0");
  r.addSecondary("gamma");
  r.addSecondary("gamma");
  */

  /*
  // pi0 -> a a
  Reaction r("pi0 -> a a","pi0out.root");
  r.addPrimary("pi0");
  r.addSecondary("gamma");
  r.addSecondary("gamma");
  */
  /*
  // K0 -> pi+ pi-
  Reaction r("K0 -> pi+ pi-","k0out.root");
  r.addPrimary("K0");
  r.addSecondary("pi+");
  r.addSecondary("pi-");
*/

  /*
  // w -> pi+ pi- a a
  Reaction r("w -> pi+ pi- a a","wout.root");
  r.addPrimary("omega");
  r.addSecondary("gamma");
  r.addSecondary("gamma");
  r.addSecondary("pi+");
  r.addSecondary("pi-");
  */

  /*  
  //eta -> a a pi+ pi-
  Reaction r("eta -> a a pi+ pi-","etaout.root",true);
  r.addPrimary("eta");
  r.addSecondary("gamma");
  r.addSecondary("gamma");
  r.addSecondary("pi+");
  r.addSecondary("pi-");
  */

 //eta -> 3pi0 -> 6a 
  Reaction r("eta ->  3pi0 -> 6a","etaout6a.root",true);
  r.addPrimary("eta");
  r.addSecondary("gamma");
  r.addSecondary("gamma");
  r.addSecondary("gamma");
  r.addSecondary("gamma");
  r.addSecondary("gamma");
  r.addSecondary("gamma");

  /*  
  //corr -> pi+ pi+ pi-
  Reaction r("K0 -> pi+ pi+ pi-","pip_corr.root",true);
  r.addPrimary("K0");
  r.addSecondary("pi+");
  r.addSecondary("pi+"); 
  r.addSecondary("pi-");
  */



  r.getCombinations(t);
  r.store();
  std::cout<<"\n";
  r.kOutData->Print();
  corrfile->Close();
  bm->Show("get_pi0");
  return 0;  

}
