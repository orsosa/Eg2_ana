{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan  9 19:35:19 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",1,1,1200,876);
   c->SetHighLightColor(2);
   c->Range(0.6125,555714.6,4.4875,609400.8);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis2[4] = {1, 1.33, 1.77, 4.1}; 
   
   TH1F *hNelecST = new TH1F("hNelecST","Number of electrons as function of Q2",3, xAxis2);
   hNelecST->SetBinContent(1,563031);
   hNelecST->SetBinContent(2,587512);
   hNelecST->SetBinContent(3,601987);
   hNelecST->SetEntries(1752530);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hNelecST");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 1752530");
   text = ptstats->AddText("Mean  =  1.669");
   text = ptstats->AddText("RMS   = 0.5287");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hNelecST->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hNelecST);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hNelecST->SetLineColor(ci);
   hNelecST->GetXaxis()->SetLabelFont(42);
   hNelecST->GetXaxis()->SetLabelSize(0.035);
   hNelecST->GetXaxis()->SetTitleSize(0.035);
   hNelecST->GetXaxis()->SetTitleFont(42);
   hNelecST->GetYaxis()->SetLabelFont(42);
   hNelecST->GetYaxis()->SetLabelSize(0.035);
   hNelecST->GetYaxis()->SetTitleSize(0.035);
   hNelecST->GetYaxis()->SetTitleFont(42);
   hNelecST->GetZaxis()->SetLabelFont(42);
   hNelecST->GetZaxis()->SetLabelSize(0.035);
   hNelecST->GetZaxis()->SetTitleSize(0.035);
   hNelecST->GetZaxis()->SetTitleFont(42);
   hNelecST->Draw("");
   
   TPaveText *pt = new TPaveText(0.15,0.94,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("Number of electrons as function of Q2");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
