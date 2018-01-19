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
#include "TLine.h"
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
#include "RooWorkspace.h"

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
  minRange = 0.2, maxRange = 0.8;
  Float_t rangeFit[2]={.35,.75};
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
  t->SetAlias("Eeta","fE[0]+fE[1]");
  t->SetAlias("Pxeta","fX[0]+fX[1]");
  t->SetAlias("Pyeta","fY[0]+fY[1]");
  t->SetAlias("Pzeta","fZ[0]+fZ[1]");

  t->SetAlias("meta","TMath::Sqrt(Eeta*Eeta - Pxeta*Pxeta - Pyeta*Pyeta - Pzeta*Pzeta)");


  t->SetAlias("p0p1","fE[0]*fE[1] - (fX[0]*fX[1] + fY[0]*fY[1] + fZ[0]*fZ[1])");

  t->SetAlias("meta0","TMath::Sqrt( 2*p0p1 )");

  t->SetAlias("ct","(fX[0]*fX[1] + fY[0]*fY[1] + fZ[0]*fZ[1])/(fE[0]*fE[1])");
  t->SetAlias("metaT","TMath::Sqrt( 2*fE[0]*fE[1]*(1-ct) )");
  t->SetAlias("metaT2","2*fE[0]*fE[1]*(1-ct)");

  /// boost.
  t->SetAlias("bX","Pxeta/Eeta");
  t->SetAlias("bY","Pyeta/Eeta");
  t->SetAlias("bZ","Pzeta/Eeta");
  t->SetAlias("b","TMath::Sqrt(bX*bX + bY*bY + bZ*bZ)");
  t->SetAlias("g","1.0/TMath::Sqrt(1-b*b)"); 
  t->SetAlias("bDotr_a0","bX*fX[0] + bY*fY[0] + bZ*fZ[0]");
  t->SetAlias("bDotr_a1","bX*fX[1] + bY*fY[1] + bZ*fZ[1]");

  t->SetAlias("Ea0_b","g*(fE[0] - bDotr_a0)");
  t->SetAlias("Ea1_b","g*(fE[1] - bDotr_a1)");

  t->SetAlias("Pxa0_b","fX[0]+(g-1)/(b*b)*(bDotr_a0)*bX - g*fE[0]*bX");
  t->SetAlias("Pya0_b","fY[0]+(g-1)/(b*b)*(bDotr_a0)*bY - g*fE[0]*bY");
  t->SetAlias("Pza0_b","fZ[0]+(g-1)/(b*b)*(bDotr_a0)*bZ - g*fE[0]*bZ");

  t->SetAlias("Pxa1_b","fX[1]+(g-1)/(b*b)*(bDotr_a1)*bX - g*fE[1]*bX");
  t->SetAlias("Pya1_b","fY[1]+(g-1)/(b*b)*(bDotr_a1)*bY - g*fE[1]*bY");
  t->SetAlias("Pza1_b","fZ[1]+(g-1)/(b*b)*(bDotr_a1)*bZ - g*fE[1]*bZ");

  t->SetAlias("ma0","TMath::Sqrt(fE[0]*fE[0] - fX[0]*fX[0] - fY[0]*fY[0] - fZ[0]*fZ[0])");
  t->SetAlias("ma1","TMath::Sqrt(fE[1]*fE[1] - fX[1]*fX[1] - fY[1]*fY[1] - fZ[1]*fZ[1])");

  t->SetAlias("ma0_2","fE[0]*fE[0] - fX[0]*fX[0] - fY[0]*fY[0] - fZ[0]*fZ[0]");
  t->SetAlias("ma1_2","fE[1]*fE[1] - fX[1]*fX[1] - fY[1]*fY[1] - fZ[1]*fZ[1]");

  //  t->SetAlias("xd","Mpi0pip-0.31");
  //t->SetAlias("yd","Mpi0pip-0.39");
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

  TCut ma0cut = "0<=ma0_2&&ma0_2<0.001";
  TCut ma1cut = "0<=ma1_2&&ma1_2<0.001";


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
  c->Divide(1,2);
  c->GetPad(1)->SetPad(0,0.4,1,1);
  c->GetPad(1)->SetBottomMargin(0.01);
  c->GetPad(1)->SetTopMargin(0.05);
  c->GetPad(1)->SetGrid();
  
  c->GetPad(2)->SetPad(0,0,1,0.38);
  c->GetPad(2)->SetTopMargin(0.05);
  c->GetPad(2)->SetBottomMargin(0.25);
  c->GetPad(2)->SetGrid();

  setStyle();
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
    RooWorkspace *w = new RooWorkspace(Form("w1_%d",k),"RooFit Workspace");
    RooRealVar meta("meta","M(#gamma#gamma)",minRange,maxRange);

    RooDataSet *ds = new RooDataSet("ds","data set",meta);
    TCut rangeCut=Form("%f<meta&&meta<%f",minRange,maxRange);
    Int_t size = t->Draw(draw_text.Data(),cut&&DIS&&ttcut&&ma0cut&&ma1cut&&rangeCut,"goffcandle");
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
    RooRealVar Ns("Ns","signal counts",500.,0.,1000000.);
    RooRealVar Nb("Nb","background counts",3000.,0.,1000000.);    

    RooPlot* frame=fit_pdf_aa(hM, minRange, maxRange, err, Ns, Nb, ds,&meta, 1, 0.53,0.07,w,rangeFit);

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

    c->cd(1);

    frame->GetYaxis()->SetTitleSize(0.8);    
    frame->Draw();


    TH1F *hdata = (TH1F *)ds->createHistogram("hdata",meta,Binning(100,minRange,maxRange));

    w->import(*ds);
    RooAbsPdf *model=w->pdf("model");
    
    RooDataHist *modelhist = model->generateBinned(meta,0,true,true);
    w->import(*modelhist);
    TH1F * hm= (TH1F *)modelhist->createHistogram("hm",meta,Binning(100,minRange,maxRange));
  
    TH1F *hratio = (TH1F *) hdata->Clone("hratio");
    for (int b=0;b<hratio->GetNbinsX();b++)
    {
      Float_t data=hdata->GetBinContent(b+1); 
      Float_t mdata=hm->GetBinContent(b+1);
      Float_t err=hdata->GetBinError(b+1);
      hratio->SetBinContent(b+1,(data-mdata)/err);
      hratio->SetBinError(b+1,0.);
    }
  
    c->cd(2);
    hratio->SetTitle("");
    hratio->SetMaximum(5);
    hratio->SetMinimum(-5);
    //hratio->Draw("hist");
    hratio->GetYaxis()->SetLabelSize(0.06);
    hratio->GetXaxis()->SetLabelSize(0.06);
    hratio->GetXaxis()->SetTitle("M(#gamma#gamma) (GeV)");
    hratio->GetYaxis()->SetTitle("(data-model)/error");
    hratio->GetXaxis()->SetTitleSize(0.09);
    hratio->GetYaxis()->SetTitleSize(0.06);
    hratio->GetYaxis()->SetTitleOffset(0.4);
  
    //hratio->SetMarkerStyle(kFullDotLarge);
    hratio->SetFillColor(kBlue-5);
    hratio->SetMarkerColor(kBlue-5);
    hratio->Draw("bar");
    Float_t siglim=3;
    TLine *line = new TLine(rangeFit[0],siglim,rangeFit[1],siglim);
    line->SetLineWidth(3);
    line->SetLineStyle(2);
    line->SetLineColor(kRed);
    line->Draw();
    line->DrawLine(rangeFit[0],-siglim,rangeFit[1],-siglim);

    line->DrawLine(rangeFit[0],-siglim,rangeFit[0],siglim);
    //line->SetLineColor(kBlue);
    line->DrawLine(rangeFit[1],-siglim,rangeFit[1],siglim);

    c->SaveAs(Form("%s/hM1_%d.gif",picdir,k));
    c->SaveAs(Form("%s/hM1_%d.C",picdir,k));
  
    hM->Write("",TObject::kOverwrite);
    frame->Write(Form("frm1_%d",k),TObject::kOverwrite);
    ds->Write(Form("ds1_%d",k),TObject::kOverwrite);
    c->Write(Form("can1_%d",k),TObject::kOverwrite);
    w->Write("",TObject::kOverwrite);
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

