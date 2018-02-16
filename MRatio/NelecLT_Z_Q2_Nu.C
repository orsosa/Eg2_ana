{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan  9 16:57:25 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",0,0,1200,900);
   c->SetHighLightColor(2);
   c->Range(0.2375,81024.4,0.8625,438392.9);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis1[6] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8}; 
   
   TH1F *hNelecLT = new TH1F("hNelecLT","Number of electrons as function of Z",5, xAxis1);
   hNelecLT->SetBinContent(1,389042);
   hNelecLT->SetBinContent(2,295056);
   hNelecLT->SetBinContent(3,220749);
   hNelecLT->SetBinContent(4,166851);
   hNelecLT->SetBinContent(5,129727);
   hNelecLT->SetEntries(1201425);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hNelecLT");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 1201425");
   text = ptstats->AddText("Mean  =  0.492");
   text = ptstats->AddText("RMS   = 0.1377");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hNelecLT->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hNelecLT);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hNelecLT->SetLineColor(ci);
   hNelecLT->GetXaxis()->SetLabelFont(42);
   hNelecLT->GetXaxis()->SetLabelSize(0.035);
   hNelecLT->GetXaxis()->SetTitleSize(0.035);
   hNelecLT->GetXaxis()->SetTitleFont(42);
   hNelecLT->GetYaxis()->SetLabelFont(42);
   hNelecLT->GetYaxis()->SetLabelSize(0.035);
   hNelecLT->GetYaxis()->SetTitleSize(0.035);
   hNelecLT->GetYaxis()->SetTitleFont(42);
   hNelecLT->GetZaxis()->SetLabelFont(42);
   hNelecLT->GetZaxis()->SetLabelSize(0.035);
   hNelecLT->GetZaxis()->SetTitleSize(0.035);
   hNelecLT->GetZaxis()->SetTitleFont(42);
   hNelecLT->Draw("");
   
   TPaveText *pt = new TPaveText(0.1622408,0.94,0.8377592,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("Number of electrons as function of Z");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
