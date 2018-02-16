{
//=========Macro generated from canvas: c/c
//=========  (Mon Mar  6 15:08:49 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",0,0,1200,900);
   c->SetHighLightColor(2);
   c->Range(-0.9858439,-1.117922,0.9858439,1.117922);
   TView *view = TView::CreateView(1);
   view->SetRange(0.3,1,0,0.8,4.1,8.672159);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   Double_t xAxis1[6] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8}; 
   Double_t yAxis1[4] = {1, 1.33, 1.77, 4.1}; 
   
   TH2F *hMRatio = new TH2F("hMRatio","Multiplicity ratio",5, xAxis1,3, yAxis1);
   hMRatio->SetBinContent(22,7.865904);
   hMRatio->SetBinContent(23,7.805408);
   hMRatio->SetBinContent(24,7.593948);
   hMRatio->SetBinContent(25,7.545466);
   hMRatio->SetBinContent(26,7.549723);
   hMRatio->SetBinError(22,0.0155495);
   hMRatio->SetBinError(23,0.01596066);
   hMRatio->SetBinError(24,0.01614723);
   hMRatio->SetBinError(25,0.01554655);
   hMRatio->SetBinError(26,0.01664724);
   hMRatio->SetEntries(45);
   hMRatio->SetContour(20);
   hMRatio->SetContourLevel(0,0);
   hMRatio->SetContourLevel(1,0.3932952);
   hMRatio->SetContourLevel(2,0.7865904);
   hMRatio->SetContourLevel(3,1.179886);
   hMRatio->SetContourLevel(4,1.573181);
   hMRatio->SetContourLevel(5,1.966476);
   hMRatio->SetContourLevel(6,2.359771);
   hMRatio->SetContourLevel(7,2.753066);
   hMRatio->SetContourLevel(8,3.146362);
   hMRatio->SetContourLevel(9,3.539657);
   hMRatio->SetContourLevel(10,3.932952);
   hMRatio->SetContourLevel(11,4.326247);
   hMRatio->SetContourLevel(12,4.719542);
   hMRatio->SetContourLevel(13,5.112838);
   hMRatio->SetContourLevel(14,5.506133);
   hMRatio->SetContourLevel(15,5.899428);
   hMRatio->SetContourLevel(16,6.292723);
   hMRatio->SetContourLevel(17,6.686018);
   hMRatio->SetContourLevel(18,7.079313);
   hMRatio->SetContourLevel(19,7.472609);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.695,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hMRatio");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 45     ");
   text = ptstats->AddText("Mean x = 0.5477");
   text = ptstats->AddText("Mean y =  3.397");
   text = ptstats->AddText("RMS x = 0.1417");
   text = ptstats->AddText("RMS y = 0.5251");
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
