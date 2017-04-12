{
  /////////////////// CONFIG PARAMETERS ////////////////////
  TString acc="";
  TString Obs="Q2";
  //  TString Obs="Nu";
  TString suf0 = "Pt2Nu";
  TString suf1 = "ZNu";
  //  TString suf0 = "Pt2Q2";
  //TString suf1 = "ZQ2";

  TString binschema0 = "Nu_Pt2_Q2";
  TString binschema1 = "Z_Nu_Q2";
  //TString binschema0 = "Q2_Pt2_Nu";
  //TString binschema1 = "Z_Q2_Nu";

  
  ////////////////////////////////////////////////////////
  //////////// TRY TO NOT CHANGE THE CODE BELOW///////////
  ////////////////////////////////////////////////////////

  TString indir0=Form("Ratio%s_%s",Obs.Data(),suf0.Data());
  TString indir1=Form("Ratio%s_%s",Obs.Data(),suf1.Data());

  gROOT->ProcessLine(Form(".x %s%sC/hMRatio1d_%s_%s.C",indir0.Data(),acc.Data(),Obs.Data(),binschema0.Data()));
  TH1F *hC0= ( TH1F *)hMRatioProj->Clone("hC0");

  gROOT->ProcessLine(Form(".x %s%sFe/hMRatio1d_%s_%s.C",indir0.Data(),acc.Data(),Obs.Data(),binschema0.Data()));
  TH1F *hFe0= ( TH1F *)hMRatioProj->Clone("hFe0");

  gROOT->ProcessLine(Form(".x %s%sPb/hMRatio1d_%s_%s.C",indir0.Data(),acc.Data(),Obs.Data(),binschema0.Data()));
  TH1F *hPb0= ( TH1F *)hMRatioProj->Clone("hPb0");

  hC0->SetMarkerStyle(kFullSquare);
  hC0->SetMarkerColor(kRed);
  hC0->SetLineColor(kRed);
  hFe0->SetMarkerStyle(kFullSquare);
  hFe0->SetMarkerColor(kBlue);
  hFe0->SetLineColor(kBlue);
  hPb0->SetMarkerStyle(kFullSquare);
  hPb0->SetMarkerColor(kBlack);
  hPb0->SetLineColor(kBlack);


  gROOT->ProcessLine(Form(".x %s%sC/hMRatio1d_%s_%s.C",indir1.Data(),acc.Data(),Obs.Data(),binschema1.Data()));
  TH1F *hC1= ( TH1F *)hMRatioProj->Clone("hC1");
  gROOT->ProcessLine(Form(".x %s%sFe/hMRatio1d_%s_%s.C",indir1.Data(),acc.Data(),Obs.Data(),binschema1.Data()));
  TH1F *hFe1= ( TH1F *)hMRatioProj->Clone("hFe1");
  gROOT->ProcessLine(Form(".x %s%sPb/hMRatio1d_%s_%s.C",indir1.Data(),acc.Data(),Obs.Data(),binschema1.Data()));
  TH1F *hPb1= ( TH1F *)hMRatioProj->Clone("hPb1");

  hC1->SetMarkerStyle(kFullCircle);
  hC1->SetMarkerColor(kRed);
  hC1->SetLineColor(kRed);
  hFe1->SetMarkerStyle(kFullCircle);
  hFe1->SetMarkerColor(kBlue);
  hFe1->SetLineColor(kBlue);
  hPb1->SetMarkerStyle(kFullCircle);
  hPb1->SetMarkerColor(kBlack);
  hPb1->SetLineColor(kBlack);


  
  TCanvas *cn = new TCanvas("cn","cn",1200,900);
  cn->SetGrid();
  Float_t lx=hC0->GetBinLowEdge(1),
  hx=hC0->GetBinLowEdge(hC0->GetNbinsX())+hC0->GetBinWidth(hC0->GetNbinsX()),
    ly=0.0,hy=1.1;
  TH1F *hf = c->DrawFrame(lx,ly,hx,hy,"Multiplicity Ratio");
  hf->GetXaxis()->SetTitle(Obs.Data());
  hf->GetYaxis()->SetTitle("R_{#pi_{0}}");

 
  hC0->Draw("samepe");
  hFe0->Draw("samepe");
  hPb0->Draw("samepe");

  hC1->Draw("samepe");
  hFe1->Draw("samepe");
  hPb1->Draw("samepe");


  TLegend *l = new TLegend(0.1,0.73,0.25,0.9);
  l->AddEntry(hC0,Form("C (Pt^{2},Nu) "),"lp");
  l->AddEntry(hFe0,Form("Fe (Pt^{2},Nu)"),"lp");
  l->AddEntry(hPb0,Form("Pb (Pt^{2},Nu)"),"lp");
  l->AddEntry(hC1,Form("C (Z,Nu)"),"lp");
  l->AddEntry(hFe1,Form("Fe (Z,Nu)"),"lp");
  l->AddEntry(hPb1,Form("Pb (Z,Nu)"),"lp");
  l->Draw();
  cn->SaveAs(Form("Ratio%s_consistency.gif",Obs.Data()));
  cn->SaveAs(Form("Ratio%s_consistency.C",Obs.Data()));


  
  TH1F *hFe_diff=(TH1F*)hFe0->Clone("hFe_diff");
  TH1F *hC_diff=(TH1F*)hC0->Clone("hC_diff");
  TH1F *hPb_diff=(TH1F*)hPb0->Clone("hPb_diff");
  
  hC_diff->SetTitle("Differences");
  
  Float_t miny=500,maxy=-500;
  for(int i=0;i<hC_diff->GetNbinsX();i++)
  {
    Double_t diff = hC0->GetBinContent(i+1) - hC1->GetBinContent(i+1);
    hC_diff->SetBinContent(i+1,diff);
    if(miny>diff) miny=diff;
    if(maxy<diff) maxy=diff;

    Double_t diff = hFe0->GetBinContent(i+1) - hFe1->GetBinContent(i+1); 
    hFe_diff->SetBinContent(i+1,diff);
    if(miny>diff) miny=diff;
    if(maxy<diff) maxy=diff;

    Double_t diff = hPb0->GetBinContent(i+1) - hPb1->GetBinContent(i+1);
    hPb_diff->SetBinContent(i+1,diff);
    if(miny>diff) miny=diff;
    if(maxy<diff) maxy=diff;

  }

  hC_diff->SetMaximum(maxy + (maxy-miny)*0.05);
  hC_diff->SetMinimum(miny - (maxy-miny)*0.05);
  hC_diff->Draw("p");
  hFe_diff->Draw("samep");
  hPb_diff->Draw("samep");

  TLegend *l = new TLegend(0.1,0.73,0.25,0.9);
  l->AddEntry(hC_diff,Form("C"),"lp");
  l->AddEntry(hFe_diff,Form("Fe"),"lp");
  l->AddEntry(hPb_diff,Form("Pb"),"lp");
  l->Draw();
  cn->SaveAs(Form("Ratio%s_consistency_diff.gif",Obs.Data()));
  cn->SaveAs(Form("Ratio%s_consistency_diff.C",Obs.Data()));

  TH1F *hFe_diff_rel=(TH1F*)hFe0->Clone("hFe_diff");
  TH1F *hC_diff_rel=(TH1F*)hC0->Clone("hC_diff");
  TH1F *hPb_diff_rel=(TH1F*)hPb0->Clone("hPb_diff");

  hC_diff_rel->SetTitle(Form("Differences in % relative to %s",suf0.Data()));
  hC_diff_rel->GetYaxis()->SetTitle("%");

  Float_t miny=500,maxy=-500;
  for(int i=0;i<hC_diff_rel->GetNbinsX();i++)
  {
    Double_t diff = (hC0->GetBinContent(i+1) - hC1->GetBinContent(i+1))/hC0->GetBinContent(i+1)*100;
    hC_diff_rel->SetBinContent(i+1,diff);
    if(miny>diff) miny=diff;
    if(maxy<diff) maxy=diff;

    Double_t diff = (hFe0->GetBinContent(i+1) - hFe1->GetBinContent(i+1))/hFe0->GetBinContent(i+1)*100; 
    hFe_diff_rel->SetBinContent(i+1,diff);
    if(miny>diff) miny=diff;
    if(maxy<diff) maxy=diff;

    Double_t diff = (hPb0->GetBinContent(i+1) - hPb1->GetBinContent(i+1))/hPb0->GetBinContent(i+1)*100;
    hPb_diff_rel->SetBinContent(i+1,diff);
    if(miny>diff) miny=diff;
    if(maxy<diff) maxy=diff;

  }

  hC_diff_rel->SetMaximum(maxy + (maxy-miny)*0.05);
  hC_diff_rel->SetMinimum(miny - (maxy-miny)*0.05);
  hC_diff_rel->Draw("p");
  hFe_diff_rel->Draw("samep");
  hPb_diff_rel->Draw("samep");

  TLegend *l = new TLegend(0.1,0.8,0.25,0.9);
  l->AddEntry(hC_diff,Form("C"),"lp");
  l->AddEntry(hFe_diff,Form("Fe"),"lp");
  l->AddEntry(hPb_diff,Form("Pb"),"lp");
  l->Draw();
  cn->SaveAs(Form("Ratio%s_consistency_diff_rel.gif",Obs.Data()));
  cn->SaveAs(Form("Ratio%s_consistency_diff_rel.C",Obs.Data()));


}
