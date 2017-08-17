#include "TROOT.h"
#include "TH2F.h"
#include "THStack.h"
#include "TNtuple.h"
#include "TChain.h"
#include "TTree.h"
#include "TCut.h"
#include "TFile.h"
#include "TString.h"
#include "TCanvas.h"
#include "TBranch.h"
#include "TBenchmark.h"
#include "TGraphErrors.h"
#include "TColor.h"
#include "TMath.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <sys/stat.h>
#include <getopt.h>


///// parameters will be owerwrited in the function parse_opt()
//////// PARAMETER TO CONTROL SIM SOURCE ////
bool osoto_sim=false; //osoto sim
bool raph_sim=false; //RD sim
bool hayk_sim=false; //hayk sim

bool hayk_cut = false;
bool raph_cut = false;
bool lamiaa_cut = false;
bool taya_cut=false; //false -> Hayk cut ( Elec_Vert() )
bool osoto_cut=false; //false -> Hayk cut ( Elec_Vert() )

bool fix_high=false; // fix solid high limit to -20.
///////////////////////////////////////////


Int_t NFold;
Int_t *NEdges;
Char_t **BinName;
Float_t **BinEdges;

TFile *ofile;
TH2F *hNelecST, *hNelecLT, *hNelecRecSTC,*hNelecSimSTC, *hNelecRecLT, *hNelecSimLT, *hAccSTC, *hAccST,  *hAccLT;
TH2F *hNelecRecSTFe,*hNelecSimSTFe, *hNelecRecSTPb,*hNelecSimSTPb, *hAccSTFe, *hAccSTPb;
TH2F *hNelecSimST,*hNelecRecST;

THStack *hstack, *hstack_a,*hstackN, *hstackN_a, *hstackN_ai;
TString draw_text;
TString Xb_def="Q2/(2.*0.93827*Nu)";
struct data{Char_t tconf[10]; Double_t NeD,NeA,NF;};

void get_bin_info(const char *bfile ="binning_info_elec.txt");

