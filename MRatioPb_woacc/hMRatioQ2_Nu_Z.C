{
//=========Macro generated from canvas: c/c
//=========  (Tue Jan 10 11:12:03 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",1,1,1200,876);
   c->SetHighLightColor(2);
   c->Range(-0.9858439,-1.117922,0.9858439,1.117922);
   TView *view = TView::CreateView(1);
   view->SetRange(1,0.3,0.8681098,4.1,0.8,1.130206);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   Double_t xAxis3[4] = {1, 1.33, 1.77, 4.1}; 
   Double_t yAxis1[6] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8}; 
   
   TH2F *hMRatio = new TH2F("hMRatio","Multiplicity ratio",3, xAxis3,5, yAxis1);
   hMRatio->SetBinContent(6,0.8799962);
   hMRatio->SetBinContent(7,0.8993304);
   hMRatio->SetBinContent(8,0.9132079);
   hMRatio->SetBinContent(11,0.9644069);
   hMRatio->SetBinContent(12,1.004365);
   hMRatio->SetBinContent(13,0.9857457);
   hMRatio->SetBinContent(16,1.051208);
   hMRatio->SetBinContent(17,1.036117);
   hMRatio->SetBinContent(18,0.9867779);
   hMRatio->SetBinContent(21,0.9977508);
   hMRatio->SetBinContent(22,1.079558);
   hMRatio->SetBinContent(23,1.005504);
   hMRatio->SetBinContent(26,1.106405);
   hMRatio->SetBinContent(27,1.007888);
   hMRatio->SetBinContent(28,1.040444);
   hMRatio->SetBinError(6,0.0908433);
   hMRatio->SetBinError(7,0.05251574);
   hMRatio->SetBinError(8,0.03896099);
   hMRatio->SetBinError(11,0.09655701);
   hMRatio->SetBinError(12,0.05483973);
   hMRatio->SetBinError(13,0.04041748);
   hMRatio->SetBinError(16,0.1082838);
   hMRatio->SetBinError(17,0.05729248);
   hMRatio->SetBinError(18,0.04146545);
   hMRatio->SetBinError(21,0.1095729);
   hMRatio->SetBinError(22,0.06396248);
   hMRatio->SetBinError(23,0.04492139);
   hMRatio->SetBinError(26,0.1382957);
   hMRatio->SetBinError(27,0.07060536);
   hMRatio->SetBinError(28,0.05409387);
   hMRatio->SetEntries(15);
   hMRatio->SetContour(20);
   hMRatio->SetContourLevel(0,0.8799962);
   hMRatio->SetContourLevel(1,0.8913167);
   hMRatio->SetContourLevel(2,0.9026371);
   hMRatio->SetContourLevel(3,0.9139576);
   hMRatio->SetContourLevel(4,0.925278);
   hMRatio->SetContourLevel(5,0.9365984);
   hMRatio->SetContourLevel(6,0.9479189);
   hMRatio->SetContourLevel(7,0.9592393);
   hMRatio->SetContourLevel(8,0.9705598);
   hMRatio->SetContourLevel(9,0.9818802);
   hMRatio->SetContourLevel(10,0.9932006);
   hMRatio->SetContourLevel(11,1.004521);
   hMRatio->SetContourLevel(12,1.015842);
   hMRatio->SetContourLevel(13,1.027162);
   hMRatio->SetContourLevel(14,1.038482);
   hMRatio->SetContourLevel(15,1.049803);
   hMRatio->SetContourLevel(16,1.061123);
   hMRatio->SetContourLevel(17,1.072444);
   hMRatio->SetContourLevel(18,1.083764);
   hMRatio->SetContourLevel(19,1.095085);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.695,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hMRatio");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 15     ");
   text = ptstats->AddText("Mean x =  1.878");
   text = ptstats->AddText("Mean y =  0.557");
   text = ptstats->AddText("RMS x = 0.7579");
   text = ptstats->AddText("RMS y = 0.1401");
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
