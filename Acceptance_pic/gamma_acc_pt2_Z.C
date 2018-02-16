{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Sep 27 14:13:14 2016) by ROOT version5.34/19
   TCanvas *c1 = new TCanvas("c1", "c1",4,103,800,600);
   c1->Range(-5,-0.002474701,35,0.02227231);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *haccpt2 = new TH1F("haccpt2","",32,-1,31);
   haccpt2->SetBinContent(2,0.01139781);
   haccpt2->SetBinContent(3,0.01209148);
   haccpt2->SetBinContent(4,0.01306326);
   haccpt2->SetBinContent(5,0.01303572);
   haccpt2->SetBinContent(6,0.01413107);
   haccpt2->SetBinContent(7,0.01394372);
   haccpt2->SetBinContent(8,0.01498534);
   haccpt2->SetBinContent(9,0.0145298);
   haccpt2->SetBinContent(10,0.01540234);
   haccpt2->SetBinContent(11,0.01395748);
   haccpt2->SetBinContent(12,0.01470173);
   haccpt2->SetBinContent(13,0.01684012);
   haccpt2->SetBinContent(14,0.01726582);
   haccpt2->SetBinContent(15,0.01666834);
   haccpt2->SetBinContent(16,0.01568835);
   haccpt2->SetBinContent(17,0.01230789);
   haccpt2->SetBinContent(18,0.01703582);
   haccpt2->SetBinContent(19,0.01885487);
   haccpt2->SetBinContent(20,0.01815736);
   haccpt2->SetBinContent(21,0.01613217);
   haccpt2->SetBinContent(22,0.009647211);
   haccpt2->SetBinContent(23,0.01583267);
   haccpt2->SetBinContent(24,0.01751862);
   haccpt2->SetBinContent(25,0.01805123);
   haccpt2->SetBinContent(26,0.01601238);
   haccpt2->SetBinContent(27,0.006837278);
   haccpt2->SetBinContent(28,0.01462181);
   haccpt2->SetBinContent(29,0.01742654);
   haccpt2->SetBinContent(30,0.01818135);
   haccpt2->SetBinContent(31,0.01574803);
   haccpt2->SetEntries(30);
   haccpt2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   haccpt2->SetLineColor(ci);
   haccpt2->SetMarkerStyle(8);
   haccpt2->GetXaxis()->SetLabelFont(42);
   haccpt2->GetXaxis()->SetLabelSize(0.035);
   haccpt2->GetXaxis()->SetTitleSize(0.035);
   haccpt2->GetXaxis()->SetTitleFont(42);
   haccpt2->GetYaxis()->SetLabelFont(42);
   haccpt2->GetYaxis()->SetLabelSize(0.035);
   haccpt2->GetYaxis()->SetTitleSize(0.035);
   haccpt2->GetYaxis()->SetTitleFont(42);
   haccpt2->GetZaxis()->SetLabelFont(42);
   haccpt2->GetZaxis()->SetLabelSize(0.035);
   haccpt2->GetZaxis()->SetTitleSize(0.035);
   haccpt2->GetZaxis()->SetTitleFont(42);
   haccpt2->Draw("p");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