Float_t get_Ne_by_target(TString st = "C-thickD2",struct data *tc=0)
{
  //  TChain *ch = new TChain();
  //  Int_t Nfile=  ch->Add( Form("/data/user/o/orsosa/eg2_data_pruned/%s_e/*.root/Electrons",st.Data()) );
  //  cout<<Nfile<<endl;


  Float_t *D2limC,*D2limFe,*D2limPb,*limC,*limFe,*limPb;

  Float_t D2limOC[6][2]={{-31.9448,-28.5308},{-31.5162,-27.8951},{-31.4224,-27.6705},{-31.6992,-28.3557},{-32.3596,-28.8422},{-32.8346,-28.7756}};
  Float_t D2limOFe[6][2]={{-32.1129,-28.7068},{-31.6562,-28.0415},{-31.5031,-27.7696},{-31.7487,-28.3755},{-32.3962,-28.8998},{-32.9249,-28.9168}};
  Float_t D2limOPb[6][2]={{-31.9421,-28.5657},{-31.4953,-27.8648},{-31.388,-27.6395},{-31.6699,-28.3621},{-32.4043,-28.8494},{-32.875,-28.8082}};
  Float_t limOC[6][2]={{-25.4719,-24.1433},{-25.0748,-23.3703},{-24.9867,-23.1631},{-25.1975,-23.9719},{-25.9335,-24.43},{-26.3809,-24.4167}};
  Float_t limOFe[6][2]={{-25.768,-24.4479},{-25.2628,-23.7993},{-25.1489,-23.459},{-25.3643,-24.1372},{-26.0528,-24.6635},{-26.5848,-24.6906}};
  Float_t limOPb[6][2]={{-25.674,-24.4224},{-25.2335,-23.6768},{-25.112,-23.4694},{-25.38,-24.2214},{-26.1694,-24.702},{-26.5995,-24.7037}};

  Float_t D2limRC[6][2]={ {-31,-29},{-31.5,-29.5},{-31.7,-29.7},{-31.2,-29.2},{-30.7,-28.7},{-30.5,-28.5} };
  Float_t D2limRFe[6][2]={ {-31.1,-29.1},{-31.6,-29.6},{-31.8,-29.8},{-31.3,-29.3},{-30.8,-28.8},{-30.6,-28.6} };
  Float_t D2limRPb[6][2]={ {-31,-29},{-31.5,-29.5},{-31.7,-29.7},{-31.2,-29.2},{-30.7,-28.7},{-30.5,-28.5} };
  Float_t limRC[6][2]={ {-25.35,-23.85},{-25.85,-24.35},{-26.05,-24.55},{-25.55,-24.05},{-25.05,-23.55},{-24.85,-23.35} };
  Float_t limRFe[6][2]={ {-25.55,-24.05},{-26.05,-24.55},{-26.25,-24.75},{-25.75,-24.25},{-25.25,-23.75},{-25.05,-23.55}  };
  Float_t limRPb[6][2]={ {-25.55,-24.05},{-26.05,-24.55},{-26.25,-24.75},{-25.75,-24.25},{-25.25,-23.75},{-25.05,-23.55}  };


  TCut DIS ="Q2>1.&&W>2.&&Nu/5.014<0.85";
  TCut D2="";
  if (taya_cut) D2= "-31.8<vzec&&vzec<-28.40";
  
  if (hayk_cut) D2 = "TargType==1";

  TString ss;
  Ssiz_t start =0;
  st.Tokenize(ss,start,(const char*)"-");
  /*  TCut ST= (!ss.CompareTo("Fe")?
	    "-25.65<vzec_prev&&vzec_prev<-24.26": (!ss.CompareTo("C")?
	    "-25.33<vzec_prev&&vzec_prev<-24.10":
	    (!ss.CompareTo("Pb")? "-25.54<vzec_prev&&vzec_prev<-24.36"
	    ):"1==0") ) );
  */
  Color_t ci;
  TCut ST;
  Double_t Norm=1.0;
  Double_t n_C=0.1723/70;//~ number of atoms thickness/atomic_radii
  Double_t n_Fe=0.4/140;
  Double_t n_Pb=0.014/180;
  /////////////// OSOTO vertex cut /////////////
  

  if (!ss.CompareTo("Fe"))  
  {
    if (taya_cut) ST="-25.65<vzec&&vzec<-24.26";
    if (fix_high) ST="-25.65<vzec&&vzec<-20";
    ci=kBlack;
    Norm=0.31/0.32;
    hAccST=hAccSTFe;
  }
  else if (!ss.CompareTo("C"))
  {
    if (taya_cut) ST="-25.33<vzec&&vzec<-24.10";
    if (fix_high) ST="-25.33<vzec&&vzec<-20";
    ci=kBlue;
    Norm=.30/.32;
    hAccST=hAccSTC;
  }
  else if (!ss.CompareTo("Pb"))
  {
    if (taya_cut) ST= "-25.54<vzec&&vzec<-24.36";
    if (fix_high) ST="-25.54<vzec&&vzec<-20";
    ci=kRed;
    Norm = .16/.32;
    hAccST=hAccSTPb;
  }
  else ST="1==0";
  ////////////////

  if (hayk_cut) ST="TargType==2";
  ////////////////

  if (osoto_cut || raph_cut)
  {
    if(osoto_cut) 
    {
      D2limC  = D2limOC[0];
      D2limFe = D2limOFe[0];
      D2limPb = D2limOPb[0];
      limC    = limOC[0];
      limFe   = limOFe[0];
      limPb   = limOPb[0];
    }
    else if(raph_cut) 
    {
      D2limC  = D2limRC[0];
      D2limFe = D2limRFe[0];
      D2limPb = D2limRPb[0];
      limC    = limRC[0];
      limFe   = limRFe[0];
      limPb   = limRPb[0];
    }

    
    D2 = "1==0";
    ST="1==0";
    
    for (int k=0;k<6;k++)
    {
      if (!ss.CompareTo("C"))
      {
	D2 = D2 || Form("(sector==%d)&&(%f<vze&&vze<%f)",k,*(D2limC + 2*k),*(D2limC + 2*k + 1));
	if (fix_high) *(limC + 2*k +1)=-20;
	ST = ST || Form("(sector==%d)&&(%f<vze&&vze<%f)",k,*(limC + 2*k),*(limC + 2*k +1));
      }
      if (!ss.CompareTo("Fe"))
      {
	D2 = D2 || Form("(sector==%d)&&(%f<vze&&vze<%f)",k,*(D2limFe + 2*k),*(D2limFe + 2*k +1));
	if (fix_high) *(limFe + 2*k +1)=-20;
	ST = ST || Form("(sector==%d)&&(%f<vze&&vze<%f)",k,*(limFe + 2*k ),*(limFe + 2*k +1));
      }
      if (!ss.CompareTo("Pb"))
      {
	D2 = D2 || Form("(sector==%d)&&(%f<vze&&vze<%f)",k,*(D2limPb + 2*k),*(D2limPb + 2*k +1));
	if (fix_high) *(limPb + 2*k +1)=-20;
	ST = ST || Form("(sector==%d)&&(%f<vze&&vze<%f)",k,*(limPb + 2*k),*(limPb + 2*k +1));

      }

    }

  }

  D2.Print();
  ST.Print();
  ///// only carbon sim for osoto_sim
  if (osoto_sim) hAccST=hAccSTC;

  std::cout<<__LINE__<<std::endl;

  TFile *data = new TFile(Form("Nelec%sD.root",ss.Data()));  
  TNtuple* td = (TNtuple*)data->Get("NElectrons");
  td->SetAlias("Xb",Xb_def.Data());
  ofile->cd();
  hNelecST = new TH2F(Form("hNelec%s%s",ss.Data(),ss.Data()),Form("Number electrons as a function of (%s,%s)",BinName[0],BinName[1]),NEdges[0]-1,BinEdges[0],NEdges[1]-1,BinEdges[1]);
  hNelecLT = (TH2F*)hNelecST->Clone(Form("hNelec%sD",ss.Data()));
  ofile->Add(td);
  ofile->cd();

  Double_t NA=td->Draw(Form("%s>>%s",draw_text.Data(),hNelecST->GetName()),ST&&DIS,"goff");
  Double_t ND=td->Draw(Form("%s>>%s",draw_text.Data(),hNelecLT->GetName()),D2&&DIS,"goff");

  std::cout<<__LINE__<<std::endl;

  hNelecST->Sumw2();
  hNelecLT->Sumw2();

  std::cout<<__LINE__<<std::endl;
  TH1D* hpyST = hNelecST->ProjectionY("hs",1,hNelecST->GetNbinsX(),"e");
  TH1D* hpyLT = hNelecLT->ProjectionY("hl",1,hNelecLT->GetNbinsX(),"e");
  TH1D* hemc = (TH1D*)hpyST ->Clone(Form("hEMC%s",ss.Data()));
  TGraphErrors *gST = new TGraphErrors(NEdges[1]-1);
  TGraphErrors *gLT = new TGraphErrors(NEdges[1]-1);

  std::cout<<__LINE__<<std::endl;

  hemc->Divide(hpyST,hpyLT);
  hemc->SetLineColor(ci);
  hemc->SetMarkerColor(ci);
  hemc->SetMarkerStyle(kFullDotLarge);
  hemc->SetTitle(ss);
  hemc->Write("",TObject::kOverwrite); 
  hstack->Add(hemc);
  hNelecST->Write("",TObject::kOverwrite);
  hNelecLT->Write("",TObject::kOverwrite);
  TH1D* hemcn = (TH1D*)hemc->Clone(Form("hEMC%sN",ss.Data()));
  hemcn->Divide(hpyST,hpyLT,1.,Norm);
  hstackN->Add(hemcn);

  //// Acceptance on integrated bin. Integration over x axis.
  std::cout<<__LINE__<<std::endl;
  TH1D *hpySTSim = hNelecSimST->ProjectionY("hssim",1,hNelecST->GetNbinsX(),"e");
  TH1D *hpyLTSim = hNelecSimLT->ProjectionY("hlsim",1,hNelecLT->GetNbinsX(),"e");

  TH1D *hpySTRec = hNelecRecST->ProjectionY("hsrec",1,hNelecST->GetNbinsX(),"e");
  TH1D *hpyLTRec = hNelecRecLT->ProjectionY("hlrec",1,hNelecLT->GetNbinsX(),"e");

  TH1D *hAccSTi = (TH1D *)hpySTRec->Clone( Form("hAccSTi%s",ss.Data()) );
  TH1D *hAccLTi = (TH1D *)hpySTRec->Clone( Form("hAccLTi%s",ss.Data()) );

  hAccSTi->Divide(hpySTRec,hpySTSim,1.,1.,"B");
  hAccLTi->Divide(hpyLTRec,hpyLTSim,1.,1.,"B");
  std::cout<<__LINE__<<std::endl;
  TH1D *hemcni = (TH1D *)hpySTRec->Clone( Form("hEMC%sN_ai",ss.Data()));
  hpyST->Divide(hAccSTi);
  hpyLT->Divide(hAccLTi);
  std::cout<<__LINE__<<std::endl;
  hemcni->Divide(hpyST,hpyLT,1.,Norm);
  std::cout<<__LINE__<<std::endl;
  hemcni->SetLineColor(ci);
  std::cout<<__LINE__<<std::endl;
  hemcni->SetMarkerColor(ci);
  std::cout<<__LINE__<<std::endl;
  hemcni->SetMarkerStyle(kFullDotLarge);
  std::cout<<__LINE__<<std::endl;
  hemcni->SetTitle(ss);
  std::cout<<__LINE__<<std::endl;
  hemcni->Write("",TObject::kOverwrite); 
  std::cout<<__LINE__<<std::endl;
  hstackN_ai->Add(hemcni);
  ///////////////////////////////
  std::cout<<__LINE__<<std::endl;
  //// Acceptance on each bin
  hNelecST->Divide(hAccST);
  hNelecLT->Divide(hAccLT);

  hNelecST->SetName(Form("%s_a",hNelecST->GetName()));
  hNelecLT->SetName(Form("%s_a",hNelecLT->GetName()));

  hNelecST->Write("",TObject::kOverwrite);
  hNelecLT->Write("",TObject::kOverwrite);
  std::cout<<__LINE__<<std::endl;
  hpyST = hNelecST->ProjectionY("hs",1,hNelecST->GetNbinsX(),"e");
  hpyLT = hNelecLT->ProjectionY("hl",1,hNelecLT->GetNbinsX(),"e");
  hemc = (TH1D*)hpyST ->Clone(Form("hEMC%s_a",ss.Data()));

  hemc->Divide(hpyST,hpyLT);
  hemc->SetLineColor(ci);
  hemc->SetMarkerColor(ci);
  hemc->SetMarkerStyle(kFullDotLarge);
  hemc->SetTitle(ss);
  hemc->Write("",TObject::kOverwrite); 
  hstack_a->Add(hemc);

  hemcn = (TH1D*)hemc->Clone(Form("hEMC%sN_a",ss.Data()));
  hemcn->Divide(hpyST,hpyLT,1.,Norm);
  hstackN_a->Add(hemcn);

  std::cout<<"Na/ND on " +ss + " " <<NA/ND<<std::endl;

  TH1F* hxbst,*hxblt;
  TCut Q2cut="1.0<Q2&&Q2<4.1";
  for (int k=0;k<NEdges[1]-1;k++)
  {
    hxbst = new TH1F(Form("hst%s_%d",ss.Data(),k),Form("%.2f<Xb<%.2f",BinEdges[1][k],BinEdges[1][k+1]),300,BinEdges[1][k],BinEdges[1][k+1]);
    hxblt = (TH1F*)hxbst->Clone(Form("hlt%s_%d",ss.Data(),k));

    td->Draw(Form("Xb>>%s",hxbst->GetName()),ST&&DIS,"goff");
    td->Draw(Form("Xb>>%s",hxblt->GetName()),D2&&DIS&&Q2cut,"goff");
    hxbst->Write("",TObject::kOverwrite);
    hxblt->Write("",TObject::kOverwrite);
    gST->SetPoint(k,hxbst->GetMean(),hxbst->GetEntries());
    gLT->SetPoint(k,hxblt->GetMean(),hxblt->GetEntries());
    gST->SetPointError(k,hxbst->GetRMS()/TMath::Sqrt(hxbst->GetEntries()),1./TMath::Sqrt(hxbst->GetEntries()) );
    gST->SetPointError(k,hxblt->GetRMS()/TMath::Sqrt(hxblt->GetEntries()),1./TMath::Sqrt(hxblt->GetEntries()) );

  }
  gST->SetMarkerStyle(kFullDotLarge);
  gST->SetMarkerColor(kBlack);
  gLT->SetMarkerStyle(kFullDotLarge);
  gLT->SetMarkerColor(kRed);
  gST->Write(Form("gNelec%s%s",ss.Data(),ss.Data()),TObject::kOverwrite);
  gLT->Write(Form("gNelec%sD",ss.Data()),TObject::kOverwrite);


  return 0;
}

