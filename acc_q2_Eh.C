{
//=========Macro generated from canvas: c/c
//=========  (Wed Sep 21 18:44:03 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-3.125,-0.006514818,18.125,0.05863336);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *haccq2 = new TH1F("haccq2","",17,-1,16);
   haccq2->SetBinContent(2,0.01329142);
   haccq2->SetBinContent(3,0.01678601);
   haccq2->SetBinContent(4,0.01638267);
   haccq2->SetBinContent(5,0.01629081);
   haccq2->SetBinContent(6,0.01429707);
   haccq2->SetBinContent(7,0.02669634);
   haccq2->SetBinContent(8,0.03081496);
   haccq2->SetBinContent(9,0.03433799);
   haccq2->SetBinContent(10,0.03331446);
   haccq2->SetBinContent(11,0.03069444);
   haccq2->SetBinContent(12,0.034592);
   haccq2->SetBinContent(13,0.04415148);
   haccq2->SetBinContent(14,0.0496367);
   haccq2->SetBinContent(15,0.04775615);
   haccq2->SetBinContent(16,0.04424617);
   haccq2->SetEntries(15);
   haccq2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   haccq2->SetLineColor(ci);
   haccq2->SetMarkerStyle(8);
   haccq2->GetXaxis()->SetLabelFont(42);
   haccq2->GetXaxis()->SetLabelSize(0.035);
   haccq2->GetXaxis()->SetTitleSize(0.035);
   haccq2->GetXaxis()->SetTitleFont(42);
   haccq2->GetYaxis()->SetLabelFont(42);
   haccq2->GetYaxis()->SetLabelSize(0.035);
   haccq2->GetYaxis()->SetTitleSize(0.035);
   haccq2->GetYaxis()->SetTitleFont(42);
   haccq2->GetZaxis()->SetLabelFont(42);
   haccq2->GetZaxis()->SetLabelSize(0.035);
   haccq2->GetZaxis()->SetTitleSize(0.035);
   haccq2->GetZaxis()->SetTitleFont(42);
   haccq2->Draw("p");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
