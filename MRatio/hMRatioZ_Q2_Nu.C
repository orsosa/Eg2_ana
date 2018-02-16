{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan  9 16:57:26 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",1,1,1200,876);
   c->SetHighLightColor(2);
   c->Range(-0.9858439,-1.117922,0.9858439,1.117922);
   TView *view = TView::CreateView(1);
   view->SetRange(0.3,2.2,2.926232,0.8,4.25,3.102187);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   Double_t xAxis3[6] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8}; 
   Double_t yAxis1[2] = {2.2, 4.25}; 
   
   TH2F *hMRatio = new TH2F("hMRatio","Multiplicity ratio",5, xAxis3,1, yAxis1);
   hMRatio->SetBinContent(8,2.934212);
   hMRatio->SetBinContent(9,3.074483);
   hMRatio->SetBinContent(10,3.086208);
   hMRatio->SetBinContent(11,3.000911);
   hMRatio->SetBinContent(12,3.001992);
   hMRatio->SetBinError(8,0.03377255);
   hMRatio->SetBinError(9,0.03871574);
   hMRatio->SetBinError(10,0.04341969);
   hMRatio->SetBinError(11,0.05441255);
   hMRatio->SetBinError(12,0.06752748);
   hMRatio->SetEntries(15);
   hMRatio->SetContour(20);
   hMRatio->SetContourLevel(0,2.934212);
   hMRatio->SetContourLevel(1,2.941812);
   hMRatio->SetContourLevel(2,2.949412);
   hMRatio->SetContourLevel(3,2.957012);
   hMRatio->SetContourLevel(4,2.964611);
   hMRatio->SetContourLevel(5,2.972211);
   hMRatio->SetContourLevel(6,2.979811);
   hMRatio->SetContourLevel(7,2.987411);
   hMRatio->SetContourLevel(8,2.995011);
   hMRatio->SetContourLevel(9,3.00261);
   hMRatio->SetContourLevel(10,3.01021);
   hMRatio->SetContourLevel(11,3.01781);
   hMRatio->SetContourLevel(12,3.02541);
   hMRatio->SetContourLevel(13,3.03301);
   hMRatio->SetContourLevel(14,3.04061);
   hMRatio->SetContourLevel(15,3.048209);
   hMRatio->SetContourLevel(16,3.055809);
   hMRatio->SetContourLevel(17,3.063409);
   hMRatio->SetContourLevel(18,3.071009);
   hMRatio->SetContourLevel(19,3.078609);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.695,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hMRatio");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 15     ");
   text = ptstats->AddText("Mean x = 0.5504");
   text = ptstats->AddText("Mean y =  3.225");
   text = ptstats->AddText("RMS x = 0.1405");
   text = ptstats->AddText("RMS y = 4.215e-08");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hMRatio->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hMRatio);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hMRatio->SetLineColor(ci);
   hMRatio->GetXaxis()->SetLabelFont(42);
   hMRatio->GetXaxis()->SetLabelSize(0.035);
   hMRatio->GetXaxis()->SetTitleSize(0.035);
   hMRatio->GetXaxis()->SetTitleFont(42);
   hMRatio->GetYaxis()->SetLabelFont(42);
   hMRatio->GetYaxis()->SetLabelSize(0.035);
   hMRatio->GetYaxis()->SetTitleSize(0.035);
   hMRatio->GetYaxis()->SetTitleFont(42);
   hMRatio->GetZaxis()->SetLabelFont(42);
   hMRatio->GetZaxis()->SetLabelSize(0.035);
   hMRatio->GetZaxis()->SetTitleSize(0.035);
   hMRatio->GetZaxis()->SetTitleFont(42);
   hMRatio->Draw("surf2");
   
   TPaveText *pt = new TPaveText(0.3461873,0.9358257,0.6538127,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("Multiplicity ratio");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
