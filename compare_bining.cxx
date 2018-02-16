{
  TString acc="_new";
  gROOT->ProcessLine(Form(".x Ratio%sC/hMRatio1d_Z_Q2_Nu_Z.C",acc.Data()));
  TH1F *hCn= ( TH1F *)hMRatioProj->Clone("hCn");
  gROOT->ProcessLine(Form(".x Ratio%sFe/hMRatio1d_Z_Q2_Nu_Z.C",acc.Data()));
  TH1F *hFen= ( TH1F *)hMRatioProj->Clone("hFen");
  gROOT->ProcessLine(Form(".x Ratio%sPb/hMRatio1d_Z_Q2_Nu_Z.C",acc.Data()));
  TH1F *hPbn= ( TH1F *)hMRatioProj->Clone("hPbn");
  hCn->SetMarkerStyle(kFullTriangleUp);
  hCn->SetMarkerColor(kRed);
  hCn->SetLineColor(kRed);
  hFen->SetMarkerStyle(kFullTriangleUp);
  hFen->SetMarkerColor(kBlue);
  hFen->SetLineColor(kBlue);
  hPbn->SetMarkerStyle(kFullTriangleUp);
  hPbn->SetMarkerColor(kBlack);
  hPbn->SetLineColor(kBlack);

  acc="";
  gROOT->ProcessLine(Form(".x Ratio%sC/hMRatio1d_Z_Q2_Nu_Z.C",acc.Data()));
  TH1F *hC= ( TH1F *)hMRatioProj->Clone("hC");
  gROOT->ProcessLine(Form(".x Ratio%sFe/hMRatio1d_Z_Q2_Nu_Z.C",acc.Data()));
  TH1F *hFe= ( TH1F *)hMRatioProj->Clone("hFe");
  gROOT->ProcessLine(Form(".x Ratio%sPb/hMRatio1d_Z_Q2_Nu_Z.C",acc.Data()));
  TH1F *hPb= ( TH1F *)hMRatioProj->Clone("hPb");
  hC->SetMarkerStyle(kFullCircle);
  hC->SetMarkerColor(kRed);
  hC->SetLineColor(kRed);
  hFe->SetMarkerStyle(kFullCircle);
  hFe->SetMarkerColor(kBlue);
  hFe->SetLineColor(kBlue);
  hPb->SetMarkerStyle(kFullCircle);
  hPb->SetMarkerColor(kBlack);
  hPb->SetLineColor(kBlack);

  TCanvas *cn = new TCanvas("cn","cn",1200,900);
  cn->SetGrid();
  TH1F *hf = c->DrawFrame(0.3,0.4,0.8,1.0,"Multiplicity Ratio");
  hf->GetXaxis()->SetTitle("Z");
  hf->GetYaxis()->SetTitle("R_{#pi_{0}} no Radiative correction");
  
  hC->Draw("samepe");
  hFe->Draw("samepe");
  hPb->Draw("samepe");
  hCn->Draw("samepe");
  hFen->Draw("samepe");
  hPbn->Draw("samepe");
  

  TLegend *l = new TLegend(0.65,0.73,0.9,0.9);
  l->AddEntry(hC,"C (Q^{2},Z)","lp");
  l->AddEntry(hFe,"Fe (Q^{2},Z)","lp");
  l->AddEntry(hPb,"Pb (Q^{2},Z)","lp");
  l->AddEntry(hCn,"C (Q^{2},#nu,Z)","lp");
  l->AddEntry(hFen,"Fe (Q^{2},#nu,Z)","lp");
  l->AddEntry(hPbn,"Pb (Q^{2},#nu,Z)","lp");

  l->Draw();
  cn->SaveAs(Form("Ratio_bincmp%s.gif",acc.Data()));
  cn->SaveAs(Form("Ratio_bincmp%s.C",acc.Data()));

  TH1F *hd = (TH1F*)hC->Clone("hd");
  TH1F *hC_diff_rel=(TH1F*)hC->Clone("hdC_diff_rel");
  TH1F *hFe_diff_rel=(TH1F*)hC->Clone("hdFe_diff_rel");
  TH1F *hPb_diff_rel=(TH1F*)hC->Clone("hdPb_diff_rel");

  Float_t miny=500,maxy=-500;

  for(int i=0;i<hC_diff_rel->GetNbinsX();i++)
  {
    Double_t diff = (hCn->GetBinContent(i+1) - hC->GetBinContent(i+1))/hCn->GetBinContent(i+1)*100;
    hC_diff_rel->SetBinContent(i+1,diff);
    if(miny>diff) miny=diff;
    if(maxy<diff) maxy=diff;

    Double_t diff = (hFen->GetBinContent(i+1) - hFe->GetBinContent(i+1))/hFen->GetBinContent(i+1)*100; 
    hFe_diff_rel->SetBinContent(i+1,diff);
    if(miny>diff) miny=diff;
    if(maxy<diff) maxy=diff;

    Double_t diff = (hPbn->GetBinContent(i+1) - hPb->GetBinContent(i+1))/hPbn->GetBinContent(i+1)*100;
    hPb_diff_rel->SetBinContent(i+1,diff);
    if(miny>diff) miny=diff;
    if(maxy<diff) maxy=diff;

  }

  hC_diff_rel->SetMaximum(maxy + (maxy-miny)*0.05);
  hC_diff_rel->SetMinimum(miny - (maxy-miny)*0.05);
  hC_diff_rel->Draw("p");
  hFe_diff_rel->Draw("samep");
  hPb_diff_rel->Draw("samep");

  //  hd->Add(hCn,hC,1.,-1.);
  //  hd->SetMarkerColor(kBlack);
  //hd->SetMarkerStyle(kFullDotLarge);
  //hd->Draw();
  TLegend *l = new TLegend(0.65,0.73,0.9,0.9);
  l->AddEntry(hC,"C (Q^{2},Z)","lp");
  l->AddEntry(hFe,"Fe (Q^{2},Z)","lp");
  l->AddEntry(hPb,"Pb (Q^{2},Z)","lp");
  l->AddEntry(hCn,"C (Q^{2},#nu,Z)","lp");
  l->AddEntry(hFen,"Fe (Q^{2},#nu,Z)","lp");
  l->AddEntry(hPbn,"Pb (Q^{2},#nu,Z)","lp");

  l->Draw();

  cn->SaveAs(Form("Ratio_bincmp_diff%s_rel.gif",acc.Data()));
  cn->SaveAs(Form("Ratio_bincmp_diff%s_rel.C",acc.Data()));

  
}
