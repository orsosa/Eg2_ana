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
#include <vector>
#include <sys/stat.h>
#include <cstdarg>
#include <algorithm>
#include <map>
#include <string.h>

TH1F *hW;
TH1F *hW2;
TH1F *hWmb;
TH1F *hW2mb;
TH1F *hT;
TH2F *hEpi0_th;
Float_t kMPi0=1.33196e-1;//Got from sim.
Float_t kSPi0=1.94034e-2;//Got from sim.
//Float_t kMPi0=5.39609e-01;
//Float_t kSPi0=5.98542e-02;

Float_t kPt2,kEvent; 
TNtuple *tuple;
//TNtuple *tuple_sim;
TNtuple *tuplemb;
TNtuple *tuplePi0_gamma, *tupleGamma;
Float_t kEbeam=5.014,E,Ep,P,Px,Py,Pz,evnt,evnt_prev,Zec,Yec,Xec,TEc,Q2,Q2_prev,Nu,Nu_prev,Pex,Pex_prev,Pey,Pey_prev,Pez,Pez_prev,pid;
Long_t Ne;
char st[3]= "C"; // solid target: D C Fe Pb
char tt[3] = "C"; // cut on solid target or Deuterium : (st) or D.
Float_t zBin[6]={0.3, 0.4, 0.5, 0.6, 0.7, 0.8};
Float_t Q2Bin[4]={1.0, 1.33, 1.77, 4.1};
Float_t nuBin[4]={2.2, 3.2, 3.73, 4.25};
Float_t Pt2Bin[7]={0., 0.1, 0.25, 0.4, 0.55, 0.75, 0.9};

Float_t kMprt=0.938272, kMntr =0.939565;

class Particle: public TLorentzVector
{
public:
  Float_t pid,time;
  //TParticlePDG *info;
  Particle() : TLorentzVector(), pid(0), time(0){}
  Particle(Float_t px,Float_t py, Float_t pz, Float_t e, Float_t pid=0, Float_t t=0): TLorentzVector(px,py,pz,e),pid(pid),time(t){}
  Particle(TLorentzVector lv,Float_t pid=0, Float_t t=0): TLorentzVector(lv),pid(pid),time(time){}
  Particle(Particle &p):pid(p.pid),time(p.time) {SetVect(p.Vect()); SetT(p.T());}
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
};

class Combo
{
public:
  std::vector<Particle*> kParticles;
  Particle *kSum;
  int Npart;
  Combo(): kSum(new Particle()), Npart(0){}
  Combo(Combo &c)
  {
    for (int k=0;k<c.Npart;k++)
    {
      addParticle(c.kParticles[k]);
    }
  }
  //  Combo(Particle *&p): {}
  ~Combo()
  {
    clear();
    delete kSum;
  }
  void clear(){ kParticles.clear();}
  int addParticle(Particle *&p)
  {
    Npart++;
    kParticles.push_back(p);
    *kSum +=*p;
    return Npart;
  }
  Particle *getSum(){return kSum;}

  inline Particle* operator [] (const int & i) const
  {
    if (i>=Npart||i<0)
    {
      std::cout << "Index out of bounds" <<std::endl; 
      exit(1);
    }
    return kParticle[i];
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
      r.addParticle(*this[k]);
    }

    return r;
  }

  inline Particle operator += (const Particle & q) 
  {
    SetVect(Vect()+q.Vect());
    SetT(E()+q.T());
    return *this;
  }

};



class Reaction
{
public:
  char name[50];
  char filename[50];
  Particle *kPrimary; //primary
  TParticlePDG *kPdgInfo;
  std::vector<Particle*>::iterator kPIt;
  std::vector<Particle*> *kSecondary; //all secondary
  std::vector<Particle*> *kCombo; //partial combinations.
  std::vector<Particle*> kParticles; // particles in primary candidates.
  std::vector<TH1F*> hSPid;
  TFile *kOutFile;
  Float_t *kData;
  TNtuple *kOutData;
  bool fEMatch;
  
  int kPPid;
  int kNSecondary;
  std::vector<int>::iterator kSIt;
  std::vector<int> kSPid;
  std::map<int,int> kNSPid;
  Reaction(){strcpy(name,"eta -> pi+ pi- a"),strcpy(filename,"test_eta_pippima.root");init();}
  Reaction(char *n,char *fn,bool fEMatch=false): fEMatch(fEMatch) {strcpy(name,n); strcpy(filename,fn); init();}
  int store()
  {
    for (int k=0;k<kSPid.size();k++)
    {
      hSPid[k]->Write("",TObject::kOverwrite);
    }
    return kOutData->Write("",TObject::kOverwrite);
  }
  ~Reaction()
  {
    clear();
    delete[] kSecondary;
    delete[] kCombo;
    delete kOutData;
    delete[] kData;
    kOutFile->Close();
    delete kOutFile;
    delete kPdgInfo;
    hSPid.clear();
    kParticles.clear();
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
    kOutData=new TNtuple("outdata",Form("%s",name),"M:Phx:Phy:Phz:Nu:Q2:Z:Cospq:Pt2:Event");
    kData = new Float_t[kOutData->GetNvar()];
  }

