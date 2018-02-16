{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 10 05:01:13 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-3.125,-0.03521077,18.125,0.2193614);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *haccq2 = new TH1F("haccq2","",17,-1,16);
   haccq2->SetBinContent(2,0.03070216);
   haccq2->SetBinContent(3,0.03420602);
   haccq2->SetBinContent(4,0.03738073);
   haccq2->SetBinContent(5,0.0359253);
   haccq2->SetBinContent(6,0.03012897);
   haccq2->SetBinContent(7,0.05703096);
   haccq2->SetBinContent(8,0.06760743);
   haccq2->SetBinContent(9,0.07367844);
   haccq2->SetBinContent(10,0.08215348);
   haccq2->SetBinContent(11,0.07105549);
   haccq2->SetBinContent(12,0.08403516);
   haccq2->SetBinContent(13,0.0956839);
   haccq2->SetBinContent(14,0.1081873);
   haccq2->SetBinContent(15,0.117744);
   haccq2->SetBinContent(16,0.09210311);
   haccq2->SetBinError(1,0.0005173648);
   haccq2->SetBinError(2,0.0006633926);
   haccq2->SetBinError(3,0.0008193462);
   haccq2->SetBinError(4,0.0009336173);
   haccq2->SetBinError(5,0.0009778425);
   haccq2->SetBinError(6,0.0008927488);
   haccq2->SetBinError(7,0.001187793);
   haccq2->SetBinError(8,0.001473777);
   haccq2->SetBinError(9,0.001854594);
   haccq2->SetBinError(10,0.001934789);
   haccq2->SetBinError(11,0.001228425);
   haccq2->SetBinError(12,0.001588088);
   haccq2->SetBinError(13,0.0020329);
   haccq2->SetBinError(14,0.002488757);
   haccq2->SetBinError(15,0.002486434);
   haccq2->SetBinError(16,0.09210311);
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
