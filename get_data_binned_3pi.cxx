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
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "TEllipse.h"
#include "RooGaussian.h"
#include "RooRealVar.h"
#include "RooFormulaVar.h"
#include "RooConstVar.h"
#include "RooPolynomial.h"
#include "RooChebychev.h"
#include "RooDataHist.h"
#include "RooDataSet.h"
#include "RooFitResult.h"
#include "RooAddPdf.h"
#include "RooPlot.h"
#include "RooArgList.h"

using namespace RooFit;
TH1F *hW;
TH1F *hW2;
TH1F *hWmb;
TH1F *hW2mb;
TH1F *hT;
TH2F *hEpi0_th;
//Float_t kMPi0= 1.35333e-01;
//Float_t kSPi0= 2.41528e-02;

Float_t kMPi0=5.39609e-01;
Float_t kSPi0=5.98542e-02;

Float_t kPt2,kEvent; 
TNtuple *tuple1, *tuple2, *tuple1s, *tuple2s, *pt1, *pt2, *tupleElec;
TF1 *fmb, *fpeak, *fsig;
ROOT::Math::GSLIntegrator gi;
Float_t kNu,kQ2,kPex,kPey,kPez,kEbeam=5.014;
char st[3]= "C"; // solid target: D C Fe Pb
char tt[3];// = "Fe"; // cut on solid target or Deuterium : (st) or D.

bool bkgnd=false;
bool gsim=false;
bool sim=false;
Int_t *NEdges, NbinM=100;
Char_t **BinName=NULL;
Float_t **BinEdges=NULL;


#define len(x) sizeof(x)/sizeof(x[0])

Int_t NFold=0;
Float_t kMprt=0.938272, kMntr =0.939565;
TString outdir;
TString infile;
TString outfile;
TCanvas *c;
char *picdir;
TTree *seltree;
#include "tools.hxx"

