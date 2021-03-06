{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 14:54:50 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-14.02391,0.350906,126.2152);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin34 = new TH1F("hM_bin34","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin34->SetBinContent(0,2280);
   hM_bin34->SetBinContent(15,1);
   hM_bin34->SetBinContent(16,2);
   hM_bin34->SetBinContent(17,1);
   hM_bin34->SetBinContent(18,3);
   hM_bin34->SetBinContent(19,1);
   hM_bin34->SetBinContent(20,4);
   hM_bin34->SetBinContent(21,1);
   hM_bin34->SetBinContent(22,2);
   hM_bin34->SetBinContent(23,3);
   hM_bin34->SetBinContent(24,3);
   hM_bin34->SetBinContent(25,2);
   hM_bin34->SetBinContent(26,2);
   hM_bin34->SetBinContent(27,4);
   hM_bin34->SetBinContent(28,5);
   hM_bin34->SetBinContent(29,3);
   hM_bin34->SetBinContent(30,2);
   hM_bin34->SetBinContent(31,3);
   hM_bin34->SetBinContent(32,2);
   hM_bin34->SetBinContent(33,3);
   hM_bin34->SetBinContent(34,5);
   hM_bin34->SetBinContent(35,3);
   hM_bin34->SetBinContent(36,5);
   hM_bin34->SetBinContent(37,5);
   hM_bin34->SetBinContent(38,6);
   hM_bin34->SetBinContent(39,9);
   hM_bin34->SetBinContent(40,8);
   hM_bin34->SetBinContent(41,8);
   hM_bin34->SetBinContent(42,7);
   hM_bin34->SetBinContent(43,16);
   hM_bin34->SetBinContent(44,15);
   hM_bin34->SetBinContent(45,29);
   hM_bin34->SetBinContent(46,45);
   hM_bin34->SetBinContent(47,44);
   hM_bin34->SetBinContent(48,54);
   hM_bin34->SetBinContent(49,68);
   hM_bin34->SetBinContent(50,70);
   hM_bin34->SetBinContent(51,91);
   hM_bin34->SetBinContent(52,82);
   hM_bin34->SetBinContent(53,87);
   hM_bin34->SetBinContent(54,97);
   hM_bin34->SetBinContent(55,85);
   hM_bin34->SetBinContent(56,76);
   hM_bin34->SetBinContent(57,66);
   hM_bin34->SetBinContent(58,68);
   hM_bin34->SetBinContent(59,61);
   hM_bin34->SetBinContent(60,54);
   hM_bin34->SetBinContent(61,43);
   hM_bin34->SetBinContent(62,47);
   hM_bin34->SetBinContent(63,25);
   hM_bin34->SetBinContent(64,29);
   hM_bin34->SetBinContent(65,23);
   hM_bin34->SetBinContent(66,26);
   hM_bin34->SetBinContent(67,19);
   hM_bin34->SetBinContent(68,28);
   hM_bin34->SetBinContent(69,16);
   hM_bin34->SetBinContent(70,11);
   hM_bin34->SetBinContent(71,11);
   hM_bin34->SetBinContent(72,20);
   hM_bin34->SetBinContent(73,23);
   hM_bin34->SetBinContent(74,14);
   hM_bin34->SetBinContent(75,17);
   hM_bin34->SetBinContent(76,20);
   hM_bin34->SetBinContent(77,19);
   hM_bin34->SetBinContent(78,19);
   hM_bin34->SetBinContent(79,14);
   hM_bin34->SetBinContent(80,21);
   hM_bin34->SetBinContent(81,16);
   hM_bin34->SetBinContent(82,17);
   hM_bin34->SetBinContent(83,14);
   hM_bin34->SetBinContent(84,26);
   hM_bin34->SetBinContent(85,16);
   hM_bin34->SetBinContent(86,17);
   hM_bin34->SetBinContent(87,29);
   hM_bin34->SetBinContent(88,23);
   hM_bin34->SetBinContent(89,25);
   hM_bin34->SetBinContent(90,26);
   hM_bin34->SetBinContent(91,29);
   hM_bin34->SetBinContent(92,18);
   hM_bin34->SetBinContent(93,21);
   hM_bin34->SetBinContent(94,19);
   hM_bin34->SetBinContent(95,16);
   hM_bin34->SetBinContent(96,18);
   hM_bin34->SetBinContent(97,23);
   hM_bin34->SetBinContent(98,19);
   hM_bin34->SetBinContent(99,20);
   hM_bin34->SetBinContent(100,19);
   hM_bin34->SetBinContent(101,12526);
   hM_bin34->SetEntries(16873);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08927022,0.2052037);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(29.92753);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-7.932161);
   fsig->SetParError(0,3.525497);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,110.3527);
   fsig->SetParError(1,25.08242);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-3.352065e-05);
   fsig->SetParError(2,795.4022);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,79.16243);
   fsig->SetParError(3,3.273162);
   fsig->SetParLimits(3,0,194);
   fsig->SetParameter(4,0.1465684);
   fsig->SetParError(4,0.0008485787);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0004376826);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin34->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin34");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 16873  ");
   text = ptstats->AddText("Mean  = 0.1775");
   text = ptstats->AddText("RMS   = 0.05862");
   text = ptstats->AddText("#chi^{2} / ndf = 29.93 / 27");
   text = ptstats->AddText("p0       = -7.932 #pm 3.525 ");
   text = ptstats->AddText("p1       = 110.4 #pm 25.1 ");
   text = ptstats->AddText("p2       = -3.352e-05 #pm 7.954e+02 ");
   text = ptstats->AddText("p3       = 79.16 #pm 3.27 ");
   text = ptstats->AddText("p4       = 0.1466 #pm 0.0008 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00044 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin34->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin34);

   ci = TColor::GetColor("#0000ff");
   hM_bin34->SetMarkerColor(ci);
   hM_bin34->SetMarkerStyle(24);
   hM_bin34->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin34->GetXaxis()->SetLabelFont(42);
   hM_bin34->GetXaxis()->SetLabelSize(0.035);
   hM_bin34->GetXaxis()->SetTitleSize(0.035);
   hM_bin34->GetXaxis()->SetTitleFont(42);
   hM_bin34->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin34->GetYaxis()->SetLabelFont(42);
   hM_bin34->GetYaxis()->SetLabelSize(0.035);
   hM_bin34->GetYaxis()->SetTitleSize(0.035);
   hM_bin34->GetYaxis()->SetTitleFont(42);
   hM_bin34->GetZaxis()->SetLabelFont(42);
   hM_bin34->GetZaxis()->SetLabelSize(0.035);
   hM_bin34->GetZaxis()->SetTitleSize(0.035);
   hM_bin34->GetZaxis()->SetTitleFont(42);
   hM_bin34->Draw("e");
   
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
   fmb->SetParameter(0,-7.932161);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,110.3527);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-3.352065e-05);
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
   fpeak->SetParameter(0,79.16243);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1465684);
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
