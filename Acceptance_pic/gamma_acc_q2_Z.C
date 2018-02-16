{
//=========Macro generated from canvas: c/c
//=========  (Tue Sep 27 14:13:13 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",2,77,800,600);
   c->Range(-3.125,-0.01098443,18.125,0.09885986);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *haccq2 = new TH1F("haccq2","",17,-1,16);
   haccq2->SetBinContent(2,0.01928932);
   haccq2->SetBinContent(3,0.02175061);
   haccq2->SetBinContent(4,0.02361882);
   haccq2->SetBinContent(5,0.02465131);
   haccq2->SetBinContent(6,0.02296586);
   haccq2->SetBinContent(7,0.03848093);
   haccq2->SetBinContent(8,0.04596224);
   haccq2->SetBinContent(9,0.05115104);
   haccq2->SetBinContent(10,0.0535658);
   haccq2->SetBinContent(11,0.05314918);
   haccq2->SetBinContent(12,0.05826975);
   haccq2->SetBinContent(13,0.06957334);
   haccq2->SetBinContent(14,0.07739189);
   haccq2->SetBinContent(15,0.08369089);
   haccq2->SetBinContent(16,0.07888673);
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
