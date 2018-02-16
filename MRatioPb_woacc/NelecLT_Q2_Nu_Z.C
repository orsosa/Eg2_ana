{
//=========Macro generated from canvas: c/c
//=========  (Tue Jan 10 11:12:02 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",0,0,1200,900);
   c->SetHighLightColor(2);
   c->Range(0.6125,175800.2,4.4875,184758);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis1[4] = {1, 1.33, 1.77, 4.1}; 
   
   TH1F *hNelecLT = new TH1F("hNelecLT","Number of electrons as function of Q2",3, xAxis1);
   hNelecLT->SetBinContent(1,177021);
   hNelecLT->SetBinContent(2,183521);
   hNelecLT->SetBinContent(3,180809);
   hNelecLT->SetEntries(541351);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hNelecLT");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 541351 ");
   text = ptstats->AddText("Mean  =   1.66");
   text = ptstats->AddText("RMS   = 0.5264");
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
