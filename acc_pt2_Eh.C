{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Sep 21 18:44:03 2016) by ROOT version5.34/19
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   c1->Range(-5,-0.002638286,35,0.02374457);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *haccpt2 = new TH1F("haccpt2","",32,-1,31);
   haccpt2->SetBinContent(2,0.006128172);
   haccpt2->SetBinContent(3,0.005501326);
   haccpt2->SetBinContent(4,0.003684398);
   haccpt2->SetBinContent(5,0.003426608);
   haccpt2->SetBinContent(6,0.002882576);
   haccpt2->SetBinContent(7,0.01107802);
   haccpt2->SetBinContent(8,0.009690023);
   haccpt2->SetBinContent(9,0.007686716);
   haccpt2->SetBinContent(10,0.005741885);
   haccpt2->SetBinContent(11,0.006444867);
   haccpt2->SetBinContent(12,0.01475232);
   haccpt2->SetBinContent(13,0.01408041);
   haccpt2->SetBinContent(14,0.01162541);
   haccpt2->SetBinContent(15,0.01032194);
   haccpt2->SetBinContent(16,0.008801024);
   haccpt2->SetBinContent(17,0.01313801);
   haccpt2->SetBinContent(18,0.01635785);
   haccpt2->SetBinContent(19,0.01403512);
   haccpt2->SetBinContent(20,0.01381635);
   haccpt2->SetBinContent(21,0.01333121);
   haccpt2->SetBinContent(22,0.008711274);
   haccpt2->SetBinContent(23,0.01548845);
   haccpt2->SetBinContent(24,0.01701855);
   haccpt2->SetBinContent(25,0.01701135);
   haccpt2->SetBinContent(26,0.01831375);
   haccpt2->SetBinContent(27,0.003467736);
   haccpt2->SetBinContent(28,0.01342411);
   haccpt2->SetBinContent(29,0.01849013);
   haccpt2->SetBinContent(30,0.02010122);
   haccpt2->SetBinContent(31,0.01780752);
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
