{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:36:22 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-83.43805,0.350906,750.9424);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin17 = new TH1F("hM_bin17","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin17->SetBinContent(13,4);
   hM_bin17->SetBinContent(14,9);
   hM_bin17->SetBinContent(15,13);
   hM_bin17->SetBinContent(16,35);
   hM_bin17->SetBinContent(17,36);
   hM_bin17->SetBinContent(18,57);
   hM_bin17->SetBinContent(19,67);
   hM_bin17->SetBinContent(20,95);
   hM_bin17->SetBinContent(21,80);
   hM_bin17->SetBinContent(22,72);
   hM_bin17->SetBinContent(23,86);
   hM_bin17->SetBinContent(24,100);
   hM_bin17->SetBinContent(25,105);
   hM_bin17->SetBinContent(26,117);
   hM_bin17->SetBinContent(27,129);
   hM_bin17->SetBinContent(28,151);
   hM_bin17->SetBinContent(29,137);
   hM_bin17->SetBinContent(30,147);
   hM_bin17->SetBinContent(31,133);
   hM_bin17->SetBinContent(32,143);
   hM_bin17->SetBinContent(33,154);
   hM_bin17->SetBinContent(34,135);
   hM_bin17->SetBinContent(35,136);
   hM_bin17->SetBinContent(36,166);
   hM_bin17->SetBinContent(37,139);
   hM_bin17->SetBinContent(38,167);
   hM_bin17->SetBinContent(39,208);
   hM_bin17->SetBinContent(40,193);
   hM_bin17->SetBinContent(41,207);
   hM_bin17->SetBinContent(42,268);
   hM_bin17->SetBinContent(43,288);
   hM_bin17->SetBinContent(44,314);
   hM_bin17->SetBinContent(45,444);
   hM_bin17->SetBinContent(46,425);
   hM_bin17->SetBinContent(47,463);
   hM_bin17->SetBinContent(48,548);
   hM_bin17->SetBinContent(49,591);
   hM_bin17->SetBinContent(50,577);
   hM_bin17->SetBinContent(51,609);
   hM_bin17->SetBinContent(52,608);
   hM_bin17->SetBinContent(53,611);
   hM_bin17->SetBinContent(54,570);
   hM_bin17->SetBinContent(55,560);
   hM_bin17->SetBinContent(56,526);
   hM_bin17->SetBinContent(57,521);
   hM_bin17->SetBinContent(58,454);
   hM_bin17->SetBinContent(59,436);
   hM_bin17->SetBinContent(60,349);
   hM_bin17->SetBinContent(61,318);
   hM_bin17->SetBinContent(62,279);
   hM_bin17->SetBinContent(63,272);
   hM_bin17->SetBinContent(64,227);
   hM_bin17->SetBinContent(65,197);
   hM_bin17->SetBinContent(66,197);
   hM_bin17->SetBinContent(67,227);
   hM_bin17->SetBinContent(68,211);
   hM_bin17->SetBinContent(69,171);
   hM_bin17->SetBinContent(70,186);
   hM_bin17->SetBinContent(71,157);
   hM_bin17->SetBinContent(72,172);
   hM_bin17->SetBinContent(73,193);
   hM_bin17->SetBinContent(74,123);
   hM_bin17->SetBinContent(75,164);
   hM_bin17->SetBinContent(76,169);
   hM_bin17->SetBinContent(77,153);
   hM_bin17->SetBinContent(78,157);
   hM_bin17->SetBinContent(79,148);
   hM_bin17->SetBinContent(80,134);
   hM_bin17->SetBinContent(81,158);
   hM_bin17->SetBinContent(82,135);
   hM_bin17->SetBinContent(83,154);
   hM_bin17->SetBinContent(84,135);
   hM_bin17->SetBinContent(85,126);
   hM_bin17->SetBinContent(86,99);
   hM_bin17->SetBinContent(87,115);
   hM_bin17->SetBinContent(88,108);
   hM_bin17->SetBinContent(89,111);
   hM_bin17->SetBinContent(90,105);
   hM_bin17->SetBinContent(91,111);
   hM_bin17->SetBinContent(92,127);
   hM_bin17->SetBinContent(93,118);
   hM_bin17->SetBinContent(94,102);
   hM_bin17->SetBinContent(95,120);
   hM_bin17->SetBinContent(96,85);
   hM_bin17->SetBinContent(97,110);
   hM_bin17->SetBinContent(98,103);
   hM_bin17->SetBinContent(99,111);
   hM_bin17->SetBinContent(100,98);
   hM_bin17->SetBinContent(101,5767);
   hM_bin17->SetEntries(24336);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07844431,0.2033161);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(42.36604);
   fsig->SetNDF(30);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,96.47108);
   fsig->SetParError(0,13.39839);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,408.4311);
   fsig->SetParError(1,90.40227);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.001764652);
   fsig->SetParError(2,8486.485);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,465.6861);
   fsig->SetParError(3,9.314311);
   fsig->SetParLimits(3,0,1222);
   fsig->SetParameter(4,0.1404673);
   fsig->SetParError(4,0.0004679413);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.02091427);
   fsig->SetParError(5,0.0005533411);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin17->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin17");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 24336  ");
   text = ptstats->AddText("Mean  = 0.1558");
   text = ptstats->AddText("RMS   = 0.06266");
   text = ptstats->AddText("#chi^{2} / ndf = 42.37 / 30");
   text = ptstats->AddText("p0       = 96.47 #pm 13.40 ");
   text = ptstats->AddText("p1       = 408.4 #pm 90.4 ");
   text = ptstats->AddText("p2       = -0.001765 #pm 8486.484375 ");
   text = ptstats->AddText("p3       = 465.7 #pm 9.3 ");
   text = ptstats->AddText("p4       = 0.1405 #pm 0.0005 ");
   text = ptstats->AddText("p5       = 0.02091 #pm 0.00055 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin17->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin17);

   ci = TColor::GetColor("#0000ff");
   hM_bin17->SetMarkerColor(ci);
   hM_bin17->SetMarkerStyle(24);
   hM_bin17->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin17->GetXaxis()->SetLabelFont(42);
   hM_bin17->GetXaxis()->SetLabelSize(0.035);
   hM_bin17->GetXaxis()->SetTitleSize(0.035);
   hM_bin17->GetXaxis()->SetTitleFont(42);
   hM_bin17->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin17->GetYaxis()->SetLabelFont(42);
   hM_bin17->GetYaxis()->SetLabelSize(0.035);
   hM_bin17->GetYaxis()->SetTitleSize(0.035);
   hM_bin17->GetYaxis()->SetTitleFont(42);
   hM_bin17->GetZaxis()->SetLabelFont(42);
   hM_bin17->GetZaxis()->SetLabelSize(0.035);
   hM_bin17->GetZaxis()->SetTitleSize(0.035);
   hM_bin17->GetZaxis()->SetTitleFont(42);
   hM_bin17->Draw("e");
   
   TF1 *fmb = new TF1("fmb","pol2",0.0628746,0.2077914);
   fmb->SetFillColor(19);
   fmb->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   fmb->SetLineColor(ci);
   fmb->SetLineWidth(3);
   fmb->SetLineStyle(2);
   fmb->GetXaxis()->SetLabelFont(42);
   fmb->GetXaxis()->SetLabelSize(0.035);
   fmb->GetXaxis()->SetTitleSize(0.035);
   fmb->GetXaxis()->SetTitleFont(42);
   fmb->GetYaxis()->SetLabelFont(42);
   fmb->GetYaxis()->SetLabelSize(0.035);
   fmb->GetYaxis()->SetTitleSize(0.035);
   fmb->GetYaxis()->SetTitleFont(42);
   fmb->SetParameter(0,96.47108);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,408.4311);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.001764652);
   fmb->SetParError(2,0);
   fmb->SetParLimits(2,0,0);
   fmb->Draw("same");
   
   TF1 *fpeak = new TF1("fpeak","gaus",0.0628746,0.2077914);
   fpeak->SetFillColor(19);
   fpeak->SetFillStyle(0);
   fpeak->SetLineWidth(3);
   fpeak->SetLineStyle(2);
   fpeak->GetXaxis()->SetLabelFont(42);
   fpeak->GetXaxis()->SetLabelSize(0.035);
   fpeak->GetXaxis()->SetTitleSize(0.035);
   fpeak->GetXaxis()->SetTitleFont(42);
   fpeak->GetYaxis()->SetLabelFont(42);
   fpeak->GetYaxis()->SetLabelSize(0.035);
   fpeak->GetYaxis()->SetTitleSize(0.035);
   fpeak->GetYaxis()->SetTitleFont(42);
   fpeak->SetParameter(0,465.6861);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1404673);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.02091427);
   fpeak->SetParError(2,0);
   fpeak->SetParLimits(2,0,0);
   fpeak->Draw("same");
   
   TPaveText *pt = new TPaveText(0.01,0.9320629,0.08904523,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   text = pt->AddText("M_{#gamma #gamma}");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
