{
  char *suffix="";
  TCanvas *c = new TCanvas("c","c",1240,768);
  //  TFile *_file0 = TFile::Open(Form("Ne_TargConf_Q2Xb_HS_%s.root",suffix));
  // TFile *_file0 = TFile::Open(Form("Ne_TargConf_HS_sf_newcut%s.root",suffix));
 TFile *_file0 = TFile::Open(Form("Ne_TargConf_HS_hcut_i%s.root",suffix));
  



  c->SetGrid();
//TFile *_file1 = TFile::Open(Form("Ne_TargConf_Q2Xb_OS_%s.root",suffix));
//  TFile *_file1 = TFile::Open(Form("Ne_TargConf_OS_sf_newcut%s.root",suffix));
  TFile *_file1 = TFile::Open(Form("Ne_TargConf_HS_ocut_i%s.root",suffix));

  THStack *hsH=_file0->Get("hemcstN_ai");
  THStack *hsO=_file1->Get("hemcstN_ai");

  THStack *hsHna=_file0->Get("hemcstN");
  THStack *hsOna=_file1->Get("hemcstN");

  TLegend *l = new TLegend(0.7,0.55,0.8,0.85);
  for (int k=0;k< hsH->GetNhists();k++)
  {
    ((TH1F*)hsH->GetHists()->At(k))->SetMarkerStyle(kOpenCircle);
    ((TH1F*)hsO->GetHists()->At(k))->SetMarkerStyle(kFullCircle);

    l->AddEntry(((TH1F*)hsH->GetHists()->At(k)),Form("%s_H",((TH1F*)hsH->GetHists()->At(k))->GetName()));
    l->AddEntry(((TH1F*)hsO->GetHists()->At(k)),Form("%s_O",((TH1F*)hsO->GetHists()->At(k))->GetName()));

  }

  hsO->SetMaximum(1.1);
  hsO->SetMinimum(0.5);
  hsH->SetMaximum(1.1);
  hsH->SetMinimum(0.5);
  
  hsO->Draw("nostack");
  hsH->Draw("nostacksame");
  hsH->GetXaxis()->SetTitle("x_{B}");
  hsH->GetXaxis()->SetTitle("#sigma^{A}/#sigma^{D}");
  hsH->GetXaxis()->SetTitle("x_{B}");
  hsH->GetYaxis()->SetTitle("#sigma^{A}/#sigma^{D}");
  hsO->GetYaxis()->SetTitle("#sigma^{A}/#sigma^{D}");
  hsO->GetXaxis()->SetTitle("x_{B}");

  l->Draw();
  c->SaveAs(Form("EMC_H_vs_O_%s.gif",suffix));
  c->SaveAs(Form("EMC_H_vs_O_%s.C",suffix));

  /*
  TLegend *l1 = new TLegend(0.3,0.4,0.4,0.7);
  TLegend *l2 = new TLegend(0.3,0.4,0.4,0.7);

  for (int k=0;k< hsH->GetNhists();k++)
  {
    ((TH1F*)hsHna->GetHists()->At(k))->SetMarkerStyle(kOpenCircle);
    ((TH1F*)hsH->GetHists()->At(k))->SetMarkerStyle(kFullCircle);

    ((TH1F*)hsOna->GetHists()->At(k))->SetMarkerStyle(kOpenCircle);
    ((TH1F*)hsO->GetHists()->At(k))->SetMarkerStyle(kFullCircle);

    l1->AddEntry(((TH1F*)hsH->GetHists()->At(k)),Form("%s",((TH1F*)hsH->GetHists()->At(k))->GetName()));
    l1->AddEntry(((TH1F*)hsHna->GetHists()->At(k)),Form("%s",((TH1F*)hsHna->GetHists()->At(k))->GetName()));

    l2->AddEntry(((TH1F*)hsO->GetHists()->At(k)),Form("%s",((TH1F*)hsO->GetHists()->At(k))->GetName()));
    l2->AddEntry(((TH1F*)hsO->GetHists()->At(k)),Form("%s",((TH1F*)hsOna->GetHists()->At(k))->GetName()));

  }
  */


}