int parse_opt(int argc, char* argv[]);

int main(int argc, char *argv[])
{
  parse_opt(argc, argv);
  TBenchmark *bm = new TBenchmark();
  bm->Start("electron_count");
  if (osoto_sim) std::cout<<"using osoto sim"<<std::endl;
  else if(hayk_sim) std::cout<<"using hayk sim"<<std::endl;
  else if(raph_sim) std::cout<<"using raphael sim"<<std::endl;

  if (osoto_cut) std::cout<<"using osoto cut"<<std::endl;
  else if(hayk_cut) std::cout<<"using Hayk cut"<<std::endl;
  else if(raph_cut) std::cout<<"using Raphael cut"<<std::endl;
  else if(taya_cut) std::cout<<"using Taya cut"<<std::endl;
  else if(lamiaa_cut) std::cout<<"using Lamiaa cut"<<std::endl;


  get_bin_info();



  ofile = new TFile("Ne_TargConf.root","recreate");
  draw_text=Form("%s:%s",BinName[1],BinName[0]);
  std::cout<<draw_text<<std::endl;
  hstack=new THStack("emc","EMC not corrected");
  hstack_a=new THStack("emc_a","EMC Acceptance corrected");
  hstackN=new THStack("emc_a","EMC no corrected normalized");
  hstackN_a=new THStack("emc_a","EMC Acceptance corrected normalized");
  hstackN_ai=new THStack("emc_a","EMC Acceptance corrected normalized");

  hNelecRecSTC =  new TH2F("hNelecRecSTC",Form("Number of electrons as a function of (%s,%s)",BinName[0],BinName[1]),NEdges[0]-1,BinEdges[0],NEdges[1]-1,BinEdges[1]);

  hNelecSimSTC =  (TH2F*)hNelecRecSTC->Clone("hNelecSimSTC");

  hNelecRecSTFe =  (TH2F*)hNelecRecSTC->Clone("hNelecRecSTFe");
  hNelecSimSTFe =  (TH2F*)hNelecRecSTC->Clone("hNelecSimSTFe");

  hNelecRecSTPb =  (TH2F*)hNelecRecSTC->Clone("hNelecRecSTPb");
  hNelecSimSTPb =  (TH2F*)hNelecRecSTC->Clone("hNelecSimSTPb");

  hNelecRecLT =  (TH2F*)hNelecRecSTC->Clone("hNelecRecLT");
  hNelecSimLT =  (TH2F*)hNelecRecSTC->Clone("hNelecSimLT");

  hAccSTC =  (TH2F*)hNelecRecSTC->Clone("hAccSTC");
  hAccSTC->SetTitle(Form("Acc(%s,%s)",BinName[0],BinName[1]));
  hAccSTFe =(TH2F*)hAccSTC ->Clone("hAccSTFe");
  hAccSTPb =(TH2F*)hAccSTC ->Clone("hAccSTPb");
  hAccLT =(TH2F*)hAccSTC ->Clone("hAccLT");

  TFile *fsimST;
  TFile *fsimLT;
  TNtuple *trec;
  TNtuple *tsim;

  if (osoto_sim)
  {
    fsimST = new TFile("Electrons_dis_CC.root");
    trec = (TNtuple *)fsimST->Get("NElectrons");
    tsim = (TNtuple *)fsimST->Get("e_thrown");
    ofile->Add(trec);
    ofile->Add(tsim);
    ofile->cd();
    
    trec->SetAlias("Xb",Xb_def.Data());
    tsim->SetAlias("Xb",Xb_def.Data());
    trec->Draw( Form( "%s>>%s",draw_text.Data(),hNelecRecSTC->GetName() ) ,"","goff");
    tsim->Draw( Form( "%s>>%s",draw_text.Data(),hNelecSimSTC->GetName() ) ,"", "goff");
    
    delete trec;
    delete tsim;
    fsimST->Close();
  }

  else if (hayk_sim) //hayk sim 
  {
    fsimST = new TFile("C_elec.root");
  
    trec = (TNtuple *)fsimST->Get("NElectrons");
    tsim = (TNtuple *)fsimST->Get("e_thrown");
    ofile->Add(trec);
    ofile->Add(tsim);
    ofile->cd();
    
    trec->SetAlias("Xb",Xb_def.Data());
    tsim->SetAlias("Xb",Xb_def.Data());
    trec->Draw( Form( "%s>>%s",draw_text.Data(),hNelecRecSTC->GetName() ) ,"","goff");
    tsim->Draw( Form( "%s>>%s",draw_text.Data(),hNelecSimSTC->GetName() ) ,"", "goff");
    
    delete trec;
    delete tsim;
    fsimST->Close();
    
    fsimST = new TFile("Fe_elec.root");
    
    trec = (TNtuple *)fsimST->Get("NElectrons");
    tsim = (TNtuple *)fsimST->Get("e_thrown");
    ofile->Add(trec);
    ofile->Add(tsim);
    ofile->cd();
    
    trec->SetAlias("Xb",Xb_def.Data());
    tsim->SetAlias("Xb",Xb_def.Data());
    trec->Draw( Form( "%s>>%s",draw_text.Data(),hNelecRecSTFe->GetName() ) ,"","goff");
    tsim->Draw( Form( "%s>>%s",draw_text.Data(),hNelecSimSTFe->GetName() ) ,"", "goff");
    
    delete trec;
    delete tsim;
    fsimST->Close();
    
    fsimST = new TFile("Pb_elec.root");
    
    trec = (TNtuple *)fsimST->Get("NElectrons");
    tsim = (TNtuple *)fsimST->Get("e_thrown");
    ofile->Add(trec);
    ofile->Add(tsim);
    ofile->cd();
    
    trec->SetAlias("Xb",Xb_def.Data());
    tsim->SetAlias("Xb",Xb_def.Data());
    trec->Draw( Form( "%s>>%s",draw_text.Data(),hNelecRecSTPb->GetName() ) ,"","goff");
    tsim->Draw( Form( "%s>>%s",draw_text.Data(),hNelecSimSTPb->GetName() ) ,"", "goff");
    
    delete trec;
    delete tsim;
    fsimST->Close();
  }
  if (osoto_sim)
  {
    fsimLT = new TFile("Electrons_dis_CD.root");
  }
  else if(hayk_sim)// hayk sim
  {
    fsimLT = new TFile("D2_elec.root");
  }
  trec = (TNtuple *)fsimLT->Get("NElectrons");
  tsim = (TNtuple *)fsimLT->Get("e_thrown");

  ofile->Add(trec);
  ofile->Add(tsim);
  ofile->cd();

  trec->SetAlias("Xb",Xb_def.Data());
  tsim->SetAlias("Xb",Xb_def.Data());

  trec->Draw( Form( "%s>>%s",draw_text.Data(),hNelecRecLT->GetName() ) ,"","goff");
  tsim->Draw( Form( "%s>>%s",draw_text.Data(),hNelecSimLT->GetName() ) ,"","goff");

  delete trec;
  delete tsim;
  fsimLT->Close();
  hNelecRecSTC->Sumw2();
  hNelecSimSTC->Sumw2();
  hNelecRecSTFe->Sumw2();
  hNelecSimSTFe->Sumw2();
  hNelecRecSTPb->Sumw2();
  hNelecSimSTPb->Sumw2();

  hNelecRecLT->Sumw2();
  hNelecSimLT->Sumw2();

  hAccSTC->Divide(hNelecRecSTC,hNelecSimSTC,1.,1.,"B");
  if (! osoto_sim)
  {
    hAccSTFe->Divide(hNelecRecSTFe,hNelecSimSTFe,1.,1.,"B");
    hAccSTPb->Divide(hNelecRecSTPb,hNelecSimSTPb,1.,1.,"B");
  }
  hAccLT->Divide(hNelecRecLT,hNelecSimLT,1.,1.,"B");
  ofile->cd();
  hAccSTC->Write("",TObject::kOverwrite);
  if (! osoto_sim)
  {
    hAccSTFe->Write("",TObject::kOverwrite);
    hAccSTPb->Write("",TObject::kOverwrite);
  }
  hAccLT->Write("",TObject::kOverwrite);

  hNelecSimST = hNelecSimSTC;
  hNelecRecST = hNelecRecSTC;
  get_Ne_by_target("C-thickD2");

  hNelecSimST = hNelecSimSTFe;
  hNelecRecST = hNelecRecSTFe;
  get_Ne_by_target("Fe-thickD2");  

  hNelecSimST = hNelecSimSTPb;
  hNelecRecST = hNelecRecSTPb;
  get_Ne_by_target("Pb-thinD2");

  ofile->cd();
  /*
  TCanvas *c = new TCanvas("c","c",1024,768);  
  hstack->Draw("nostack");
  hstack->GetYaxis()->SetTitle("N_{e}^{A}/N_{e}^{D}");
  hstack_a->GetYaxis()->SetTitle("N_{e}^{A}/N_{e}^{D}");
  hstack->GetXaxis()->SetTitle("x");
  hstack_a->GetXaxis()->SetTitle("x");
  hstack->Draw("nostack");
  c->BuildLegend();
  c->SaveAs("EMC.gif");
  c->SaveAs("EMC.C");
  hstack_a->Draw("nostack");
  c->BuildLegend();
  c->SaveAs("EMC_a.gif");
  c->SaveAs("EMC_a.C");
  */
  hstack->Write("hemcst",TObject::kOverwrite);
  hstack_a->Write("hemcst_a",TObject::kOverwrite);
  hstackN->Write("hemcstN",TObject::kOverwrite);
  hstackN_a->Write("hemcstN_a",TObject::kOverwrite);
  hstackN_ai->Write("hemcstN_ai",TObject::kOverwrite);
  ofile->Close();
  bm->Show("electron_count");

  return 0;
}


