{
//=========Macro generated from canvas: c/c
//=========  (Tue May  9 15:37:47 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "c",0,0,1200,900);
   c->SetHighLightColor(2);
   c->Range(-0.9858439,-1.117922,0.9858439,1.117922);
   TView *view = TView::CreateView(1);
   view->SetRange(0.3,0,0,1,1.5,16.38559);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   Double_t xAxis1[2] = {0.3, 1}; 
   Double_t yAxis1[7] = {0, 0.1, 0.25, 0.4, 0.55, 0.75, 1.5}; 
   
   TH2F *hMRatio = new TH2F("hMRatio","Multiplicity ratio",1, xAxis1,6, yAxis1);
   hMRatio->SetBinContent(19,14.86221);
   hMRatio->SetBinContent(22,31.00528);
   hMRatio->SetBinError(19,0.01133167);
   hMRatio->SetBinError(22,0.01120119);
   hMRatio->SetEntries(54);
   hMRatio->SetContour(20);
   hMRatio->SetContourLevel(0,0);
   hMRatio->SetContourLevel(1,0.7431105);
   hMRatio->SetContourLevel(2,1.486221);
   hMRatio->SetContourLevel(3,2.229332);
   hMRatio->SetContourLevel(4,2.972442);
   hMRatio->SetContourLevel(5,3.715553);
   hMRatio->SetContourLevel(6,4.458663);
   hMRatio->SetContourLevel(7,5.201774);
   hMRatio->SetContourLevel(8,5.944884);
   hMRatio->SetContourLevel(9,6.687995);
   hMRatio->SetContourLevel(10,7.431105);
   hMRatio->SetContourLevel(11,8.174216);
   hMRatio->SetContourLevel(12,8.917326);
   hMRatio->SetContourLevel(13,9.660437);
   hMRatio->SetContourLevel(14,10.40355);
   hMRatio->SetContourLevel(15,11.14666);
   hMRatio->SetContourLevel(16,11.88977);
   hMRatio->SetContourLevel(17,12.63288);
   hMRatio->SetContourLevel(18,13.37599);
   hMRatio->SetContourLevel(19,14.1191);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.695,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hMRatio");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 54     ");
   text = ptstats->AddText("Mean x =   0.65");
   text = ptstats->AddText("Mean y =  1.165");
   text = ptstats->AddText("RMS x = 7.451e-09");
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
