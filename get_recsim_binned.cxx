#include "TSpectrum.h"
#include "Riostream.h"
#include "TApplication.h"
#include "TROOT.h"
#include "TFile.h"
#include "TNtuple.h"
#include "TClasTool.h"
#include "TIdentificator.h"
#include "TMath.h"
#include "Math/WrappedTF1.h"
#include "Math/GSLIntegrator.h"
#include "TBenchmark.h"
#include "TLorentzVector.h"
#include "TCanvas.h"
#include "TH2F.h"
#include "TLatex.h"
#include "TF1.h"
#include "TStyle.h"
#include <vector>
#include <sys/stat.h>
#include <algorithm>
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
TNtuple *tuple1, *tuple2, *tuple1s, *tuple2s, *pt1, *pt2;
TF1 *fmb, *fpeak, *fsig;
ROOT::Math::GSLIntegrator gi;
Float_t kNu,kQ2,kPex,kPey,kPez,kEbeam=5.014;
char st[3]= "Fe"; // solid target: D C Fe Pb
char tt[3] = "Fe"; // cut on solid target or Deuterium : (st) or D.
char **binname;
Float_t **binedges;

#define len(x) sizeof(x)/sizeof(x[0])

#define NZBin 5
#define NQ2Bin 3
#define NNuBin 1
#define NPt2Bin 6

Int_t NFold;
Float_t ZBinEdges[NZBin+1]={0.3, 0.4, 0.5, 0.6, 0.7, 0.8};
//Float_t ZBinEdges[NZBin+1]={1.13, 1.50391, 1.87783, 2.25174, 2.62565, 2.99957};
Float_t Q2BinEdges[NQ2Bin+1]={1.0, 1.33, 1.77, 4.1};
Float_t NuBinEdges[NNuBin+1]={2.2,4.25};
//Float_t NuBinEdges[NNuBin+1]={2.2, 3.2, 3.73, 4.25};
Float_t Pt2BinEdges[NPt2Bin+1]={0., 0.1, 0.25, 0.4, 0.55, 0.75, 0.9};

Float_t kMprt=0.938272, kMntr =0.939565;

inline void reset_array(Float_t *a) 
{
  Float_t def=-10;
  for (int i=0;i<len(a);i++)
  {
    a[i]=def;
  }
}
inline void read_parameters(char *indir)
{
  std::cout<<Form("%s/mb_par1.txt",indir);
  pt1->ReadFile(Form("%s/mb_par1.txt",indir));
  pt2->ReadFile(Form("%s/mb_par2.txt",indir));
}

inline void set_parameters1(TF1 *&f, int binq2,int binnu, int binz)
{

  pt1->Draw("p0:p1:p2:p3:p4",Form("binq2==%d&&binnu==%d&&binz==%d",binq2,binnu,binz),"goffpara");
  for (int i =0;i<2;i++)
  {
    Float_t p=pt1->GetVal(i)[0];
    f->SetParameter(i,p);
  }
}

inline void set_parameters2(TF1 *&f, int binpt2,int binnu, int binz)
{

  pt2->Draw("p0:p1:p2:p3:p4",Form("binpt2==%d&&binnu==%d&&binz==%d",binpt2,binnu,binz),"goffpara");
  for (int i =0;i<2;i++)
  {
    Float_t p=pt2->GetVal(i)[0];
    f->SetParameter(i,p);
  }
}

