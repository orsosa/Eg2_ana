{
  char *outdir = Form("accpic");
  TCanvas *c = new TCanvas("c","c",1200,720);
  c->SetGrid();
  TFile * f = new TFile("pi0_eta_id_pictures_sim_2aOnly_FeD_Fe/pi0_eta_sim_FeD_Fe_onlygamma_binned.root","read");
  TH1F *hgsim = new TH1F("hgsim","",32,-1,31);
  TH1F *hrec = new TH1F("hrec","",32,-1,31);
  TH1F *haccp = new TH1F("haccp","#gamma acceptance (P,#theta)",30,0,30);
  TH1F *haccq2 = new TH1F("haccq","#gamma acceptance (Q^{2},#theta)",15,0,15);
  //  TH1F *haccq2er = new TH1F("haccq2er","",15,0,15);
  TH1F *haccpMc = new TH1F("haccpMc","#gamma acceptance (Pt^{2},Th) M_{#pi^{0}} Cut",30,0,30);
  TH1F *haccq2Mc = new TH1F("haccq2Mc","#gamma acceptance (Q^{2},Th)  M_{#pi^{0}} Cut",15,0,15);
  //TH1F *hgsim,*hrec;
  TGraph *grec, *ggsim;
  TNtuple *tr1, *tr2, *tr1s, *tr2s, *tg1, *tg2, *tg1s, *tg2s;
  Float_t Ng,Nr;
  Float_t kMPi0r=1.33196e-1;//Got from rec sim.
  Float_t kSPi0r=1.94034e-2;//Got from rec sim
  Float_t kMPi0g= 0.135;//Got from gsim.
  Float_t kSPi0g= 0.00066297;//Got from gsim.


  tr1 = (TNtuple *)f ->Get("trec1");
  tr2 = (TNtuple *)f ->Get("trec2");
  tgs1 = (TNtuple *)f ->Get("tgsim1");
  tgs2 = (TNtuple *)f ->Get("tgsim2");


  //Nr = tr1->GetEntries();
  //  Ng = tg1->GetEntries();
  
  Int_t NThBin =5;
  Int_t  NQ2Bin = 3;
  Int_t NNuBin = 1;
  Int_t NPBin = 6;
  Float_t Nbins = NQ2Bin*NThBin*NNuBin,Nr=0,Ngs=0;
  tr1->Draw(Form("bin>>hr(%f,0,%f)",Nbins,Nbins),"","goff");
  tgs1->Draw(Form("bin>>hgs(%f,0,%f)",Nbins,Nbins),"","goff");
  TH1F *hr = (TH1F*) gROOT->FindObject("hr");
  TH1F *hgs = (TH1F*)  gROOT->FindObject("hgs");

  //for (int i=0; i<hr->GetNbinsX();i++)
  //{
  // haccq2->Fill(i,hr->GetBinContent(i+1)/hgs->GetBinContent(i+1));
  // haccq2->SetBinError(i+2,TMath::Sqrt(1/hr->GetBinContent(i+1) + 1/hgs->GetBinContent(i+1)));
  //}
  hr->Sumw2();
  hgs->Sumw2();
  haccq2->Divide(hr,hgs);


  haccq2->SetMarkerColor(kBlack);
  haccq2->SetMarkerStyle(kFullDotLarge);
  haccq2->SetStats(0);
  haccq2->GetXaxis()->SetTitle("nbin");
  haccq2->GetYaxis()->SetTitle("Acceptance");
  haccq2->GetYaxis()->SetTitleOffset(1.1);
  haccq2->Draw("p");

  c->SaveAs(Form("%s/gamma_acc_Q2_Th.gif",outdir));
  c->SaveAs(Form("%s/gamma_acc_Q2_Th.C",outdir));

  /*
  tr1->Draw(Form("bin>>hr(%f,0,%f)",Nbins,Nbins),Form("(%f - %f)<M&&M<(%f + %f)",kMPi0r,kSPi0r,kMPi0r,kSPi0r),"goff");
  tgs1->Draw(Form("bin>>hgs(%f,0,%f)",Nbins,Nbins),Form("(%f - %f)<M&&M<(%f + %f)",kMPi0g,kSPi0g,kMPi0g,kSPi0g),"goff");
  TH1F *hr = (TH1F*) gROOT->FindObject("hr");
  TH1F *hgs = (TH1F*)  gROOT->FindObject("hgs");

  //  for (int i=0; i<hr->GetNbinsX();i++)
  //{
  // haccq2Mc->Fill(i,hr->GetBinContent(i+1)/hgs->GetBinContent(i+1));
  //}

  hr->Sumw2();
  hgs->Sumw2();
  haccq2Mc->Divide(hr,hgs);
  

  haccq2Mc->SetMarkerColor(kBlack);
  haccq2Mc->SetMarkerStyle(kFullDotLarge);
  haccq2Mc->SetStats(0);
  haccq2Mc->GetXaxis()->SetTitle("nbin");
  haccq2Mc->GetYaxis()->SetTitle("Acceptance");
  haccq2Mc->GetYaxis()->SetTitleOffset(1.1);
  haccq2Mc->Draw("p");

  c->SaveAs(Form("%s/gamma_acc_q2_Th_Mcut.gif",outdir));
  c->SaveAs(Form("%s/gamma_acc_q2_Th_Mcut.C",outdir));
*/


  TCanvas *c1 = new TCanvas("c1","c1",1200,720);
  c1->SetGrid();
  Nbins = NPBin*NThBin*NNuBin;
  tr2->Draw(Form("bin>>hr(%f,0,%f)",Nbins,Nbins),"","goff");
  tgs2->Draw(Form("bin>>hgs(%f,0,%f)",Nbins,Nbins),"","goff");

  hr = (TH1F*) gROOT->FindObject("hr");
  hgs = (TH1F*)  gROOT->FindObject("hgs");

  //  for (int i=0; i<hr->GetNbinsX();i++)
  //{
  //haccp->Fill(i,hr->GetBinContent(i+1)/hgs->GetBinContent(i+1));
  //}

  hr->Sumw2();
  hgs->Sumw2();
  haccp->Divide(hr,hgs);


  haccp->SetMarkerColor(kBlack);
  haccp->SetMarkerStyle(kFullDotLarge);
  haccp->SetStats(0);
  haccp->GetXaxis()->SetTitle("nbin");
  haccp->GetYaxis()->SetTitle("Acceptance");
  haccp->GetYaxis()->SetTitleOffset(1.1);

  haccp->Draw("p");
  c1->SaveAs(Form("%s/gamma_acc_P_Th.gif",outdir));
  c1->SaveAs(Form("%s/gamma_acc_P_Th.C",outdir));
  /*
  tr2->Draw(Form("bin>>hr(%f,0,%f)",Nbins,Nbins),Form("(%f - %f)<M&&M<(%f + %f)",kMPi0r,kSPi0r,kMPi0r,kSPi0r),"goff");
  tgs2->Draw(Form("bin>>hgs(%f,0,%f)",Nbins,Nbins),Form("(%f - %f)<M&&M<(%f + %f)",kMPi0g,kSPi0g,kMPi0g,kSPi0g),"goff");

  hr = (TH1F*) gROOT->FindObject("hr");
  hgs = (TH1F*)  gROOT->FindObject("hgs");

  //  for (int i=0; i<hr->GetNbinsX();i++)
  //{
  // haccpMc->Fill(i,hr->GetBinContent(i+1)/hgs->GetBinContent(i+1));
  //}
  hr->Sumw2();
  hgs->Sumw2();
  haccpMc->Divide(hr,hgs);


  haccpMc->SetMarkerColor(kBlack);
  haccpMc->SetMarkerStyle(kFullDotLarge);
  haccpMc->SetStats(0);
  haccpMc->GetXaxis()->SetTitle("nbin");
  haccpMc->GetYaxis()->SetTitle("Acceptance");
  haccpMc->GetYaxis()->SetTitleOffset(1.1);

  haccpMc->Draw("p");
  c1->SaveAs("gamma_acc_P_Th_Mcut.gif");
  c1->SaveAs("gamma_acc_P_Th_Mcut.C");
  */
  /*  c->Divide(2,1);
  c->cd(1);
  c->GetPad(1)->DrawFrame(-1,0,17,1);
  hrec->Draw("psame");
  hgsim->Draw("psame");
  c->cd(2);
  c->GetPad(2)->DrawFrame(-1,0,17,0.1);
  haccq2->Draw("psame");
  */
  
}
