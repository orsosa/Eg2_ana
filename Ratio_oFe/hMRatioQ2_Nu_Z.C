{
//=========Macro generated from canvas: c/c
//=========  (Tue Jan 24 12:33:48 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",1,1,1200,876);
   c->SetHighLightColor(2);
   c->Range(-0.9858439,-1.117922,0.9858439,1.117922);
   TView *view = TView::CreateView(1);
   view->SetRange(1,0.3,1.224711,4.1,0.8,1.520068);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   Double_t xAxis3[4] = {1, 1.33, 1.77, 4.1}; 
   Double_t yAxis1[6] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8}; 
   
   TH2F *hMRatio = new TH2F("hMRatio","Multiplicity ratio",3, xAxis3,5, yAxis1);
   hMRatio->SetBinContent(6,1.493246);
   hMRatio->SetBinContent(7,1.482335);
   hMRatio->SetBinContent(8,1.447321);
   hMRatio->SetBinContent(11,1.427536);
   hMRatio->SetBinContent(12,1.410226);
   hMRatio->SetBinContent(13,1.40024);
   hMRatio->SetBinContent(16,1.395702);
   hMRatio->SetBinContent(17,1.372018);
   hMRatio->SetBinContent(18,1.342188);
   hMRatio->SetBinContent(21,1.387427);
   hMRatio->SetBinContent(22,1.302998);
   hMRatio->SetBinContent(23,1.27793);
   hMRatio->SetBinContent(26,1.355159);
   hMRatio->SetBinContent(27,1.238106);
   hMRatio->SetBinContent(28,1.298263);
   hMRatio->SetBinError(6,0.005195364);
   hMRatio->SetBinError(7,0.005037864);
   hMRatio->SetBinError(8,0.004848409);
   hMRatio->SetBinError(11,0.005471932);
   hMRatio->SetBinError(12,0.00526029);
   hMRatio->SetBinError(13,0.005190965);
   hMRatio->SetBinError(16,0.006081144);
   hMRatio->SetBinError(17,0.005823559);
   hMRatio->SetBinError(18,0.005642401);
   hMRatio->SetBinError(21,0.006842371);
   hMRatio->SetBinError(22,0.006308885);
   hMRatio->SetBinError(23,0.006159638);
   hMRatio->SetBinError(26,0.007574022);
   hMRatio->SetBinError(27,0.006809844);
   hMRatio->SetBinError(28,0.006989038);
   hMRatio->SetEntries(15);
   hMRatio->SetContour(20);
   hMRatio->SetContourLevel(0,1.238106);
   hMRatio->SetContourLevel(1,1.250863);
   hMRatio->SetContourLevel(2,1.26362);
   hMRatio->SetContourLevel(3,1.276377);
   hMRatio->SetContourLevel(4,1.289134);
   hMRatio->SetContourLevel(5,1.301891);
   hMRatio->SetContourLevel(6,1.314648);
   hMRatio->SetContourLevel(7,1.327405);
   hMRatio->SetContourLevel(8,1.340162);
   hMRatio->SetContourLevel(9,1.352919);
   hMRatio->SetContourLevel(10,1.365676);
   hMRatio->SetContourLevel(11,1.378433);
   hMRatio->SetContourLevel(12,1.39119);
   hMRatio->SetContourLevel(13,1.403947);
   hMRatio->SetContourLevel(14,1.416704);
   hMRatio->SetContourLevel(15,1.429461);
   hMRatio->SetContourLevel(16,1.442218);
   hMRatio->SetContourLevel(17,1.454975);
   hMRatio->SetContourLevel(18,1.467732);
   hMRatio->SetContourLevel(19,1.480489);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.695,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hMRatio");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 15     ");
   text = ptstats->AddText("Mean x =  1.872");
   text = ptstats->AddText("Mean y = 0.5435");
   text = ptstats->AddText("RMS x = 0.7588");
   text = ptstats->AddText("RMS y = 0.1416");
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
