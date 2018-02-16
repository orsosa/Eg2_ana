{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 11 13:48:42 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",1,1,1200,696);
   c->Range(-1.875,0.007537779,16.875,0.07947316);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *haccq2Mc = new TH1F("haccq2Mc","#gamma acceptance (Q^{2},Z)  M_{#pi^{0}} Cut",15,0,15);
   haccq2Mc->SetBinContent(1,0.02066216);
   haccq2Mc->SetBinContent(2,0.02047762);
   haccq2Mc->SetBinContent(3,0.02217416);
   haccq2Mc->SetBinContent(4,0.02144762);
   haccq2Mc->SetBinContent(5,0.01802774);
   haccq2Mc->SetBinContent(6,0.04036623);
   haccq2Mc->SetBinContent(7,0.04344014);
   haccq2Mc->SetBinContent(8,0.04388877);
   haccq2Mc->SetBinContent(9,0.04608128);
   haccq2Mc->SetBinContent(10,0.04020223);
   haccq2Mc->SetBinContent(11,0.05641346);
   haccq2Mc->SetBinContent(12,0.06061514);
   haccq2Mc->SetBinContent(13,0.06709125);
   haccq2Mc->SetBinContent(14,0.06786843);
   haccq2Mc->SetBinContent(15,0.05195072);
   haccq2Mc->SetBinError(1,0.0003676371);
   haccq2Mc->SetBinError(2,0.0004482202);
   haccq2Mc->SetBinError(3,0.0005569961);
   haccq2Mc->SetBinError(4,0.0006459783);
   haccq2Mc->SetBinError(5,0.0006865188);
   haccq2Mc->SetBinError(6,0.0006500263);
   haccq2Mc->SetBinError(7,0.0008277166);
   haccq2Mc->SetBinError(8,0.0009937831);
   haccq2Mc->SetBinError(9,0.001207299);
   haccq2Mc->SetBinError(10,0.001305782);
   haccq2Mc->SetBinError(11,0.0008635904);
   haccq2Mc->SetBinError(12,0.001097377);
   haccq2Mc->SetBinError(13,0.001401897);
   haccq2Mc->SetBinError(14,0.001670797);
   haccq2Mc->SetBinError(15,0.001674939);
   haccq2Mc->SetEntries(23629.22);
   haccq2Mc->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   haccq2Mc->SetLineColor(ci);
   haccq2Mc->SetMarkerStyle(8);
   haccq2Mc->GetXaxis()->SetTitle("nbin");
   haccq2Mc->GetXaxis()->SetLabelFont(42);
   haccq2Mc->GetXaxis()->SetLabelSize(0.035);
   haccq2Mc->GetXaxis()->SetTitleSize(0.035);
   haccq2Mc->GetXaxis()->SetTitleFont(42);
   haccq2Mc->GetYaxis()->SetTitle("Acceptance");
   haccq2Mc->GetYaxis()->SetLabelFont(42);
   haccq2Mc->GetYaxis()->SetLabelSize(0.035);
   haccq2Mc->GetYaxis()->SetTitleSize(0.035);
   haccq2Mc->GetYaxis()->SetTitleOffset(1.1);
   haccq2Mc->GetYaxis()->SetTitleFont(42);
   haccq2Mc->GetZaxis()->SetLabelFont(42);
   haccq2Mc->GetZaxis()->SetLabelSize(0.035);
   haccq2Mc->GetZaxis()->SetTitleSize(0.035);
   haccq2Mc->GetZaxis()->SetTitleFont(42);
   haccq2Mc->Draw("p");
   
   TPaveText *pt = new TPaveText(0.2939298,0.9013584,0.7060702,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("#gamma acceptance (Q^{2},Z)  M_{#pi^{0}} Cut");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
