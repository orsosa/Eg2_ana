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
#include "TColor.h"
#include "TLine.h"
#include "TFrame.h"
#include "TStyle.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <sys/stat.h>

Int_t NFold;
Int_t *NEdges;
Char_t **BinName;
Float_t **BinEdges;

TString Xb_def="Q2/(2.*0.93827*Nu)";
TString draw_text;
TFile *ofile;
TCut ST;

int show_bin(TNtuple *t,const char *hname,TString ss)
{
  //  TStyle *st =) new TStyle();
  
  gStyle->SetOptStat(0);
  TCanvas *c = new TCanvas("c","c",1024,768);

  ofile->cd();
  //  TH2F *hNe =  new TH2F(hname,Form("Number of electrons as a function of (%s,%s)",BinName[0],BinName[1]),NEdges[0]-1,BinEdges[0],NEdges[1]-1,BinEdges[1]);
  Double_t xmin=1.,
    xmax=5.,
    ymin=0.,
    ymax=1.;
  TH2F *hNe =  new TH2F(hname,Form("Number of electrons as a function of (%s,%s)",BinName[0],BinName[1]),500,xmin,xmax,500,ymin,ymax);
  ofile->Add(t); 		
  t->SetAlias("Xb",Xb_def.Data());
  TCut D2 = "-31.8<vzec&&vzec<-28.40";
  if (!ss.CompareTo("Fe"))  {ST="-25.65<vzec&&vzec<-24.26";}
  else if (!ss.CompareTo("C")){ ST="-25.33<vzec&&vzec<-24.10";}
  else if (!ss.CompareTo("Pb")){ ST= "-25.54<vzec&&vzec<-24.36";}

  t->Draw(Form("%s>>%s",draw_text.Data(),hname),ST,"colz");

  TLine *l = new TLine();
  l->SetLineStyle(2);
  for (int i=0;i<NEdges[0];i++)
  {
    l->DrawLine((Double_t)BinEdges[0][i],ymin,(Double_t)BinEdges[0][i],ymax);
  }
  for (int i=0;i<NEdges[1];i++)
  {
    l->DrawLine(xmin,(Double_t)BinEdges[1][i],xmax,(Double_t)BinEdges[1][i]);
  }
  hNe->Write();
  c->SaveAs(Form("%s_st.gif",hname));
  c->SaveAs(Form("%s_st.C",hname));

  t->Draw(Form("%s>>%s",draw_text.Data(),hname),D2,"colz");

  l = new TLine();
  l->SetLineStyle(2);
  for (int i=0;i<NEdges[0];i++)
  {
    l->DrawLine((Double_t)BinEdges[0][i],ymin,(Double_t)BinEdges[0][i],ymax);
  }
  for (int i=0;i<NEdges[1];i++)
  {
    l->DrawLine(xmin,(Double_t)BinEdges[1][i],xmax,(Double_t)BinEdges[1][i]);
  }
  hNe->Write();
  c->SaveAs(Form("%s_lt.gif",hname));
  c->SaveAs(Form("%s_lt.C",hname));

  return 0;
  }


void get_bin_info(const char *bfile ="binning_info_elec.txt");

int main(int argc, char *argv[])
{
  TBenchmark *bm = new TBenchmark();
  bm->Start("showb");

  if (argc==2) get_bin_info(argv[1]);
  else get_bin_info();

  ofile= new TFile("show_bin_elec.root","recreate");
  draw_text=Form("%s:%s",BinName[1],BinName[0]);
  TNtuple *t;

  TFile *data = new TFile(Form("/data/tsunami/jlab/orsosa/eg2_data_electrons/NelecCD.root"));  
  t = (TNtuple*) data->Get("NElectrons");
  show_bin(t,"hC","C");
  data->Close();
  data = new TFile(Form("/data/tsunami/jlab/orsosa/eg2_data_electrons/NelecFeD.root"));  
  t = (TNtuple*) data->Get("NElectrons");
  show_bin(t,"hFe","Fe");
  data->Close();
  data = new TFile(Form("/data/tsunami/jlab/orsosa/eg2_data_electrons/NelecPbD.root"));  
  t = (TNtuple*) data->Get("NElectrons");
  show_bin(t,"hPb","Pb");
  data->Close();
  
  TFile *fsimST = new TFile("/data/tsunami/jlab/orsosa/eg2_sim_electrons/Electrons_dis_CC.root");
  t = (TNtuple*) fsimST->Get("NElectrons");
  show_bin(t,"hST_rec","C");
  t = (TNtuple*) fsimST->Get("e_thrown");
  show_bin(t,"hST_sim","sim");
  fsimST->Close();

  TFile *fsimLT = new TFile("/data/tsunami/jlab/orsosa/eg2_sim_electrons/Electrons_dis_CD.root");
  t = (TNtuple*) fsimLT->Get("NElectrons");
  show_bin(t,"hLT_rec","C");
  t = (TNtuple*) fsimLT->Get("e_thrown");
  show_bin(t,"hLT_sim","sim");
  fsimLT->Close();
  ofile->Close();
  bm->Show("showb");
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
