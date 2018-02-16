#include <iostream>
#include "TROOT.h"
#include "TF1.h"
#include "TH1F.h"
#include "TMath.h"
#include "TCanvas.h"
#include "TString.h"
#include "TStyle.h"
#include "TNtuple.h"
#include "TMathText.h"
#include "TFile.h"
#include "Math/Integrator.h"
TH1F *h;

Double_t fconv(Double_t *x,Double_t *par)
{
  Double_t w=par[0];// step width
  Double_t m=par[1];// step center.
  Double_t G=par[2];// Gain.
  Double_t sigma=par[3];// sigma gaussian
  Double_t mu=par[4];// mean gaussian
  Double_t p0=par[5];// p0 
  //Double_t p1=par[6];// p1 
  //  Double_t p2=par[7];// p2 
  //p2*x*x + p1*x + p0
  Double_t xx=x[0];

  Double_t Lmin = (m -xx -mu-w/2.)/(2.*sigma);
  Double_t Lmax = (m -xx -mu+w/2.)/(2.*sigma);

  return G*(TMath::Erf(Lmax) - TMath::Erf(Lmin)) + p0 ;//+ p1*xx ;//+ p2*xx*xx;
}

//int main(int argc, char *argv[])
int convolute(char* fname = "pi0_CD.root")
{
  TFile *f = new TFile(fname);
  TNtuple *t = (TNtuple *)f->Get("outdata");
  TStyle *sty = new TStyle();
  sty->SetOptFit();
  TCanvas *c =new TCanvas("c","c",800,600);
  t->Draw("vzec>>h(500,-26,-23)");
  h = (TH1F *)gROOT->FindObject("h");
  h->Draw("e");
  //  TF1 *fnc = new TF1("fc",fconv,-32,-28,8);
  /*  fnc->SetParLimits(0,0,3);
  fnc->SetParLimits(1,0,-30);
  fnc->SetParLimits(2,0,16000);
  */
  //fnc->SetParLimits(3,0,50);
  //fnc->SetParLimits(4,-100,100);
  //  fnc->SetParLimits(0,5,100);
  //fnc->SetParLimits(0,6,0.1);
  TF1* fc = new TF1("fc","[0]*(TMath::Erf(([1] -x +[2]/2.)/(TMath::Sqrt(2)*[3])) - TMath::Erf( ([1] -x -[2]/2.)/(TMath::Sqrt(2)*[3]) ) ) + [4] + [5]*x + [6]*x*x",-26,-23);
  fc->SetParName(0,"G");
  fc->SetParName(1,"m");
  fc->SetParName(2,"w");
  fc->SetParName(3,"#sigma");
  fc->SetParName(4,"p0");
  fc->SetParName(5,"p1");
  fc->SetParName(6,"p2");
  

  fc->SetParameters(10000.,-25.,2.,0.2,-4000,-500,-500);
  // fc->SetParameters(10000.,-30.,2.,0.2,-4000,-500,-500);

  //  fnc->SetParameters(3.,-30.,1e4,0.05,-4,200);
  h->Fit("fc","R");
  TMathText *tex = new TMathText(-31,4000,"G(Erf( \\frac{m-x-\\frac{w}{2}}{\\sqrt{2}\\sigma}) - Erf( \\frac{m-x-\\frac{w}{2}}{\\sqrt{2}\\sigma})) + p_0 + p_1x + p_2x^2");
  tex->Draw();
  h->GetXaxis()->SetTitle("z");
  h->GetYaxis()->SetTitle("\\ dN/dz");
  h->GetYaxis()->SetTitleOffset(1.1);

  return 0;
}
