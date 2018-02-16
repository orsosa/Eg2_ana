{
//=========Macro generated from canvas: c/The canvas
//=========  (Thu Sep 24 13:17:46 2015) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   c->SetHighLightColor(2);
   c->Range(-3.75,-0.13125,3.75,1.18125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *hT = new TH1F("hT","Time difference",1000,-3,3);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hT");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 0      ");
   text = ptstats->AddText("Mean  =      0");
   text = ptstats->AddText("RMS   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hT->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hT);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hT->SetLineColor(ci);
   hT->GetXaxis()->SetTitle("Time difference (ns)");
   hT->GetXaxis()->SetLabelFont(42);
   hT->GetXaxis()->SetLabelSize(0.035);
   hT->GetXaxis()->SetTitleSize(0.035);
   hT->GetXaxis()->SetTitleFont(42);
   hT->GetYaxis()->SetTitle("dN/dt");
   hT->GetYaxis()->SetLabelFont(42);
   hT->GetYaxis()->SetLabelSize(0.035);
   hT->GetYaxis()->SetTitleSize(0.035);
   hT->GetYaxis()->SetTitleFont(42);
   hT->GetZaxis()->SetLabelFont(42);
   hT->GetZaxis()->SetLabelSize(0.035);
   hT->GetZaxis()->SetTitleSize(0.035);
   hT->GetZaxis()->SetTitleFont(42);
   hT->Draw("");
   
   TPaveText *pt = new TPaveText(0.3555779,0.94,0.6444221,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("Time difference");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
