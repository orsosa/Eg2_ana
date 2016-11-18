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
Int_t *NEdges;
Char_t **BinName=NULL;
Float_t **BinEdges=NULL;

#define len(x) sizeof(x)/sizeof(x[0])

#define NZBin 5
#define NQ2Bin 3
#define NNuBin 1
#define NPt2Bin 6

Int_t NFold=0;
Float_t ZBinEdges[NZBin+1]={0.3, 0.4, 0.5, 0.6, 0.7, 0.8};
Float_t Q2BinEdges[NQ2Bin+1]={1.0, 1.33, 1.77, 4.1};
Float_t NuBinEdges[NNuBin+1]={2.2,4.25};
//Float_t NuBinEdges[NNuBin+1]={2.2, 3.2, 3.73, 4.25};
Float_t Pt2BinEdges[NPt2Bin+1]={0., 0.1, 0.25, 0.4, 0.55, 0.75, 0.9};

Float_t kMprt=0.938272, kMntr =0.939565;

#include "tools.hxx"

int main(int argc, char *argv[]){

  get_bin_info();
  TBenchmark *bm = new TBenchmark(); 
  bm->Start("get_pi0");
  TStyle *s= new TStyle();
  s->SetOptFit();
  s->cd();
  char *indir = Form("pi0_eta_id_pictures_sim_%sD_%s_MOD",st,tt);
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

  //trees not binned
  tuple1 = new TNtuple("tuple1","recsim background Pi0 (Q2,Nu,Z)","M:Nu:Q2:Z:Pt2:Event:bin:binq2:binnu:binz");
  tuple2 = new TNtuple("tuple2","recsim background Pi0 (Nu,z,Pt2)","M:Nu:Q2:Z:Pt2:Event:bin:binpt2:binnu:binz");

  //binned tree
  TString branch;
  TString BinSchema;
  branch.Append(BinName[0]);
  BinSchema.Append("(");
  BinSchema.Append(BinName[0]);
  int Nbins =1;
  for (int kf=1;kf<NFold;kf++)
  {
    branch.Append(":");
    branch.Append(BinName[kf]);
    branch.Append(":");
    branch.Append( Form( "Bin%s",BinName[kf].Data() ) );
    BinSchema.Append(",");
    BinSchema.Append(BinName[kf]);
    Nbins*=NEdges[kf]-1;
  }
  
  branch.Append("amp:bin:mbratio");
  BinSchema.Append(")");
    
  tuple1s = new TNtuple("tuple1s",Form("recsim with mb ratio %s",BinSchema.Data()),branch.Data() );
  //  tuple2s = new TNtuple("tuple2s","recsim with mb ratio (Nu,z,Pt2)","Nu:Q2:Z:Pt2:amp:bin:binpt2:binnu:binz:mbratio");

  Long_t Ne = (Long_t)t->GetEntries();
  t->SetAlias("Phie",Form("TMath::RadToDeg()*((%sx>0)*(TMath::ATan(%sy/%sx)) + (%sx<=0)*(TMath::ATan(%sy/%sx)+TMath::Pi()))","Pe","Pe","Pe","Pe","Pe","Pe"));
  t->SetAlias("Phig",Form("TMath::RadToDeg()*((%sx>0)*(TMath::ATan(%sy/%sx)) + (%sx<=0)*(TMath::ATan(%sy/%sx)+TMath::Pi()))","P","P","P","P","P","P"));
  t->SetAlias("Sectore",Form("(Phi%s>-30)*(int((Phi%s+90)/60) - 1) + (Phi%s<=-30)*(5)","e","e","e"));
  t->SetAlias("Sectorg",Form("(Phi%s>-30)*(int((Phi%s+90)/60) - 1) + (Phi%s<=-30)*(5)","g","g","g"));
  t->SetAlias("Eg","TMath::Sqrt(Px*Px+Py*Py+Pz*Pz)");
  
  Int_t *bin = new Int_t[NFold];
  Float_t lowE =0;
  Float_t highE =0;
  TCut cut="kTRUE";
  TCut cc="kTRUE";
  

  for (int k = 0;k <Nbins; k++)
  {
    for (int kf = 0;kf <NFold; kf++)
    {
      bin[kf]=k;
      for  (int kkf = kf+1;kkf <NFold; kkf++)
      {
	bin[kf]/=NEdges[kkf]-1;
      }
      bin[kf]%=NEdges[kf]-1;
      lowE=BinEdges[kf][bin[kf]];
      highE=BinEdges[kf][bin[kf]];
      cc = Form("%f<%s&&%s<%f",lowE,BinName[kf],BinName[kf],highE);
      cut=cc&&cut;
    }
    /*    binq2 = (k/NNuBin/NZBin)%NQ2Bin;
    binnu = (k/NZBin)%NNuBin;
    binz = k%NZBin;

    Float_t Q2l=Q2BinEdges[(k/NNuBin/NZBin)%NQ2Bin];
    Float_t Q2h=Q2BinEdges[(k/NNuBin/NZBin)%NQ2Bin+1];

    Float_t Nul=NuBinEdges[(k/NZBin)%NNuBin];
    Float_t Nuh=NuBinEdges[(k/NZBin)%NNuBin+1];

    Float_t Zl=ZBinEdges[k%NZBin];
    Float_t Zh=ZBinEdges[k%NZBin+1];
    */
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

  tuple1->Write("",TObject::kOverwrite);
  tuple2->Write("",TObject::kOverwrite);
  tuple1s -> Write("",TObject::kOverwrite);
  tuple2s -> Write("",TObject::kOverwrite);

  f->Close();
  fout->Close();  
  bm->Show("get_pi0");
}