int main(int argc, char *argv[]){


  TBenchmark *bm = new TBenchmark(); 
  bm->Start("get_pi0");
  TStyle *s= new TStyle();
  s->SetOptFit();
  s->cd();
  char *indir = Form("pi0_eta_id_pictures_sim_2aOnly_%sD_%s",st,tt);
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
  std::string pd=Form("%s/rspic",indir);
  char *picdir=(char *)pd.c_str();
  if (stat(picdir, &sb) != 0)
  {
      system(Form("mkdir %s",picdir));
  }

  TFile * f  = new TFile(infile, "read");
  TFile * f2 = new TFile("local/prune_simul.root","read"); //To get GSIM
  TCanvas *c  = new TCanvas("c", "The canvas",800,600);
  //std::vector<Gamma> VL;
  //std::vector<Gamma> VLmb;
  //TChain *t = new TChain();
  TNtuple *t = (TNtuple *) f->Get("tuple");
  pt1 = new TNtuple("pt1","parameters 1","p0:p1:p2:p3:p4:binq2:binnu:binz");
  pt2 = new TNtuple("pt2","parameters 2","p0:p1:p2:p3:p4:binpt2:binnu:binz");
  read_parameters(indir);
  Float_t minRange = 0.08, maxRange=0.19;
  fmb = new TF1("fmb","pol2",minRange,maxRange);
  fpeak = new TF1("fpeak","gaus",minRange,maxRange);
  fsig = new TF1("fsig","fmb+fpeak",minRange,maxRange);
  fsig->SetLineColor(kRed);
  fpeak->SetLineColor(kBlack);
  fpeak->SetLineStyle(2);
  fmb->SetLineColor(kGreen);
  fmb->SetLineStyle(2);

  TFile *fout = new TFile(Form("%s/pi0_eta_sim_%sD_%s_binned.root",indir,st,tt),"recreate");
  tuple1 = new TNtuple("tuple1","mixing background Pi0 (Q2,Nu,Z)","M:Nu:Q2:Z:Pt2:Event:bin:binq2:binnu:binz");
  tuple2 = new TNtuple("tuple2","mixing background Pi0 (Nu,z,Pt2)","M:Nu:Q2:Z:Pt2:Event:bin:binpt2:binnu:binz");

  tuple1s = new TNtuple("tuple1s","recsim with mb ratio (Q2,Nu,Z)","Nu:Q2:Z:Pt2:amp:bin:binq2:binnu:binz:mbratio");
  tuple2s = new TNtuple("tuple2s","recsim with mb ratio (Nu,z,Pt2)","Nu:Q2:Z:Pt2:amp:bin:binpt2:binnu:binz:mbratio");

  Long_t Ne = (Long_t)t->GetEntries();
  //hW = new TH1F("hW","Wgam-gam",1000,0,1);
  //hW2 = new TH1F("h2"," Wgam-gam",1000,0,1);
  //hWmb = new TH1F("hWmb","Wgam-gam",1000,0,1);
  //hW2mb = new TH1F("h2mb","Wgam-gam",1000,0,1);
  //hT = new TH1F("hT","Time difference",1000,-3,3);
  //hEpi0_th = new TH2F("hEpi0_th","Angle vs E#pi_{0}",700,0,5,700,0,50);

  //binning (Q2,Nu,Z)
  int Nbins = NQ2Bin*NNuBin*NZBin;
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
    
    Double_t *M, *Nu, *Q2, *Z, *Pt2, *Event;

    Int_t size = t->Draw("M:Nu:Q2:Z:Pt2:Event",Form("%f<Q2&&Q2<%f && %f<Nu&&Nu<%f && %f<Z&&Z<%f",Q2l,Q2h,Nul,Nuh,Zl,Zh),"goffcandle");
    M=t->GetVal(0);
    Nu=t->GetVal(1);
    Q2=t->GetVal(2);
    Z=t->GetVal(3);
    Pt2=t->GetVal(4);
    Event=t->GetVal(5);
    for (int i=0;i<size;i++)
    {
      tuple1->Fill(M[i],Nu[i],Q2[i],Z[i],Pt2[i],Event[i],k,binq2,binnu,binz);
    }
  }
  
  //  TF1 *fmb = new TF1("fmb","pol2",0.0,0.2);
  TH1F *hM = new TH1F("hM","h",75,0.08,0.19);
  hM->SetMarkerStyle(kOpenCircle);
  hM->SetMarkerColor(kBlue);
  hM->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
  hM->GetYaxis()->SetTitle("dN/dM (GeV)");
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
    
    Double_t Nu, Q2, Z, Pt2;

    Nu = (Nul + Nuh)/2;
    Q2 = (Q2l + Q2h)/2;    
    Z = (Zl + Zh)/2;

    hM->SetTitle(Form("Mass, bin (q2,nu,z) = (%d,%d,%d)",binq2,binnu,binz));
    Int_t size = tuple1->Draw("M>>hM",Form("binq2==%d&&binnu==%d&&binz==%d",binq2,binnu,binz),"goff");
    ///////////////////// Fitting.
    set_parameters1(fmb,binq2,binnu,binz);
    fsig->SetParameter(0,fmb->GetParameter(0));
    fsig->SetParameter(1,fmb->GetParameter(1));
    fsig->SetParameter(2,fmb->GetParameter(2));
    fsig->SetParameter(3,hM->GetMaximum()*0.8);
    fsig->SetParameter(4,kMPi0);
    fsig->SetParameter(5,kSPi0);
    fsig->SetParLimits(2,-10000,0);
    fsig->SetParLimits(5,kSPi0*0.8,kSPi0*1.2);

    hM->Fit("fsig","+QB");
    Float_t totI = fsig->Integral(minRange,maxRange);
    fmb->SetParameter(0,fsig->GetParameter(0));
    fmb->SetParameter(1,fsig->GetParameter(1)); 
    fmb->SetParameter(2,fsig->GetParameter(2));
    fpeak->SetParameter(0,fsig->GetParameter(3));
    fpeak->SetParameter(1,fsig->GetParameter(4));
    fpeak->SetParameter(2,fsig->GetParameter(5));
    Float_t pI = fpeak->Integral(minRange,maxRange);
    //ROOT::Math::WrappedTF1 wf(fpeak);
    //pI = gi->Integral(wf,minRange,maxRange);
    hM->SetTitle(Form("Mass, bin (q2,nu,z) = (%d,%d,%d), tot: %f,partial: %f",binq2,binnu,binz,totI,pI));
    hM->Draw("e");
    fmb->Draw("same");
    fpeak->Draw("same");

    hM->Write(Form("/hM1_%d",k),TObject::kOverwrite);
    //////////////////////////////
    c->SaveAs(Form("%s/hM1_%d.gif",picdir,k));
    c->SaveAs(Form("%s/hM1_%d.C",picdir,k));
    //mbf1<<fmb->GetParameter(0)<<"\t"<<fmb->GetParameter(1)<<"\t"<<fmb->GetParameter(2)<<"\t"<<fmb->GetParameter(3)<<"\t"<<fmb->GetParameter(4);
    //    mbf1<<fmb->GetParameter(0)<<"\t"<<fmb->GetParameter(1)<<"\t"<<fmb->GetParameter(2)<<binq2<<binnu<<binz;
    Pt2 = 0;
    tuple1s->Fill(Nu,Q2,Z,Pt2,size,k,binq2,binnu,binz,pI/totI);
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

    Double_t *M, *Nu, *Q2, *Z, *Pt2, *Event;
    
    Int_t size = t->Draw("M:Nu:Q2:Z:Pt2:Event",Form("%f<Pt2&&Pt2<%f && %f<Nu&&Nu<%f && %f<Z&&Z<%f",Pt2l,Pt2h,Nul,Nuh,Zl,Zh),"goffcandle");
    M=t->GetVal(0);
    Nu=t->GetVal(1);
    Q2=t->GetVal(2);
    Z=t->GetVal(3);
    Pt2=t->GetVal(4);
    Event=t->GetVal(5);
    for (int i=0;i<size;i++)
    {
      tuple2->Fill(M[i],Nu[i],Q2[i],Z[i],Pt2[i],Event[i],k,binpt2,binnu,binz);
    }
  }

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

    Double_t Nu, Q2, Z, Pt2, Event;
    
    Pt2 = (Pt2h + Pt2l)/2;
    Nu =  (Nuh + Nul)/2;
    Z = (Zl + Zh)/2;


    hM->SetTitle(Form("Mass bin (pt2,nu,z) = (%d,%d,%d)",binpt2,binnu,binz));
    Int_t size = tuple2->Draw("M>>hM",Form("binpt2==%d&&binnu==%d&&binz==%d",binpt2,binnu,binz));

    ///////////////////// Fitting.
    set_parameters2(fmb,binpt2,binnu,binz);
    fsig->SetParameter(0,fmb->GetParameter(0));
    fsig->SetParameter(1,fmb->GetParameter(1));
    fsig->SetParameter(2,fmb->GetParameter(2));
    fsig->SetParameter(3,hM->GetMaximum()*0.8);
    fsig->SetParameter(4,kMPi0);
    fsig->SetParameter(5,kSPi0);
    fsig->SetParLimits(2,-10000,0);
    fsig->SetParLimits(5,kSPi0*0.8,kSPi0*1.2);
    hM->Draw("e");
    hM->Fit("fsig","+QB");
    Float_t totI = fsig->Integral(minRange,maxRange);
    hM->Write(Form("/hM2_%d",k),TObject::kOverwrite);
    fmb->SetParameter(0,fsig->GetParameter(0));
    fmb->SetParameter(1,fsig->GetParameter(1)); 
    fmb->SetParameter(2,fsig->GetParameter(2));
    fpeak->SetParameter(0,fsig->GetParameter(3));
    fpeak->SetParameter(1,fsig->GetParameter(4));
    fpeak->SetParameter(2,fsig->GetParameter(5));
    Float_t pI = fpeak->Integral(minRange,maxRange);

    fmb->Draw("same");
    fpeak->Draw("same");

    //////////////////////////////

    c->SaveAs(Form("%s/hM2_%d.gif",picdir,k));
    c->SaveAs(Form("%s/hM2_%d.C",picdir,k));
    //mbf2<<fmb->GetParameter(0)<<"\t"<<fmb->GetParameter(1)<<"\t"<<fmb->GetParameter(2)<<"\t"<<fmb->GetParameter(3)<<"\t"<<fmb->GetParameter(4);
    //mbf2<<fmb->GetParameter(0)<<"\t"<<fmb->GetParameter(1)<<"\t"<<fmb->GetParameter(2);
    Q2=0;
    tuple2s->Fill(Nu,Q2,Z,Pt2,size,k,binpt2,binnu,binz,pI/totI);
  }
  


  tuple1->Write("",TObject::kOverwrite);
  tuple2->Write("",TObject::kOverwrite);
  tuple1s -> Write("",TObject::kOverwrite);
  tuple2s -> Write("",TObject::kOverwrite);

  f->Close();
  fout->Close();  
  bm->Show("get_pi0");
}

