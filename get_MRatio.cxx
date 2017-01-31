#include "TSpectrum.h"
#include "Riostream.h"
#include "TApplication.h"
#include "TROOT.h"
#include "TFile.h"
#include "TNtuple.h"
#include "TTree.h"
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
TString srLTfile, gsLTfile, srSTfile, gsSTfile, dataLTfile, dataSTfile, dataElecfile, outdir, st, lt, suffix, bin_info;
Int_t NFold;
Int_t *NEdges;
Char_t**  BinName;
Float_t** BinEdges;
std::vector<int> binorder;
bool acc_flag =false;
bool no_acc = false;
inline void get_bin_info(const char *bfile ="binning_info.txt");
inline void print_help();
inline int parse_opt(int argc, char* argv[]);

int main(int argc, char *argv[])
{
  get_bin_info();
  parse_opt(argc,argv);
  TCanvas *c = new TCanvas("c","c",1200,900);
  c->SetGrid();

  if (outdir.IsNull())  outdir.Append("MRatio");
  if (srLTfile.IsNull())  srLTfile.Append("sim_CD_D/binned.root");
  if (gsLTfile.IsNull())  gsLTfile.Append("gsim_CD_Dgsim/binned.root");
  if (srSTfile.IsNull())  srSTfile.Append("sim_CD_C/binned.root");
  if (gsSTfile.IsNull())  gsSTfile.Append("gsim_CD_Cgsim/binned.root");

  if (dataLTfile.IsNull())  dataLTfile.Append(Form("data_%sD_D/binned.root",st.Data()));
  if (dataSTfile.IsNull())  dataSTfile.Append(Form("data_%sD_%s/binned.root",st.Data(),st.Data()));

  if (dataElecfile.IsNull())  dataElecfile.Append( Form("Ne_TargConf.root") );

  //  if (st.IsNull()) st.Append("C");
  outdir.Append(st.Data());
  struct stat sb;
  if (stat(outdir.Data(), &sb) != 0)
  {
    std::cout<<"Folder: "<<outdir.Data()<<" doesn't exist. creating...\n";
    system(Form("mkdir %s",outdir.Data()));
  }

  std::cout<<"########\nliquid sim rec file: "<<srLTfile.Data()<<" gsim file: "<<gsLTfile.Data()<<"\n##########\n";
  std::cout<<"########\nsolid sim rec file: "<<srSTfile.Data()<<" gsim file: "<<gsSTfile.Data()<<"\n##########\n";
  std::cout<<"########\ndata solid: "<<dataSTfile.Data()<<" data liquid: "<<dataLTfile.Data()<<"\n##########\n";


  TFile * frLT = new TFile(srLTfile.Data(),"read");
  TFile * fgLT = new TFile(gsLTfile.Data(),"read");
  TFile * frST = new TFile(srSTfile.Data(),"read");
  TFile * fgST= new TFile(gsSTfile.Data(),"read");
  TFile * fdataLT= new TFile(dataLTfile.Data(),"read");
  TFile * fdataST= new TFile(dataSTfile.Data(),"read");
  TFile * fdataElec= new TFile(dataElecfile.Data(),"read");


  if (binorder.empty()) for (int i=0;i<NFold;i++) binorder.push_back(i);

  int Nbins = NEdges[0]-1;
  suffix.Append(BinName[binorder[0]]);
  bin_info.Append("(");
  bin_info.Append(BinName[binorder[0]]);

  for (int kf=1;kf<NFold;kf++)
  {
    Nbins *= NEdges[kf]-1;
    suffix.Append("_");
    suffix.Append(BinName[binorder[kf]]);
    bin_info.Append(",");
    bin_info.Append(BinName[binorder[kf]]);

  }
  bin_info.Append(")");

  TH1F *hacc = new TH1F("hacc","Acceptance",Nbins+2,-1,Nbins+1);
  TH2F *hMRatio = new TH2F("hMRatio","Multiplicity ratio",NEdges[binorder[0]]-1,BinEdges[binorder[0]],NEdges[binorder.back()]-1,BinEdges[binorder.back()]);

  TH1F *hMRatioProj = new TH1F("hMRatioProj",Form("Multiplicity Ratio (%s)",BinName[binorder.back()]),NEdges[binorder.back()]-1,BinEdges[binorder.back()]);

  TH1F *hNhST = new TH1F("hNhST",Form("Nh solid target (%s)",BinName[binorder.back()]),NEdges[binorder.back()]-1,BinEdges[binorder.back()]);

  TH1F *hNhLT = new TH1F("hNhLT",Form("Nh liquid target (%s)",BinName[binorder.back()]),NEdges[binorder.back()]-1,BinEdges[binorder.back()]);

  TH1F *hsigUp = new TH1F("hsigUp",Form("Square errors ST (%s)",BinName[binorder.back()]),NEdges[binorder.back()]-1,BinEdges[binorder.back()]);

  TH1F *hsigDown = new TH1F("hsigDown",Form("Square errors LT (%s)",BinName[binorder.back()]),NEdges[binorder.back()]-1,BinEdges[binorder.back()]);

  //TH1F *hgsim,*hrec;
  TGraph *grec, *ggsim;
  TNtuple *tr1LT, *tr1sLT,  *tg1LT, *tg1sLT, *tr1ST, *tr1sST,  *tg1ST, *tg1sST, *tdLT, *tdsLT, *tdST, *tdsST;
  TTree *tde;


  tr1LT = (TNtuple *)frLT ->Get("raw_binned");
  tr1sLT = (TNtuple *)frLT ->Get("Amp_binned");

  tg1LT = (TNtuple *)fgLT ->Get("raw_binned");
  tg1sLT = (TNtuple *)fgLT ->Get("Amp_binned");

  tr1ST = (TNtuple *)frST ->Get("raw_binned");
  tr1sST = (TNtuple *)frST ->Get("Amp_binned");

  tg1ST = (TNtuple *)fgST ->Get("raw_binned");
  tg1sST = (TNtuple *)fgST ->Get("Amp_binned");

  tdLT = (TNtuple *)fdataLT ->Get("raw_binned");
  tdsLT = (TNtuple *)fdataLT ->Get("Amp_binned");

  tdST = (TNtuple *)fdataST ->Get("raw_binned");
  tdsST = (TNtuple *)fdataST ->Get("Amp_binned");


  //  Nr = tr1->GetEntries();
  //Ng = tg1->GetEntries();
  /*
  TString draw_text="(amp*mbratio):(";

  for (int i=0;i<NFold-1;i++)
  { 
    draw_text.Append("Bin");
    draw_text.Append(BinName[binorder[i]]);
    for (int j=i+1;j<NFold;j++)
    {
      draw_text.Append("*");
      draw_text.Append(Form("%d",(NEdges[binorder[j]]-1)));
    }
    draw_text.Append(" + ");
  }

  draw_text.Append("Bin");
  draw_text.Append(BinName[binorder[NFold-1]]);
  draw_text.Append(")");
  */
  TString draw_text="(amp*mbratio)";
  for (int k=0;k<NFold;k++)
  {
  draw_text.Append(":");
  draw_text.Append(BinName[binorder[k]]);
  }

  //  draw_text.Append(":");
  //draw_text.Append(BinName[binorder.back()]);

  std::cout<< draw_text<<std::endl;

  /*  TH1F *hNelecLT = new TH1F("hNelecLT",Form("Number of electrons as function of %s",BinName[binorder[0]]),NEdges[binorder[0]]-1,BinEdges[binorder[0]]);
  TH1F *hNelecST = new TH1F("hNelecST",Form("Number of electrons as function of %s",BinName[binorder[0]]),NEdges[binorder[0]]-1,BinEdges[binorder[0]]);

  //N electrons
  Float_t ev,ev_prev,bv,bv_prev,vzec, vzec_prev,W,W_prev,Nu,Nu_prev;
  Int_t Nentries = tde->GetEntries();
  tde->SetBranchAddress("Event",&ev);
  tde->SetBranchAddress("Q2",&bv);
  tde->SetBranchAddress("vzec",&vzec);
  tde->SetBranchAddress("W",&W);
  tde->SetBranchAddress("Nu",&Nu);

  tde->GetEntry(0);
  ev_prev=ev;
  bv_prev = bv;
  vzec_prev = vzec;
  W_prev = W;
  Nu_prev = Nu;
  Float_t NeD=0,NeA=0;
  for (int k =0;k<Nentries;k++)
  {
    tde->GetEntry(k);
    if(ev!=ev_prev)
    {
      //      cout <<bv_prev<<"\t"<<W_prev<<"\t"<<Nu_prev<<"\n";
      if ((bv_prev>1.0)&&(W_prev>2)&&(Nu_prev/5.014)<0.85)//DIS
      {
	if (-31.8<vzec&&vzec<-28.40){ hNelecLT->Fill(bv_prev);NeD++;}
	else if (!(st.CompareTo("Fe"))&& -25.65<vzec_prev&&vzec_prev<-24.26 ){hNelecST->Fill(bv_prev);NeA++;}
	else if (!(st.CompareTo("C"))&& -25.33<vzec_prev&&vzec_prev<-24.10 ){hNelecST->Fill(bv_prev);NeA++;}
	else if (!(st.CompareTo("Pb"))&& -25.54<vzec_prev&&vzec_prev<-24.36 ){hNelecST->Fill(bv_prev);NeA++;}
      }
      ev_prev=ev;
      bv_prev = bv;
      vzec_prev = vzec;
      W_prev = W;
      Nu_prev = Nu;
    }
  }
  cout<<"normalization factor "<<st<<"\t"<<NeD/NeA<<endl; 
  hNelecLT->Draw();
  c->SaveAs(Form("%s/NelecLT_%s.gif",outdir.Data(),suffix.Data()));
  c->SaveAs(Form("%s/NelecLT_%s.C",outdir.Data(),suffix.Data()));

  hNelecST->Draw();
  c->SaveAs(Form("%s/NelecST_%s.gif",outdir.Data(),suffix.Data()));
  c->SaveAs(Form("%s/NelecST_%s.C",outdir.Data(),suffix.Data()));
  */

  tde= (TTree *) fdataElec->Get("Nelec");
  TString tgs,ss;
  Ssiz_t start=0;
  char tg[10];
  Double_t NeD,NeA;
  tde->SetBranchAddress("targ_conf",tg);
  tde->SetBranchAddress("NeD",&NeD);
  tde->SetBranchAddress("NeA",&NeA);

  for (int k=0;k<tde->GetEntries();k++)
  {
    start =0;
    tde->GetEntry(k);
    tgs=tg;
    tgs.Tokenize(ss,start,(const char*)"-");
    if(ss==st){break;}
  }


  Int_t nbrLT = tr1sLT->Draw(draw_text.Data(),"","goff");
  Int_t nbgLT = tg1sLT->Draw(draw_text.Data(),"","goff");

  Int_t nbrST = tr1sST->Draw(draw_text.Data(),"","goff");
  Int_t nbgST = tg1sST->Draw(draw_text.Data(),"","goff");

  Int_t nbsdLT = tdsLT->Draw(draw_text.Data(),"","goff");

  Int_t nbsdST = tdsST->Draw(draw_text.Data(),"","goff");


  cout<<"nbrLT\tnbgLT\n";

  cout<<nbrLT<<"\t"<<nbgLT<<endl;
  if (nbrLT!=nbgLT) cout<<"warning nbins different: "<<endl;
  
  for (int k=0; k<NFold;k++) std::cout<<BinName[binorder[k]]<<"\t";

  std::cout<<"NhST\t\tAccST\t\tNhLT\t\taccLT\n";
  for (int i=0; i<nbrLT;i++)
  {

    Float_t accLT = tr1sLT->GetVal(0)[i]/tg1sLT->GetVal(0)[i];
    Float_t accST = tr1sST->GetVal(0)[i]/tg1sST->GetVal(0)[i];
    Float_t sigAccLT = accLT*TMath::Sqrt(1./tr1sLT->GetVal(0)[i] + 1./tg1sLT->GetVal(0)[i]);
    Float_t sigAccST = accST*TMath::Sqrt(1./tr1sST->GetVal(0)[i] + 1./tg1sST->GetVal(0)[i]);

    if(no_acc)
    {
      sigAccST = sigAccLT = 0.;
      accLT=accST=1.;
    }

    
    Float_t NhST = tdsST->GetVal(0)[i];
    Float_t NhLT = tdsLT->GetVal(0)[i];

    Float_t MR = ( NhST/NeA/accST ) / ( NhLT/NeD/accLT ) ;

    Float_t sigMR = MR*TMath::Sqrt( 1./NhST + 1./NhLT + 1./NeA + 1./NeD + sigAccST*sigAccST/(accST*accST) + sigAccLT*sigAccLT/(accLT*accLT) );// To be Checked, wrong probably.

    hMRatio->Fill(tdsST->GetVal(1)[i],tdsST->GetVal(2)[i],MR);
    hMRatio->SetBinError(hMRatio->FindBin(tdsST->GetVal(1)[i],tdsST->GetVal(2)[i]),sigMR);

    hsigUp ->Fill(tdsST->GetVal(NFold)[i] ,1./NhST +  sigAccST*sigAccST/accST/accST);
    hsigDown ->Fill(tdsLT->GetVal(NFold-1)[i] ,1./NhLT + sigAccLT*sigAccLT/accLT/accLT);

    hNhST ->Fill(tdsST->GetVal(NFold)[i],NhST/accST);
    hNhLT ->Fill(tdsLT->GetVal(NFold)[i],NhLT/accLT);

    /*    hNhST ->Fill(tdsST->GetVal(2)[i],NhST*(1./accST)/NeST);
    hNhLT ->Fill(tdsLT->GetVal(2)[i],NhLT*(1./accLT)/NeLT);
    */
    for (int k=1; k<NFold+1;k++) std::cout<<tdsST->GetVal(k)[i]<<"\t";

    std::cout<<NhST<<"\t\t"<<accST<<"\t\t"<<NhLT<<"\t\t"<<accLT<<"\n";
    /*    if (acc)hacc->Fill(tr1s->GetVal(1)[i],tr1s->GetVal(0)[i]/tg1s->GetVal(0)[i]);
    if (acc)hacc->SetBinError(hacc->FindBin(tr1s->GetVal(1)[i]),(tr1s->GetVal(0)[i]/tg1s->GetVal(0)[i])*TMath::Sqrt(1./tr1s->GetVal(0)[i]+1./tg1s->GetVal(0)[i]));
    std::cout<<tr1s->GetVal(1)[i]<<"\t"<<tr1s->GetVal(0)[i]<<"\t"<<tg1s->GetVal(0)[i]<<"\t"<<tr1s->GetVal(0)[i]/tg1s->GetVal(0)[i]<<std::endl;
    */
  }
   /*    hMRatio->SetMarkerColor(kBlack);
    hMRatio->SetMarkerStyle(kFullDotLarge);
    hMRatio->SetStats(0);
    hMRatio->GetXaxis()->SetTitle("nbin");
    hMRatio->GetYaxis()->SetTitle("Acceptance");
    hMRatio->GetYaxis()->SetTitleOffset(1.1);*/
    hMRatio->Draw("lego2");
    c->SaveAs(Form("%s/hMRatio%s.gif",outdir.Data(),suffix.Data()));
    c->SaveAs(Form("%s/hMRatio%s.C",outdir.Data(),suffix.Data()));

    for (int k = 1; k<=hNhST->GetNbinsX();k++)
    {
      Float_t R = (hNhST->GetBinContent(k)) / (hNhLT->GetBinContent(k));

      Float_t MR = R*NeD/NeA;
      //      Float_t MR = R;
      hMRatioProj->SetBinContent(k,MR);
      Float_t err = R*TMath::Sqrt( (hsigUp->GetBinContent(k) / (hNhST->GetBinContent(k)*hNhST->GetBinContent(k) ) + hsigDown->GetBinContent(k) / (hNhLT->GetBinContent(k)*hNhLT->GetBinContent(k))  + 1. / NeA + 1./NeD ) ) ;
      hMRatioProj->SetBinError(k,err);
    }

    hMRatioProj->SetTitle(Form("Multiplicity Ratio (%s)",BinName[binorder.back()]));
    hMRatioProj->SetMarkerColor(kBlack);
    hMRatioProj->SetMarkerStyle(kFullDotLarge);
    hMRatioProj->SetStats(0);
    hMRatioProj->GetXaxis()->SetTitle(Form("%s",BinName[binorder.back()]));
    hMRatioProj->GetYaxis()->SetTitle(Form("R(%s)",BinName[binorder.back()]));
    hMRatioProj->GetYaxis()->SetTitleOffset(1.1);
    hMRatioProj->Draw("ep");

    c->SaveAs(Form("%s/hMRatio1d_%s_%s.gif",outdir.Data(),BinName[binorder.back()],suffix.Data()));
    c->SaveAs(Form("%s/hMRatio1d_%s_%s.C",outdir.Data(),BinName[binorder.back()],suffix.Data()));


  return 0;
}
  
