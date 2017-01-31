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
#include "TF1.h"
#include "TStyle.h"
#include <vector>
#include <sys/stat.h>
TH1F *hW;
TH1F *hW2;
TH1F *hWmb;
TH1F *hW2mb;
TH1F *hT;
TH2F *hEpi0_th;
//Float_t kMPi0=0.135;//Got from sim.
//Float_t kSPi0=0.00066297;//Got from sim.

//Float_t kMPi0=1.33196e-1;//Got from sim.
//Float_t kSPi0=1.94034e-2;//Got from sim.
Float_t kMPi0=5.39609e-01;
Float_t kSPi0=5.98542e-02;

Float_t kPt2,kEvent; 
TNtuple *tuple1,*tuple2;
TNtuple *tuplemb;
TNtuple *tuplePi0_gamma;
Float_t kNu,kQ2,kPex,kPey,kPez,kEbeam=5.014;
char st[3]= "Fe"; // solid target: D C Fe Pb
char tt[3] = "Fe"; // cut on solid target or Deuterium : (st) or D.
#define NZBin 5
#define NQ2Bin 3
#define NNuBin 1
#define NPt2Bin 6


Float_t ZBinEdges[NZBin+1]={0.3, 0.4, 0.5, 0.6, 0.7, 0.8};
//Float_t EhBinEdges[NZBin+1]={1.13, 1.50391, 1.87783, 2.25174, 2.62565, 2.99957};
Float_t Q2BinEdges[NQ2Bin+1]={1.0, 1.33, 1.77, 4.1};
Float_t NuBinEdges[NNuBin+1]={2.2,4.25};
//Float_t NuBinEdges[NNuBin+1]={2.2, 3.2, 3.73, 4.25};
Float_t Pt2BinEdges[NPt2Bin+1]={0., 0.1, 0.25, 0.4, 0.55, 0.75, 0.9};

Float_t kMprt=0.938272, kMntr =0.939565;

