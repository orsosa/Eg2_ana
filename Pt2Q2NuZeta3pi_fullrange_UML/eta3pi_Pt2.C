{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 17 13:07:53 2017) by ROOT version5.34/36
   TCanvas *c = new TCanvas("c", "c",0,51,1920,1004);
   c->SetHighLightColor(2);
   c->Range(-0.1875,-0.3846556,1.6875,3.4619);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis1[8] = {0, 0.2, 0.4, 0.6, 0.8, 1, 1.2, 1.5}; 
   
   TH1F *_stack_1 = new TH1F("_stack_1","",7, xAxis1);
   _stack_1->SetMinimum(0);
   _stack_1->SetMaximum(3.077244);
   _stack_1->SetDirectory(0);
   _stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _stack_1->SetLineColor(ci);
   _stack_1->GetXaxis()->SetTitle("Pt2 (GeV^{2})");
   _stack_1->GetXaxis()->SetLabelFont(42);
   _stack_1->GetXaxis()->SetLabelSize(0.035);
   _stack_1->GetXaxis()->SetTitleSize(0.035);
   _stack_1->GetXaxis()->SetTitleFont(42);
   _stack_1->GetYaxis()->SetTitle("N^{A}/N^{D}");
   _stack_1->GetYaxis()->SetLabelFont(42);
   _stack_1->GetYaxis()->SetLabelSize(0.035);
   _stack_1->GetYaxis()->SetTitleSize(0.035);
   _stack_1->GetYaxis()->SetTitleFont(42);
   _stack_1->GetZaxis()->SetLabelFont(42);
   _stack_1->GetZaxis()->SetLabelSize(0.035);
   _stack_1->GetZaxis()->SetTitleSize(0.035);
   _stack_1->GetZaxis()->SetTitleFont(42);
   ->SetHistogram(_stack_1);
   
   Double_t xAxis2[8] = {0, 0.2, 0.4, 0.6, 0.8, 1, 1.2, 1.5}; 
   
   TH1F *hMRatioProj__1 = new TH1F("hMRatioProj__1","Multiplicity Ratio (Pt2)",7, xAxis2);
   hMRatioProj__1->SetBinContent(1,0.8789148);
   hMRatioProj__1->SetBinContent(2,0.945077);
   hMRatioProj__1->SetBinContent(3,0.8827854);
   hMRatioProj__1->SetBinContent(4,0.9311411);
   hMRatioProj__1->SetBinContent(5,1.19703);
   hMRatioProj__1->SetBinContent(6,1.569457);
   hMRatioProj__1->SetBinContent(7,2.930709);
   hMRatioProj__1->SetBinError(1,0.01104461);
   hMRatioProj__1->SetBinError(2,0.000585818);
   hMRatioProj__1->SetBinError(3,0.08948416);
   hMRatioProj__1->SetBinError(4,0.2390558);
   hMRatioProj__1->SetBinError(5,0.08607136);
   hMRatioProj__1->SetBinError(6,0.02852199);
   hMRatioProj__1->SetBinError(7,0.3262575);
   hMRatioProj__1->SetEntries(7);
   hMRatioProj__1->SetDirectory(0);
   hMRatioProj__1->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   hMRatioProj__1->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hMRatioProj__1->SetMarkerColor(ci);
   hMRatioProj__1->SetMarkerStyle(8);
   hMRatioProj__1->SetMarkerSize(1.3);
   hMRatioProj__1->GetXaxis()->SetTitle("Pt2");
   hMRatioProj__1->GetXaxis()->SetLabelFont(42);
   hMRatioProj__1->GetXaxis()->SetLabelSize(0.035);
   hMRatioProj__1->GetXaxis()->SetTitleSize(0.035);
   hMRatioProj__1->GetXaxis()->SetTitleFont(42);
   hMRatioProj__1->GetYaxis()->SetTitle("R(Pt2)");
   hMRatioProj__1->GetYaxis()->SetLabelFont(42);
   hMRatioProj__1->GetYaxis()->SetLabelSize(0.035);
   hMRatioProj__1->GetYaxis()->SetTitleSize(0.035);
   hMRatioProj__1->GetYaxis()->SetTitleOffset(1.1);
   hMRatioProj__1->GetYaxis()->SetTitleFont(42);
   hMRatioProj__1->GetZaxis()->SetLabelFont(42);
   hMRatioProj__1->GetZaxis()->SetLabelSize(0.035);
   hMRatioProj__1->GetZaxis()->SetTitleSize(0.035);
   hMRatioProj__1->GetZaxis()->SetTitleFont(42);
   ->Add(hMRatioProj,"");
   Double_t xAxis3[8] = {0, 0.2, 0.4, 0.6, 0.8, 1, 1.2, 1.5}; 
   
   TH1F *hMRatioProj__2 = new TH1F("hMRatioProj__2","Multiplicity Ratio (Pt2)",7, xAxis3);
   hMRatioProj__2->SetBinContent(1,0.6134245);
   hMRatioProj__2->SetBinContent(2,0.6572257);
   hMRatioProj__2->SetBinContent(3,0.8790406);
   hMRatioProj__2->SetBinContent(4,1.008312);
   hMRatioProj__2->SetBinContent(5,0.8882704);
   hMRatioProj__2->SetBinContent(6,1.131662);
   hMRatioProj__2->SetBinContent(7,1.657756);
   hMRatioProj__2->SetBinError(1,0.008544723);
   hMRatioProj__2->SetBinError(2,0.02092348);
   hMRatioProj__2->SetBinError(3,0.05456771);
   hMRatioProj__2->SetBinError(4,0.8688772);
   hMRatioProj__2->SetBinError(5,0.1705918);
   hMRatioProj__2->SetBinError(6,0.3782006);
   hMRatioProj__2->SetBinError(7,0.2594674);
   hMRatioProj__2->SetEntries(7);
   hMRatioProj__2->SetDirectory(0);
   hMRatioProj__2->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hMRatioProj__2->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hMRatioProj__2->SetMarkerColor(ci);
   hMRatioProj__2->SetMarkerStyle(8);
   hMRatioProj__2->SetMarkerSize(1.3);
   hMRatioProj__2->GetXaxis()->SetTitle("Pt2");
   hMRatioProj__2->GetXaxis()->SetLabelFont(42);
   hMRatioProj__2->GetXaxis()->SetLabelSize(0.035);
   hMRatioProj__2->GetXaxis()->SetTitleSize(0.035);
   hMRatioProj__2->GetXaxis()->SetTitleFont(42);
   hMRatioProj__2->GetYaxis()->SetTitle("R(Pt2)");
   hMRatioProj__2->GetYaxis()->SetLabelFont(42);
   hMRatioProj__2->GetYaxis()->SetLabelSize(0.035);
   hMRatioProj__2->GetYaxis()->SetTitleSize(0.035);
   hMRatioProj__2->GetYaxis()->SetTitleOffset(1.1);
   hMRatioProj__2->GetYaxis()->SetTitleFont(42);
   hMRatioProj__2->GetZaxis()->SetLabelFont(42);
   hMRatioProj__2->GetZaxis()->SetLabelSize(0.035);
   hMRatioProj__2->GetZaxis()->SetTitleSize(0.035);
   hMRatioProj__2->GetZaxis()->SetTitleFont(42);
   ->Add(hMRatioProj,"");
   Double_t xAxis4[8] = {0, 0.2, 0.4, 0.6, 0.8, 1, 1.2, 1.5}; 
   
   TH1F *hMRatioProj = new TH1F("hMRatioProj","Multiplicity Ratio (Pt2)",7, xAxis4);
   hMRatioProj->SetBinContent(1,0.348651);
   hMRatioProj->SetBinContent(2,0.3026436);
   hMRatioProj->SetBinContent(3,0.5641292);
   hMRatioProj->SetBinContent(4,0.7773359);
   hMRatioProj->SetBinContent(5,0.2993857);
   hMRatioProj->SetBinContent(6,1.202515);
   hMRatioProj->SetBinContent(7,1.457686);
   hMRatioProj->SetBinError(1,0.0182838);
   hMRatioProj->SetBinError(2,0.0544789);
   hMRatioProj->SetBinError(3,0.03290414);
   hMRatioProj->SetBinError(4,0.2797272);
   hMRatioProj->SetBinError(5,0.1496447);
   hMRatioProj->SetBinError(6,0.2358213);
   hMRatioProj->SetBinError(7,0.9944119);
   hMRatioProj->SetEntries(7);
   hMRatioProj->SetStats(0);
   hMRatioProj->SetMarkerStyle(8);
   hMRatioProj->SetMarkerSize(1.3);
   hMRatioProj->GetXaxis()->SetTitle("Pt2");
   hMRatioProj->GetXaxis()->SetLabelFont(42);
   hMRatioProj->GetXaxis()->SetLabelSize(0.035);
   hMRatioProj->GetXaxis()->SetTitleSize(0.035);
   hMRatioProj->GetXaxis()->SetTitleFont(42);
   hMRatioProj->GetYaxis()->SetTitle("R(Pt2)");
   hMRatioProj->GetYaxis()->SetLabelFont(42);
   hMRatioProj->GetYaxis()->SetLabelSize(0.035);
   hMRatioProj->GetYaxis()->SetTitleSize(0.035);
   hMRatioProj->GetYaxis()->SetTitleOffset(1.1);
   hMRatioProj->GetYaxis()->SetTitleFont(42);
   hMRatioProj->GetZaxis()->SetLabelFont(42);
   hMRatioProj->GetZaxis()->SetLabelSize(0.035);
   hMRatioProj->GetZaxis()->SetTitleSize(0.035);
   hMRatioProj->GetZaxis()->SetTitleFont(42);
   ->Add(hMRatioProj,"");
   ->Draw("nostack");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
