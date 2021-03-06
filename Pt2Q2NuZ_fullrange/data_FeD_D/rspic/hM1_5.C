{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 16:05:37 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-10.56369,0.350906,95.07324);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin5 = new TH1F("hM_bin5","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin5->SetBinContent(0,6744);
   hM_bin5->SetBinContent(15,1);
   hM_bin5->SetBinContent(17,1);
   hM_bin5->SetBinContent(21,3);
   hM_bin5->SetBinContent(22,1);
   hM_bin5->SetBinContent(23,2);
   hM_bin5->SetBinContent(24,2);
   hM_bin5->SetBinContent(25,3);
   hM_bin5->SetBinContent(26,1);
   hM_bin5->SetBinContent(27,2);
   hM_bin5->SetBinContent(28,1);
   hM_bin5->SetBinContent(29,1);
   hM_bin5->SetBinContent(31,1);
   hM_bin5->SetBinContent(32,2);
   hM_bin5->SetBinContent(34,1);
   hM_bin5->SetBinContent(35,3);
   hM_bin5->SetBinContent(36,2);
   hM_bin5->SetBinContent(37,1);
   hM_bin5->SetBinContent(38,2);
   hM_bin5->SetBinContent(39,2);
   hM_bin5->SetBinContent(40,1);
   hM_bin5->SetBinContent(41,2);
   hM_bin5->SetBinContent(42,6);
   hM_bin5->SetBinContent(43,7);
   hM_bin5->SetBinContent(44,15);
   hM_bin5->SetBinContent(45,13);
   hM_bin5->SetBinContent(46,14);
   hM_bin5->SetBinContent(47,20);
   hM_bin5->SetBinContent(48,28);
   hM_bin5->SetBinContent(49,56);
   hM_bin5->SetBinContent(50,60);
   hM_bin5->SetBinContent(51,51);
   hM_bin5->SetBinContent(52,58);
   hM_bin5->SetBinContent(53,68);
   hM_bin5->SetBinContent(54,72);
   hM_bin5->SetBinContent(55,42);
   hM_bin5->SetBinContent(56,44);
   hM_bin5->SetBinContent(57,51);
   hM_bin5->SetBinContent(58,45);
   hM_bin5->SetBinContent(59,28);
   hM_bin5->SetBinContent(60,36);
   hM_bin5->SetBinContent(61,24);
   hM_bin5->SetBinContent(62,19);
   hM_bin5->SetBinContent(63,19);
   hM_bin5->SetBinContent(64,15);
   hM_bin5->SetBinContent(65,21);
   hM_bin5->SetBinContent(66,17);
   hM_bin5->SetBinContent(67,6);
   hM_bin5->SetBinContent(68,6);
   hM_bin5->SetBinContent(69,6);
   hM_bin5->SetBinContent(70,6);
   hM_bin5->SetBinContent(71,12);
   hM_bin5->SetBinContent(72,8);
   hM_bin5->SetBinContent(73,6);
   hM_bin5->SetBinContent(74,13);
   hM_bin5->SetBinContent(75,4);
   hM_bin5->SetBinContent(76,8);
   hM_bin5->SetBinContent(77,12);
   hM_bin5->SetBinContent(78,8);
   hM_bin5->SetBinContent(79,12);
   hM_bin5->SetBinContent(80,10);
   hM_bin5->SetBinContent(81,6);
   hM_bin5->SetBinContent(82,13);
   hM_bin5->SetBinContent(83,12);
   hM_bin5->SetBinContent(84,12);
   hM_bin5->SetBinContent(85,14);
   hM_bin5->SetBinContent(86,13);
   hM_bin5->SetBinContent(87,9);
   hM_bin5->SetBinContent(88,13);
   hM_bin5->SetBinContent(89,11);
   hM_bin5->SetBinContent(90,12);
   hM_bin5->SetBinContent(91,14);
   hM_bin5->SetBinContent(92,14);
   hM_bin5->SetBinContent(93,14);
   hM_bin5->SetBinContent(94,14);
   hM_bin5->SetBinContent(95,20);
   hM_bin5->SetBinContent(96,21);
   hM_bin5->SetBinContent(97,16);
   hM_bin5->SetBinContent(98,21);
   hM_bin5->SetBinContent(99,25);
   hM_bin5->SetBinContent(100,19);
   hM_bin5->SetBinContent(101,8260);
   hM_bin5->SetEntries(16278);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.09014247,0.2060759);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(50.8204);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-6.853843);
   fsig->SetParError(0,1.896649);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,62.42442);
   fsig->SetParError(1,14.10261);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-3.255755e-07);
   fsig->SetParError(2,275.6045);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,52.66828);
   fsig->SetParError(3,2.389878);
   fsig->SetParLimits(3,0,144);
   fsig->SetParameter(4,0.1467685);
   fsig->SetParError(4,0.0008999704);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0002647903);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin5->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin5");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 16278  ");
   text = ptstats->AddText("Mean  = 0.1822");
   text = ptstats->AddText("RMS   = 0.06095");
   text = ptstats->AddText("#chi^{2} / ndf = 50.82 / 28");
   text = ptstats->AddText("p0       = -6.854 #pm 1.897 ");
   text = ptstats->AddText("p1       = 62.42 #pm 14.10 ");
   text = ptstats->AddText("p2       = -3.256e-07 #pm 2.756e+02 ");
   text = ptstats->AddText("p3       = 52.67 #pm 2.39 ");
   text = ptstats->AddText("p4       = 0.1468 #pm 0.0009 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00026 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin5->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin5);

   ci = TColor::GetColor("#0000ff");
   hM_bin5->SetMarkerColor(ci);
   hM_bin5->SetMarkerStyle(24);
   hM_bin5->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin5->GetXaxis()->SetLabelFont(42);
   hM_bin5->GetXaxis()->SetLabelSize(0.035);
   hM_bin5->GetXaxis()->SetTitleSize(0.035);
   hM_bin5->GetXaxis()->SetTitleFont(42);
   hM_bin5->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin5->GetYaxis()->SetLabelFont(42);
   hM_bin5->GetYaxis()->SetLabelSize(0.035);
   hM_bin5->GetYaxis()->SetTitleSize(0.035);
   hM_bin5->GetYaxis()->SetTitleFont(42);
   hM_bin5->GetZaxis()->SetLabelFont(42);
   hM_bin5->GetZaxis()->SetLabelSize(0.035);
   hM_bin5->GetZaxis()->SetTitleSize(0.035);
   hM_bin5->GetZaxis()->SetTitleFont(42);
   hM_bin5->Draw("e");
   
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
   fmb->SetParameter(0,-6.853843);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,62.42442);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-3.255755e-07);
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
   fpeak->SetParameter(0,52.66828);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1467685);
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
