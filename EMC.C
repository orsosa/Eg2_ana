{
//=========Macro generated from canvas: c/c
//=========  (Wed May 17 19:02:59 2017) by ROOT version5.34/36
   TCanvas *c = new TCanvas("c", "c",415,113,1024,768);
   c->Range(0.08374999,-0.1269189,0.54625,1.14227);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   THStack *emc = new THStack();
   emc->SetName("emc");
   emc->SetTitle("EMC not corrected");
   Double_t xAxis1[15] = {0.13, 0.1564286, 0.1828571, 0.2092857, 0.2357143, 0.2621429, 0.2885714, 0.315, 0.3414286, 0.3678571, 0.3942857, 0.4207143, 0.4471429, 0.4735714, 0.5}; 
   
   TH1F *emc_stack_1 = new TH1F("emc_stack_1","EMC not corrected",14, xAxis1);
   emc_stack_1->SetMinimum(0);
   emc_stack_1->SetMaximum(1.015351);
   emc_stack_1->SetDirectory(0);
   emc_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   emc_stack_1->SetLineColor(ci);
   emc_stack_1->GetXaxis()->SetTitle("x");
   emc_stack_1->GetXaxis()->SetLabelFont(42);
   emc_stack_1->GetXaxis()->SetLabelSize(0.035);
   emc_stack_1->GetXaxis()->SetTitleSize(0.035);
   emc_stack_1->GetXaxis()->SetTitleFont(42);
   emc_stack_1->GetYaxis()->SetTitle("#frac{N_{e}^{A}}{N_{e}^{D}}");
   emc_stack_1->GetYaxis()->SetLabelFont(42);
   emc_stack_1->GetYaxis()->SetLabelSize(0.035);
   emc_stack_1->GetYaxis()->SetTitleSize(0.035);
   emc_stack_1->GetYaxis()->SetTitleFont(42);
   emc_stack_1->GetZaxis()->SetLabelFont(42);
   emc_stack_1->GetZaxis()->SetLabelSize(0.035);
   emc_stack_1->GetZaxis()->SetTitleSize(0.035);
   emc_stack_1->GetZaxis()->SetTitleFont(42);
   emc->SetHistogram(emc_stack_1);
   
   Double_t xAxis2[15] = {0.13, 0.1564286, 0.1828571, 0.2092857, 0.2357143, 0.2621429, 0.2885714, 0.315, 0.3414286, 0.3678571, 0.3942857, 0.4207143, 0.4471429, 0.4735714, 0.5}; 
   
   TH1D *hEMCC__1 = new TH1D("hEMCC__1","C",14, xAxis2);
   hEMCC__1->SetBinContent(0,0.808673);
   hEMCC__1->SetBinContent(1,0.8322531);
   hEMCC__1->SetBinContent(2,0.8413226);
   hEMCC__1->SetBinContent(3,0.8396328);
   hEMCC__1->SetBinContent(4,0.8407925);
   hEMCC__1->SetBinContent(5,0.8382271);
   hEMCC__1->SetBinContent(6,0.8365414);
   hEMCC__1->SetBinContent(7,0.8360626);
   hEMCC__1->SetBinContent(8,0.8368421);
   hEMCC__1->SetBinContent(9,0.8370255);
   hEMCC__1->SetBinContent(10,0.8319179);
   hEMCC__1->SetBinContent(11,0.8323187);
   hEMCC__1->SetBinContent(12,0.8277979);
   hEMCC__1->SetBinContent(13,0.8255712);
   hEMCC__1->SetBinContent(14,0.8353384);
   hEMCC__1->SetBinContent(15,0.8469491);
   hEMCC__1->SetBinError(0,0.006735696);
   hEMCC__1->SetBinError(1,0.001211947);
   hEMCC__1->SetBinError(2,0.0009154668);
   hEMCC__1->SetBinError(3,0.0008584935);
   hEMCC__1->SetBinError(4,0.0008609447);
   hEMCC__1->SetBinError(5,0.0008834062);
   hEMCC__1->SetBinError(6,0.000939715);
   hEMCC__1->SetBinError(7,0.001041778);
   hEMCC__1->SetBinError(8,0.001179365);
   hEMCC__1->SetBinError(9,0.001361802);
   hEMCC__1->SetBinError(10,0.001584352);
   hEMCC__1->SetBinError(11,0.001892233);
   hEMCC__1->SetBinError(12,0.002310657);
   hEMCC__1->SetBinError(13,0.002843045);
   hEMCC__1->SetBinError(14,0.003781284);
   hEMCC__1->SetBinError(15,0.004621994);
   hEMCC__1->SetEntries(3135902);
   hEMCC__1->SetDirectory(0);

   ci = TColor::GetColor("#0000ff");
   hEMCC__1->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hEMCC__1->SetMarkerColor(ci);
   hEMCC__1->SetMarkerStyle(8);
   hEMCC__1->GetXaxis()->SetLabelFont(42);
   hEMCC__1->GetXaxis()->SetLabelSize(0.035);
   hEMCC__1->GetXaxis()->SetTitleSize(0.035);
   hEMCC__1->GetXaxis()->SetTitleFont(42);
   hEMCC__1->GetYaxis()->SetLabelFont(42);
   hEMCC__1->GetYaxis()->SetLabelSize(0.035);
   hEMCC__1->GetYaxis()->SetTitleSize(0.035);
   hEMCC__1->GetYaxis()->SetTitleFont(42);
   hEMCC__1->GetZaxis()->SetLabelFont(42);
   hEMCC__1->GetZaxis()->SetLabelSize(0.035);
   hEMCC__1->GetZaxis()->SetTitleSize(0.035);
   hEMCC__1->GetZaxis()->SetTitleFont(42);
   emc->Add(hEMCC,"");
   Double_t xAxis3[15] = {0.13, 0.1564286, 0.1828571, 0.2092857, 0.2357143, 0.2621429, 0.2885714, 0.315, 0.3414286, 0.3678571, 0.3942857, 0.4207143, 0.4471429, 0.4735714, 0.5}; 
   
   TH1D *hEMCFe__2 = new TH1D("hEMCFe__2","Fe",14, xAxis3);
   hEMCFe__2->SetBinContent(0,0.9497487);
   hEMCFe__2->SetBinContent(1,0.967001);
   hEMCFe__2->SetBinContent(2,0.9550178);
   hEMCFe__2->SetBinContent(3,0.9373903);
   hEMCFe__2->SetBinContent(4,0.9278338);
   hEMCFe__2->SetBinContent(5,0.9136968);
   hEMCFe__2->SetBinContent(6,0.903609);
   hEMCFe__2->SetBinContent(7,0.8954684);
   hEMCFe__2->SetBinContent(8,0.8864751);
   hEMCFe__2->SetBinContent(9,0.8779144);
   hEMCFe__2->SetBinContent(10,0.8680017);
   hEMCFe__2->SetBinContent(11,0.8584707);
   hEMCFe__2->SetBinContent(12,0.8457857);
   hEMCFe__2->SetBinContent(13,0.8358539);
   hEMCFe__2->SetBinContent(14,0.8373304);
   hEMCFe__2->SetBinContent(15,0.8407708);
   hEMCFe__2->SetBinError(0,0.005754585);
   hEMCFe__2->SetBinError(1,0.001013393);
   hEMCFe__2->SetBinError(2,0.0007449257);
   hEMCFe__2->SetBinError(3,0.0006898318);
   hEMCFe__2->SetBinError(4,0.00068626);
   hEMCFe__2->SetBinError(5,0.0006975279);
   hEMCFe__2->SetBinError(6,0.0007364307);
   hEMCFe__2->SetBinError(7,0.0008110329);
   hEMCFe__2->SetBinError(8,0.0009096742);
   hEMCFe__2->SetBinError(9,0.001042089);
   hEMCFe__2->SetBinError(10,0.001210246);
   hEMCFe__2->SetBinError(11,0.001432284);
   hEMCFe__2->SetBinError(12,0.00173231);
   hEMCFe__2->SetBinError(13,0.002119296);
   hEMCFe__2->SetBinError(14,0.002779133);
   hEMCFe__2->SetBinError(15,0.003362881);
   hEMCFe__2->SetEntries(6294894);
   hEMCFe__2->SetDirectory(0);
   hEMCFe__2->SetMarkerStyle(8);
   hEMCFe__2->GetXaxis()->SetLabelFont(42);
   hEMCFe__2->GetXaxis()->SetLabelSize(0.035);
   hEMCFe__2->GetXaxis()->SetTitleSize(0.035);
   hEMCFe__2->GetXaxis()->SetTitleFont(42);
   hEMCFe__2->GetYaxis()->SetLabelFont(42);
   hEMCFe__2->GetYaxis()->SetLabelSize(0.035);
   hEMCFe__2->GetYaxis()->SetTitleSize(0.035);
   hEMCFe__2->GetYaxis()->SetTitleFont(42);
   hEMCFe__2->GetZaxis()->SetLabelFont(42);
   hEMCFe__2->GetZaxis()->SetLabelSize(0.035);
   hEMCFe__2->GetZaxis()->SetTitleSize(0.035);
   hEMCFe__2->GetZaxis()->SetTitleFont(42);
   emc->Add(hEMCFe,"");
   Double_t xAxis4[15] = {0.13, 0.1564286, 0.1828571, 0.2092857, 0.2357143, 0.2621429, 0.2885714, 0.315, 0.3414286, 0.3678571, 0.3942857, 0.4207143, 0.4471429, 0.4735714, 0.5}; 
   
   TH1D *hEMCPb__3 = new TH1D("hEMCPb__3","Pb",14, xAxis4);
   hEMCPb__3->SetBinContent(0,0.4350494);
   hEMCPb__3->SetBinContent(1,0.4467624);
   hEMCPb__3->SetBinContent(2,0.4462574);
   hEMCPb__3->SetBinContent(3,0.4390772);
   hEMCPb__3->SetBinContent(4,0.4331298);
   hEMCPb__3->SetBinContent(5,0.4258974);
   hEMCPb__3->SetBinContent(6,0.4195393);
   hEMCPb__3->SetBinContent(7,0.4138834);
   hEMCPb__3->SetBinContent(8,0.4082547);
   hEMCPb__3->SetBinContent(9,0.4044371);
   hEMCPb__3->SetBinContent(10,0.3945256);
   hEMCPb__3->SetBinContent(11,0.3897766);
   hEMCPb__3->SetBinContent(12,0.3820329);
   hEMCPb__3->SetBinContent(13,0.3753873);
   hEMCPb__3->SetBinContent(14,0.3711548);
   hEMCPb__3->SetBinContent(15,0.3698085);
   hEMCPb__3->SetBinError(0,0.00362197);
   hEMCPb__3->SetBinError(1,0.0006534417);
   hEMCPb__3->SetBinError(2,0.0004889668);
   hEMCPb__3->SetBinError(3,0.0004548738);
   hEMCPb__3->SetBinError(4,0.0004521568);
   hEMCPb__3->SetBinError(5,0.0004597091);
   hEMCPb__3->SetBinError(6,0.0004849171);
   hEMCPb__3->SetBinError(7,0.0005332825);
   hEMCPb__3->SetBinError(8,0.0005985574);
   hEMCPb__3->SetBinError(9,0.0006878597);
   hEMCPb__3->SetBinError(10,0.0007933714);
   hEMCPb__3->SetBinError(11,0.0009416064);
   hEMCPb__3->SetBinError(12,0.001141644);
   hEMCPb__3->SetBinError(13,0.001395817);
   hEMCPb__3->SetBinError(14,0.001813326);
   hEMCPb__3->SetBinError(15,0.002177283);
   hEMCPb__3->SetEntries(3091352);
   hEMCPb__3->SetDirectory(0);

   ci = TColor::GetColor("#ff0000");
   hEMCPb__3->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hEMCPb__3->SetMarkerColor(ci);
   hEMCPb__3->SetMarkerStyle(8);
   hEMCPb__3->GetXaxis()->SetLabelFont(42);
   hEMCPb__3->GetXaxis()->SetLabelSize(0.035);
   hEMCPb__3->GetXaxis()->SetTitleSize(0.035);
   hEMCPb__3->GetXaxis()->SetTitleFont(42);
   hEMCPb__3->GetYaxis()->SetLabelFont(42);
   hEMCPb__3->GetYaxis()->SetLabelSize(0.035);
   hEMCPb__3->GetYaxis()->SetTitleSize(0.035);
   hEMCPb__3->GetYaxis()->SetTitleFont(42);
   hEMCPb__3->GetZaxis()->SetLabelFont(42);
   hEMCPb__3->GetZaxis()->SetLabelSize(0.035);
   hEMCPb__3->GetZaxis()->SetTitleSize(0.035);
   hEMCPb__3->GetZaxis()->SetTitleFont(42);
   emc->Add(hEMCPb,"");
   emc->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3256164,0.94,0.6743836,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("EMC not corrected");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.8287671,0.5026882,0.9011742,0.7123656,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("hEMCC","C","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hEMCFe","Fe","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hEMCPb","Pb","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