void get_bin_info(const char *bfile)
{
  char *bfile_f = Form("%s_formatted.txt",bfile);
  struct stat sb;
  if (stat(bfile, &sb) != 0)
  {
    std::cout<<Form("Error: file %s doesn't exist!\n",bfile);
    exit(1);
  }
  system(Form("awk -v c=0 \'!/#|!|+|?/{c+=1};END {print c}\' %s > lc.txt",bfile));
  system(Form("awk \'!/#|!|+|?/{print NF,$0}\' %s>%s",bfile,bfile_f));
  std::ifstream fc("lc.txt");
  fc>>NFold;
  fc.close();
  system("rm lc.txt");
  NEdges = new Int_t[NFold];
  BinName = new Char_t*[NFold];
  BinEdges = new Float_t*[NFold];
  std::ifstream binfile(bfile_f);
  int NB = 1000;
  int be=0;
  char line[NB];
  TString s;
  TString tok;
  for (int k_f =0; k_f<NFold;k_f++)
  {
    Ssiz_t from=0;
    binfile.getline(line,NB);
    s.Clear();
    s.Insert(0,line);
    s=s.Strip(TString::kBoth);
    s.Tokenize(tok,from);
    std::cout<<tok<<std::endl;
    be=tok.Atoi()-1;
    NEdges[k_f]=be;
    BinEdges[k_f]=new Float_t[be];
    s.Tokenize(tok,from);
    std::cout<<tok.Data()<<std::endl;
    BinName[k_f] = new Char_t[5];
    strcpy(BinName[k_f],tok.Data());
    for (int k=0;k<be;k++)
    {
      s.Tokenize(tok,from);
      BinEdges[k_f][k]=tok.Atof();
    }
  }
  for (int k_f =0; k_f<NFold;k_f++)
  {
    
    for (int k=0;k<NEdges[k_f];k++)
    {
      std::cout<<"\t"<<BinEdges[k_f][k];
    }
    std::cout<<std::endl;

  }
}

