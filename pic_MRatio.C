{
//=========Macro generated from canvas: c/c
//=========  (Tue Jan 10 10:10:19 2017) by ROOT version5.34/03
   TCanvas *c = new TCanvas("c", "c",0,51,1745,1004);
   c->SetHighLightColor(2);
   c->Range(0.2375,0.7625,0.8625,1.1375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *hframe__1 = new TH1F("hframe__1","",1000,0.3,0.8);
   hframe__1->SetMinimum(0.8);
   hframe__1->SetMaximum(1.1);
   hframe__1->SetDirectory(0);
   hframe__1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   hframe__1->SetLineColor(ci);
   hframe__1->GetXaxis()->SetTitle("Z");
   hframe__1->GetXaxis()->SetLabelFont(42);
   hframe__1->GetXaxis()->SetLabelSize(0.035);
   hframe__1->GetXaxis()->SetTitleSize(0.035);
   hframe__1->GetXaxis()->SetTitleFont(42);
   hframe__1->GetYaxis()->SetTitle("R_{#pi_{0}}");
   hframe__1->GetYaxis()->SetLabelFont(42);
   hframe__1->GetYaxis()->SetLabelSize(0.035);
   hframe__1->GetYaxis()->SetTitleSize(0.035);
   hframe__1->GetYaxis()->SetTitleFont(42);
   hframe__1->GetZaxis()->SetLabelFont(42);
   hframe__1->GetZaxis()->SetLabelSize(0.035);
   hframe__1->GetZaxis()->SetTitleSize(0.035);
   hframe__1->GetZaxis()->SetTitleFont(42);
   hframe__1->Draw(" ");
   Double_t xAxis1[6] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8}; 
   
   TH1F *hMRatioProj__2 = new TH1F("hMRatioProj__2","Multiplicity Ratio (Z)",5, xAxis1);
   hMRatioProj__2->SetBinContent(1,0.9569668);
   hMRatioProj__2->SetBinContent(2,1.019088);
   hMRatioProj__2->SetBinContent(3,1.048386);
   hMRatioProj__2->SetBinContent(4,1.025622);
   hMRatioProj__2->SetBinContent(5,1.056883);
   hMRatioProj__2->SetBinError(1,0.00961185);
   hMRatioProj__2->SetBinError(2,0.01072515);
   hMRatioProj__2->SetBinError(3,0.01177701);
   hMRatioProj__2->SetBinError(4,0.01247167);
   hMRatioProj__2->SetBinError(5,0.01442816);
   hMRatioProj__2->SetEntries(5);
   hMRatioProj__2->SetDirectory(0);
   hMRatioProj__2->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   hMRatioProj__2->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hMRatioProj__2->SetMarkerColor(ci);
   hMRatioProj__2->SetMarkerStyle(8);
   hMRatioProj__2->GetXaxis()->SetTitle("Z");
   hMRatioProj__2->GetXaxis()->SetLabelFont(42);
   hMRatioProj__2->GetXaxis()->SetLabelSize(0.035);
   hMRatioProj__2->GetXaxis()->SetTitleSize(0.035);
   hMRatioProj__2->GetXaxis()->SetTitleFont(42);
   hMRatioProj__2->GetYaxis()->SetTitle("R(Z)");
   hMRatioProj__2->GetYaxis()->SetLabelFont(42);
   hMRatioProj__2->GetYaxis()->SetLabelSize(0.035);
   hMRatioProj__2->GetYaxis()->SetTitleSize(0.035);
   hMRatioProj__2->GetYaxis()->SetTitleOffset(1.1);
   hMRatioProj__2->GetYaxis()->SetTitleFont(42);
   hMRatioProj__2->GetZaxis()->SetLabelFont(42);
   hMRatioProj__2->GetZaxis()->SetLabelSize(0.035);
   hMRatioProj__2->GetZaxis()->SetTitleSize(0.035);
   hMRatioProj__2->GetZaxis()->SetTitleFont(42);
   hMRatioProj__2->Draw("samepe");
   Double_t xAxis2[6] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8}; 
   
   TH1F *hMRatioProj__3 = new TH1F("hMRatioProj__3","Multiplicity Ratio (Z)",5, xAxis2);
   hMRatioProj__3->SetBinContent(1,0.9176525);
   hMRatioProj__3->SetBinContent(2,0.9964556);
   hMRatioProj__3->SetBinContent(3,1.024119);
   hMRatioProj__3->SetBinContent(4,1.032164);
   hMRatioProj__3->SetBinContent(5,1.077444);
   hMRatioProj__3->SetBinError(1,0.01117469);
   hMRatioProj__3->SetBinError(2,0.01268993);
   hMRatioProj__3->SetBinError(3,0.01390582);
   hMRatioProj__3->SetBinError(4,0.01512794);
   hMRatioProj__3->SetBinError(5,0.01773908);
   hMRatioProj__3->SetEntries(5);
   hMRatioProj__3->SetDirectory(0);
   hMRatioProj__3->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hMRatioProj__3->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hMRatioProj__3->SetMarkerColor(ci);
   hMRatioProj__3->SetMarkerStyle(8);
   hMRatioProj__3->GetXaxis()->SetTitle("Z");
   hMRatioProj__3->GetXaxis()->SetLabelFont(42);
   hMRatioProj__3->GetXaxis()->SetLabelSize(0.035);
   hMRatioProj__3->GetXaxis()->SetTitleSize(0.035);
   hMRatioProj__3->GetXaxis()->SetTitleFont(42);
   hMRatioProj__3->GetYaxis()->SetTitle("R(Z)");
   hMRatioProj__3->GetYaxis()->SetLabelFont(42);
   hMRatioProj__3->GetYaxis()->SetLabelSize(0.035);
   hMRatioProj__3->GetYaxis()->SetTitleSize(0.035);
   hMRatioProj__3->GetYaxis()->SetTitleOffset(1.1);
   hMRatioProj__3->GetYaxis()->SetTitleFont(42);
   hMRatioProj__3->GetZaxis()->SetLabelFont(42);
   hMRatioProj__3->GetZaxis()->SetLabelSize(0.035);
   hMRatioProj__3->GetZaxis()->SetTitleSize(0.035);
   hMRatioProj__3->GetZaxis()->SetTitleFont(42);
   hMRatioProj__3->Draw("samepe");
   Double_t xAxis3[6] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8}; 
   
   TH1F *hMRatioProj = new TH1F("hMRatioProj","Multiplicity Ratio (Z)",5, xAxis3);
   hMRatioProj->SetBinContent(1,0.8897595);
   hMRatioProj->SetBinContent(2,0.9769916);
   hMRatioProj->SetBinContent(3,1.029281);
   hMRatioProj->SetBinContent(4,1.018805);
   hMRatioProj->SetBinContent(5,1.059332);
   hMRatioProj->SetBinError(1,0.03268573);
   hMRatioProj->SetBinError(2,0.0377359);
   hMRatioProj->SetBinError(3,0.04269739);
   hMRatioProj->SetBinError(4,0.04602699);
   hMRatioProj->SetBinError(5,0.05364102);
   hMRatioProj->SetEntries(5);
   hMRatioProj->SetStats(0);
   hMRatioProj->SetMarkerStyle(8);
   hMRatioProj->GetXaxis()->SetTitle("Z");
   hMRatioProj->GetXaxis()->SetLabelFont(42);
   hMRatioProj->GetXaxis()->SetLabelSize(0.035);
   hMRatioProj->GetXaxis()->SetTitleSize(0.035);
   hMRatioProj->GetXaxis()->SetTitleFont(42);
   hMRatioProj->GetYaxis()->SetTitle("R(Z)");
   hMRatioProj->GetYaxis()->SetLabelFont(42);
   hMRatioProj->GetYaxis()->SetLabelSize(0.035);
   hMRatioProj->GetYaxis()->SetTitleSize(0.035);
   hMRatioProj->GetYaxis()->SetTitleOffset(1.1);
   hMRatioProj->GetYaxis()->SetTitleFont(42);
   hMRatioProj->GetZaxis()->SetLabelFont(42);
   hMRatioProj->GetZaxis()->SetLabelSize(0.035);
   hMRatioProj->GetZaxis()->SetTitleSize(0.035);
   hMRatioProj->GetZaxis()->SetTitleFont(42);
   hMRatioProj->Draw("samepe");
   
   TLegend *leg = new TLegend(0.5,0.2,0.7,0.3,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(19);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("hMRatioProj","C","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("hMRatioProj","Fe","lp");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("hMRatioProj","Pb","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
