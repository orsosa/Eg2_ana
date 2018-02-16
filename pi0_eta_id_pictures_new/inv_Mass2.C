{
//=========Macro generated from canvas: c/The canvas
//=========  (Thu Sep 24 13:17:45 2015) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   c->SetHighLightColor(2);
   c->Range(-0.125,-0.13125,1.125,1.18125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *h2 = new TH1F("h2","Invariant Mass^{2}",1000,0,1);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("h2");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 0      ");
   text = ptstats->AddText("Mean  =      0");
   text = ptstats->AddText("RMS   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   h2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(h2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h2->SetLineColor(ci);
   h2->GetXaxis()->SetTitle("Mass^{2} (GeV^{2})");
   h2->GetXaxis()->SetLabelFont(42);
   h2->GetXaxis()->SetLabelSize(0.035);
   h2->GetXaxis()->SetTitleSize(0.035);
   h2->GetXaxis()->SetTitleFont(42);
   h2->GetYaxis()->SetTitle("dN/dM");
   h2->GetYaxis()->SetLabelFont(42);
   h2->GetYaxis()->SetLabelSize(0.035);
   h2->GetYaxis()->SetTitleSize(0.035);
   h2->GetYaxis()->SetTitleFont(42);
   h2->GetZaxis()->SetLabelFont(42);
   h2->GetZaxis()->SetLabelSize(0.035);
   h2->GetZaxis()->SetTitleSize(0.035);
   h2->GetZaxis()->SetTitleFont(42);
   h2->Draw("");
   
   TPaveText *pt = new TPaveText(0.3568342,0.9341608,0.6431658,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("Invariant Mass^{2}");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