int main(int argc, char *argv[]){


  TBenchmark *bm = new TBenchmark(); 
  bm->Start("get_pi0");
  char *indir = Form("eta_id_pictures_gsim_2aOnly_%sD_%s",st,tt);

  struct stat sb;
  if (stat(indir, &sb) != 0)
  {
    std::cout<<Form("Error: directory %s doesn't exist!\n",indir);
    exit(1);
  }
  char *infile = Form("%s/pi0_eta_sim_%sD_%s.root",indir,st,tt);
  if (stat(infile, &sb) != 0)
  {
    std::cout<<Form("Error: file %s doesn't exist!\n",infile);
    exit(1);
  }
  std::string pd=Form("%s/mbpic",indir);
  char *picdir=(char *)pd.c_str();
  //const char *picdir=Form("%s/mbpic",indir);
  if (stat(picdir, &sb) != 0)
  {
      system(Form("mkdir %s",picdir));
  }

  std::ofstream mbf1(Form("%s/mb_par1.txt",indir));
  std::ofstream mbf2(Form("%s/mb_par2.txt",indir));

  mbf1<<"#p0\tp1\tp2\tp3\tp4\tbinq2\tbinnu\tbinz\n";
  mbf2<<"#p0\tp1\tp2\tp3\tp4\tbinpt2\tbinnu\tbinz\n";


  TFile * f  = new TFile(infile, "read");
  TCanvas *c  = new TCanvas("c", "The canvas",800,600);
  //std::vector<Gamma> VL;
  //std::vector<Gamma> VLmb;
  //TChain *t = new TChain();
  TNtuple *t = (TNtuple *) f->Get("tuplePi0_gamma");
  TFile *fout = new TFile(Form("%s/pi0_eta_sim_%sD_%s_MB.root",indir,st,tt),"recreate");
  tuple1 = new TNtuple("tuple1","mixing background Pi0 (Q2,Nu,Z)","M:Nu:Q2:Z:Pt2:bin:binq2:binnu:binz");
  tuple2 = new TNtuple("tuple2","mixing background Pi0 (Nu,z,Pt2)","M:Nu:Q2:Z:Pt2:bin:binpt2:binnu:binz");

  Long_t Ne = (Long_t)t->GetEntries();
  //hW = new TH1F("hW","Wgam-gam",1000,0,1);
  //hW2 = new TH1F("h2"," Wgam-gam",1000,0,1);
  //hWmb = new TH1F("hWmb","Wgam-gam",1000,0,1);
  //hW2mb = new TH1F("h2mb","Wgam-gam",1000,0,1);
  //hT = new TH1F("hT","Time difference",1000,-3,3);
  //hEpi0_th = new TH2F("hEpi0_th","Angle vs E#pi_{0}",700,0,5,700,0,50);

  //binning (Q2,Nu,Z)
  int Nbins = NQ2Bin*NNuBin*NZBin;
  t->SetAlias("Z","Eh/Nu");
  t->SetAlias("Phie",Form("TMath::RadToDeg()*((%sx>0)*(TMath::ATan(%sy/%sx)) + (%sx<=0)*(TMath::ATan(%sy/%sx)+TMath::Pi()))","Pe","Pe","Pe","Pe","Pe","Pe"));
  t->SetAlias("Phig",Form("TMath::RadToDeg()*((%sx>0)*(TMath::ATan(%sy/%sx)) + (%sx<=0)*(TMath::ATan(%sy/%sx)+TMath::Pi()))","P","P","P","P","P","P"));
  t->SetAlias("Sectore",Form("(Phi%s>-30)*(int((Phi%s+90)/60) - 1) + (Phi%s<=-30)*(5)","e","e","e"));
  t->SetAlias("Sectorg",Form("(Phi%s>-30)*(int((Phi%s+90)/60) - 1) + (Phi%s<=-30)*(5)","g","g","g"));
  t->SetAlias("Eg","TMath::Sqrt(Px*Px+Py*Py+Pz*Pz)");
  
  Int_t binq2,binnu,binz,binpt2;  
  for (int k = 0;k <Nbins; k++)
  {
    binq2 = (k/NNuBin/NZBin)%NQ2Bin;
    binnu = (k/NZBin)%NNuBin;
    binz = k%NZBin;
    Float_t Q2l=Q2BinEdges[(k/NNuBin/NZBin)%NQ2Bin];
    Float_t Q2h=Q2BinEdges[(k/NNuBin/NZBin)%NQ2Bin+1];

    Float_t Nul=NuBinEdges[(k/NZBin)%NNuBin];
    Float_t Nuh=NuBinEdges[(k/NZBin)%NNuBin+1];

    Float_t Zl=ZBinEdges[k%NZBin];
    Float_t Zh=ZBinEdges[k%NZBin+1];
    
    Double_t *Phie, *Phig, *Sectorg, *Sectore, *Nu, *Q2, *Eh, *Pt2, *Z, *Eg, *Event, *Pex, *Pey, *Pez, *Px, *Py, *Pz;

    Int_t size = t->Draw("Phie:Phig:Sectorg:Sectore:Nu:Q2:Eh:Pt2:Z:Eg:Event:Pex:Pey:Pez:Px:Py:Pz",Form("%f<Q2&&Q2<%f && %f<Nu&&Nu<%f && %f<Z&&Z<%f",Q2l,Q2h,Nul,Nuh,Zl,Zh),"goffcandle");
    Phie=t->GetVal(0);
    Phig= t->GetVal(1); 
    Sectorg=t->GetVal(2);
    Sectore=t->GetVal(3);
    Nu=t->GetVal(4);
    Q2=t->GetVal(5);
    Eh=t->GetVal(6);
    Pt2=t->GetVal(7);
    Z=t->GetVal(8);
    //Z=t->GetVal(6);
    Eg=t->GetVal(9);
    Event=t->GetVal(10);

    Pex=t->GetVal(11);
    Pey=t->GetVal(12);
    Pez=t->GetVal(13);
    Px=t->GetVal(14);
    Py=t->GetVal(15);
    Pz=t->GetVal(16);

    Int_t *indup=new Int_t[size], *inddown=new Int_t[size];
    TMath::Sort(size,Eg,inddown); //Max to Min
    TMath::Sort(size,Eg,indup,kFALSE);//Min to Max
    for (int i=0;i<size;i++)
    {
      if (Event[indup[i]]!=Event[inddown[i]])
      {
	TLorentzVector Pg1( Px[indup[i]], Py[indup[i]],  Pz[indup[i]], Eg[indup[i]]);
	TLorentzVector Pg2( Px[inddown[i]], Py[inddown[i]],  Pz[inddown[i]], Eg[inddown[i]]);
	Pg2.RotateZ(Phie[indup[i]]-Phie[inddown[i]]);
	Float_t angle = Pg1.Angle(Pg2.Vect())*TMath::RadToDeg();
	TLorentzVector PPi0 = Pg1+Pg2;
	if ( PPi0.M2() > 0 && 4.5<angle&&angle<48.4 && (kMPi0 - 3*kSPi0) <PPi0.M() && PPi0.M()<(kMPi0 + 3*kSPi0)  ) 
	{
	  kPex = Pex[inddown[i]];
	  kPey = Pey[inddown[i]];
	  kPez = Pez[inddown[i]];
	  kQ2 = Q2[inddown[i]];
	  kNu = Nu[inddown[i]];

	  Float_t cospq = ((kEbeam-kPez)*PPi0.Pz() -kPex*PPi0.Px() - kPey*PPi0.Py())/( sqrt((kQ2 + kNu*kNu)*PPi0.P()*PPi0.P()) );
	  Float_t Pt2 = PPi0.P()*PPi0.P()*(1-cospq*cospq);
	  tuple1->Fill(PPi0.M(),kNu,kQ2,PPi0.E()/kNu,Pt2,k,binq2,binnu,binz);

	}
      }


    //std::cout<<"bin "<<i<<" "<<Form("%f<Q2&&Q2<%f && %f<Nu&&Nu<%f && %f<Z&&Z<%f",Q2l,Q2h,Nul,Nuh,Zl,Zh)<<std::endl;
    
    }
  }
  //  TF1 *fmb = new TF1("fmb","pol2",0.0,0.2);
  //TH1F *hM = new TH1F("hM","h",75,0.08,0.19);
  TF1 *fmb = new TF1("fmb","pol2",0.45,0.65);
  TH1F *hM = new TH1F("hM","h",75,0.45,0.65);

  hM->SetMarkerStyle(kOpenCircle);
  hM->SetMarkerColor(kBlue);
  hM->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
  hM->GetYaxis()->SetTitle("dN/dM (GeV)");
  //  hM->SetLineStyle(2);
  
  for (int k = 0;k <Nbins; k++)
  {
    binq2 = (k/NNuBin/NZBin)%NQ2Bin;
    binnu = (k/NZBin)%NNuBin;
    binz = k%NZBin;
    hM->SetTitle(Form("Mass, bin (q2,nu,z) = (%d,%d,%d)",binq2,binnu,binz));
    tuple1->Draw("M>>hM",Form("binq2==%d&&binnu==%d&&binz==%d",binq2,binnu,binz),"goff");
    fmb->SetParameters(0,0,0);
    hM->Draw("e");
    hM->Fit("fmb","Q");
    hM->Write(Form("hM1_%d",k),TObject::kOverwrite);
    c->SaveAs(Form("%s/hM1_%d.gif",picdir,k));
    c->SaveAs(Form("%s/hM1_%d.C",picdir,k));
    //mbf1<<fmb->GetParameter(0)<<"\t"<<fmb->GetParameter(1)<<"\t"<<fmb->GetParameter(2)<<"\t"<<fmb->GetParameter(3)<<"\t"<<fmb->GetParameter(4);
    mbf1<<fmb->GetParameter(0)<<"\t"<<fmb->GetParameter(1)<<"\t"<<fmb->GetParameter(2)<<"\t0\t0"<<"\t"<<binq2<<"\t"<<binnu<<"\t"<<binz<<std::endl;
  }

//binning (Pt2,Nu,Z)
  Nbins = NPt2Bin*NNuBin*NZBin; 

  for (int k = 0;k <Nbins; k++)
  { 
    binpt2 = (k/NNuBin/NZBin)%NPt2Bin;
    binnu = (k/NZBin)%NNuBin;
    binz = k%NZBin;
    Float_t Pt2l=Pt2BinEdges[(k/NNuBin/NZBin)%NPt2Bin];
    Float_t Pt2h=Pt2BinEdges[(k/NNuBin/NZBin)%NPt2Bin+1];

    Float_t Nul=NuBinEdges[(k/NZBin)%NNuBin];
    Float_t Nuh=NuBinEdges[(k/NZBin)%NNuBin+1];

    Float_t Zl=ZBinEdges[k%NZBin];
    Float_t Zh=ZBinEdges[k%NZBin+1];
    
    Double_t *Phie, *Phig, *Sectorg, *Sectore, *Nu, *Q2, *Eh, *Pt2, *Z, *Eg, *Event, *Pex, *Pey, *Pez, *Px, *Py, *Pz;

    Int_t size = t->Draw("Phie:Phig:Sectorg:Sectore:Nu:Q2:Eh:Pt2:Z:Eg:Event:Pex:Pey:Pez:Px:Py:Pz",Form("%f<Pt2&&Pt2<%f && %f<Nu&&Nu<%f && %f<Z&&Z<%f",Pt2l,Pt2h,Nul,Nuh,Zl,Zh),"goffcandle");
    Phie=t->GetVal(0);
    Phig= t->GetVal(1); 
    Sectorg=t->GetVal(2);
    Sectore=t->GetVal(3);
    Nu=t->GetVal(4);
    Q2=t->GetVal(5);
    Eh=t->GetVal(6);
    Pt2=t->GetVal(7);
    Z=t->GetVal(8);
    //Z=t->GetVal(6);
    Eg=t->GetVal(9);
    Event=t->GetVal(10);

    Pex=t->GetVal(11);
    Pey=t->GetVal(12);
    Pez=t->GetVal(13);
    Px=t->GetVal(14);
    Py=t->GetVal(15);
    Pz=t->GetVal(16);

    Int_t *indup=new Int_t[size], *inddown=new Int_t[size];
    TMath::Sort(size,Eg,inddown); //Max to Min
    TMath::Sort(size,Eg,indup,kFALSE);//Min to Max
    for (int i=0;i<size;i++)
    {
      if (Event[indup[i]]!=Event[inddown[i]])
      {
	TLorentzVector Pg1( Px[indup[i]], Py[indup[i]],  Pz[indup[i]], Eg[indup[i]]);
	TLorentzVector Pg2( Px[inddown[i]], Py[inddown[i]],  Pz[inddown[i]], Eg[inddown[i]]);
	Pg2.RotateZ(Phie[indup[i]]-Phie[inddown[i]]);
	Float_t angle = Pg1.Angle(Pg2.Vect())*TMath::RadToDeg();
	TLorentzVector PPi0 = Pg1+Pg2;
	if ( PPi0.M2() > 0 && 4.5<angle&&angle<48.4 && (kMPi0 - 3*kSPi0) <PPi0.M() && PPi0.M()<(kMPi0 + 3*kSPi0)  ) 
	{
	  kPex = Pex[inddown[i]];
	  kPey = Pey[inddown[i]];
	  kPez = Pez[inddown[i]];
	  kQ2 = Q2[inddown[i]];
	  kNu = Nu[inddown[i]];

	  Float_t cospq = ((kEbeam-kPez)*PPi0.Pz() -kPex*PPi0.Px() - kPey*PPi0.Py())/( sqrt((kQ2 + kNu*kNu)*PPi0.P()*PPi0.P()) );
	  Float_t Pt2 = PPi0.P()*PPi0.P()*(1-cospq*cospq);
	  tuple2->Fill(PPi0.M(),kNu,kQ2,PPi0.E()/kNu,Pt2,k,binpt2,binnu,binz);
	}
      }


    //std::cout<<"bin "<<i<<" "<<Form("%f<Q2&&Q2<%f && %f<Nu&&Nu<%f && %f<Z&&Z<%f",Q2l,Q2h,Nul,Nuh,Zl,Zh)<<std::endl;
    
    }
  }

  for (int k = 0;k <Nbins; k++)
  {
    binpt2 = (k/NNuBin/NZBin)%NPt2Bin;
    binnu = (k/NZBin)%NNuBin;
    binz = k%NZBin;
    //hM->SetTitle(Form("Mass bin (pt2,nu,z) = (%d,%d,%d)",binpt2,binnu,binz));
    tuple2->Draw("M>>hM",Form("binpt2==%d&&binnu==%d&&binz==%d",binpt2,binnu,binz),"goff");
    hM->Draw("e");
    fmb->SetParameters(0,0,0);
    hM->Fit("fmb","Q");
    hM->Write(Form("hM2_%d",k),TObject::kOverwrite);
    c->SaveAs(Form("%s/hM2_%d.gif",picdir,k));
    c->SaveAs(Form("%s/hM2_%d.C",picdir,k));
    //mbf2<<fmb->GetParameter(0)<<"\t"<<fmb->GetParameter(1)<<"\t"<<fmb->GetParameter(2)<<"\t"<<fmb->GetParameter(3)<<"\t"<<fmb->GetParameter(4);
    mbf2<<fmb->GetParameter(0)<<"\t"<<fmb->GetParameter(1)<<"\t"<<fmb->GetParameter(2)<<"\t0\t0"<<"\t"<<binpt2<<"\t"<<binnu<<"\t"<<binz<<std::endl;
  }
  mbf1.close();
  mbf2.close();

  //  for (i)
  t->Draw(Form("Sectorg:Event>>h(%d,0,%d,12,-0.5,5.5)",Ne,Ne));
  c->SaveAs("Sectorg_event.gif");
  c->SaveAs("Sectorg_event.C");

  tuple1->Write("",TObject::kOverwrite);
  tuple2->Write("",TObject::kOverwrite);
  f->Close();
  fout->Close();  
  bm->Show("get_pi0");
}