inline void print_help()
{
  std::cout<<"####### Help #########\n"
    "\t-s | --sim-source <ss>: Simulation source to be used. 'H' for Hayk's,  'O' for Orlando's  or 'R' for Raphael's . Default none.\n"
    "\t-c | --vertex-cut <vc>: Set electron vertex cut. 'H' for Hayk's,  'O' for Orlando's ,'R' for Raphael's, 'T' for Taya's or 'L' for Lammiaa's. Default none.\n"
    "\t-f | --fix-vz-high       : Fix vertex high limit for solid to -20 cm. Default deactivated.\n"
    "\t-h | --help           : Print help.\n"
    "e.g.\n"
    "./get_Ne_local -s O -c H -f\n"
    "#########################"	   <<std::endl;
  exit(0);
}


inline int parse_opt(int argc, char* argv[])
{
  int c;
  int option_index = 0;

  static struct option long_options[] =
  {
    {"fix-vz-high", no_argument,      0, 'f'},
    {"sim-source",     required_argument,       0, 's'},
    {"help",     no_argument,       0, 'h'},
    {"vertex-cut",  required_argument, 0, 'c'},
    {0, 0, 0, 0}
  };

  if(argc==1)
    print_help();


  while ((c = getopt_long (argc, argv,"s:c:f",long_options,&option_index)) != -1)
    switch (c)
      {
      case 's':
        if (!strcmp(optarg,"O"))osoto_sim=true;
        else if (!strcmp(optarg,"H"))hayk_sim=true;
        else if (!strcmp(optarg,"R"))raph_sim=true;

        break;
      case 'c':
	if (!strcmp(optarg,"O"))osoto_cut=true;
        else if (!strcmp(optarg,"H"))hayk_cut=true;
        else if (!strcmp(optarg,"R"))raph_cut=true;
        else if (!strcmp(optarg,"T"))taya_cut=true;
        else if (!strcmp(optarg,"L"))lamiaa_cut=true;
        break;
      case 'f':
	fix_high =true;
	break;
      case 'h':
	print_help();
	break;
      case '?':
        if (optopt == 's')
          fprintf (stderr, "Option -%c target sim source [H | O | R].\n", optopt);
        else if (isprint (optopt))
          fprintf (stderr, "Unknown option `-%c'.\n", optopt);
        else
          fprintf (stderr,
                   "Unknown option character `\\x%x'.\n",
                   optopt);
        return 1;
      default:
        abort ();
      }
  return 0;
}

