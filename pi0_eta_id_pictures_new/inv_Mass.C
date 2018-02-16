{
//=========Macro generated from canvas: c/The canvas
//=========  (Thu Sep 24 13:17:45 2015) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.125,-0.13125,1.125,1.18125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *hW = new TH1F("hW","Invariant Mass",1000,0,1);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hW");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 0      ");
   text = ptstats->AddText("Mean  =      0");
   text = ptstats->AddText("RMS   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hW->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hW);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hW->SetLineColor(ci);
   hW->GetXaxis()->SetTitle("Mass (GeV)");
   hW->GetXaxis()->SetLabelFont(42);
   hW->GetXaxis()->SetLabelSize(0.035);
   hW->GetXaxis()->SetTitleSize(0.035);
   hW->GetXaxis()->SetTitleFont(42);
   hW->GetYaxis()->SetTitle("dN/dM");
   hW->GetYaxis()->SetLabelFont(42);
   hW->GetYaxis()->SetLabelSize(0.035);
   hW->GetYaxis()->SetTitleSize(0.035);
   hW->GetYaxis()->SetTitleFont(42);
   hW->GetZaxis()->SetLabelFont(42);
   hW->GetZaxis()->SetLabelSize(0.035);
   hW->GetZaxis()->SetTitleSize(0.035);
   hW->GetZaxis()->SetTitleFont(42);
   hW->Draw("");
      tex = new TLatex(-5.96181e-23,-4.96816e-23,"-0.0 MeV");
   tex->SetLineWidth(2);
   tex->Draw();
   
   TPaveText *pt = new TPaveText(0.3637437,0.94,0.6362563,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("Invariant Mass");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
