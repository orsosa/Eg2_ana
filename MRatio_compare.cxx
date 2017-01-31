{
  TString acc="";
  gROOT->ProcessLine(Form(".x Ratio%sC/hMRatio1d_Z_Q2_Nu_Z.C",acc.Data()));
  TH1F *hC= ( TH1F *)hMRatioProj->Clone("hC");
  gROOT->ProcessLine(Form(".x Ratio%sFe/hMRatio1d_Z_Q2_Nu_Z.C",acc.Data()));
  TH1F *hFe= ( TH1F *)hMRatioProj->Clone("hFe");
  gROOT->ProcessLine(Form(".x Ratio%sPb/hMRatio1d_Z_Q2_Nu_Z.C",acc.Data()));
  TH1F *hPb= ( TH1F *)hMRatioProj->Clone("hPb");
  hC->SetMarkerStyle(kFullTriangleUp);
  hC->SetMarkerColor(kRed);
  hC->SetLineColor(kRed);
  hFe->SetMarkerStyle(kFullTriangleUp);
  hFe->SetMarkerColor(kBlue);
  hFe->SetLineColor(kBlue);
  hPb->SetMarkerStyle(kFullTriangleUp);
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

  //tayadata
  TH1F *hFe_Taya=(TH1F*)hFe->Clone("hFe_Taya");
  TH1F *hC_Taya=(TH1F*)hC->Clone("hC_Taya");
  TH1F *hPb_Taya=(TH1F*)hPb->Clone("hPb_Taya");
  ifstream fin("Taya_dataR_Z.txt");
  char aux[100];
  fin.getline(aux,100);
  Float_t bin,RC,RC_e,RFe,RFe_e,RPb,RPb_e;
  cout<<aux<<endl;
  while(fin>>bin>>RC>>RC_e>>RFe>>RFe_e>>RPb>>RPb_e)
  {
    cout<<bin<<"\t"<<RC<<"\t"<<RC_e<<"\t"<<RFe<<"\t"<<RFe_e<<"\t"<<RPb<<"\t"<<RPb_e<<"\n";
    hC_Taya->SetBinContent(bin+1,RC);
    hFe_Taya->SetBinContent(bin+1,RFe);
    hPb_Taya->SetBinContent(bin+1,RPb);
    
    hC_Taya->SetBinError(bin+1,RC_e);
    hFe_Taya->SetBinError(bin+1,RFe_e);
    hPb_Taya->SetBinError(bin+1,RPb_e);
  }
  fin.close();
  hC_Taya->SetMarkerStyle(kFullTriangleDown);
  hFe_Taya->SetMarkerStyle(kFullTriangleDown);
  hPb_Taya->SetMarkerStyle(kFullTriangleDown);

  hC_Taya->Draw("samepe");
  hFe_Taya->Draw("samepe");
  hPb_Taya->Draw("samepe");


  TLegend *l = new TLegend(0.76,0.73,0.9,0.9);
  l->AddEntry(hC,"C","lp");
  l->AddEntry(hFe,"Fe","lp");
  l->AddEntry(hPb,"Pb","lp");
  l->AddEntry(hC_Taya,"C-Taya","lp");
  l->AddEntry(hFe_Taya,"Fe-Taya","lp");
  l->AddEntry(hPb_Taya,"Pb-Taya","lp");

  l->Draw();
  cn->SaveAs(Form("Ratio%s.gif",acc.Data()));
  cn->SaveAs(Form("Ratio%s.C",acc.Data()));
  
  TH1F *hFe_diff=(TH1F*)hFe->Clone("hFe_Taya");
  TH1F *hC_diff=(TH1F*)hC->Clone("hC_Taya");
  TH1F *hPb_diff=(TH1F*)hPb->Clone("hPb_Taya");
  
  hFe_diff->SetTitle("Differences");
  
  hC_diff->Add(hC,hC_Taya,1.,-1.);
  hFe_diff->Add(hFe,hFe_Taya,1.,-1.);
  hPb_diff->Add(hPb,hFe_Taya,1.,-1.);


  hC_diff->Draw("p");
  hFe_diff->Draw("samep");
  hPb_diff->Draw("samep");

  cn->SaveAs(Form("Ratio_diff%s.gif",acc.Data()));
  cn->SaveAs(Form("Ratio_diff%s.C",acc.Data()));

}
