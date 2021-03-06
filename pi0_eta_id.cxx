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
#include <vector>
#include <sys/stat.h>
TH1F *hW;
TH1F *hW2;
TH1F *hWmb;
TH1F *hW2mb;
TH1F *hT;
TH2F *hEpi0_th;
TNtuple *tuple;
TNtuple *tuplemb;
Float_t kNu,kQ2,kPex,kPey,kPez,kEbeam=5.014;
char st[3]= "Fe"; // solid target: D C Fe Pb
char tt[3] = "Fe"; // cut on solid target or Deuterium : (st) or D.

Float_t kMprt=0.938272, kMntr =0.939565;

// Binary operation used by combine()
template <typename T> T bop(T a,T b)
{
  return a + b;
}
// Function to get combinations
template <typename T> int combine(std::vector<T> v,int st, int n,T s=T(), int lev =0,bool debug=false, bool mb=false)
{
  if (n==1 && !mb)
  {
    for (int i= st; i < v.size(); i++)
    {
      T sum = bop(s,v[i]);
      float angle = TMath::ACos(( s.Px()*v[i].Px() + s.Py()*v[i].Py() +s.Pz()*v[i].Pz() )/( s.E()*v[i].E() ))*TMath::RadToDeg();
      
      if (sum.M2() > 0 && sum.P2()>0 && 4.5<angle&&angle<48.4) 
      {
        hT->Fill(sum.time);
        if (true
            //&&-2 <sum.time&&sum.time<2
            )
        {
          
          Float_t cospq = ((kEbeam-kPez)*sum.Pz() -kPex*sum.Px() - kPey*sum.Py())/( sqrt((kQ2 + kNu*kNu)*sum.P2()) );
          Float_t Pt2 = sum.P2()*(1-cospq*cospq);
          tuple->Fill(sum.M(),sum.Px(),sum.Py(),sum.Pz(),kNu,kQ2,sum.E(),cospq,Pt2,sum.time);
	        hEpi0_th->Fill(sum.E(),angle);
	        hW -> Fill(sum.M());
	        hW2 -> Fill(sum.M2());
        }
      }
    }
  }
  else if (n==1 && mb)
  {
    for (int i= st; i < v.size(); i++)
    {
      T sum = bop(s,v[i]);
      if (sum.M2() > 0 && sum.P2()>0 ) 
      {
        Float_t cospq = ((kEbeam-kPez)*sum.Pz() -kPex*sum.Px() - kPey*sum.Py())/( sqrt((kQ2 + kNu*kNu)*sum.P2()) );
        Float_t Pt2 = sum.P2()*(1-cospq*cospq);
        hWmb -> Fill(sum.M());
        hW2mb -> Fill(sum.M2());
        tuplemb->Fill(sum.M(),sum.Px(),sum.Py(),sum.Pz(),kNu,kQ2,sum.E(),cospq,Pt2,sum.time);
      }
    }
  }
  else
  {
    for (int k = st; k < v.size() - n + 1; k++)
    {
      combine(v,k+1,n-1,bop(v[k],s),lev+1,debug,mb);
    }
  }

  return 0;
}
////////////////////////////////////
class Gamma
{
public:
TLorentzVector P;
Float_t time;
Gamma() : P(), time(0){}
Gamma(TLorentzVector lv, Float_t t): P(lv),time(t){}
Float_t Px(){return P.Px();}
Float_t Py(){return P.Py();}
Float_t Pz(){return P.Pz();}
Float_t E(){return P.E();}
Float_t M2(){return P.M2();}
Float_t M(){return P.M();}
Float_t P2(){return P.Px()*P.Px() + P.Py()*P.Py() + P.Pz()*P.Pz();}
Gamma & operator+ (const Gamma &gr)
{
    Gamma g;
    g.P=P+gr.P;
    g.time =time - gr.time;
    return g;
}

};