  int fill()
  {
    Float_t cospq = ((kEbeam-Pez_prev)*kPrimary->Pz() -Pex_prev*kPrimary->Px() - Pey_prev*kPrimary->Py())/( sqrt((Q2_prev + Nu_prev*Nu_prev)*kPrimary->P2()) );
    Float_t Pt2 = kPrimary->P2()*(1-cospq*cospq);

    kData[0] = kPrimary->M();
    kData[1] = kPrimary->Px();
    kData[2] = kPrimary->Py();
    kData[3] = kPrimary->Pz();
    kData[4] = Nu_prev;
    kData[5] = Q2_prev;
    kData[6] = kPrimary->E()/Nu_prev;
    kData[7] = cospq;
    kData[8] = Pt2;
    kData[9] = evnt_prev;

    kOutData->Fill(kData);
  }
  //////////////////////////

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

  int addSecondary(char *name)
  {
    int pid  = TDatabasePDG::Instance()->GetParticle(name)->PdgCode();
    pushSecondary(pid);
    return pid;
  }


  int addPrimary(int pid){kPdgInfo = TDatabasePDG::Instance()->GetParticle(pid); kPPid=kPdgInfo->PdgCode(); return kPPid;}
  int addPrimary(char *name){kPdgInfo = TDatabasePDG::Instance()->GetParticle(name); kPPid=kPdgInfo->PdgCode(); return kPPid;}


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
    for (int k;k<kSPid.size();k++)
    {
      if (fEMatch)
	minPart=minPart && (kSecondary[k].size() == kNSPid[kSPid[k]]);
      else
	minPart=minPart && (kSecondary[k].size() >= kNSPid[kSPid[k]]);

      hSPid[k]->Fill(kSecondary[k].size());
    }
    return minPart;
  }
  void setElectVar()
  {
    Nu_prev=Nu;
    Q2_prev=Q2;
    Pex_prev=Pex;
    Pey_prev=Pey;
    Pez_prev=Pez;
  }

  int takeN(int N,int kspid, int pos=0,Particle p=Particle(),int count=0)
  {
    if (N<1) return -1;
    if (N!=1)
    {
      for (int k =pos;k<kSecondary[kspid].size()-N+1;k++)
      {
	//kParticles.push_back(new Particle(*kSecondary[kspid][k]));
	count=takeN(N-1,kspid,pos+1,p+*kSecondary[kspid][pos],count);
      }
    }

    else
    {
      for (int k=pos;k<kSecondary[kspid].size();k++)
      {
	kCombo[kspid].push_back(new Particle( p+*kSecondary[kspid][k]));
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
	kSecondary[k].push_back(new Particle(Px,Py,Pz,Ep));
	count++;
      }
    }
    return count;
  }

  int getCombinations(TChain *t)
  {
    kSecondary=new std::vector<Particle*> [kSPid.size()];
    kCombo = new std::vector<Particle*> [kSPid.size()];

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
	findSecondary();
      }
      else
      {
	if (checkMinPart())
	{
	  int Npart = 1;
	  for (int k =0;k<kSPid.size();k++)
	  {
	    takeN(kNSPid[kSPid[k]],k);
	    Npart*=kCombo[k].size();
	  }

	  for(int k=0;k<Npart;k++)
	  {
	    kPrimary = new Particle();
	    int div=1;
	    for (int l =0;l<kSPid.size();l++)
	    {
	      int size = kCombo[l].size();
	      *kPrimary+=*kCombo[l][ (k/div)%size ];
	      div*=size;
	    }

  	    fill();
	    delete kPrimary;
	  }
	}
	
	clear();
	setElectVar();
	evnt_prev=evnt;
	findSecondary();

      }
      std::cout<<setw(15)<<float(i+1)/Ne*100<<" %"<<"\r";
      std::cout.flush();
    } 
    return 0;
  }
};

void check_dir(char *outdir)
{
  struct stat sb;
  if (stat(outdir, &sb) != 0)
  {
      system(Form("mkdir %s",outdir));
  }
  
}

