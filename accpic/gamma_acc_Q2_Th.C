{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 11 11:00:42 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",0,0,1200,720);
   c->Range(-1.875,0.02406506,16.875,0.2709352);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *haccq = new TH1F("haccq","#gamma acceptance (Q^{2},#theta)",15,0,15);
   haccq->SetBinContent(1,0.05843733);
   haccq->SetBinContent(2,0.08295475);
   haccq->SetBinContent(3,0.08765709);
   haccq->SetBinContent(4,0.08129703);
   haccq->SetBinContent(5,0.05807574);
   haccq->SetBinContent(6,0.1135072);
   haccq->SetBinContent(7,0.1614476);
   haccq->SetBinContent(8,0.1703449);
   haccq->SetBinContent(9,0.1622828);
   haccq->SetBinContent(10,0.1150936);
   haccq->SetBinContent(11,0.1571198);
   haccq->SetBinContent(12,0.223099);
   haccq->SetBinContent(13,0.2356878);
   haccq->SetBinContent(14,0.229896);
   haccq->SetBinContent(15,0.1669824);
   haccq->SetBinError(1,0.0004184635);
   haccq->SetBinError(2,0.0004624953);
   haccq->SetBinError(3,0.0004771345);
   haccq->SetBinError(4,0.0004783899);
   haccq->SetBinError(5,0.0003669282);
   haccq->SetBinError(6,0.0007557484);
   haccq->SetBinError(7,0.0008380262);
   haccq->SetBinError(8,0.0008626076);
   haccq->SetBinError(9,0.0008807329);
   haccq->SetBinError(10,0.0006678639);
   haccq->SetBinError(11,0.001008463);
   haccq->SetBinError(12,0.001116911);
   haccq->SetBinError(13,0.001155797);
   haccq->SetBinError(14,0.001205699);
   haccq->SetBinError(15,0.0009297505);
   haccq->SetEntries(436610.1);
   haccq->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   haccq->SetLineColor(ci);
   haccq->SetMarkerStyle(8);
   haccq->GetXaxis()->SetTitle("nbin");
   haccq->GetXaxis()->SetLabelFont(42);
   haccq->GetXaxis()->SetLabelSize(0.035);
   haccq->GetXaxis()->SetTitleSize(0.035);
   haccq->GetXaxis()->SetTitleFont(42);
   haccq->GetYaxis()->SetTitle("Acceptance");
   haccq->GetYaxis()->SetLabelFont(42);
   haccq->GetYaxis()->SetLabelSize(0.035);
   haccq->GetYaxis()->SetTitleSize(0.035);
   haccq->GetYaxis()->SetTitleOffset(1.1);
   haccq->GetYaxis()->SetTitleFont(42);
   haccq->GetZaxis()->SetLabelFont(42);
   haccq->GetZaxis()->SetLabelSize(0.035);
   haccq->GetZaxis()->SetTitleSize(0.035);
   haccq->GetZaxis()->SetTitleFont(42);
   haccq->Draw("p");
   
   TPaveText *pt = new TPaveText(0.3549666,0.9221676,0.6450334,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("#gamma acceptance (Q^{2},#theta)");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
