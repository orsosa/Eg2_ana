{
//=========Macro generated from canvas: c/c
//=========  (Mon Mar  6 15:08:44 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",0,0,1200,900);
   c->SetHighLightColor(2);
   c->Range(-0.9858439,-1.117922,0.9858439,1.117922);
   TView *view = TView::CreateView(1);
   view->SetRange(0.3,1,0,0.8,4.1,6.532054);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   Double_t xAxis1[6] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8}; 
   Double_t yAxis1[4] = {1, 1.33, 1.77, 4.1}; 
   
   TH2F *hMRatio = new TH2F("hMRatio","Multiplicity ratio",5, xAxis1,3, yAxis1);
   hMRatio->SetBinContent(22,5.924765);
   hMRatio->SetBinContent(23,5.805567);
   hMRatio->SetBinContent(24,5.572782);
   hMRatio->SetBinContent(25,5.352683);
   hMRatio->SetBinContent(26,5.51647);
   hMRatio->SetBinError(22,0.01135772);
   hMRatio->SetBinError(23,0.01133359);
   hMRatio->SetBinError(24,0.01164117);
   hMRatio->SetBinError(25,0.01030606);
   hMRatio->SetBinError(26,0.01376384);
   hMRatio->SetEntries(45);
   hMRatio->SetContour(20);
   hMRatio->SetContourLevel(0,0);
   hMRatio->SetContourLevel(1,0.2962383);
   hMRatio->SetContourLevel(2,0.5924765);
   hMRatio->SetContourLevel(3,0.8887148);
   hMRatio->SetContourLevel(4,1.184953);
   hMRatio->SetContourLevel(5,1.481191);
   hMRatio->SetContourLevel(6,1.77743);
   hMRatio->SetContourLevel(7,2.073668);
   hMRatio->SetContourLevel(8,2.369906);
   hMRatio->SetContourLevel(9,2.666144);
   hMRatio->SetContourLevel(10,2.962383);
   hMRatio->SetContourLevel(11,3.258621);
   hMRatio->SetContourLevel(12,3.554859);
   hMRatio->SetContourLevel(13,3.851097);
   hMRatio->SetContourLevel(14,4.147336);
   hMRatio->SetContourLevel(15,4.443574);
   hMRatio->SetContourLevel(16,4.739812);
   hMRatio->SetContourLevel(17,5.03605);
   hMRatio->SetContourLevel(18,5.332289);
   hMRatio->SetContourLevel(19,5.628527);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.695,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hMRatio");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 45     ");
   text = ptstats->AddText("Mean x = 0.5455");
   text = ptstats->AddText("Mean y =  3.406");
   text = ptstats->AddText("RMS x = 0.1421");
   text = ptstats->AddText("RMS y = 0.5239");
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