int main(int argc, char *argv[]){
  TBenchmark *bm = new TBenchmark();
  bm->Start("get_eta");
  char outdir[50];
  strcpy(outdir,Form("test_eta_%sD_%s",st,tt));
  TChain *t = new TChain();
  //  t->Add("/user/o/orsosa/osoto_ana/local/prune_simul.root/ntuple_accept");
  //  t->Add("/data/atlas/users/orsosa/eg2_sim_pruned/Fe/pruned_simul_*.root/ntuple_accept");
  t->Add("/data/atlas/users/orsosa/eg2_data_pruned/C-thickD2/pruned*.root/ntuple_data");
  //check_dir(outdir);


  /*TFile * f  = new TFile(Form("%s/pi0_eta_sim_%sD_%s.root",outdir,st,tt), "recreate");


  TCanvas *c  = new TCanvas("c", "The canvas",800,600);
  std::vector<Gamma> VL;
  std::vector<Gamma> VLmb;
  TChain *t = new TChain();
  
  Long_t Ne = (Long_t)t->GetEntries();
  std::cout<<"Total Number of entries: "<<Ne<<std::endl;
  hW = new TH1F("hW","Wgam-gam",1000,0,1);
  hW2 = new TH1F("h2"," Wgam-gam",1000,0,1);
  hWmb = new TH1F("hWmb","Wgam-gam",1000,0,1);
  hW2mb = new TH1F("h2mb","Wgam-gam",1000,0,1);
  hT = new TH1F("hT","Time difference",1000,-3,3);
  hEpi0_th = new TH2F("hEpi0_th","Angle vs E#pi_{0}",700,0,5,700,0,50);
  tuple = new TNtuple("tuple","tuple","M:Phx:Phy:Phz:Nu:Q2:Z:Cospq:Pt2:Tdiff:angle:Event");
  //  tuple_sim = new TNtuple("tuple_sim","tuple","M:Phx:Phy:Phz:Nu:Q2:Z:Pt2::angle:Event");
  tuplemb = new TNtuple("tuplemb","tuple","M:Phx:Phy:Phz:Nu:Q2:Eh:Cospq:Pt2:Tdiff:Event");
  tuplePi0_gamma = new TNtuple("tuplePi0_gamma","tuple for gamma from pi0 with bining information","Px:Py:Pz:Pex:Pey:Pez:Nu:Q2:Eh:Pt2:Event:M:angle");
  tupleGamma = new TNtuple ("tgammas","only gammas","Px:Py:Pz:Nu:Q2:E:Event");

  */
  t->SetBranchStatus("*",0);
  t->SetBranchStatus("E",1);
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
  t->SetBranchStatus("Pex",1);
  t->SetBranchStatus("Pey",1);
  t->SetBranchStatus("Pez",1);
  t->SetBranchStatus("pid",1);


  t->SetBranchAddress("E",&E);
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
  t->SetBranchAddress("Pex",&Pex);
  t->SetBranchAddress("Pey",&Pey);
  t->SetBranchAddress("Pez",&Pez);
  t->SetBranchAddress("pid",&pid);
  //  t->SetMaxEntryLoop(1e4);
  //  t->SetAlias("Eh",Form("(pid==22)*E/0.272 + (pid!=22)*(TMath::Sqrt(P**2 + %f**2)",TDatabasePDG::Instance()->GetParticle("pi-")->Mass() ));
  if (argc ==2) Ne = atoi(argv[1]);
  else Ne = t->GetEntries();
  std::cout<<"Number of entries to be processed: "<<Ne<<std::endl;

  
  /// eta -> pi+ pi- a
  Reaction r("eta -> pi+ pi- a","test_pippimaOnly.root",true); 
  r.addPrimary("eta");
  r.addSecondary("pi+");
  r.addSecondary("pi-");
  r.addSecondary("gamma");
  

  /*
  // K+ -> pi+ pi+ pi-
  Reaction r("K+ -> pi+ pi+ pi-","test_pippippim.root");
  r.addPrimary("K+");
  r.addSecondary("pi+");
  r.addSecondary("pi+");
  r.addSecondary("pi-");
  */

  /*
  // K- -> pi- pi- pi+
  Reaction r("K+ -> pi- pi- pi+","test_pimpimpip.root");
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
  // pi0 -> a a
  Reaction r("pi0 -> a a","test_aa.root");
  r.addPrimary("pi0");
  r.addSecondary("gamma");
  r.addSecondary("gamma");
  */

  /*
  // K0 -> pi+ pi-
  Reaction r("K0 -> pi+ pi-","test_pippim.root");
  r.addPrimary("K0");
  r.addSecondary("pi+");
  r.addSecondary("pi-");
  */


  r.getCombinations(t);
  r.store();
  r.kOutData->Print();
  bm->Show("get_pi0");
  return 0;  

}