int main(int argc, char *argv[])
{
  parse_opt(argc,argv);

  if(sim)
  {
    kMPi0=1.33196e-1;//Got sim rec.
    kSPi0=1.94034e-2;//Got sim rec.
    NbinM=200;
    //kMPi0=5.5e-1;//Got sim rec.
    //kSPi0=1.94034e-2;//Got sim rec.
    //NbinM=200;
  }
  else if(gsim)
  {
    kMPi0= 0.135;//Got from sim.
    kSPi0= 0.00066297;//Got from sim.
    NbinM=1e4;
    //kMPi0= 0.55;//Got from sim.
    //kSPi0= 0.00066297;//Got from sim.
    //NbinM=1e4;

  }
  /*  else
  {
    if (!strcmp(tt,"D")) 
    {
      kMPi0= 0.14;//Got from sim.
      kSPi0= 0.019;//Got from sim.
    }
    }*/

  get_bin_info();
  TBenchmark *bm = new TBenchmark(); 
  bm->Start("get_pi0");
  TStyle *s= new TStyle();
  s->SetOptFit();
  s->cd();
  if(outdir.IsNull()) outdir.Append("outdir");
  outdir.Append(Form("_%sD_%s",st,tt));
  if(gsim) outdir.Append("gsim");
  struct stat sb;
  if (stat(outdir.Data(), &sb) != 0)
  {
    std::cout<<Form("Error: directory %s doesn't exist!\ncreating directory\n",outdir.Data());
    system(Form("mkdir -p %s",outdir.Data()));
  }
  //char *infile = Form("%s/pi0_eta_sim_%sD_%s.root",outdir.Data(),st,tt);
  if(infile.IsNull()) infile.Append("pi0_CD.root");
  if (stat(infile.Data(), &sb) != 0)
  {
    std::cout<<Form("Error: file %s doesn't exist!\n",infile.Data());
    exit(1);
  }
  std::string pd=Form("%s/rspic",outdir.Data());
  picdir=(char *)pd.c_str();
  if (stat(picdir, &sb) != 0)
  {
      system(Form("mkdir -p %s",picdir));
  }

  TFile * f  = new TFile(infile.Data(), "read");
  //  TFile * f2 = new TFile("local/prune_simul.root","read"); //To get GSIM
  c  = new TCanvas("c", "The canvas",800,600);
  if (gsim) c->SetLogy();
  TTree *t = (TTree *) f->Get("outdata");
  if (gsim) t->SetEstimate(10e6);
  TTree *tb = (TTree *) f->Get("outbkgnd");
  TTree*te = (TTree *) f->Get("ElecData");
  //pt1 = new TNtuple("pt1","parameters 1","p0:p1:p2:p3:p4:binq2:binnu:binz");
  // pt2 = new TNtuple("pt2","parameters 2","p0:p1:p2:p3:p4:binpt2:binnu:binz");
  //  read_parameters(outdir.Data());


  ///////////////// MASS PLOT RANGE ///////////////////////////////////

  Float_t minRange,maxRange,Nit=1;
  minRange = 0.4, maxRange = 0.9;
  //Float_t minRange = 0.74, maxRange = 0.82;
  ////////////////////////////////////////////////////////////////

  fmb = new TF1("fmb","pol2",minRange,maxRange);
  fpeak = new TF1("fpeak","gaus",minRange,maxRange);
  fsig = new TF1("fsig","fmb+fpeak",minRange,maxRange);
  fsig->SetLineColor(kRed);
  fpeak->SetLineColor(kBlack);
  fpeak->SetLineStyle(2);
  fmb->SetLineColor(kBlue);
  fmb->SetLineStyle(2);

  if(outfile.IsNull()) outfile.Append("binned.root");
  TFile *fout = new TFile(Form("%s/%s",outdir.Data(),outfile.Data()),"recreate");

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
    
  tuple1 = new TNtuple("raw_binned",Form("raw data with bin info %s",BinSchema.Data()),branch.Data() );
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
  
  branch.Append(":amp:bin:mbratio:mbr_err");
  BinSchema.Append(")");
    
  tuple1s = new TNtuple("Amp_binned",Form("amplitude with mb ratio %s",BinSchema.Data()),branch.Data() );

  //tupleElec = new TNtuple("Elec_binned",Form("electron data with bin info (Q2,Nu,W)"),"Q2:Nu:W:Ee:Pex:Pey:Pez:event" );

  Float_t *t1sData = new Float_t[tuple1s->GetNvar()];
  //  std::cout<<BinSchema.Data()<<std::endl;
  //  tuple2s = new TNtuple("tuple2s","recsim with mb ratio (Nu,z,Pt2)","Nu:Q2:Z:Pt2:amp:bin:binpt2:binnu:binz:mbratio");
  Long_t Ne = (Long_t)t->GetEntries();
  t->SetAlias("Phie",Form("TMath::RadToDeg()*((%sx>0)*(TMath::ATan(%sy/%sx)) + (%sx<=0)*(TMath::ATan(%sy/%sx)+TMath::Pi()))","Pe","Pe","Pe","Pe","Pe","Pe"));
  t->SetAlias("Phig",Form("TMath::RadToDeg()*((%sx>0)*(TMath::ATan(%sy/%sx)) + (%sx<=0)*(TMath::ATan(%sy/%sx)+TMath::Pi()))","P","P","P","P","P","P"));
  t->SetAlias("Sectore",Form("(Phi%s>-30)*(int((Phi%s+90)/60) - 1) + (Phi%s<=-30)*(5)","e","e","e"));
  t->SetAlias("Sectorg",Form("(Phi%s>-30)*(int((Phi%s+90)/60) - 1) + (Phi%s<=-30)*(5)","g","g","g"));
  t->SetAlias("Eg","TMath::Sqrt(Px*Px+Py*Py+Pz*Pz)");

  t->SetAlias("E1q","TMath::Sqrt(qx1*qx1 + qy1*qy1 + qz1*qz1)");
  t->SetAlias("E2q","TMath::Sqrt(qx2*qx2 + qy2*qy2 + qz2*qz2)");  

  t->SetAlias("cos_alpha","(qx1*qx2 + qy1*qy2 +qz1*qz2 )/E1q/E2q");
  t->SetAlias("alpha_d","acos(cos_alpha)*TMath::RadToDeg()");

  t->SetAlias("E1tc","E1/(1.129-0.05793/E1 + 1.07e-12/E1/E1)");
  t->SetAlias("E2tc","E2/(1.129-0.05793/E2 + 1.07e-12/E2/E2)");

  ///new Aliases
  t->SetAlias("Epip","TMath::Sqrt(fX[2]*fX[2] + fY[2]*fY[2] +  fZ[2]*fZ[2] + 0.13957*0.13957)");
  t->SetAlias("Epim","TMath::Sqrt(fX[3]*fX[3] + fY[3]*fY[3] +  fZ[3]*fZ[3] + 0.13957*0.13957)");
  t->SetAlias("Eeta","Epip+Epim+fE[0]+fE[1]");
  t->SetAlias("Pxeta","fX[0]+fX[1]+fX[2]+fX[3]");
  t->SetAlias("Pyeta","fY[0]+fY[1]+fY[2]+fY[3]");
  t->SetAlias("Pzeta","fZ[0]+fZ[1]+fZ[2]+fZ[3]");

  t->SetAlias("Erho","Epip+Epim");
  t->SetAlias("Pxrho","fX[2]+fX[3]");
  t->SetAlias("Pyrho","fY[2]+fY[3]");
  t->SetAlias("Pzrho","fZ[2]+fZ[3]");
  t->SetAlias("mrho","TMath::Sqrt(Erho*Erho - Pxrho*Pxrho - Pyrho*Pyrho - Pzrho*Pzrho) ");


  t->SetAlias("meta","TMath::Sqrt(Eeta*Eeta - Pxeta*Pxeta - Pyeta*Pyeta - Pzeta*Pzeta) ");
  t->SetAlias("meta0","TMath::Sqrt(2*Eeta*Eeta - Pxeta*Pxeta - Pyeta*Pyeta - Pzeta*Pzeta) ");

  t->SetAlias("ct","(fX[0]*fX[1] + fY[0]*fY[1] + fZ[0]*fZ[1])/(fE[0]*fE[1])");

  t->SetAlias("Epi0","fE[0] + fE[1]");
  t->SetAlias("Pxpi0","fX[0] + fX[1]");
  t->SetAlias("Pypi0","fY[0] + fY[1]");
  t->SetAlias("Pzpi0","fZ[0] + fZ[1]");

  t->SetAlias("crossX","fY[2]*fZ[3] - fZ[2]*fY[3]");
  t->SetAlias("crossY","fZ[2]*fX[3] - fX[2]*fZ[3]");
  t->SetAlias("crossZ","fX[2]*fY[3] - fY[2]*fX[3]");

  t->SetAlias("crossDot","crossX*Pxpi0 + crossY*Pypi0 + crossZ*Pzpi0");

  /// boost.
  t->SetAlias("bX","Pxeta/Eeta");
  t->SetAlias("bY","Pyeta/Eeta");
  t->SetAlias("bZ","Pzeta/Eeta");
  t->SetAlias("b","TMath::Sqrt(bX*bX + bY*bY + bZ*bZ)");
  t->SetAlias("g","1.0/TMath::Sqrt(1-b*b)"); 
  t->SetAlias("bDotr_pip","bX*fX[2] + bY*fY[2] + bZ*fZ[2]");
  t->SetAlias("bDotr_pim","bX*fX[3] + bY*fY[3] + bZ*fZ[3]");
  t->SetAlias("bDotr_pi0","bX*Pxpi0 + bY*Pypi0 + bZ*Pzpi0");

  t->SetAlias("Epip_b","g*(Epip - bDotr_pip)");
  t->SetAlias("Epim_b","g*(Epim - bDotr_pim)");
  t->SetAlias("Epi0_b","g*(Epi0 - bDotr_pi0)");

  t->SetAlias("Pxpip_b","fX[2]+(g-1)/(b*b)*(bDotr_pip)*bX - g*Epip*bX");
  t->SetAlias("Pypip_b","fY[2]+(g-1)/(b*b)*(bDotr_pip)*bY - g*Epip*bY");
  t->SetAlias("Pzpip_b","fZ[2]+(g-1)/(b*b)*(bDotr_pip)*bZ - g*Epip*bZ");

  t->SetAlias("Pxpim_b","fX[3]+(g-1)/(b*b)*(bDotr_pim)*bX - g*Epim*bX");
  t->SetAlias("Pypim_b","fY[3]+(g-1)/(b*b)*(bDotr_pim)*bY - g*Epim*bY");
  t->SetAlias("Pzpim_b","fZ[3]+(g-1)/(b*b)*(bDotr_pim)*bZ - g*Epim*bZ");

  t->SetAlias("Pxpi0_b","Pxpi0 +(g-1)/(b*b)*(bDotr_pi0)*bX - g*Epi0*bX");
  t->SetAlias("Pypi0_b","Pypi0 +(g-1)/(b*b)*(bDotr_pi0)*bY - g*Epi0*bY");
  t->SetAlias("Pzpi0_b","Pzpi0 +(g-1)/(b*b)*(bDotr_pi0)*bZ - g*Epi0*bZ");

  t->SetAlias("crossX_b","Pypip_b*Pzpim_b - Pzpip_b*Pypim_b");
  t->SetAlias("crossY_b","Pzpip_b*Pxpim_b - Pxpip_b*Pzpim_b");
  t->SetAlias("crossZ_b","Pxpip_b*Pypim_b - Pypip_b*Pxpim_b");

  t->SetAlias("crossDot_b","crossX_b*Pxpi0_b + crossY_b*Pypi0_b + crossZ_b*Pzpi0_b");

  //////////////////
  t->SetAlias("mpi0","TMath::Sqrt(2*fE[0]*fE[1]*(1-ct))");
  t->SetAlias("mpip","TMath::Sqrt(Epip*Epip - (fX[2]*fX[2] + fY[2]*fY[2] +  fZ[2]*fZ[2]))");
  t->SetAlias("mpim","TMath::Sqrt(Epim*Epim - (fX[3]*fX[3] + fY[3]*fY[3] +  fZ[3]*fZ[3]))");

  t->SetAlias("Pxpip","fX[2]");
  t->SetAlias("Pypip","fY[2]");
  t->SetAlias("Pzpip","fZ[2]");
  t->SetAlias("Pxpim","fX[3]");
  t->SetAlias("Pypim","fY[3]");
  t->SetAlias("Pzpim","fZ[3]");

  t->SetAlias("Mpi0pip","TMath::Sqrt((Epi0+Epip)*(Epi0+Epip) - (Pxpi0+Pxpip)*(Pxpi0+Pxpip)  - (Pypi0+Pypip)*(Pypi0+Pypip) - (Pzpi0+Pzpip)*(Pzpi0+Pzpip))");
  t->SetAlias("Mpimpip","TMath::Sqrt((Epim+Epip)*(Epim+Epip) - (Pxpim+Pxpip)*(Pxpim+Pxpip)  - (Pypim+Pypip)*(Pypim+Pypip) - (Pzpim+Pzpip)*(Pzpim+Pzpip))");
  t->SetAlias("Mpi0pim","TMath::Sqrt((Epi0+Epim)*(Epi0+Epim) - (Pxpi0+Pxpim)*(Pxpi0+Pxpim)  - (Pypi0+Pypim)*(Pypi0+Pypim) - (Pzpi0+Pzpim)*(Pzpi0+Pzpim))");

  //  outdata->SetAlias("xd","Mpi0pip-0.31");
  //outdata->SetAlias("yd","Mpi0pip-0.39");
  //TCut dalitzCut = "xd*xd+yd*yd<0.05*0.05";

  Float_t xc=9.32886e-02,rx= 3.*1.41376e-02,yc=1.16822e-01,ry=3.*2.20606e-02;

  t->SetAlias("xd","Mpi0pim*Mpi0pim");
  t->SetAlias("yd","Mpi0pip*Mpi0pip");

  t->SetAlias("xd0_rx",Form("(xd-%f)/%f",xc,rx));
  t->SetAlias("yd0_ry",Form("(yd-%f)/%f",yc,ry));


  //  TCut dalitzCut = "xd0_rx*xd0_rx + yd0_ry*yd0_ry<1";
  TCut dalitzCut = "0<xd&&xd<0.16&&0<yd&&yd<0.3";


  t->SetAlias("Tpip","Epip_b-0.13957");
  t->SetAlias("Tpim","Epim_b-0.13957");
  t->SetAlias("Tpi0","Epi0_b-mpi0");
  t->SetAlias("Qeta","Tpip+Tpim+Tpi0");
  t->SetAlias("X","sqrt(3)*(Tpip-Tpim)/Qeta");
  t->SetAlias("Y","3*Tpi0/Qeta-1");
  
  t->SetAlias("Dm","meta-mpi0-mpip-mpim+0.135+0.140+0.140");
  t->SetAlias("DDm","meta-mpi0-mpip-mpim+0.135+0.140+0.140");
  TCut pi0cut = "0.1<mpi0&&mpi0<0.18";
  TCut mrhocut = "0.7<mrho&&mrho<0.85";
  TCut mK0cut = "0.48<mrho&&mrho<0.51";
  TCut planecut = "-0.1<crossDot&&crossDot<0.1";
  TCut metacut = "0.52<Dm&&Dm<0.6";
  TCut momegacut = "0.74<Dm&&Dm<0.82";

  ///////////// END new Aliases ///////////////

  if (!strcmp(tt,"Fe") )
  {
    t->SetAlias("E1tc","E1/(1.116-0.09213/E1 + 0.01007/E1/E1)");
    t->SetAlias("E2tc","E2/(1.116-0.09213/E2 + 0.01007/E2/E2)");
    
  }
  t->SetAlias("M_0","TMath::Sqrt(2*E1tc*E2tc*(1.-cos_alpha))"); 
  if(gsim||sim)
    t->SetAlias("M_0","TMath::Sqrt(2*E1*E2*(1.-cos_alpha))");

  TH1F *hM ;
  TH1F *hM_fine;

  TF1 *fmb ;

  Int_t *bin = new Int_t[NFold];
  Float_t lowE =0;
  Float_t highE =0;
  TCut cut;
  TCut DIS=Form("(Q2>1.0)&&(W>2)&&(Nu/%f)<0.85",kEbeam);
  TCut alphamin = "alpha_d>3.2";
  TCut ttcut="1==1";
  if(!gsim&&!sim)
    ttcut=
    ((!strcmp(tt,"D"))?"-31.8<vzec&&vzec<-28.40":
     ((!strcmp(tt,"Fe"))?"-25.65<vzec&&vzec<-24.26":
      ((!strcmp(tt,"C"))?"-25.33<vzec&&vzec<-24.10":
       ((!strcmp(tt,"Pb"))?"-25.54<vzec&&vzec<-24.36":
	"true") ) ) );
  TCut cc;
  ttcut.Print();
  std::cout<<Nbins<<std::endl;
  for (int k = 0;k <Nbins; k++)
  {
    //fmb = new TF1("fmb","pol2",0.0,0.2);
    hM = new TH1F(Form("hM_bin%d",k),"m(#pi^{0}(#gamma#gamma)#pi^{+}#pi^{-})",NbinM,minRange-0.1,maxRange+0.1);
    hM->SetMarkerStyle(kOpenCircle);
    hM->SetMarkerColor(kBlue);
    hM->GetXaxis()->SetTitle("m(#pi^{0}(#gamma#gamma)#pi^{+}#pi^{-}) (GeV)");
    hM->GetYaxis()->SetTitle("dN/dM (GeV)");

    hM_fine = new TH1F(Form("hM_fine_bin%d",k),"M_{#gamma #gamma}",200,minRange-0.1,maxRange+0.1);
    hM_fine->SetMarkerStyle(kOpenCircle);
    hM_fine->SetMarkerColor(kBlack);
    hM_fine->GetXaxis()->SetTitle("m(#pi^{0}(#gamma#gamma)#pi^{+}#pi^{-}) (GeV)");
    hM_fine->GetYaxis()->SetTitle("dN/dM (GeV)");

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

    Double_t *M,*Event;
    TString draw_text;
    draw_text.Append("meta:Event");
    for (int i=0;i<NFold;i++)
    {
      draw_text.Append(":");
      draw_text.Append(BinName[i]);
    }

    //    get_dalitzCut(t,dalitzCut,cut);
    //    Int_t size = t->Draw(draw_text.Data(),cut&&DIS&&ttcut&&alphamin,"goffcandle");
    RooRealVar meta("meta","M(#pi^{+}#pi^{-}#pi^{0})",minRange,maxRange);

    RooDataSet *ds = new RooDataSet("ds","data set",meta);
    Int_t size = t->Draw(draw_text.Data(),cut&&DIS&&ttcut&&pi0cut&&dalitzCut,"goffcandle");
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
      hM_fine->Fill(M[i]);
      meta=M[i];
      ds->add(meta);
    }

    Float_t err;
    RooRealVar Ns("Ns","signal counts",100.,0.,10000.);
    RooRealVar Nb("Nb","background counts",300.,0.,10000.);    

    RooPlot* frame=fit_pdf(hM, minRange, maxRange, err, Ns, Nb, ds,&meta, 1, 0.53,0.05);
    Float_t mbratio=Ns.getVal()/Nb.getVal();

    //Float_t mbratio=get_mbratio(hM,minRange,maxRange,err,2,0.55,0.05);

    //Float_t Nh_fine=get_Nh(hM_fine,minRange,maxRange,2);
    //Float_t Nh=get_Nh(hM,minRange,maxRange,2);

    //cout<<"Nh; coarse: "<<Nh<<" fine: "<<Nh_fine;

    t1sData[2*NFold]=Ns.getVal();
    //t1sData[2*NFold]=size;
    //t1sData[2*NFold]=Nh;
    
    t1sData[2*NFold+1]=k;
    
    t1sData[2*NFold+2]=mbratio;
    //t1sData[2*NFold+2]=1.;
    t1sData[2*NFold+3]=Ns.getError();
    //t1sData[2*NFold+3]=err;

    tuple1s->Fill(t1sData);
    frame->Draw();
    c->SaveAs(Form("%s/hM1_%d.gif",picdir,k));
    c->SaveAs(Form("%s/hM1_%d.C",picdir,k));
  
    hM->Write("",TObject::kOverwrite);
    frame->Write(Form("frm1_%d",k),TObject::kOverwrite);
    ds->Write(Form("ds1_%d",k),TObject::kOverwrite);
    //    hM->Draw("e");
    if (k!=0) c->SaveAs(Form("%s/hM_mov.gif+30",outdir.Data()));
    else c->SaveAs(Form("%s/hM_mov.gif",outdir.Data()));
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

