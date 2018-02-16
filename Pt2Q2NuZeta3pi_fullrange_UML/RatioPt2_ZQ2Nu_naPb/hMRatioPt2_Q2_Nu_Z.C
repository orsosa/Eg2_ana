{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 26 13:25:59 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "c",0,0,1200,900);
   c->SetHighLightColor(2);
   c->Range(-0.9858439,-1.117922,0.9858439,1.117922);
   TView *view = TView::CreateView(1);
   view->SetRange(0,0.3,-1,1.5,1,1.1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   Double_t xAxis1[8] = {0, 0.2, 0.4, 0.6, 0.8, 1, 1.2, 1.5}; 
   Double_t yAxis1[2] = {0.3, 1}; 
   
   TH2F *hMRatio = new TH2F("hMRatio","Multiplicity ratio",7, xAxis1,1, yAxis1);
   hMRatio->SetBinContent(19,0.3485782);
   hMRatio->SetBinContent(20,0.3027973);
   hMRatio->SetBinContent(21,0.5640118);
   hMRatio->SetBinContent(22,0.7970291);
   hMRatio->SetBinContent(23,0.2989143);
   hMRatio->SetBinContent(24,1.203617);
   hMRatio->SetBinContent(25,1.519741);
   hMRatio->SetBinError(19,0.01442845);
   hMRatio->SetBinError(20,0.01884443);
   hMRatio->SetBinError(21,0.04117421);
   hMRatio->SetBinError(22,0.07501182);
   hMRatio->SetBinError(23,0.06469152);
   hMRatio->SetBinError(24,0.2538865);
   hMRatio->SetBinError(25,0.3613352);
   hMRatio->SetEntries(7);
   hMRatio->SetContour(20);
   hMRatio->SetContourLevel(0,0);
   hMRatio->SetContourLevel(1,0);
   hMRatio->SetContourLevel(2,0);
   hMRatio->SetContourLevel(3,0);
   hMRatio->SetContourLevel(4,0);
   hMRatio->SetContourLevel(5,0);
   hMRatio->SetContourLevel(6,0);
   hMRatio->SetContourLevel(7,0);
   hMRatio->SetContourLevel(8,0);
   hMRatio->SetContourLevel(9,0);
   hMRatio->SetContourLevel(10,0);
   hMRatio->SetContourLevel(11,0);
   hMRatio->SetContourLevel(12,0);
   hMRatio->SetContourLevel(13,0);
   hMRatio->SetContourLevel(14,0);
   hMRatio->SetContourLevel(15,0);
   hMRatio->SetContourLevel(16,0);
   hMRatio->SetContourLevel(17,0);
   hMRatio->SetContourLevel(18,0);
   hMRatio->SetContourLevel(19,0);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.695,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hMRatio");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 7      ");
   text = ptstats->AddText("Mean x =      0");
   text = ptstats->AddText("Mean y =      0");
   text = ptstats->AddText("RMS x =      0");
   text = ptstats->AddText("RMS y =      0");
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
