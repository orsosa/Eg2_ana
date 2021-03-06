{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Jan 31 05:35:07 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-16.77594,0.350906,150.9834);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin37 = new TH1F("hM_bin37","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin37->SetBinContent(0,4131);
   hM_bin37->SetBinContent(16,4);
   hM_bin37->SetBinContent(17,4);
   hM_bin37->SetBinContent(18,7);
   hM_bin37->SetBinContent(19,4);
   hM_bin37->SetBinContent(20,2);
   hM_bin37->SetBinContent(21,1);
   hM_bin37->SetBinContent(22,1);
   hM_bin37->SetBinContent(23,3);
   hM_bin37->SetBinContent(24,4);
   hM_bin37->SetBinContent(25,8);
   hM_bin37->SetBinContent(26,3);
   hM_bin37->SetBinContent(27,2);
   hM_bin37->SetBinContent(29,2);
   hM_bin37->SetBinContent(30,2);
   hM_bin37->SetBinContent(31,5);
   hM_bin37->SetBinContent(32,6);
   hM_bin37->SetBinContent(33,4);
   hM_bin37->SetBinContent(34,4);
   hM_bin37->SetBinContent(35,5);
   hM_bin37->SetBinContent(36,3);
   hM_bin37->SetBinContent(37,8);
   hM_bin37->SetBinContent(38,11);
   hM_bin37->SetBinContent(39,8);
   hM_bin37->SetBinContent(40,11);
   hM_bin37->SetBinContent(41,16);
   hM_bin37->SetBinContent(42,14);
   hM_bin37->SetBinContent(43,28);
   hM_bin37->SetBinContent(44,34);
   hM_bin37->SetBinContent(45,38);
   hM_bin37->SetBinContent(46,42);
   hM_bin37->SetBinContent(47,61);
   hM_bin37->SetBinContent(48,79);
   hM_bin37->SetBinContent(49,79);
   hM_bin37->SetBinContent(50,93);
   hM_bin37->SetBinContent(51,106);
   hM_bin37->SetBinContent(52,90);
   hM_bin37->SetBinContent(53,117);
   hM_bin37->SetBinContent(54,80);
   hM_bin37->SetBinContent(55,76);
   hM_bin37->SetBinContent(56,97);
   hM_bin37->SetBinContent(57,93);
   hM_bin37->SetBinContent(58,68);
   hM_bin37->SetBinContent(59,71);
   hM_bin37->SetBinContent(60,43);
   hM_bin37->SetBinContent(61,51);
   hM_bin37->SetBinContent(62,33);
   hM_bin37->SetBinContent(63,29);
   hM_bin37->SetBinContent(64,35);
   hM_bin37->SetBinContent(65,20);
   hM_bin37->SetBinContent(66,16);
   hM_bin37->SetBinContent(67,19);
   hM_bin37->SetBinContent(68,26);
   hM_bin37->SetBinContent(69,12);
   hM_bin37->SetBinContent(70,14);
   hM_bin37->SetBinContent(71,19);
   hM_bin37->SetBinContent(72,19);
   hM_bin37->SetBinContent(73,13);
   hM_bin37->SetBinContent(74,20);
   hM_bin37->SetBinContent(75,13);
   hM_bin37->SetBinContent(76,15);
   hM_bin37->SetBinContent(77,14);
   hM_bin37->SetBinContent(78,19);
   hM_bin37->SetBinContent(79,19);
   hM_bin37->SetBinContent(80,20);
   hM_bin37->SetBinContent(81,13);
   hM_bin37->SetBinContent(82,15);
   hM_bin37->SetBinContent(83,19);
   hM_bin37->SetBinContent(84,18);
   hM_bin37->SetBinContent(85,29);
   hM_bin37->SetBinContent(86,19);
   hM_bin37->SetBinContent(87,15);
   hM_bin37->SetBinContent(88,23);
   hM_bin37->SetBinContent(89,27);
   hM_bin37->SetBinContent(90,29);
   hM_bin37->SetBinContent(91,17);
   hM_bin37->SetBinContent(92,34);
   hM_bin37->SetBinContent(93,25);
   hM_bin37->SetBinContent(94,29);
   hM_bin37->SetBinContent(95,33);
   hM_bin37->SetBinContent(96,25);
   hM_bin37->SetBinContent(97,29);
   hM_bin37->SetBinContent(98,24);
   hM_bin37->SetBinContent(99,31);
   hM_bin37->SetBinContent(100,36);
   hM_bin37->SetBinContent(101,29413);
   hM_bin37->SetEntries(35897);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08582149,0.2017549);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(36.43319);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-2.160304);
   fsig->SetParError(0,3.758811);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,81.41299);
   fsig->SetParError(1,26.83727);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-7.946048e-06);
   fsig->SetParError(2,1592.016);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,89.45122);
   fsig->SetParError(3,3.49205);
   fsig->SetParLimits(3,0,234);
   fsig->SetParameter(4,0.1438413);
   fsig->SetParError(4,0.0008250574);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.001329088);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin37->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin37");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 35897  ");
   text = ptstats->AddText("Mean  = 0.1761");
   text = ptstats->AddText("RMS   = 0.06203");
   text = ptstats->AddText("#chi^{2} / ndf = 36.43 / 27");
   text = ptstats->AddText("p0       = -2.16 #pm 3.76 ");
   text = ptstats->AddText("p1       = 81.41 #pm 26.84 ");
   text = ptstats->AddText("p2       = -7.946e-06 #pm 1.592e+03 ");
   text = ptstats->AddText("p3       = 89.45 #pm 3.49 ");
   text = ptstats->AddText("p4       = 0.1438 #pm 0.0008 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00133 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin37->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin37);

   ci = TColor::GetColor("#0000ff");
   hM_bin37->SetMarkerColor(ci);
   hM_bin37->SetMarkerStyle(24);
   hM_bin37->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin37->GetXaxis()->SetLabelFont(42);
   hM_bin37->GetXaxis()->SetLabelSize(0.035);
   hM_bin37->GetXaxis()->SetTitleSize(0.035);
   hM_bin37->GetXaxis()->SetTitleFont(42);
   hM_bin37->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin37->GetYaxis()->SetLabelFont(42);
   hM_bin37->GetYaxis()->SetLabelSize(0.035);
   hM_bin37->GetYaxis()->SetTitleSize(0.035);
   hM_bin37->GetYaxis()->SetTitleFont(42);
   hM_bin37->GetZaxis()->SetLabelFont(42);
   hM_bin37->GetZaxis()->SetLabelSize(0.035);
   hM_bin37->GetZaxis()->SetTitleSize(0.035);
   hM_bin37->GetZaxis()->SetTitleFont(42);
   hM_bin37->Draw("e");
   
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
   fmb->SetParameter(0,-2.160304);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,81.41299);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-7.946048e-06);
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
   fpeak->SetParameter(0,89.45122);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1438413);
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
