#include "TSpectrum.h"
#include "Riostream.h"
#include "TApplication.h"
#include "TROOT.h"
#include "TFile.h"
#include "TNtuple.h"
#include "TGraph.h"
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
#include "TString.h"
#include "TClasTool.h"
#include "TIdentificator.h"
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <sys/stat.h>
#include <algorithm>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

TString tt_full;
TString tt;
int RN=0;
bool sim=false;
inline int parse_opt(int argc, char* argv[]);

int main(int argc, char *argv[])
{
  parse_opt(argc,argv);
  Ssiz_t n= 0;
  Float_t Ebeam=5.014;
  if(!sim)  tt_full.Tokenize(tt,n,"-");
  TClasTool *input = new TClasTool();
  input->InitDSTReader("ROOTDSTR");

  int rn;
  char File[300];
  //  TString indir=Form("/data/atlas/users/orsosa/eg2_data_ct/%s",tt_full.Data());
  TString indir=Form("/data/user/jlab/mss/clas/eg2a/production/Pass2/Clas");
  //  clas_41976_07.pass2.root

  if (RN!=0)    system(Form("find %s/ -name \"*%d*.root\" -print > dataFiles.txt",indir.Data(),RN));
  ifstream in("dataFiles.txt", ios::in);
  if (!in) 
  {
    cerr << "File Not Opened!" << endl;
    exit(1);
  }
  while (in >> File) 
    {
      input->Add(File);
    }
  in.close();
  TIdentificator *t = new TIdentificator(input);
  
  //  Long_t nEntries = (Long_t) input->GetEntries();
  TFile *out = new TFile(Form("Nelec.root"),"recreate");
  TVector3 *vert;
  
  TNtuple *tElec = new TNtuple("NElectrons","All DIS Electrons rec","Q2:W:Nu:vzec:Pex:Pey:Pez:event:TargType:vze:sector");
  Float_t Data[tElec->GetNvar()];
  Double_t NeA=0,NeD=0;
  cout<<"number of files to be processed: "<<input->GetNFiles()<<endl;
  TNtuple *e_thrown=0;
  if(sim) 
  {
    e_thrown = new TNtuple("e_thrown","All DIS Electrons thrown","Q2:W:Nu:vzec:Pex:Pey:Pez:event");
    tt="C";
  }
  Long_t  nEntries = input->GetEntries();
  input->Next();
  for (Int_t k = 0; k < nEntries; k++) 
   // for (Int_t k = 0; k < 100; k++) 
  //  while(!input->Next())
  {

    Int_t nRows = input->GetNRows("EVNT");
    if(nRows>0 && ( t->GetCategorization(0,tt.Data(),true) ) == "electron" && t -> Q2() > 1. && t -> W() > 2. && t -> Nu() / Ebeam < 0.85)
    {
      Data[0] = t -> Q2();
      Data[1] = t -> W();
      Data[2] = t -> Nu();
      vert = t->GetCorrectedVert();
      Float_t vzec=vert->Z(); 
      Data[3] = vzec; 
      Data[4] = t -> Px(0);
      Data[5] = t -> Py(0);
      Data[6] = t -> Pz(0);
      Data[7] = k;
      Data[8] = t->ElecVertTarg();
      Data[9] = t->Z(0);
      Data[10] = t->Sector(0);

      tElec->Fill(Data);
      /*      if (-31.8<vzec&&vzec<-28.40){ NeD++;}
	      else if (!(tt.CompareTo("Fe"))&& -25.65<vzec&&vzec<-24.26 ){NeA++;}
	      else if (!(tt.CompareTo("C"))&& -25.33<vzec&&vzec<-24.10 ){NeA++;}
	      else if (!(tt.CompareTo("Pb"))&& -25.54<vzec&&vzec<-24.36 ){NeA++;}
      */
    }
    if(sim && t -> Id(0,1)==11 && t -> Q2(1) > 1. && t -> W(1) > 2. && t -> Nu(1) / Ebeam < 0.85) 
    {
      std::cout<<"ok"<<std::endl;
      Data[0] = t -> Q2(1);
      Data[1] = t -> W(1);
      Data[2] = t -> Nu(1);
      Data[3] = t->Z(0,1); 
      Data[4] = t -> Px(0,1);
      Data[5] = t -> Py(0,1);
      Data[6] = t -> Pz(0,1);
      Data[7] = k;
      
      
      e_thrown->Fill(Data);
    }
    input->Next();
  }
  tElec->Write("",TObject::kOverwrite);
  if(sim) e_thrown->Write("",TObject::kOverwrite);
  out->Close();
  //cout<<"\n Normalization Factor: "<<NeD/NeA<<endl;
  return 0;
}

inline int parse_opt(int argc, char* argv[])
{
  int c;
  if(argc==1)
  {
    printf("argument -t <target> must be used\n \
 where target could be choosen amongst:\n	\
 Pb-thinD2, Fe-thickD2, C-thickD2\n");
    exit (1);
  }
  while ((c = getopt (argc, argv, "t:r:s")) != -1)
    switch (c)
      {
      case 't':
        tt_full.Append(optarg);
        break;
      case 'r':
        RN = atoi(optarg);
        break;
      case 's':
        sim = true;
        break;
      case '?':
        if (optopt == 't')
          fprintf (stderr, "Option -%c target type [ Pb-thinD2 | Fe-thickD2 | C-thickD2].\n", optopt);
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
}
