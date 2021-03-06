{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 18 12:02:51 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.1901558,-7.351522,0.8890623,78.54273);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin23 = new TH1F("hM_bin23","M_{#gamma #gamma}",100,0.2600464,0.8191716);
   hM_bin23->SetBinContent(0,1113);
   hM_bin23->SetBinContent(1,7);
   hM_bin23->SetBinContent(2,8);
   hM_bin23->SetBinContent(3,13);
   hM_bin23->SetBinContent(4,13);
   hM_bin23->SetBinContent(5,12);
   hM_bin23->SetBinContent(6,10);
   hM_bin23->SetBinContent(7,10);
   hM_bin23->SetBinContent(8,13);
   hM_bin23->SetBinContent(9,13);
   hM_bin23->SetBinContent(10,13);
   hM_bin23->SetBinContent(11,22);
   hM_bin23->SetBinContent(12,16);
   hM_bin23->SetBinContent(13,21);
   hM_bin23->SetBinContent(14,19);
   hM_bin23->SetBinContent(15,15);
   hM_bin23->SetBinContent(16,18);
   hM_bin23->SetBinContent(17,14);
   hM_bin23->SetBinContent(18,19);
   hM_bin23->SetBinContent(19,25);
   hM_bin23->SetBinContent(20,27);
   hM_bin23->SetBinContent(21,18);
   hM_bin23->SetBinContent(22,13);
   hM_bin23->SetBinContent(23,16);
   hM_bin23->SetBinContent(24,19);
   hM_bin23->SetBinContent(25,30);
   hM_bin23->SetBinContent(26,19);
   hM_bin23->SetBinContent(27,24);
   hM_bin23->SetBinContent(28,24);
   hM_bin23->SetBinContent(29,22);
   hM_bin23->SetBinContent(30,18);
   hM_bin23->SetBinContent(31,24);
   hM_bin23->SetBinContent(32,25);
   hM_bin23->SetBinContent(33,24);
   hM_bin23->SetBinContent(34,28);
   hM_bin23->SetBinContent(35,36);
   hM_bin23->SetBinContent(36,32);
   hM_bin23->SetBinContent(37,29);
   hM_bin23->SetBinContent(38,31);
   hM_bin23->SetBinContent(39,22);
   hM_bin23->SetBinContent(40,28);
   hM_bin23->SetBinContent(41,33);
   hM_bin23->SetBinContent(42,36);
   hM_bin23->SetBinContent(43,31);
   hM_bin23->SetBinContent(44,39);
   hM_bin23->SetBinContent(45,39);
   hM_bin23->SetBinContent(46,48);
   hM_bin23->SetBinContent(47,46);
   hM_bin23->SetBinContent(48,33);
   hM_bin23->SetBinContent(49,38);
   hM_bin23->SetBinContent(50,36);
   hM_bin23->SetBinContent(51,35);
   hM_bin23->SetBinContent(52,50);
   hM_bin23->SetBinContent(53,35);
   hM_bin23->SetBinContent(54,42);
   hM_bin23->SetBinContent(55,58);
   hM_bin23->SetBinContent(56,44);
   hM_bin23->SetBinContent(57,44);
   hM_bin23->SetBinContent(58,59);
   hM_bin23->SetBinContent(59,45);
   hM_bin23->SetBinContent(60,52);
   hM_bin23->SetBinContent(61,49);
   hM_bin23->SetBinContent(62,47);
   hM_bin23->SetBinContent(63,48);
   hM_bin23->SetBinContent(64,52);
   hM_bin23->SetBinContent(65,40);
   hM_bin23->SetBinContent(66,56);
   hM_bin23->SetBinContent(67,46);
   hM_bin23->SetBinContent(68,41);
   hM_bin23->SetBinContent(69,40);
   hM_bin23->SetBinContent(70,40);
   hM_bin23->SetBinContent(71,49);
   hM_bin23->SetBinContent(72,35);
   hM_bin23->SetBinContent(73,37);
   hM_bin23->SetBinContent(74,52);
   hM_bin23->SetBinContent(75,41);
   hM_bin23->SetBinContent(76,46);
   hM_bin23->SetBinContent(77,49);
   hM_bin23->SetBinContent(78,38);
   hM_bin23->SetBinContent(79,37);
   hM_bin23->SetBinContent(80,42);
   hM_bin23->SetBinContent(81,45);
   hM_bin23->SetBinContent(82,48);
   hM_bin23->SetBinContent(83,35);
   hM_bin23->SetBinContent(84,33);
   hM_bin23->SetBinContent(85,32);
   hM_bin23->SetBinContent(86,49);
   hM_bin23->SetBinContent(87,55);
   hM_bin23->SetBinContent(88,50);
   hM_bin23->SetBinContent(89,50);
   hM_bin23->SetBinContent(90,38);
   hM_bin23->SetBinContent(91,38);
   hM_bin23->SetBinContent(92,43);
   hM_bin23->SetBinContent(93,59);
   hM_bin23->SetBinContent(94,52);
   hM_bin23->SetBinContent(95,40);
   hM_bin23->SetBinContent(96,45);
   hM_bin23->SetBinContent(97,44);
   hM_bin23->SetBinContent(98,45);
   hM_bin23->SetBinContent(99,42);
   hM_bin23->SetBinContent(100,38);
   hM_bin23->SetBinContent(101,3153);
   hM_bin23->SetEntries(7665);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.3903544,0.7568496);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(55.89642);
   fsig->SetNDF(60);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-2.681236);
   fsig->SetParError(0,4.466026);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,61.08775);
   fsig->SetParError(1,7.984645);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.447007e-05);
   fsig->SetParError(2,203.479);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,14.28028);
   fsig->SetParError(3,2.234202);
   fsig->SetParLimits(3,0,118);
   fsig->SetParameter(4,0.5761523);
   fsig->SetParError(4,0.01011457);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.05791245);
   fsig->SetParError(5,0.01658222);
   fsig->SetParLimits(5,0.04788336,0.07182504);
   hM_bin23->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin23");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 7665   ");
   text = ptstats->AddText("Mean  = 0.5927");
   text = ptstats->AddText("RMS   = 0.1419");
   text = ptstats->AddText("#chi^{2} / ndf =  55.9 / 60");
   text = ptstats->AddText("p0       = -2.681 #pm 4.466 ");
   text = ptstats->AddText("p1       = 61.09 #pm 7.98 ");
   text = ptstats->AddText("p2       = -1.447e-05 #pm 2.035e+02 ");
   text = ptstats->AddText("p3       = 14.28 #pm 2.23 ");
   text = ptstats->AddText("p4       = 0.5762 #pm 0.0101 ");
   text = ptstats->AddText("p5       = 0.05791 #pm 0.01658 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin23->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin23);

   ci = TColor::GetColor("#0000ff");
   hM_bin23->SetMarkerColor(ci);
   hM_bin23->SetMarkerStyle(24);
   hM_bin23->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin23->GetXaxis()->SetLabelFont(42);
   hM_bin23->GetXaxis()->SetLabelSize(0.035);
   hM_bin23->GetXaxis()->SetTitleSize(0.035);
   hM_bin23->GetXaxis()->SetTitleFont(42);
   hM_bin23->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin23->GetYaxis()->SetLabelFont(42);
   hM_bin23->GetYaxis()->SetLabelSize(0.035);
   hM_bin23->GetYaxis()->SetTitleSize(0.035);
   hM_bin23->GetYaxis()->SetTitleFont(42);
   hM_bin23->GetZaxis()->SetLabelFont(42);
   hM_bin23->GetZaxis()->SetLabelSize(0.035);
   hM_bin23->GetZaxis()->SetTitleSize(0.035);
   hM_bin23->GetZaxis()->SetTitleFont(42);
   hM_bin23->Draw("e");
   
   TF1 *fmb = new TF1("fmb","pol2",0.3600464,0.7191716);
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
   fmb->SetParameter(0,-2.681236);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,61.08775);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.447007e-05);
   fmb->SetParError(2,0);
   fmb->SetParLimits(2,0,0);
   fmb->Draw("same");
   
   TF1 *fpeak = new TF1("fpeak","gaus",0.3600464,0.7191716);
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
   fpeak->SetParameter(0,14.28028);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.5761523);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.05791245);
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
