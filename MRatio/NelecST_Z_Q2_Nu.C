{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan  9 16:57:26 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",1,1,1200,876);
   c->SetHighLightColor(2);
   c->Range(0.2375,129078.8,0.8625,620578.8);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis2[6] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8}; 
   
   TH1F *hNelecST = new TH1F("hNelecST","Number of electrons as function of Z",5, xAxis2);
   hNelecST->SetBinContent(1,552705);
   hNelecST->SetBinContent(2,428168);
   hNelecST->SetBinContent(3,325646);
   hNelecST->SetBinContent(4,249950);
   hNelecST->SetBinContent(5,196061);
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
   text = ptstats->AddText("Mean  = 0.4952");
   text = ptstats->AddText("RMS   = 0.1382");
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
