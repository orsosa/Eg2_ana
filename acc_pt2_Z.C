{
//=========Macro generated from canvas: c1/c1
//=========  (Mon Oct 10 05:01:13 2016) by ROOT version5.34/19
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   c1->Range(-5,-nan,35,-nan);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *haccpt2 = new TH1F("haccpt2","",32,-1,31);
   haccpt2->SetBinContent(2,0.02422926);
   haccpt2->SetBinContent(3,0.02452721);
   haccpt2->SetBinContent(4,0.02323668);
   haccpt2->SetBinContent(5,0.01775853);
   haccpt2->SetBinContent(6,0.007744306);
   haccpt2->SetBinContent(7,0.02269358);
   haccpt2->SetBinContent(8,0.02546456);
   haccpt2->SetBinContent(9,0.02323696);
   haccpt2->SetBinContent(10,inf);
   haccpt2->SetBinContent(11,0.0214099);
   haccpt2->SetBinContent(12,0.01754012);
   haccpt2->SetBinContent(13,0.0248342);
   haccpt2->SetBinContent(14,0.02664171);
   haccpt2->SetBinContent(15,0.02670474);
   haccpt2->SetBinContent(16,0.02070706);
   haccpt2->SetBinContent(17,0.0123776);
   haccpt2->SetBinContent(18,0.02227545);
   haccpt2->SetBinContent(19,0.02618281);
   haccpt2->SetBinContent(20,0.02823468);
   haccpt2->SetBinContent(21,0.01858246);
   haccpt2->SetBinContent(22,0.009447947);
   haccpt2->SetBinContent(23,0.01669752);
   haccpt2->SetBinContent(24,0.02006037);
   haccpt2->SetBinContent(25,0.02127395);
   haccpt2->SetBinContent(26,0.01656252);
   haccpt2->SetBinContent(27,-0.004804289);
   haccpt2->SetBinContent(28,0.01268078);
   haccpt2->SetBinContent(29,0.01933493);
   haccpt2->SetBinContent(30,0.02042553);
   haccpt2->SetBinContent(31,0.009169514);
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
