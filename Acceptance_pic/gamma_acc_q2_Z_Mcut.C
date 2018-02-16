{
//=========Macro generated from canvas: c/c
//=========  (Tue Sep 27 14:13:13 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",2,77,800,600);
   c->Range(-3.125,-0.007841494,18.125,0.07057344);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *haccq2Mc = new TH1F("haccq2Mc","",17,-1,16);
   haccq2Mc->SetBinContent(2,0.01747533);
   haccq2Mc->SetBinContent(3,0.01751237);
   haccq2Mc->SetBinContent(4,0.01932524);
   haccq2Mc->SetBinContent(5,0.01815357);
   haccq2Mc->SetBinContent(6,0.01484814);
   haccq2Mc->SetBinContent(7,0.03556963);
   haccq2Mc->SetBinContent(8,0.038271);
   haccq2Mc->SetBinContent(9,0.03919807);
   haccq2Mc->SetBinContent(10,0.03845643);
   haccq2Mc->SetBinContent(11,0.03332929);
   haccq2Mc->SetBinContent(12,0.0515168);
   haccq2Mc->SetBinContent(13,0.05566468);
   haccq2Mc->SetBinContent(14,0.05974471);
   haccq2Mc->SetBinContent(15,0.05909117);
   haccq2Mc->SetBinContent(16,0.04345784);
   haccq2Mc->SetEntries(15);
   haccq2Mc->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   haccq2Mc->SetLineColor(ci);
   haccq2Mc->SetMarkerStyle(8);
   haccq2Mc->GetXaxis()->SetLabelFont(42);
   haccq2Mc->GetXaxis()->SetLabelSize(0.035);
   haccq2Mc->GetXaxis()->SetTitleSize(0.035);
   haccq2Mc->GetXaxis()->SetTitleFont(42);
   haccq2Mc->GetYaxis()->SetLabelFont(42);
   haccq2Mc->GetYaxis()->SetLabelSize(0.035);
   haccq2Mc->GetYaxis()->SetTitleSize(0.035);
   haccq2Mc->GetYaxis()->SetTitleFont(42);
   haccq2Mc->GetZaxis()->SetLabelFont(42);
   haccq2Mc->GetZaxis()->SetLabelSize(0.035);
   haccq2Mc->GetZaxis()->SetTitleSize(0.035);
   haccq2Mc->GetZaxis()->SetTitleFont(42);
   haccq2Mc->Draw("p");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