int main(int argc, char *argv[]){
  TBenchmark *bm = new TBenchmark();
  char *outdir = Form("pi0_eta_id_pictures_%sD_%s",st,tt);
  TFile * f  = new TFile(Form("%s/pi0_eta_%sD_%s.root",outdir,st,tt), "recreate");

  struct stat sb;
  if (stat(outdir, &sb) != 0)
  {
      system(Form("mkdir %s",outdir));
  }

  bm->Start("get_pi0");
  TCanvas *c  = new TCanvas("c", "The canvas",800,600);
  std::vector<Gamma> VL;
  std::vector<Gamma> VLmb;
  TChain *t = new TChain();
  t->Add("/data/user/o/orsosa/Iron10e3_prune/*.root/ntuple_data");
  Long_t Ne = (Long_t)t->GetEntries();
  std::cout<<"Total Number of entries: "<<Ne<<std::endl;
  hW = new TH1F("hW","Wgam-gam",1000,0,1);
  hW2 = new TH1F("h2","Wgam-gam",1000,0,1);
  hWmb = new TH1F("hWmb","Wgam-gam",1000,0,1);
  hW2mb = new TH1F("h2mb","Wgam-gam",1000,0,1);
  hT = new TH1F("hT","Time difference",1000,-3,3);
  hEpi0_th = new TH2F("hEpi0_th","Angle vs E#pi_{0}",700,0,5,700,0,50);
  tuple = new TNtuple("tuple","tuple","M:Phx:Phy:Phz:Nu:Q2:Eh:Cospq:Pt2:Tdiff");
  tuplemb = new TNtuple("tuplemb","tuple","M:Phx:Phy:Phz:Nu:Q2:Eh:Cospq:Pt2:Tdiff");
  Float_t E,P,Px,Py,Pz,evnt,evnt_prev,Zec,Yec,Xec,TEc,Q2,Nu,Pex,Pey,Pez;
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
  t->SetMaxEntryLoop(1e4);
  if (argc ==2) Ne = atoi(argv[1]);
  std::cout<<"Number of entries to be processed: "<<Ne<<std::endl;
  t->GetEntry(0);
  evnt_prev=evnt;
  kNu=Nu;
  kQ2=Q2;
  kPex=Pex;
  kPey=Pey;
  kPez=Pez;
  std::cout<<"processing...\n";
  std::cout.fill('.');
  for ( int i = 0; i < Ne; i++)
  {
//    Int_t Ngam=t->Draw("E/0.273:Px:Py:Pz",Form("evnt==%d",i),"goff");
    t->GetEntry(i);

    TLorentzVector gam(Px,Py,Pz,E/0.272);
    Gamma gamma(gam,TEc);
    if (!(-2.2<Yec&&Yec<2.0
        //&&-2.5e-9<Xec&&Xec<2.5e-9
        //&&-0.1<gam.M2()&&gam.M2()<0.1
        &&(((!strcmp(tt,"D"))&&-31.8<Zec&&Zec<-28.40) //D
        ||((!strcmp(tt,"Fe"))&&-25.65<Zec&&Zec<-24.26) //Fe
        ||((!strcmp(tt,"C"))&&-25.33<Zec&&Zec<-24.10) //C
        ||((!strcmp(tt,"Pb"))&&-25.54<Zec&&Zec<-24.36) //Pb
        ) ) ) continue;
    if (evnt == evnt_prev)
    {
      VL.push_back(gamma);
    }
    else
    {
      evnt_prev=evnt;
      int n=2;
      if (VL.size()> 0 
      //&& VL.size()%2 == 0 //Just pair number of particles
      ) combine<Gamma>(VL,0,n);
      VL.clear();
      VL.push_back(gamma);
      VLmb.push_back(gamma);
      if (VLmb.size()==2) // mixed background.
      {
        combine<Gamma>(VLmb,0,n,Gamma(), 0,false, true);
        VLmb.clear();
        VLmb.push_back(gamma);
      }
      kNu=Nu;
      kQ2=Q2;
      kPex=Pex;
      kPey=Pey;
      kPez=Pez;
    }
    
    std::cout<<setw(15)<<float(i+1)/Ne*100<<" %"<<"\r";
    std::cout.flush();
    
  }
  tuple->Write("",TObject::kOverwrite);
  tuplemb->Write("",TObject::kOverwrite);
  std::cout<<"Done!\n";
  std::cout<<"Post Processing ...\n";
  TSpectrum *sp = new TSpectrum(3,1);
  sp->Search(hW,10,"",0.001);

  hW->SetTitle("Invariant Mass");
  hW->GetXaxis()->SetTitle("Mass (GeV)");
  hW->GetYaxis()->SetTitle("dN/dM");
  hW->Draw();

  Float_t xpos,ypos;
  xpos = sp->GetPositionX()[0];
  ypos = sp->GetPositionY()[0];
  TLatex *tx = new TLatex(xpos*1.2,ypos,Form("%.1f MeV",xpos*1000));
  tx->Draw();
  c->SaveAs(Form("%s/inv_Mass.gif",outdir));
  c->SaveAs(Form("%s/inv_Mass.C",outdir));

  hWmb->SetTitle("Invariant Mass mixing background");
  hWmb->GetXaxis()->SetTitle("Mass (GeV)");
  hWmb->GetYaxis()->SetTitle("dN/dM");
  hWmb->Draw();
  c->SaveAs(Form("%s/inv_Massmb.gif",outdir));
  c->SaveAs(Form("%s/inv_Massmb.C",outdir));

  hW2->SetTitle("Invariant Mass^{2}");
  hW2->GetXaxis()->SetTitle("Mass^{2} (GeV^{2})");
  hW2->GetYaxis()->SetTitle("dN/dM");
  hW2->Draw();
  c->SaveAs(Form("%s/inv_Mass2.gif",outdir));
  c->SaveAs(Form("%s/inv_Mass2.C",outdir));

  hT->SetTitle("Time difference");
  hT->GetXaxis()->SetTitle("Time difference (ns)");
  hT->GetYaxis()->SetTitle("dN/dt");
  hT->Draw();
  c->SaveAs(Form("%s/tdiff.gif",outdir));
  c->SaveAs(Form("%s/tdiff.C",outdir));

  hEpi0_th->SetTitle("Aperture angle vs Energy");
  hEpi0_th->GetXaxis()->SetTitle("E_{#gamma_{1}} + E_{#gamma_{2}} (GeV)");
  hEpi0_th->GetYaxis()->SetTitle("Aperture angle (Deg)");
  hEpi0_th->Draw("col");
  c->SaveAs(Form("%s/E_th.gif",outdir));
  c->SaveAs(Form("%s/E_th.C",outdir));

  bm->Show("get_pi0");
  f->Close();
  return 0;
}
