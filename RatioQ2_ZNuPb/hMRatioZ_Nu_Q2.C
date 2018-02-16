{
//=========Macro generated from canvas: c/c
//=========  (Mon Mar  6 15:08:55 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",0,0,1200,900);
   c->SetHighLightColor(2);
   c->Range(-0.9858439,-1.117922,0.9858439,1.117922);
   TView *view = TView::CreateView(1);
   view->SetRange(0.3,1,0,0.8,4.1,5.193604);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   Double_t xAxis1[6] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8}; 
   Double_t yAxis1[4] = {1, 1.33, 1.77, 4.1}; 
   
   TH2F *hMRatio = new TH2F("hMRatio","Multiplicity ratio",5, xAxis1,3, yAxis1);
   hMRatio->SetBinContent(22,4.710752);
   hMRatio->SetBinContent(23,4.480167);
   hMRatio->SetBinContent(24,4.391892);
   hMRatio->SetBinContent(25,4.270929);
   hMRatio->SetBinContent(26,4.142072);
   hMRatio->SetBinError(22,0.009740815);
   hMRatio->SetBinError(23,0.009421177);
   hMRatio->SetBinError(24,0.009411381);
   hMRatio->SetBinError(25,0.01136409);
   hMRatio->SetBinError(26,0.01106325);
   hMRatio->SetEntries(45);
   hMRatio->SetContour(20);
   hMRatio->SetContourLevel(0,0);
   hMRatio->SetContourLevel(1,0.2355376);
   hMRatio->SetContourLevel(2,0.4710752);
   hMRatio->SetContourLevel(3,0.7066127);
   hMRatio->SetContourLevel(4,0.9421503);
   hMRatio->SetContourLevel(5,1.177688);
   hMRatio->SetContourLevel(6,1.413225);
   hMRatio->SetContourLevel(7,1.648763);
   hMRatio->SetContourLevel(8,1.884301);
   hMRatio->SetContourLevel(9,2.119838);
   hMRatio->SetContourLevel(10,2.355376);
   hMRatio->SetContourLevel(11,2.590913);
   hMRatio->SetContourLevel(12,2.826451);
   hMRatio->SetContourLevel(13,3.061988);
   hMRatio->SetContourLevel(14,3.297526);
   hMRatio->SetContourLevel(15,3.533064);
   hMRatio->SetContourLevel(16,3.768601);
   hMRatio->SetContourLevel(17,4.004139);
   hMRatio->SetContourLevel(18,4.239676);
   hMRatio->SetContourLevel(19,4.475214);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.695,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hMRatio");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 45     ");
   text = ptstats->AddText("Mean x = 0.5439");
   text = ptstats->AddText("Mean y =  3.412");
   text = ptstats->AddText("RMS x = 0.1416");
   text = ptstats->AddText("RMS y = 0.5221");
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
   hMRatio->Draw("lego2");
   
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
