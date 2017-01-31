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
TString srecfile, outdir, gsimfile,st,lt,suffix;
Int_t NFold;
Int_t *NEdges;
Char_t**  BinName;
Float_t** BinEdges;
std::vector<int> binorder;

inline void get_bin_info(const char *bfile ="binning_info.txt");
inline void print_help();
inline int parse_opt(int argc, char* argv[]);



int main(int argc, char *argv[])
{
  get_bin_info();
  parse_opt(argc,argv);
  TCanvas *c = new TCanvas("c","c",1200,900);
  c->SetGrid();

  if (outdir.IsNull())  outdir.Append("accQ2Z");
  if (srecfile.IsNull())  srecfile.Append("sim_CD_C/binned.root");
  if (gsimfile.IsNull())  gsimfile.Append("gsim_CD_Cgsim/binned.root");
  if (st.IsNull()) st.Append("C");
  
  struct stat sb;
  if (stat(outdir.Data(), &sb) != 0)
  {
    std::cout<<"Folder: "<<outdir.Data()<<" doesn't exist. creating...\n";
    system(Form("mkdir %s",outdir.Data()));
  }

  std::cout<<"########\nsim rec file: "<<srecfile.Data()<<" gsim file: "<<gsimfile.Data()<<"\n##########\n";

  TFile * fr = new TFile(srecfile.Data(),"read");
  TFile * fg = new TFile(gsimfile.Data(),"read");

  int Nbins = NEdges[0]-1;
  suffix.Append(BinName[0]);
  for (int kf=1;kf<NFold;kf++)
  {
    Nbins *= NEdges[kf]-1;
    suffix.Append("_");
    suffix.Append(BinName[kf]);
  }

  TH1F *hgsim = new TH1F("hgsim","",Nbins+2,-1,Nbins+1);
  TH1F *hrec = new TH1F("hrec","",Nbins+2,-1,Nbins+1);
  TH1F *hacc = new TH1F("hacc","Acceptance",Nbins+2,-1,Nbins+1);
  //TH1F *hgsim,*hrec;
  TGraph *grec, *ggsim;
  TNtuple *tr1, *tr1s,  *tg1, *tg1s;


  tr1 = (TNtuple *)fr ->Get("raw_binned");
  tr1s = (TNtuple *)fr ->Get("Amp_binned");

  tg1 = (TNtuple *)fg ->Get("raw_binned");
  tg1s = (TNtuple *)fg ->Get("Amp_binned");

  //  Nr = tr1->GetEntries();
  //Ng = tg1->GetEntries();
  TString draw_text="(amp*mbratio):(";
  if (binorder.empty()) for (int i=0;i<NFold;i++) binorder.push_back(i);
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
  draw_text.Append("):BinQ2:BinZ");
  std::cout<< draw_text<<std::endl;
  Int_t nbr = tr1s->Draw(draw_text.Data(),"","goff");
  Int_t nbg = tg1s->Draw(draw_text.Data(),"","goff");
  cout<<"nbr\tnbg\n";

  cout<<nbr<<"\t"<<nbg<<endl;
  if (nbr!=nbg) cout<<"warning nbins different: "<<endl;
  std::cout<<"bin\tQ2\t\tZ\t\trec\t\tthr\t\tacc\n";
  for (int i=0; i<nbr;i++)
  {
    //    hrec->Fill(tr1s->GetV2()[i],tr1s->GetV1()[i]/Nr);
    // hgsim->Fill(tg1s->GetV2()[i],tg1s->GetV1()[i]/Ng);
    hacc->Fill(tr1s->GetV2()[i],tr1s->GetV1()[i]/tg1s->GetV1()[i]);
    hacc->SetBinError(hacc->FindBin(tr1s->GetV2()[i]),(tr1s->GetV1()[i]/tg1s->GetV1()[i])*TMath::Sqrt(1./tr1s->GetV1()[i]+1./tg1s->GetV1()[i]));
    std::cout<<tr1s->GetV2()[i]<<"\t"<<tr1s->GetVal(2)[i]<<"\t\t"<<tr1s->GetVal(3)[i]<<"\t\t"<<tr1s->GetV1()[i]<<"\t\t"<<tg1s->GetV1()[i]<<"\t\t"<<tr1s->GetV1()[i]/tg1s->GetV1()[i]<<std::endl;
  }
 
  hgsim->SetMarkerColor(kRed);
  hgsim->SetMarkerStyle(kFullDotLarge);
 
  hrec->SetMarkerColor(kBlack);
  hrec->SetMarkerStyle(kFullDotLarge);
  
  hacc->SetMarkerColor(kBlack);
  hacc->SetMarkerStyle(kFullDotLarge);
  hacc->SetStats(0);
  hacc->GetXaxis()->SetTitle("nbin");
  hacc->GetYaxis()->SetTitle("Acceptance");
  hacc->GetYaxis()->SetTitleOffset(1.1);


  hacc->Draw("p");
  c->SaveAs(Form("%s/acc%s.gif",outdir.Data(),suffix.Data()));
  c->SaveAs(Form("%s/acc%s.C",outdir.Data(),suffix.Data()));

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
    "\t-r <simrec file>      : sim reconstructed file. Default bindata.root\n"
    "\t-g <gsim file>        : gsim file. Default bindata.root\n"
    "\t-d <dir>              : Set out directory. Default accQ2Z\n"
    "\t-t <target type>      : Set solid target. Default C\n"
    "\t-l                    : use liquid target.\n"
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
  while ((c = getopt (argc, argv, "r:g:hd:lt:o:")) != -1)
    switch (c)
      {
      case 'r':
        srecfile.Append(optarg);
        break;
      case 't':
        st.Append(optarg);
        break;
      case 'g':
        gsimfile.Append(optarg);
        break;
      case 'd':
        outdir.Append(optarg);
        break;
      case 'l':
        lt.Append(optarg);
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

