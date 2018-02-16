{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Sep 27 14:13:16 2016) by ROOT version5.34/19
   TCanvas *c1 = new TCanvas("c1", "c1",4,103,800,600);
   c1->Range(-5,-0.002790339,35,0.02511305);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *haccpt2Mc = new TH1F("haccpt2Mc","",32,-1,31);
   haccpt2Mc->SetBinContent(2,0.02125972);
   haccpt2Mc->SetBinContent(3,0.007169001);
   haccpt2Mc->SetBinContent(4,0.006051778);
   haccpt2Mc->SetBinContent(5,0.004721175);
   haccpt2Mc->SetBinContent(6,0.004597188);
   haccpt2Mc->SetBinContent(7,0.01926897);
   haccpt2Mc->SetBinContent(8,0.01169354);
   haccpt2Mc->SetBinContent(9,0.009401164);
   haccpt2Mc->SetBinContent(10,0.008202875);
   haccpt2Mc->SetBinContent(11,0.007429212);
   haccpt2Mc->SetBinContent(12,0.01488275);
   haccpt2Mc->SetBinContent(13,0.0148974);
   haccpt2Mc->SetBinContent(14,0.01495662);
   haccpt2Mc->SetBinContent(15,0.01154656);
   haccpt2Mc->SetBinContent(16,0.009353012);
   haccpt2Mc->SetBinContent(17,0.01158503);
   haccpt2Mc->SetBinContent(18,0.0159813);
   haccpt2Mc->SetBinContent(19,0.01603403);
   haccpt2Mc->SetBinContent(20,0.0147353);
   haccpt2Mc->SetBinContent(21,0.01103139);
   haccpt2Mc->SetBinContent(22,0.009075843);
   haccpt2Mc->SetBinContent(23,0.01409317);
   haccpt2Mc->SetBinContent(24,0.01490202);
   haccpt2Mc->SetBinContent(25,0.01351585);
   haccpt2Mc->SetBinContent(26,0.01120478);
   haccpt2Mc->SetBinContent(27,0.00608815);
   haccpt2Mc->SetBinContent(28,0.01271379);
   haccpt2Mc->SetBinContent(29,0.01496756);
   haccpt2Mc->SetBinContent(30,0.01575311);
   haccpt2Mc->SetBinContent(31,0.01070941);
   haccpt2Mc->SetEntries(30);
   haccpt2Mc->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   haccpt2Mc->SetLineColor(ci);
   haccpt2Mc->SetMarkerStyle(8);
   haccpt2Mc->GetXaxis()->SetLabelFont(42);
   haccpt2Mc->GetXaxis()->SetLabelSize(0.035);
   haccpt2Mc->GetXaxis()->SetTitleSize(0.035);
   haccpt2Mc->GetXaxis()->SetTitleFont(42);
   haccpt2Mc->GetYaxis()->SetLabelFont(42);
   haccpt2Mc->GetYaxis()->SetLabelSize(0.035);
   haccpt2Mc->GetYaxis()->SetTitleSize(0.035);
   haccpt2Mc->GetYaxis()->SetTitleFont(42);
   haccpt2Mc->GetZaxis()->SetLabelFont(42);
   haccpt2Mc->GetZaxis()->SetLabelSize(0.035);
   haccpt2Mc->GetZaxis()->SetTitleSize(0.035);
   haccpt2Mc->GetZaxis()->SetTitleFont(42);
   haccpt2Mc->Draw("p");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
