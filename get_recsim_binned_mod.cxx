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
#include "TCut.h"
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

/*#define NZBin 5
#define NQ2Bin 3
#define NNuBin 1
#define NPt2Bin 6


Float_t ZBinEdges[NZBin+1]={0.3, 0.4, 0.5, 0.6, 0.7, 0.8};
Float_t Q2BinEdges[NQ2Bin+1]={1.0, 1.33, 1.77, 4.1};
Float_t NuBinEdges[NNuBin+1]={2.2,4.25};
//Float_t NuBinEdges[NNuBin+1]={2.2, 3.2, 3.73, 4.25};
Float_t Pt2BinEdges[NPt2Bin+1]={0., 0.1, 0.25, 0.4, 0.55, 0.75, 0.9};
*/
Int_t NFold=0;
Float_t kMprt=0.938272, kMntr =0.939565;

#include "tools.hxx"

int main(int argc, char *argv[]){

  get_bin_info();
  TBenchmark *bm = new TBenchmark(); 
  bm->Start("get_pi0");
  TStyle *s= new TStyle();
  s->SetOptFit();
  s->cd();
  TString indir;
  indir.Append(Form("pi0_eta_id_pictures_sim_%sD_%s_MOD",st,tt));
  
  struct stat sb;
  if (stat(indir.Data(), &sb) != 0)
  {
    std::cout<<Form("Error: directory %s doesn't exist!\n",indir.Data());
    exit(1);
  }
  char *infile = Form("%s/pi0_eta_sim_%sD_%s.root",indir.Data(),st,tt);
  if (stat(infile, &sb) != 0)
  {
    std::cout<<Form("Error: file %s doesn't exist!\n",infile);
    exit(1);
  }
  std::string pd=Form("%s/rspic",indir.Data());
  char *picdir=(char *)pd.c_str();
  if (stat(picdir, &sb) != 0)
  {
      system(Form("mkdir %s",picdir));
  }

  TFile * f  = new TFile(infile, "read");
  TFile * f2 = new TFile("local/prune_simul.root","read"); //To get GSIM
  TCanvas *c  = new TCanvas("c", "The canvas",800,600);
  TNtuple *t = (TNtuple *) f->Get("tuple");
  pt1 = new TNtuple("pt1","parameters 1","p0:p1:p2:p3:p4:binq2:binnu:binz");
  pt2 = new TNtuple("pt2","parameters 2","p0:p1:p2:p3:p4:binpt2:binnu:binz");
  read_parameters(indir.Data());
  Float_t minRange = 0.08, maxRange=0.19;
  fmb = new TF1("fmb","pol2",minRange,maxRange);
  fpeak = new TF1("fpeak","gaus",minRange,maxRange);
  fsig = new TF1("fsig","fmb+fpeak",minRange,maxRange);
  fsig->SetLineColor(kRed);
  fpeak->SetLineColor(kBlack);
  fpeak->SetLineStyle(2);
  fmb->SetLineColor(kGreen);
  fmb->SetLineStyle(2);


  TFile *fout = new TFile(Form("%s/Modpi0_eta_sim_%sD_%s_binned.root",indir.Data(),st,tt),"recreate");

  //trees not binned
  //tuple1 = new TNtuple("tuple1","recsim background Pi0 (Q2,Nu,Z)","M:Nu:Q2:Z:Pt2:Event:bin:binq2:binnu:binz");
  //tuple2 = new TNtuple("tuple2","recsim background Pi0 (Nu,z,Pt2)","M:Nu:Q2:Z:Pt2:Event:bin:binpt2:binnu:binz");

  //binned tree
  TString branch;
  TString BinSchema;
  branch.Append(BinName[0]);
  branch.Append(":");
  branch.Append( Form( "Bin%s",BinName[0]) );
  BinSchema.Append("(");
  BinSchema.Append(BinName[0]);
  int Nbins =NEdges[0]-1;

  for (int kf=1;kf<NFold;kf++)
  {
    branch.Append(":");
    branch.Append(BinName[kf]);
    branch.Append(":");
    branch.Append( Form( "Bin%s",BinName[kf]) );
    BinSchema.Append(",");
    BinSchema.Append(BinName[kf]);
    Nbins*=NEdges[kf]-1;
  }
  branch.Append(":M:bin:Event");
  BinSchema.Append(")");
    
  tuple1 = new TNtuple("tuple1",Form("recsim with mb ratio %s",BinSchema.Data()),branch.Data() );
  Float_t *t1Data = new Float_t[tuple1->GetNvar()];
  //std::cout<<"\nbin schema: "<<BinSchema.Data()<<std::endl;
  //std::cout<<branch.Data()<<std::endl;
  branch.Clear();
  BinSchema.Clear();

  branch.Append(BinName[0]);
  branch.Append(":");
  branch.Append( Form( "Bin%s",BinName[0]) );
  BinSchema.Append("(");
  BinSchema.Append(BinName[0]);
  for (int kf=1;kf<NFold;kf++)
  {
    branch.Append(":");
    branch.Append(BinName[kf]);
    branch.Append(":");
    branch.Append( Form( "Bin%s",BinName[kf]) );
    BinSchema.Append(",");
    BinSchema.Append(BinName[kf]);
  }
  
  branch.Append(":amp:bin:mbratio");
  BinSchema.Append(")");
    
  tuple1s = new TNtuple("tuple1s",Form("recsim with mb ratio %s",BinSchema.Data()),branch.Data() );
  Float_t *t1sData = new Float_t[tuple1s->GetNvar()];
  //  std::cout<<BinSchema.Data()<<std::endl;
  //  tuple2s = new TNtuple("tuple2s","recsim with mb ratio (Nu,z,Pt2)","Nu:Q2:Z:Pt2:amp:bin:binpt2:binnu:binz:mbratio");

  Long_t Ne = (Long_t)t->GetEntries();
  t->SetAlias("Phie",Form("TMath::RadToDeg()*((%sx>0)*(TMath::ATan(%sy/%sx)) + (%sx<=0)*(TMath::ATan(%sy/%sx)+TMath::Pi()))","Pe","Pe","Pe","Pe","Pe","Pe"));
  t->SetAlias("Phig",Form("TMath::RadToDeg()*((%sx>0)*(TMath::ATan(%sy/%sx)) + (%sx<=0)*(TMath::ATan(%sy/%sx)+TMath::Pi()))","P","P","P","P","P","P"));
  t->SetAlias("Sectore",Form("(Phi%s>-30)*(int((Phi%s+90)/60) - 1) + (Phi%s<=-30)*(5)","e","e","e"));
  t->SetAlias("Sectorg",Form("(Phi%s>-30)*(int((Phi%s+90)/60) - 1) + (Phi%s<=-30)*(5)","g","g","g"));
  t->SetAlias("Eg","TMath::Sqrt(Px*Px+Py*Py+Pz*Pz)");
  
  TH1F *hM ;
  TF1 *fmb ;

  
  Int_t *bin = new Int_t[NFold];
  Float_t lowE =0;
  Float_t highE =0;
  TCut cut;
  TCut cc;
  
  std::cout<<Nbins<<std::endl;
  for (int k = 0;k <Nbins; k++)
  {
    fmb = new TF1("fmb","pol2",0.0,0.2);
    hM = new TH1F(Form("hM_bin%d",k),"M_{#gamma #gamma}",75,0.08,0.19);
    hM->SetMarkerStyle(kOpenCircle);
    hM->SetMarkerColor(kBlue);
    hM->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
    hM->GetYaxis()->SetTitle("dN/dM (GeV)");

    std::cout<< "\n\n";
    for (int kf = 0;kf <NFold; kf++)
    {
      bin[kf]=k;
      for  (int kkf = kf+1;kkf <NFold; kkf++)
      {
	bin[kf]/=NEdges[kkf]-1;
      }
      bin[kf]%=NEdges[kf]-1;
      lowE=BinEdges[kf][bin[kf]];
      highE=BinEdges[kf][bin[kf]+1];
      cc = Form("%f<%s&&%s<%f",lowE,BinName[kf],BinName[kf],highE);
      cut=cc&&cut;
      t1Data[2*kf+1]=bin[kf];

      t1sData[2*kf]=(highE+lowE)/2.;
      t1sData[2*kf+1]=bin[kf];
      std::cout<< bin[kf];
    }
    std::cout<< "\n\n"; 
    cut.Print();

    Double_t *M,*Event;//, *Nu, *Q2, *Z, *Pt2, *Event;
    TString draw_text;
    draw_text.Append("M:Event");
    for (int i=0;i<NFold;i++)
    {
      draw_text.Append(":");
      draw_text.Append(BinName[i]);
    }
    //    Int_t size = t->Draw("M:Nu:Q2:Z:Pt2:Event",Form("%f<Q2&&Q2<%f && %f<Nu&&Nu<%f && %f<Z&&Z<%f",Q2l,Q2h,Nul,Nuh,Zl,Zh),"goffcandle");
    //    Int_t size = t->Draw("M:Nu:Q2:Z:Pt2:Event",cut,"goffcandle");
    Int_t size = t->Draw(draw_text.Data(),cut,"goffcandle");
    std::cout<<"number of event on bin: "<<size<<std::endl;
    cut.Clear();
    M=t->GetVal(0);
    Event=t->GetVal(1);
    for (int i=0;i<size;i++)
    {
      for (int kf=0;kf<NFold;kf++)
      { 
	t1Data[2*kf]=t->GetVal(2+kf)[i];
      }
      t1Data[2*NFold]=M[i];
      t1Data[2*NFold+1]=k;
      t1Data[2*NFold+2]=Event[i];
      tuple1->Fill(t1Data);

      hM->Fill(M[i]);
    }
    Float_t mbratio=get_mbratio(hM,minRange,maxRange);
    t1sData[2*NFold]=size;
    t1sData[2*NFold+1]=k;
    t1sData[2*NFold+2]=mbratio;
    tuple1s->Fill(t1sData);


    c->SaveAs(Form("%s/hM1_%d.gif",picdir,k));
    c->SaveAs(Form("%s/hM1_%d.C",picdir,k));
  
    hM->Write("",TObject::kOverwrite);
    //    hM->Draw("e");
    if (k!=0) c->SaveAs(Form("%s/hM_mov.gif+30",indir.Data()));
    else c->SaveAs(Form("%s/hM_mov.gif",indir.Data()));
    delete hM;
    delete fmb;
  }


  /*
  tuple2->Write("",TObject::kOverwrite);
  tuple1s -> Write("",TObject::kOverwrite);
  tuple2s -> Write("",TObject::kOverwrite);
  */
  tuple1->Write("",TObject::kOverwrite);
  tuple1s->Write("",TObject::kOverwrite);

  f->Close();
  fout->Close();
  bm->Show("get_pi0");
}

