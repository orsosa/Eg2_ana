{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 14:48:44 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-5.79658,0.350906,52.16921);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin4 = new TH1F("hM_bin4","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin4->SetBinContent(0,581);
   hM_bin4->SetBinContent(14,1);
   hM_bin4->SetBinContent(16,1);
   hM_bin4->SetBinContent(17,1);
   hM_bin4->SetBinContent(20,1);
   hM_bin4->SetBinContent(23,1);
   hM_bin4->SetBinContent(27,2);
   hM_bin4->SetBinContent(28,1);
   hM_bin4->SetBinContent(32,2);
   hM_bin4->SetBinContent(35,1);
   hM_bin4->SetBinContent(39,3);
   hM_bin4->SetBinContent(40,3);
   hM_bin4->SetBinContent(41,3);
   hM_bin4->SetBinContent(42,3);
   hM_bin4->SetBinContent(43,8);
   hM_bin4->SetBinContent(44,5);
   hM_bin4->SetBinContent(45,6);
   hM_bin4->SetBinContent(46,12);
   hM_bin4->SetBinContent(47,27);
   hM_bin4->SetBinContent(48,19);
   hM_bin4->SetBinContent(49,30);
   hM_bin4->SetBinContent(50,28);
   hM_bin4->SetBinContent(51,36);
   hM_bin4->SetBinContent(52,38);
   hM_bin4->SetBinContent(53,33);
   hM_bin4->SetBinContent(54,35);
   hM_bin4->SetBinContent(55,31);
   hM_bin4->SetBinContent(56,29);
   hM_bin4->SetBinContent(57,25);
   hM_bin4->SetBinContent(58,33);
   hM_bin4->SetBinContent(59,26);
   hM_bin4->SetBinContent(60,22);
   hM_bin4->SetBinContent(61,16);
   hM_bin4->SetBinContent(62,7);
   hM_bin4->SetBinContent(63,14);
   hM_bin4->SetBinContent(64,12);
   hM_bin4->SetBinContent(65,5);
   hM_bin4->SetBinContent(66,9);
   hM_bin4->SetBinContent(67,8);
   hM_bin4->SetBinContent(68,5);
   hM_bin4->SetBinContent(69,7);
   hM_bin4->SetBinContent(70,6);
   hM_bin4->SetBinContent(71,6);
   hM_bin4->SetBinContent(72,6);
   hM_bin4->SetBinContent(73,10);
   hM_bin4->SetBinContent(74,1);
   hM_bin4->SetBinContent(75,6);
   hM_bin4->SetBinContent(76,5);
   hM_bin4->SetBinContent(77,6);
   hM_bin4->SetBinContent(78,7);
   hM_bin4->SetBinContent(79,3);
   hM_bin4->SetBinContent(80,7);
   hM_bin4->SetBinContent(81,5);
   hM_bin4->SetBinContent(82,4);
   hM_bin4->SetBinContent(83,1);
   hM_bin4->SetBinContent(84,1);
   hM_bin4->SetBinContent(85,6);
   hM_bin4->SetBinContent(86,7);
   hM_bin4->SetBinContent(87,3);
   hM_bin4->SetBinContent(88,5);
   hM_bin4->SetBinContent(89,7);
   hM_bin4->SetBinContent(90,12);
   hM_bin4->SetBinContent(91,7);
   hM_bin4->SetBinContent(92,5);
   hM_bin4->SetBinContent(93,10);
   hM_bin4->SetBinContent(94,11);
   hM_bin4->SetBinContent(95,8);
   hM_bin4->SetBinContent(96,5);
   hM_bin4->SetBinContent(97,8);
   hM_bin4->SetBinContent(98,6);
   hM_bin4->SetBinContent(99,6);
   hM_bin4->SetBinContent(100,8);
   hM_bin4->SetBinContent(101,2933);
   hM_bin4->SetEntries(4251);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08866663,0.2046001);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(29.17263);
   fsig->SetNDF(26);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-4.104952);
   fsig->SetParError(0,2.581017);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,43.52542);
   fsig->SetParError(1,17.16305);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-4.547474e-10);
   fsig->SetParError(2,291.5039);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,31.37578);
   fsig->SetParError(3,2.066678);
   fsig->SetParLimits(3,0,76);
   fsig->SetParameter(4,0.1458848);
   fsig->SetParError(4,0.001308482);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0002978704);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin4->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin4");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 4251   ");
   text = ptstats->AddText("Mean  =  0.175");
   text = ptstats->AddText("RMS   = 0.05585");
   text = ptstats->AddText("#chi^{2} / ndf = 29.17 / 26");
   text = ptstats->AddText("p0       = -4.105 #pm 2.581 ");
   text = ptstats->AddText("p1       = 43.53 #pm 17.16 ");
   text = ptstats->AddText("p2       = -4.547e-10 #pm 2.915e+02 ");
   text = ptstats->AddText("p3       = 31.38 #pm 2.07 ");
   text = ptstats->AddText("p4       = 0.1459 #pm 0.0013 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00030 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin4->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin4);

   ci = TColor::GetColor("#0000ff");
   hM_bin4->SetMarkerColor(ci);
   hM_bin4->SetMarkerStyle(24);
   hM_bin4->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin4->GetXaxis()->SetLabelFont(42);
   hM_bin4->GetXaxis()->SetLabelSize(0.035);
   hM_bin4->GetXaxis()->SetTitleSize(0.035);
   hM_bin4->GetXaxis()->SetTitleFont(42);
   hM_bin4->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin4->GetYaxis()->SetLabelFont(42);
   hM_bin4->GetYaxis()->SetLabelSize(0.035);
   hM_bin4->GetYaxis()->SetTitleSize(0.035);
   hM_bin4->GetYaxis()->SetTitleFont(42);
   hM_bin4->GetZaxis()->SetLabelFont(42);
   hM_bin4->GetZaxis()->SetLabelSize(0.035);
   hM_bin4->GetZaxis()->SetTitleSize(0.035);
   hM_bin4->GetZaxis()->SetTitleFont(42);
   hM_bin4->Draw("e");
   
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
   fmb->SetParameter(0,-4.104952);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,43.52542);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-4.547474e-10);
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
   fpeak->SetParameter(0,31.37578);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1458848);
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
