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

Int_t NFold;
Int_t *NEdges;
Char_t **BinName;
Float_t **BinEdges;

TFile *ofile;
TH2F *hNelecST, *hNelecLT, *hNelecRecSTC,*hNelecSimSTC, *hNelecRecLT, *hNelecSimLT, *hAccSTC, *hAccST,  *hAccLT;
TH2F *hNelecRecSTFe,*hNelecSimSTFe, *hNelecRecSTPb,*hNelecSimSTPb, *hAccSTFe, *hAccSTPb;
THStack *hstack, *hstack_a,*hstackN, *hstackN_a;
TString draw_text;
TString Xb_def="Q2/(2.*0.93827*Nu)";
struct data{Char_t tconf[10]; Double_t NeD,NeA,NF;};

void get_bin_info(const char *bfile ="binning_info_elec.txt");

Float_t get_Ne_by_target(TString st = "C-thickD2",struct data *tc=0)
{
  //  TChain *ch = new TChain();
  //  Int_t Nfile=  ch->Add( Form("/data/user/o/orsosa/eg2_data_pruned/%s_e/*.root/Electrons",st.Data()) );
  //  cout<<Nfile<<endl;

  TCut DIS ="Q2>1.&&W>2.&&Nu/5.014<0.85";
  TCut D2 = "-31.8<vzec&&vzec<-28.40";
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
  if (!ss.CompareTo("Fe"))  {ST="-25.65<vzec&&vzec<-24.26";ci=kBlack;Norm=0.31/0.32;hAccST=hAccSTFe;}
  else if (!ss.CompareTo("C")){ ST="-25.33<vzec&&vzec<-24.10";ci=kBlue;Norm=.30/.32;hAccST=hAccSTC;}
  else if (!ss.CompareTo("Pb")){ ST= "-25.54<vzec&&vzec<-24.36";ci=kRed;Norm = .16/.32;hAccST=hAccSTPb;}
  else ST="1==0";

  TFile *data = new TFile(Form("/data/tsunami/jlab/orsosa/eg2_data_electrons/Nelec%sD.root",ss.Data()));  
  TNtuple* td = (TNtuple*)data->Get("NElectrons");
  td->SetAlias("Xb",Xb_def.Data());
  ofile->cd();
  hNelecST = new TH2F(Form("hNelec%s%s",ss.Data(),ss.Data()),Form("Number electrons as a function of (%s,%s)",BinName[0],BinName[1]),NEdges[0]-1,BinEdges[0],NEdges[1]-1,BinEdges[1]);
  hNelecLT = (TH2F*)hNelecST->Clone(Form("hNelec%sD",ss.Data()));
  ofile->Add(td);
  ofile->cd();

  Double_t NA=td->Draw(Form("%s>>%s",draw_text.Data(),hNelecST->GetName()),ST&&DIS,"goff");
  Double_t ND=td->Draw(Form("%s>>%s",draw_text.Data(),hNelecLT->GetName()),D2&&DIS,"goff");

  hNelecST->Sumw2();
  hNelecLT->Sumw2();

  TH1D* hpyST = hNelecST->ProjectionY("hs",1,hNelecST->GetNbinsX(),"e");
  TH1D* hpyLT = hNelecLT->ProjectionY("hl",1,hNelecLT->GetNbinsX(),"e");
  TH1D* hemc = (TH1D*)hpyST ->Clone(Form("hEMC%s",ss.Data()));
  TGraphErrors *gST = new TGraphErrors(NEdges[1]-1);
  TGraphErrors *gLT = new TGraphErrors(NEdges[1]-1);

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


  hNelecST->Divide(hAccST);
  hNelecLT->Divide(hAccLT);

  hNelecST->SetName(Form("%s_a",hNelecST->GetName()));
  hNelecLT->SetName(Form("%s_a",hNelecLT->GetName()));

  hNelecST->Write("",TObject::kOverwrite);
  hNelecLT->Write("",TObject::kOverwrite);

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
  for (int k;k<NEdges[1]-1;k++)
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

int main(int argc, char *argv[])
{
  TBenchmark *bm = new TBenchmark();
  bm->Start("electron_count");
  
  if (argc==2) get_bin_info(argv[1]);
  else get_bin_info();

  ofile = new TFile("Ne_TargConf_Q2Xb_HS.root","recreate");
  draw_text=Form("%s:%s",BinName[1],BinName[0]);
  std::cout<<draw_text<<std::endl;
  hstack=new THStack("emc","EMC not corrected");
  hstack_a=new THStack("emc_a","EMC Acceptance corrected");
  hstackN=new THStack("emc_a","EMC no corrected normalized");
  hstackN_a=new THStack("emc_a","EMC Acceptance corrected normalized");

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
  hAccSTFe =(TH2F*)hAccSTC ->Clone("hAccFe");
  hAccSTPb =(TH2F*)hAccSTC ->Clone("hAccPb");
  hAccLT =(TH2F*)hAccSTC ->Clone("hAccLT");

  //  TFile *fsimST = new TFile("/data/tsunami/jlab/orsosa/eg2_sim_electrons/Electrons_dis_CC.root");
  TFile *fsimST = new TFile("/lustre/user/orsosa/sim_Hayk/C_elec.root");
  
  TNtuple *trec = (TNtuple *)fsimST->Get("NElectrons");
  TNtuple *tsim = (TNtuple *)fsimST->Get("e_thrown");
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

  fsimST = new TFile("/lustre/user/orsosa/sim_Hayk/Fe_elec.root");
  
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

  fsimST = new TFile("/lustre/user/orsosa/sim_Hayk/Pb_elec.root");
  
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


  TFile *fsimLT = new TFile("/data/tsunami/jlab/orsosa/eg2_sim_electrons/Electrons_dis_CD.root");
  
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
  hAccSTFe->Divide(hNelecRecSTFe,hNelecSimSTFe,1.,1.,"B");
  hAccSTPb->Divide(hNelecRecSTPb,hNelecSimSTPb,1.,1.,"B");

  hAccLT->Divide(hNelecRecLT,hNelecSimLT,1.,1.,"B");
  ofile->cd();
  hAccSTC->Write("",TObject::kOverwrite);
  hAccSTFe->Write("",TObject::kOverwrite);
  hAccSTPb->Write("",TObject::kOverwrite);

  hAccLT->Write("",TObject::kOverwrite);

  get_Ne_by_target("C-thickD2");

  get_Ne_by_target("Fe-thickD2");  

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

