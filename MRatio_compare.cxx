{
  TString acc="_o";
  gROOT->ProcessLine(Form(".x Ratio%sC/hMRatio1d_Z_Q2_Nu_Z.C",acc.Data()));
  TH1F *hC= ( TH1F *)hMRatioProj->Clone("hC");
  gROOT->ProcessLine(Form(".x Ratio%sFe/hMRatio1d_Z_Q2_Nu_Z.C",acc.Data()));
  TH1F *hFe= ( TH1F *)hMRatioProj->Clone("hFe");
  gROOT->ProcessLine(Form(".x Ratio%sPb/hMRatio1d_Z_Q2_Nu_Z.C",acc.Data()));
  TH1F *hPb= ( TH1F *)hMRatioProj->Clone("hPb");
  hC->SetMarkerColor(kRed);
  hC->SetLineColor(kRed);
  hFe->SetMarkerColor(kBlue);
  hFe->SetLineColor(kBlue);
  hPb->SetMarkerColor(kBlack);
  hPb->SetLineColor(kBlack);

  TCanvas *cn = new TCanvas("cn","cn",1200,900);
  cn->SetGrid();
  TH1F *hf = c->DrawFrame(0.3,0.0,0.8,1.0,"Multiplicity Ratio");
  hf->GetXaxis()->SetTitle("Z");
  hf->GetYaxis()->SetTitle("R_{#pi_{0}}");
  
  hC->Draw("samepe");
  hFe->Draw("samepe");
  hPb->Draw("samepe");

  TLegend *l = new TLegend(0.2,0.4,0.4,0.5);
  l->AddEntry(hC,"C","lp");
  l->AddEntry(hFe,"Fe","lp");
  l->AddEntry(hPb,"Pb","lp");
  l->Draw();
  cn->SaveAs(Form("Ratio%s.gif",acc.Data()));
  cn->SaveAs(Form("Ratio%s.C",acc.Data()));

}
