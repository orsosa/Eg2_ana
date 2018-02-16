#include <ifstream>
#include <iostream>
#include "TNtuple.h"
TNtuple *t;
TNtuple *outdata;
TNtuple *outdataC;
{
  TFile *file0 = TFile::Open("pi0_CD_2aonly.root");
  TFile *fileCorr = TFile::Open("gammECorr.root","read");
  
  //t = new TNtuple("t","t","E:cf");
  //  t->ReadFile("gammE_corr.txt");
  //TF1 *fe = new TF1 ("fe","2*((x/[0])*(0.3<x&&x<0.45) + (x/[1])*(0.45<x&&x<0.6) + (x/[2])*(0.6<x&&x<0.75) + (x/[3])*(0.75<x&&x<0.9) + (x/[4])*(0.9<x&&x<1.05) + (x/[5])*(1.05<x&&x<2.2))");
  
  outdata = (TNtuple*)file0->Get("outdata"); 
  TH1F * hcf = (TH1F*)file1->Get("hcfm");
  //  outdata->Print();
  
  outdata->SetAlias("E1q","TMath::Sqrt(qx1*qx1 + qy1*qy1 + qz1*qz1)");
  outdata->SetAlias("E2q","TMath::Sqrt(qx2*qx2 + qy2*qy2 + qz2*qz2)");
  outdata->SetAlias("alpha","acos((qx1*qx2 + qy1*qy2 +qz1*qz2 )/E1q/E2q)");
  outdata->SetAlias("alpha_d","TMath::RadToDeg()*alpha");
  outdata->SetAlias("M_0","TMath::Sqrt(2*E1*E2*(1.-cos(alpha)))");
  //  outdata->SetAlias("Mc","TMath::Sqrt(2*E1c*E2c*(1.-cos(alpha)))");
  //outdata->SetAlias("M_0","TMath::Sqrt(2*E1*E2*(1.-cos(alpha)))");
  TCut E1_cut="0.3<E1&&E1<0.5";
  TCut E2_cut="0.3<E2&&E2<0.5";
  TCut alpha_cut0="14.99<alpha_d&&alpha_d<15.01";
  TCut alpha_cut1="19.99<alpha_d&&alpha_d<20.01";
  TCut alphamin="3.2<alpha_d";
  TCut mass_cut="0.1<M&&M<0.2";
  Float_t DE=0.1;
  TCut E_cut = Form("E2-%f/2.<E1&&E1<E2+%f/2.",DE,DE);
  Long_t Ne=hcfm->GetEntries();
  outdataC=(TNtuple *)outdata->Clone("outdataC");
  
  TF1 *fm = new TF1 ("fm","0.1349766*0.1349766/(4.*TMath::Sin(15*TMath::DegToRad()/2)*TMath::Sin(15*TMath::DegToRad()/2)*x/[0])",0.3,2.2);
  fm->SetParameter(0,1.);
  Float_t NBins=50.0;
  Float_t Emin=0.35;
  Float_t Emax=1.2;
  Float_t bw=(Emax-Emin)/NBins;
  TH1F *hcf;
  TH1F *hcfm = new TH1F("hcfm","corr factor",NBins,Emin,Emax);
  for (int i =0;i<NBins;i++)
  {
    Float_t Emean=Emin+(i+1/2.)*bw;
    Float_t Ell=Emin+i*bw; Float_t Ehl=Emin+(i+1)*bw;
    TCut Ecut=Form("%f<E&&E<%f",Ell,Ehl);
    t->Draw("sqrt(cf)>>hcf(500,0.,2.)",Ecut);
    hcf = (TH1F*)gROOT->FindObject("hcf");
    Float_t cfm=hcf->GetMean();
    Float_t cferr=hcf->GetRMS()/sqrt(hcf->GetEntries());
    std::cout<<Ell<<"\t"<<Ehl<<"\t"<<cfm<<"\t"<<cferr<<std::endl;
    hcfm->SetBinContent(i+1,cfm);
    hcfm->SetBinError(i+1,cferr);
  }
  
  t->Draw("sqrt(cf):E>>hcf(500,Emin,Emax,500,0,2)");
  hcfm->Draw("same");

  //  outdata->Draw("E1:E2>>h(500,0.3,2.2,500,0.3,2.2)",alpha_cut0&&mass_cut);
  
  // outdata->Draw("E1:E2>>h(500,0.3,2.2,500,0.3,2.2)",alpha_cut0&&mass_cut,"goff");
    
  //outdata->Draw("E1:E2>>h(500,0.3,2.2,500,0.3,2.2)",alpha_cut0&&mass_cut);
  //outdata->Draw("2*E1*E2*(1-sqrt(2)/2) - 0.1349766*0.1349766 >>h(1000,-1,1)",alpha_cut&&mass_cut&&E2_cut);

}
