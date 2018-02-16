{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon Jun  6 21:13:46 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   c->SetHighLightColor(2);
   c->Range(-0.125,-739.5938,1.125,6656.344);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *h2 = new TH1F("h2","Invariant Mass^{2}",1000,0,1);
   h2->SetBinContent(6,544);
   h2->SetBinContent(7,1563);
   h2->SetBinContent(8,1574);
   h2->SetBinContent(9,1731);
   h2->SetBinContent(10,1990);
   h2->SetBinContent(11,2342);
   h2->SetBinContent(12,2898);
   h2->SetBinContent(13,3523);
   h2->SetBinContent(14,4303);
   h2->SetBinContent(15,4936);
   h2->SetBinContent(16,5455);
   h2->SetBinContent(17,5635);
   h2->SetBinContent(18,5609);
   h2->SetBinContent(19,5490);
   h2->SetBinContent(20,4945);
   h2->SetBinContent(21,4510);
   h2->SetBinContent(22,3770);
   h2->SetBinContent(23,3102);
   h2->SetBinContent(24,2757);
   h2->SetBinContent(25,2380);
   h2->SetBinContent(26,2001);
   h2->SetBinContent(27,1689);
   h2->SetBinContent(28,1516);
   h2->SetBinContent(29,1310);
   h2->SetBinContent(30,1204);
   h2->SetBinContent(31,1137);
   h2->SetBinContent(32,1051);
   h2->SetBinContent(33,1015);
   h2->SetBinContent(34,880);
   h2->SetBinContent(35,833);
   h2->SetBinContent(36,818);
   h2->SetBinContent(37,508);
   h2->SetEntries(83019);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("h2");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 83019  ");
   text = ptstats->AddText("Mean  = 0.01864");
   text = ptstats->AddText("RMS   = 0.006707");
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
