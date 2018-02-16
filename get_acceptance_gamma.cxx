{
  TCanvas *c = new TCanvas("c","c",1200,720);
  c->SetGrid();
  char *outdir = Form("accpic");
  TFile * f = new TFile("pi0_eta_id_pictures_sim_2aOnly_FeD_Fe/pi0_eta_sim_FeD_Fe_gamma_binned.root","read");
  TH1F *hgsim = new TH1F("hgsim","",32,-1,31);
  TH1F *hrec = new TH1F("hrec","",32,-1,31);
  TH1F *haccpt2 = new TH1F("haccpt2","#gamma acceptance (Pt^{2},Z)",30,0,30);
  TH1F *haccq2 = new TH1F("haccq2","#gamma acceptance (Q^{2},Z)",15,0,15);
  //  TH1F *haccq2er = new TH1F("haccq2er","",15,0,15);
  TH1F *haccpt2Mc = new TH1F("haccpt2Mc","#gamma acceptance (Pt^{2},Z) M_{#pi^{0}} Cut",30,0,30);
  TH1F *haccq2Mc = new TH1F("haccq2Mc","#gamma acceptance (Q^{2},Z)  M_{#pi^{0}} Cut",15,0,15);
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
  
  Int_t NZBin =5;
  Int_t  NQ2Bin = 3;
  Int_t NNuBin = 1;
  Int_t NPt2Bin = 6;
  Float_t Nbins = NQ2Bin*NZBin*NNuBin,Nr=0,Ngs=0;
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

  c->SaveAs(Form("%s/gamma_acc_q2_Z.gif",outdir));
  c->SaveAs(Form("%s/gamma_acc_q2_Z.C",outdir));


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

  c->SaveAs(Form("%s/gamma_acc_q2_Z_Mcut.gif",outdir));
  c->SaveAs(Form("%s/gamma_acc_q2_Z_Mcut.C",outdir));



  TCanvas *c1 = new TCanvas("c1","c1",1200,720);
  c1->SetGrid();
  Nbins = NPt2Bin*NZBin*NNuBin;
  tr2->Draw(Form("bin>>hr(%f,0,%f)",Nbins,Nbins),"","goff");
  tgs2->Draw(Form("bin>>hgs(%f,0,%f)",Nbins,Nbins),"","goff");

  hr = (TH1F*) gROOT->FindObject("hr");
  hgs = (TH1F*)  gROOT->FindObject("hgs");

  //  for (int i=0; i<hr->GetNbinsX();i++)
  //{
  //haccpt2->Fill(i,hr->GetBinContent(i+1)/hgs->GetBinContent(i+1));
  //}

  hr->Sumw2();
  hgs->Sumw2();
  haccpt2->Divide(hr,hgs);


  haccpt2->SetMarkerColor(kBlack);
  haccpt2->SetMarkerStyle(kFullDotLarge);
  haccpt2->SetStats(0);
  haccpt2->GetXaxis()->SetTitle("nbin");
  haccpt2->GetYaxis()->SetTitle("Acceptance");
  haccpt2->GetYaxis()->SetTitleOffset(1.1);

  haccpt2->Draw("p");
  c1->SaveAs(Form("%s/gamma_acc_pt2_Z.gif",outdir));
  c1->SaveAs(Form("%s/gamma_acc_pt2_Z.C",outdir));

  tr2->Draw(Form("bin>>hr(%f,0,%f)",Nbins,Nbins),Form("(%f - %f)<M&&M<(%f + %f)",kMPi0r,kSPi0r,kMPi0r,kSPi0r),"goff");
  tgs2->Draw(Form("bin>>hgs(%f,0,%f)",Nbins,Nbins),Form("(%f - %f)<M&&M<(%f + %f)",kMPi0g,kSPi0g,kMPi0g,kSPi0g),"goff");

  hr = (TH1F*) gROOT->FindObject("hr");
  hgs = (TH1F*)  gROOT->FindObject("hgs");

  //  for (int i=0; i<hr->GetNbinsX();i++)
  //{
  // haccpt2Mc->Fill(i,hr->GetBinContent(i+1)/hgs->GetBinContent(i+1));
  //}
  hr->Sumw2();
  hgs->Sumw2();
  haccpt2Mc->Divide(hr,hgs);


  haccpt2Mc->SetMarkerColor(kBlack);
  haccpt2Mc->SetMarkerStyle(kFullDotLarge);
  haccpt2Mc->SetStats(0);
  haccpt2Mc->GetXaxis()->SetTitle("nbin");
  haccpt2Mc->GetYaxis()->SetTitle("Acceptance");
  haccpt2Mc->GetYaxis()->SetTitleOffset(1.1);

  haccpt2Mc->Draw("p");
  c1->SaveAs(Form("%s/gamma_acc_pt2_Z_Mcut.gif",outdir));
  c1->SaveAs(Form("%s/gamma_acc_pt2_Z_Mcut.C",outdir));

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
