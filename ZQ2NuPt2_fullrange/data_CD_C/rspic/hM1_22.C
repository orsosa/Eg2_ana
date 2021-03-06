{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 11 11:58:37 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-17.18777,0.350906,154.6899);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin22 = new TH1F("hM_bin22","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin22->SetBinContent(0,706);
   hM_bin22->SetBinContent(14,1);
   hM_bin22->SetBinContent(15,4);
   hM_bin22->SetBinContent(16,4);
   hM_bin22->SetBinContent(17,4);
   hM_bin22->SetBinContent(18,3);
   hM_bin22->SetBinContent(20,2);
   hM_bin22->SetBinContent(21,1);
   hM_bin22->SetBinContent(22,3);
   hM_bin22->SetBinContent(23,1);
   hM_bin22->SetBinContent(24,3);
   hM_bin22->SetBinContent(25,4);
   hM_bin22->SetBinContent(26,2);
   hM_bin22->SetBinContent(27,4);
   hM_bin22->SetBinContent(28,2);
   hM_bin22->SetBinContent(29,2);
   hM_bin22->SetBinContent(30,3);
   hM_bin22->SetBinContent(32,3);
   hM_bin22->SetBinContent(33,4);
   hM_bin22->SetBinContent(34,5);
   hM_bin22->SetBinContent(35,3);
   hM_bin22->SetBinContent(36,2);
   hM_bin22->SetBinContent(37,9);
   hM_bin22->SetBinContent(38,4);
   hM_bin22->SetBinContent(39,5);
   hM_bin22->SetBinContent(40,10);
   hM_bin22->SetBinContent(41,15);
   hM_bin22->SetBinContent(42,17);
   hM_bin22->SetBinContent(43,23);
   hM_bin22->SetBinContent(44,35);
   hM_bin22->SetBinContent(45,41);
   hM_bin22->SetBinContent(46,65);
   hM_bin22->SetBinContent(47,62);
   hM_bin22->SetBinContent(48,77);
   hM_bin22->SetBinContent(49,74);
   hM_bin22->SetBinContent(50,105);
   hM_bin22->SetBinContent(51,97);
   hM_bin22->SetBinContent(52,120);
   hM_bin22->SetBinContent(53,119);
   hM_bin22->SetBinContent(54,115);
   hM_bin22->SetBinContent(55,99);
   hM_bin22->SetBinContent(56,106);
   hM_bin22->SetBinContent(57,81);
   hM_bin22->SetBinContent(58,81);
   hM_bin22->SetBinContent(59,46);
   hM_bin22->SetBinContent(60,56);
   hM_bin22->SetBinContent(61,48);
   hM_bin22->SetBinContent(62,34);
   hM_bin22->SetBinContent(63,31);
   hM_bin22->SetBinContent(64,24);
   hM_bin22->SetBinContent(65,27);
   hM_bin22->SetBinContent(66,22);
   hM_bin22->SetBinContent(67,27);
   hM_bin22->SetBinContent(68,14);
   hM_bin22->SetBinContent(69,22);
   hM_bin22->SetBinContent(70,13);
   hM_bin22->SetBinContent(71,22);
   hM_bin22->SetBinContent(72,15);
   hM_bin22->SetBinContent(73,15);
   hM_bin22->SetBinContent(74,19);
   hM_bin22->SetBinContent(75,16);
   hM_bin22->SetBinContent(76,20);
   hM_bin22->SetBinContent(77,15);
   hM_bin22->SetBinContent(78,20);
   hM_bin22->SetBinContent(79,20);
   hM_bin22->SetBinContent(80,22);
   hM_bin22->SetBinContent(81,17);
   hM_bin22->SetBinContent(82,16);
   hM_bin22->SetBinContent(83,20);
   hM_bin22->SetBinContent(84,18);
   hM_bin22->SetBinContent(85,27);
   hM_bin22->SetBinContent(86,26);
   hM_bin22->SetBinContent(87,24);
   hM_bin22->SetBinContent(88,15);
   hM_bin22->SetBinContent(89,17);
   hM_bin22->SetBinContent(90,15);
   hM_bin22->SetBinContent(91,19);
   hM_bin22->SetBinContent(92,18);
   hM_bin22->SetBinContent(93,19);
   hM_bin22->SetBinContent(94,31);
   hM_bin22->SetBinContent(95,23);
   hM_bin22->SetBinContent(96,26);
   hM_bin22->SetBinContent(97,31);
   hM_bin22->SetBinContent(98,26);
   hM_bin22->SetBinContent(99,27);
   hM_bin22->SetBinContent(100,26);
   hM_bin22->SetBinContent(101,11011);
   hM_bin22->SetEntries(14126);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08563285,0.2015663);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(29.81989);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-11.68039);
   fsig->SetParError(0,3.404233);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,141.2518);
   fsig->SetParError(1,26.06881);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-7.874406e-05);
   fsig->SetParError(2,568.0986);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,99.70924);
   fsig->SetParError(3,3.562617);
   fsig->SetParLimits(3,0,240);
   fsig->SetParameter(4,0.1428177);
   fsig->SetParError(4,0.0007246068);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0002319049);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin22->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin22");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 14126  ");
   text = ptstats->AddText("Mean  = 0.1735");
   text = ptstats->AddText("RMS   = 0.05884");
   text = ptstats->AddText("#chi^{2} / ndf = 29.82 / 27");
   text = ptstats->AddText("p0       = -11.68 #pm 3.40 ");
   text = ptstats->AddText("p1       = 141.3 #pm 26.1 ");
   text = ptstats->AddText("p2       = -7.874e-05 #pm 5.681e+02 ");
   text = ptstats->AddText("p3       = 99.71 #pm 3.56 ");
   text = ptstats->AddText("p4       = 0.1428 #pm 0.0007 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00023 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin22->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin22);

   ci = TColor::GetColor("#0000ff");
   hM_bin22->SetMarkerColor(ci);
   hM_bin22->SetMarkerStyle(24);
   hM_bin22->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin22->GetXaxis()->SetLabelFont(42);
   hM_bin22->GetXaxis()->SetLabelSize(0.035);
   hM_bin22->GetXaxis()->SetTitleSize(0.035);
   hM_bin22->GetXaxis()->SetTitleFont(42);
   hM_bin22->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin22->GetYaxis()->SetLabelFont(42);
   hM_bin22->GetYaxis()->SetLabelSize(0.035);
   hM_bin22->GetYaxis()->SetTitleSize(0.035);
   hM_bin22->GetYaxis()->SetTitleFont(42);
   hM_bin22->GetZaxis()->SetLabelFont(42);
   hM_bin22->GetZaxis()->SetLabelSize(0.035);
   hM_bin22->GetZaxis()->SetTitleSize(0.035);
   hM_bin22->GetZaxis()->SetTitleFont(42);
   hM_bin22->Draw("e");
   
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
   fmb->SetParameter(0,-11.68039);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,141.2518);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-7.874406e-05);
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
   fpeak->SetParameter(0,99.70924);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1428177);
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