inline void get_bin_info(const char *bfile)
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
  int NB = 200;
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
    cout<<tok<<endl;
    be=tok.Atoi()-1;
    NEdges[k_f]=be;
    BinEdges[k_f]=new Float_t[be];
    s.Tokenize(tok,from);
    cout<<tok.Data()<<endl;
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
      cout<<"\t"<<BinEdges[k_f][k];
    }
    cout<<endl;

  }
}


inline void print_help()
{
  std::cout<<"####### Help #########\n"
    "\t-a                    : include acceptance pictures.\n"
    "\t-r <simrec file>      : sim reconstructed file. Default bindata.root\n"
    "\t-g <gsim file>        : gsim file. Default bindata.root\n"
    "\t-d <dir>              : Set out directory. Default accQ2Z\n"
    "\t-t <target type>      : Set solid target. Default C\n"
    "\t-l                    : use liquid target.\n"
    "\t-n                    : use liquid target.\n"
    "\t-o <0,1,2...>         : bin order\n" 
    "\t-h                    : Print help.\n"
    "#########################"	   <<std::endl;
  exit(0);
}


inline int parse_opt(int argc, char* argv[])
{
  int c;
  if(argc==1)
    print_help();
  while ((c = getopt (argc, argv, "ar:g:hd:lt:o:n")) != -1)
    switch (c)
      {
      case 'a':
        acc_flag = true;
        break;

      case 'r':
        srLTfile.Append(optarg);
        break;
      case 't':
        st.Append(optarg);
        break;
      case 'g':
        gsLTfile.Append(optarg);
        break;
      case 'd':
        outdir.Append(optarg);
        break;
      case 'n':
        no_acc = true;
        break;
      case 'l':
        lt.Append("D");
        break;
      case 'o':
	{
	  std::istringstream ins(optarg);
	  for (std::string p; std::getline(ins,p,','); )
	  {
	    if (binorder.size()>NFold) break;
	    int nf=atoi( p.c_str() );
	    if (nf>NFold-1) abort();
	    binorder.push_back( nf );
	  }
	}
	break;
      case 'h':
	print_help();
	break;
      case '?':
        if (optopt == 'r')
          fprintf (stderr, "Option -%c target type [Fe | C | Pb | Al].\n", optopt);
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

