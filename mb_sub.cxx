#include "TSpectrum.h"
#include "Riostream.h"
#include "TApplication.h"
#include "TROOT.h"
#include "TFile.h"
#include "TNtuple.h"
#include "TClasTool.h"
#include "TIdentificator.h"
#include "TMath.h"
#include "TBenchmark.h"
#include "TLorentzVector.h"
#include "TCanvas.h"
#include "TH2F.h"
#include "TLatex.h"
#include "TF1.h"
#include "TFitResultPtr.h"
#include "TFitResult.h"
#include "TLegend.h"
#include <vector>
#include <iostream>
#include <sys/stat.h>
Float_t kMprt=0.938272, kMntr =0.939565;

Double_t mbbkg(Double_t *x, Double_t *par)
{
if (x[0]< 0.5)
  return par[2]*x[0]*TMath::Exp(-(x[0]-par[0])/par[1]);
else 
  return par[2]/2.*TMath::Exp(-1./(2.*par[1]))*TMath::Exp(-1.0/(2.*par[3])*(2.*x[0]-1.));
}


int main(int argc, char *argv[]){
char bkg_type[10]="pois";
char tdef[10] = "Iron";
char *target = tdef;
char st[3] = "Fe";
char *tt;
ofstream ofile;
if (argc==2)
  target = argv[1];

if (!strcmp(target,"Iron"))
{
  tt=Form("%s","Fe");
  ofile.open("dataFe");
}
else if(!strcmp(target,"Deuterium"))
{
  tt=Form("%s","D");
  ofile.open("dataD");
}

char ddir[50];
strcpy(ddir,Form("pi0_eta_id_pictures_%sD_%s",st,tt));
char outdir[50];
strcpy(outdir,Form("mb_ZBin_%s_%sD_%s",bkg_type,st,tt));

struct stat sb;
if (stat(ddir, &sb) != 0 || !S_ISDIR(sb.st_mode))
{
  std::cout<<"Error: data directory "<<ddir<<" doesn't exist!"<<std::endl;
  exit(1);
}

if (stat(outdir, &sb) != 0)
{
    system(Form("mkdir %s",outdir));
}


TSpectrum *s = new TSpectrum(4);
Float_t NBinZ = 10;
Float_t MinZ = 0.05, MaxZ =1.;
Float_t BinWidthZ = (MaxZ-MinZ)/NBinZ;
TCanvas *c  = new TCanvas("c", "The canvas",1920,1080);
TFile * f  = new TFile(Form("%s/pi0_eta_%sD_%s.root",ddir,st,tt), "read");
TNtuple *t = (TNtuple *)f->Get("tuple");
TNtuple *tmb = (TNtuple *)f->Get("tuplemb");

/*
ifstream par_file("parameters.txt");
char name[100];

std::vector <float> bkg_par;
std::vector <float> g1_par;
std::vector <float> g2_par;

int Nf =3;// number of funcions for fit.
TF1 *bkg,*g1,*g2;
int th[Nf];

par_file.getline(name,100);// information line.
par_file.getline(name,100);// information line.

for (int i=0;i<Nf;i++)
{
  par_file.getline(name,100);
  cout<<name<<endl;
  char *ps = strtok(name," ");
  th[i]=atoi(ps);
  ps=strtok(NULL," ");

  g1= new TF1("g1",name,0.06,1);
  g2= new TF1("g2",name,0.06,1);

  while(ps)
  {
    cout<<"line: "<<line++<<"\t"<<ps<<endl;

    ps=strtok(NULL," ");
  }
}
  
return 0;
*/
TF1 *bkg;

//bkg = new TF1("bkg",mbbkg,0,1,4);
if (!strcmp(bkg_type,"poly2")) bkg = new TF1("bkg","pol2",0.06,1); //Poly 2
if (!strcmp(bkg_type,"exp")) bkg = new TF1("bkg","[1]*x*TMath::Exp(-(x)/[0])",0.06,1); //Exponential
if (!strcmp(bkg_type,"pois")) bkg = new TF1("bkg","[2]*TMath::Poisson((x)/[0],[1])",0.06,1);// Poisson:= ( (l^k e^l )/(Gamma(l+1)) )
if (!strcmp(bkg_type,"ln")) bkg = new TF1("bkg","[3]*TMath::LogNormal(x,[0],[1],[2])",0.06,1);// Log Normal.
if (!strcmp(bkg_type,"landau")) bkg = new TF1("bkg","[2]*TMath::Landau(x,[0],[1])",0.06,1); // Landau
if (!strcmp(bkg_type,"gauss")) bkg = new TF1("bkg","gaus",0.06,1); // Gaussian
bkg->SetLineColor(kBlack);

TF1 *g1 = new TF1("g1","[2]*TMath::Gaus(x,[0],[1])",0.06,1);
g1->SetNpx(500);
g1->SetLineColor(kGreen);
TF1 *g2 = new TF1("g2","[2]*TMath::Gaus(x,[0],[1])",0.06,1);
g2->SetNpx(500);
g2->SetLineColor(kBlue);
TF1 *ftot = new TF1("ftotal","bkg + g1 + g2",0.06,1);
ftot->SetNpx(500);
TF1 *ftot0 = new TF1("ftotal0","bkg + g1",0.06,1);
ftot0->SetNpx(500);


for ( int i = 0; i < NBinZ; i++)
{
  ftot->SetParLimits(0,0,0);
  ftot->SetParLimits(1,0,0);
  ftot->SetParLimits(2,0,0);
  ftot0->SetParLimits(0,0,0);
  ftot0->SetParLimits(1,0,0);
  ftot0->SetParLimits(2,0,0);

  std::cout<<"range: "<<MinZ +(i)*BinWidthZ<<"\t"<< MinZ+(i+1)*BinWidthZ<<"\t"<<std::endl;
//  tmb->Draw("M>>h(500,0,1)",Form("%f<Eh/Nu&&Eh/Nu<%f&&1.3<Q2&&Q2<1.5",MinZ +(i)*BinWidthZ,MinZ+(i+1)*BinWidthZ));
  tmb->Draw("M>>h(500,0,1)",Form("%f<Eh/Nu&&Eh/Nu<%f",MinZ +(i)*BinWidthZ,MinZ+(i+1)*BinWidthZ));
  TH1F *h = (TH1F *)gROOT->FindObject("h");
  h->Scale(1.0/h->Integral());
  Float_t DataNorm = h->Integral();

if (!strcmp(bkg_type,"poly2")) bkg->SetParameters(h->GetMaximum(),0.1,-0.2); //poly 2
if (!strcmp(bkg_type,"exp")) bkg->SetParameters(0.1,h->GetMaximum()); // Exponential decay
if (!strcmp(bkg_type,"pois"))
{
  bkg->SetParameters(0.1,h->GetMean()/0.1,h->GetMaximum()); // Poisson
  bkg->SetParLimits(0,0.,1.); // Poisson scale
  bkg->SetParLimits(1,0.,100); // Poisson mean
  bkg->SetParLimits(2,0.,1.); // Poisson High
}
if (!strcmp(bkg_type,"ln"))
{
  bkg->SetParameters(h->GetRMS(),0.,h->GetMaximum(),1.0); // Log-Normal
  bkg->SetParLimits(0,0.,5.); // Log-Normal sigma
  bkg->SetParLimits(1,-50.,0.); // Log-Normal location x>location
  bkg->SetParLimits(2,0.5,1.5); // Log-Normal scale
  bkg->SetParLimits(3,0.0,1.5); // Log-Normal high
}
if (!strcmp(bkg_type,"landau"))bkg->SetParameters(0.15,0.1,h->GetMaximum()); // Landau
if (!strcmp(bkg_type,"gauss")) bkg->SetParameters(0.1,.2,h->GetMaximum()); // Gaussian

  TFitResultPtr r = h->Fit("bkg","SRB");

//  bkg->FixParameter(0,r->Parameter(0));
//  bkg->FixParameter(1,r->Parameter(1));
//  r = h->Fit("bkg","S+B","",0.5,1); 
  h->SetTitle(Form("%s, %s",h->GetTitle(),target));

  c->SaveAs(Form("%s/Mmb_ZBin%d.gif",outdir,i));
  delete h;
//  t->Draw("M>>h(500,0,1)",Form("%f<Eh/Nu&&Eh/Nu<%f&&1.3<Q2&&Q2<1.5",MinZ +(i)*BinWidthZ,MinZ+(i+1)*BinWidthZ));
  t->Draw("M>>h(500,0,1)",Form("%f<Eh/Nu&&Eh/Nu<%f",MinZ +(i)*BinWidthZ,MinZ+(i+1)*BinWidthZ));
  h = (TH1F *)gROOT->FindObject("h");
  h->Scale(1.0/h->Integral());
//  ftot->SetParameters(r->Parameter(0),r->Parameter(1),r->Parameter(2),0.135,0.05,1000,0.550,0.2,100);
  //ftot->SetParameters(r->Parameter(0),r->Parameter(1),0.135,0.05,0.01,0.550,0.2,0.002);
  //ftot0->SetParameters(r->Parameter(0),r->Parameter(1),0.135,0.05,0.01);
  g1->SetParameters(0.130,0.1,0.01);
  g1->SetParLimits(0,0.1,0.2);
  g2->SetParameters(0.550,0.2,0.001);
  g2->SetParLimits(0,0.5,0.6);
  bool two_g = i>3;
  if (two_g)
  { 
    h->Fit("g1","B","",0.1,0.2);
    h->Fit("g2","B","",0.5,0.65);
  if (!strcmp(bkg_type,"pois"))
  {
    ftot->SetParameters(r->Parameter(0),r->Parameter(1),r->Parameter(2),g1->GetParameter(0),g1->GetParameter(1),g1->GetParameter(2),g2->GetParameter(0),g2->GetParameter(1),g2->GetParameter(2));//Poisson
    ftot->SetParLimits(3,0.1,0.2);//pois g1 mean
    ftot->SetParLimits(6,0.5,0.6);//pois g2 mean
  }
  if (!strcmp(bkg_type,"ln"))
  {
    ftot->SetParameters(r->Parameter(0),r->Parameter(1),r->Parameter(2),r->Parameter(3),g1->GetParameter(0),g1->GetParameter(1),g1->GetParameter(2),g2->GetParameter(0),g2->GetParameter(1),g2->GetParameter(2)); // Log-Normal
    ftot->SetParLimits(4,0.1,0.2);//pois g1 mean
    ftot->SetParLimits(7,0.5,0.6);//pois g2 mean
  }
  if (!strcmp(bkg_type,"exp")) ftot->SetParameters(r->Parameter(0),r->Parameter(1),g1->GetParameter(0),g1->GetParameter(1),g1->GetParameter(2),g2->GetParameter(0),g2->GetParameter(1),g2->GetParameter(2));//Exponential

    r = h->Fit("ftotal","SR");
  }
  else
  {
    h->Fit("g1","","",0.1,0.2);
  if (!strcmp(bkg_type,"pois")) ftot0->SetParameters(r->Parameter(0),r->Parameter(1),r->Parameter(2),g1->GetParameter(0),g1->GetParameter(1),g1->GetParameter(2));//Poisson
  if (!strcmp(bkg_type,"ln")) ftot0->SetParameters(r->Parameter(0),r->Parameter(1),r->Parameter(2),r->Parameter(3),g1->GetParameter(0),g1->GetParameter(1),g1->GetParameter(2));// Log-Normal

  //ftot0->FixParameter(0,r->Parameter(0));
  //ftot0->FixParameter(1,r->Parameter(1));
  //ftot0->FixParameter(2,r->Parameter(2));
  if (!strcmp(bkg_type,"exp")) ftot0->SetParameters(r->Parameter(0),r->Parameter(1),r->Parameter(2),g1->GetParameter(0),g1->GetParameter(1),g1->GetParameter(2));// Exponential
    r = h->Fit("ftotal0","SR");
  }
  h->SetTitle(Form("%s, %s",h->GetTitle(),target));
  if (!strcmp(bkg_type,"ln"))
  {
    bkg->SetParameters(r->Parameter(0),r->Parameter(1),r->Parameter(2),r->Parameter(3));//LN
    g1->SetParameters(r->Parameter(4),r->Parameter(5),r->Parameter(6));//LN
  }
  if (!strcmp(bkg_type,"pois"))
  {
    bkg->SetParameters(r->Parameter(0),r->Parameter(1),r->Parameter(2));//Pois
    g1->SetParameters(r->Parameter(3),r->Parameter(4),r->Parameter(5));//Pois
  }
  bkg->Draw("same");
  g1->Draw("same");

  if (two_g)
  {
    if (!strcmp(bkg_type,"ln")) g2->SetParameters(r->Parameter(7),r->Parameter(8),r->Parameter(9));//LN
    if (!strcmp(bkg_type,"pois")) g2->SetParameters(r->Parameter(6),r->Parameter(7),r->Parameter(8));//Pois

    g2->Draw("same");
  }
  TLegend *l = new TLegend(0.4,0.4,0.5,0.6);
  l->AddEntry(g1,"#pi_{0}","lp");
  l->AddEntry(g2,"#eta","lp");
  l->AddEntry(bkg,"bkgd","lp");
  l->Draw();
  ofile<<g1->Integral(0.,0.3)<<std::endl;

  
  std::cout<<"filename: "<<Form("%s/M_ZBin%d.gif",outdir,i)<<std::endl;
  c->SaveAs(Form("%s/M_ZBin%d.gif",outdir,i));

  delete h;
}
f->Close();
ofile.close();

return 0;
}
