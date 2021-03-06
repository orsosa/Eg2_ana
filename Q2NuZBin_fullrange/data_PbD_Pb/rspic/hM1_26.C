{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr  4 12:26:38 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-15.2638,0.350906,137.3742);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin26 = new TH1F("hM_bin26","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin26->SetBinContent(0,1392);
   hM_bin26->SetBinContent(14,1);
   hM_bin26->SetBinContent(15,1);
   hM_bin26->SetBinContent(17,3);
   hM_bin26->SetBinContent(18,2);
   hM_bin26->SetBinContent(19,2);
   hM_bin26->SetBinContent(20,2);
   hM_bin26->SetBinContent(21,1);
   hM_bin26->SetBinContent(22,3);
   hM_bin26->SetBinContent(23,1);
   hM_bin26->SetBinContent(25,3);
   hM_bin26->SetBinContent(26,2);
   hM_bin26->SetBinContent(27,1);
   hM_bin26->SetBinContent(28,4);
   hM_bin26->SetBinContent(29,3);
   hM_bin26->SetBinContent(30,7);
   hM_bin26->SetBinContent(31,1);
   hM_bin26->SetBinContent(32,3);
   hM_bin26->SetBinContent(33,2);
   hM_bin26->SetBinContent(34,5);
   hM_bin26->SetBinContent(35,3);
   hM_bin26->SetBinContent(36,3);
   hM_bin26->SetBinContent(37,7);
   hM_bin26->SetBinContent(38,8);
   hM_bin26->SetBinContent(39,9);
   hM_bin26->SetBinContent(40,6);
   hM_bin26->SetBinContent(41,13);
   hM_bin26->SetBinContent(42,15);
   hM_bin26->SetBinContent(43,25);
   hM_bin26->SetBinContent(44,25);
   hM_bin26->SetBinContent(45,36);
   hM_bin26->SetBinContent(46,41);
   hM_bin26->SetBinContent(47,64);
   hM_bin26->SetBinContent(48,66);
   hM_bin26->SetBinContent(49,92);
   hM_bin26->SetBinContent(50,83);
   hM_bin26->SetBinContent(51,88);
   hM_bin26->SetBinContent(52,106);
   hM_bin26->SetBinContent(53,91);
   hM_bin26->SetBinContent(54,95);
   hM_bin26->SetBinContent(55,83);
   hM_bin26->SetBinContent(56,80);
   hM_bin26->SetBinContent(57,65);
   hM_bin26->SetBinContent(58,56);
   hM_bin26->SetBinContent(59,54);
   hM_bin26->SetBinContent(60,36);
   hM_bin26->SetBinContent(61,41);
   hM_bin26->SetBinContent(62,24);
   hM_bin26->SetBinContent(63,21);
   hM_bin26->SetBinContent(64,19);
   hM_bin26->SetBinContent(65,19);
   hM_bin26->SetBinContent(66,20);
   hM_bin26->SetBinContent(67,19);
   hM_bin26->SetBinContent(68,12);
   hM_bin26->SetBinContent(69,22);
   hM_bin26->SetBinContent(70,17);
   hM_bin26->SetBinContent(71,24);
   hM_bin26->SetBinContent(72,18);
   hM_bin26->SetBinContent(73,18);
   hM_bin26->SetBinContent(74,25);
   hM_bin26->SetBinContent(75,28);
   hM_bin26->SetBinContent(76,15);
   hM_bin26->SetBinContent(77,18);
   hM_bin26->SetBinContent(78,34);
   hM_bin26->SetBinContent(79,17);
   hM_bin26->SetBinContent(80,25);
   hM_bin26->SetBinContent(81,18);
   hM_bin26->SetBinContent(82,28);
   hM_bin26->SetBinContent(83,20);
   hM_bin26->SetBinContent(84,18);
   hM_bin26->SetBinContent(85,29);
   hM_bin26->SetBinContent(86,27);
   hM_bin26->SetBinContent(87,21);
   hM_bin26->SetBinContent(88,19);
   hM_bin26->SetBinContent(89,18);
   hM_bin26->SetBinContent(90,22);
   hM_bin26->SetBinContent(91,30);
   hM_bin26->SetBinContent(92,19);
   hM_bin26->SetBinContent(93,36);
   hM_bin26->SetBinContent(94,20);
   hM_bin26->SetBinContent(95,26);
   hM_bin26->SetBinContent(96,26);
   hM_bin26->SetBinContent(97,31);
   hM_bin26->SetBinContent(98,34);
   hM_bin26->SetBinContent(99,30);
   hM_bin26->SetBinContent(100,26);
   hM_bin26->SetBinContent(101,8432);
   hM_bin26->SetEntries(12055);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.0842995,0.2002329);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(26.15307);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-6.89523);
   fsig->SetParError(0,2.82132);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,99.81906);
   fsig->SetParError(1,22.01486);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.37001e-05);
   fsig->SetParError(2,268.8526);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,83.48849);
   fsig->SetParError(3,3.279828);
   fsig->SetParLimits(3,0,212);
   fsig->SetParameter(4,0.1420515);
   fsig->SetParError(4,0.0007490372);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0001353182);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin26->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin26");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 12055  ");
   text = ptstats->AddText("Mean  = 0.1801");
   text = ptstats->AddText("RMS   = 0.06166");
   text = ptstats->AddText("#chi^{2} / ndf = 26.15 / 28");
   text = ptstats->AddText("p0       = -6.895 #pm 2.821 ");
   text = ptstats->AddText("p1       = 99.82 #pm 22.01 ");
   text = ptstats->AddText("p2       = -1.37e-05 #pm 2.69e+02 ");
   text = ptstats->AddText("p3       = 83.49 #pm 3.28 ");
   text = ptstats->AddText("p4       = 0.1421 #pm 0.0007 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00014 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin26->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin26);

   ci = TColor::GetColor("#0000ff");
   hM_bin26->SetMarkerColor(ci);
   hM_bin26->SetMarkerStyle(24);
   hM_bin26->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin26->GetXaxis()->SetLabelFont(42);
   hM_bin26->GetXaxis()->SetLabelSize(0.035);
   hM_bin26->GetXaxis()->SetTitleSize(0.035);
   hM_bin26->GetXaxis()->SetTitleFont(42);
   hM_bin26->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin26->GetYaxis()->SetLabelFont(42);
   hM_bin26->GetYaxis()->SetLabelSize(0.035);
   hM_bin26->GetYaxis()->SetTitleSize(0.035);
   hM_bin26->GetYaxis()->SetTitleFont(42);
   hM_bin26->GetZaxis()->SetLabelFont(42);
   hM_bin26->GetZaxis()->SetLabelSize(0.035);
   hM_bin26->GetZaxis()->SetTitleSize(0.035);
   hM_bin26->GetZaxis()->SetTitleFont(42);
   hM_bin26->Draw("e");
   
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
   fmb->SetParameter(0,-6.89523);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,99.81906);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.37001e-05);
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
   fpeak->SetParameter(0,83.48849);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1420515);
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
