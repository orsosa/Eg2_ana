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
   
   TH1F *hWmb = new TH1F("hWmb","Invariant Mass mixing background",1000,0,1);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hWmb");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 0      ");
   text = ptstats->AddText("Mean  =      0");
   text = ptstats->AddText("RMS   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hWmb->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hWmb);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hWmb->SetLineColor(ci);
   hWmb->GetXaxis()->SetTitle("Mass (GeV)");
   hWmb->GetXaxis()->SetLabelFont(42);
   hWmb->GetXaxis()->SetLabelSize(0.035);
   hWmb->GetXaxis()->SetTitleSize(0.035);
   hWmb->GetXaxis()->SetTitleFont(42);
   hWmb->GetYaxis()->SetTitle("dN/dM");
   hWmb->GetYaxis()->SetLabelFont(42);
   hWmb->GetYaxis()->SetLabelSize(0.035);
   hWmb->GetYaxis()->SetTitleSize(0.035);
   hWmb->GetYaxis()->SetTitleFont(42);
   hWmb->GetZaxis()->SetLabelFont(42);
   hWmb->GetZaxis()->SetLabelSize(0.035);
   hWmb->GetZaxis()->SetTitleSize(0.035);
   hWmb->GetZaxis()->SetTitleFont(42);
   hWmb->Draw("");
   
   TPaveText *pt = new TPaveText(0.191005,0.9341608,0.808995,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("Invariant Mass mixing background");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
