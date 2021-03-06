{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 16:04:36 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-24.29633,0.350906,218.667);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin46 = new TH1F("hM_bin46","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin46->SetBinContent(0,1922);
   hM_bin46->SetBinContent(13,1);
   hM_bin46->SetBinContent(14,2);
   hM_bin46->SetBinContent(15,2);
   hM_bin46->SetBinContent(16,2);
   hM_bin46->SetBinContent(17,7);
   hM_bin46->SetBinContent(18,4);
   hM_bin46->SetBinContent(19,3);
   hM_bin46->SetBinContent(20,3);
   hM_bin46->SetBinContent(21,1);
   hM_bin46->SetBinContent(22,2);
   hM_bin46->SetBinContent(23,3);
   hM_bin46->SetBinContent(25,2);
   hM_bin46->SetBinContent(26,1);
   hM_bin46->SetBinContent(27,3);
   hM_bin46->SetBinContent(28,1);
   hM_bin46->SetBinContent(29,6);
   hM_bin46->SetBinContent(30,3);
   hM_bin46->SetBinContent(31,4);
   hM_bin46->SetBinContent(32,2);
   hM_bin46->SetBinContent(33,4);
   hM_bin46->SetBinContent(34,11);
   hM_bin46->SetBinContent(35,3);
   hM_bin46->SetBinContent(36,2);
   hM_bin46->SetBinContent(37,6);
   hM_bin46->SetBinContent(38,7);
   hM_bin46->SetBinContent(39,11);
   hM_bin46->SetBinContent(40,10);
   hM_bin46->SetBinContent(41,23);
   hM_bin46->SetBinContent(42,26);
   hM_bin46->SetBinContent(43,40);
   hM_bin46->SetBinContent(44,52);
   hM_bin46->SetBinContent(45,64);
   hM_bin46->SetBinContent(46,93);
   hM_bin46->SetBinContent(47,111);
   hM_bin46->SetBinContent(48,106);
   hM_bin46->SetBinContent(49,158);
   hM_bin46->SetBinContent(50,172);
   hM_bin46->SetBinContent(51,151);
   hM_bin46->SetBinContent(52,151);
   hM_bin46->SetBinContent(53,163);
   hM_bin46->SetBinContent(54,145);
   hM_bin46->SetBinContent(55,146);
   hM_bin46->SetBinContent(56,120);
   hM_bin46->SetBinContent(57,84);
   hM_bin46->SetBinContent(58,92);
   hM_bin46->SetBinContent(59,60);
   hM_bin46->SetBinContent(60,53);
   hM_bin46->SetBinContent(61,43);
   hM_bin46->SetBinContent(62,39);
   hM_bin46->SetBinContent(63,30);
   hM_bin46->SetBinContent(64,24);
   hM_bin46->SetBinContent(65,32);
   hM_bin46->SetBinContent(66,24);
   hM_bin46->SetBinContent(67,22);
   hM_bin46->SetBinContent(68,17);
   hM_bin46->SetBinContent(69,16);
   hM_bin46->SetBinContent(70,18);
   hM_bin46->SetBinContent(71,15);
   hM_bin46->SetBinContent(72,23);
   hM_bin46->SetBinContent(73,19);
   hM_bin46->SetBinContent(74,18);
   hM_bin46->SetBinContent(75,19);
   hM_bin46->SetBinContent(76,27);
   hM_bin46->SetBinContent(77,23);
   hM_bin46->SetBinContent(78,14);
   hM_bin46->SetBinContent(79,25);
   hM_bin46->SetBinContent(80,26);
   hM_bin46->SetBinContent(81,27);
   hM_bin46->SetBinContent(82,29);
   hM_bin46->SetBinContent(83,22);
   hM_bin46->SetBinContent(84,25);
   hM_bin46->SetBinContent(85,20);
   hM_bin46->SetBinContent(86,25);
   hM_bin46->SetBinContent(87,20);
   hM_bin46->SetBinContent(88,26);
   hM_bin46->SetBinContent(89,24);
   hM_bin46->SetBinContent(90,27);
   hM_bin46->SetBinContent(91,24);
   hM_bin46->SetBinContent(92,29);
   hM_bin46->SetBinContent(93,32);
   hM_bin46->SetBinContent(94,28);
   hM_bin46->SetBinContent(95,38);
   hM_bin46->SetBinContent(96,35);
   hM_bin46->SetBinContent(97,34);
   hM_bin46->SetBinContent(98,33);
   hM_bin46->SetBinContent(99,33);
   hM_bin46->SetBinContent(100,27);
   hM_bin46->SetBinContent(101,10347);
   hM_bin46->SetEntries(15417);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08266097,0.1985944);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(37.73423);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-14.50115);
   fsig->SetParError(0,2.974084);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,152.3211);
   fsig->SetParError(1,24.99606);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-2.385841e-07);
   fsig->SetParError(2,312.9993);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,143.7094);
   fsig->SetParError(3,4.102511);
   fsig->SetParLimits(3,0,344);
   fsig->SetParameter(4,0.1397682);
   fsig->SetParError(4,0.0005362991);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,8.324537e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin46->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin46");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 15417  ");
   text = ptstats->AddText("Mean  = 0.1698");
   text = ptstats->AddText("RMS   = 0.05865");
   text = ptstats->AddText("#chi^{2} / ndf = 37.73 / 27");
   text = ptstats->AddText("p0       = -14.5 #pm 3.0 ");
   text = ptstats->AddText("p1       = 152.3 #pm 25.0 ");
   text = ptstats->AddText("p2       = -2.386e-07 #pm 3.130e+02 ");
   text = ptstats->AddText("p3       = 143.7 #pm 4.1 ");
   text = ptstats->AddText("p4       = 0.1398 #pm 0.0005 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00008 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin46->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin46);

   ci = TColor::GetColor("#0000ff");
   hM_bin46->SetMarkerColor(ci);
   hM_bin46->SetMarkerStyle(24);
   hM_bin46->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin46->GetXaxis()->SetLabelFont(42);
   hM_bin46->GetXaxis()->SetLabelSize(0.035);
   hM_bin46->GetXaxis()->SetTitleSize(0.035);
   hM_bin46->GetXaxis()->SetTitleFont(42);
   hM_bin46->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin46->GetYaxis()->SetLabelFont(42);
   hM_bin46->GetYaxis()->SetLabelSize(0.035);
   hM_bin46->GetYaxis()->SetTitleSize(0.035);
   hM_bin46->GetYaxis()->SetTitleFont(42);
   hM_bin46->GetZaxis()->SetLabelFont(42);
   hM_bin46->GetZaxis()->SetLabelSize(0.035);
   hM_bin46->GetZaxis()->SetTitleSize(0.035);
   hM_bin46->GetZaxis()->SetTitleFont(42);
   hM_bin46->Draw("e");
   
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
   fmb->SetParameter(0,-14.50115);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,152.3211);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-2.385841e-07);
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
   fpeak->SetParameter(0,143.7094);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1397682);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.01932224);
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
