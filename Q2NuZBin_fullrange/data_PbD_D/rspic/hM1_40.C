{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr  4 12:29:51 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-22.11431,0.350906,199.0288);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin40 = new TH1F("hM_bin40","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin40->SetBinContent(0,2697);
   hM_bin40->SetBinContent(16,2);
   hM_bin40->SetBinContent(17,4);
   hM_bin40->SetBinContent(18,4);
   hM_bin40->SetBinContent(19,2);
   hM_bin40->SetBinContent(20,5);
   hM_bin40->SetBinContent(21,3);
   hM_bin40->SetBinContent(22,4);
   hM_bin40->SetBinContent(23,3);
   hM_bin40->SetBinContent(24,3);
   hM_bin40->SetBinContent(25,4);
   hM_bin40->SetBinContent(26,3);
   hM_bin40->SetBinContent(27,3);
   hM_bin40->SetBinContent(28,2);
   hM_bin40->SetBinContent(29,1);
   hM_bin40->SetBinContent(30,7);
   hM_bin40->SetBinContent(31,2);
   hM_bin40->SetBinContent(32,4);
   hM_bin40->SetBinContent(33,9);
   hM_bin40->SetBinContent(34,10);
   hM_bin40->SetBinContent(35,4);
   hM_bin40->SetBinContent(36,4);
   hM_bin40->SetBinContent(37,13);
   hM_bin40->SetBinContent(38,9);
   hM_bin40->SetBinContent(39,12);
   hM_bin40->SetBinContent(40,20);
   hM_bin40->SetBinContent(41,22);
   hM_bin40->SetBinContent(42,25);
   hM_bin40->SetBinContent(43,36);
   hM_bin40->SetBinContent(44,38);
   hM_bin40->SetBinContent(45,67);
   hM_bin40->SetBinContent(46,70);
   hM_bin40->SetBinContent(47,100);
   hM_bin40->SetBinContent(48,102);
   hM_bin40->SetBinContent(49,112);
   hM_bin40->SetBinContent(50,145);
   hM_bin40->SetBinContent(51,148);
   hM_bin40->SetBinContent(52,120);
   hM_bin40->SetBinContent(53,117);
   hM_bin40->SetBinContent(54,156);
   hM_bin40->SetBinContent(55,111);
   hM_bin40->SetBinContent(56,119);
   hM_bin40->SetBinContent(57,109);
   hM_bin40->SetBinContent(58,90);
   hM_bin40->SetBinContent(59,72);
   hM_bin40->SetBinContent(60,76);
   hM_bin40->SetBinContent(61,48);
   hM_bin40->SetBinContent(62,53);
   hM_bin40->SetBinContent(63,42);
   hM_bin40->SetBinContent(64,38);
   hM_bin40->SetBinContent(65,34);
   hM_bin40->SetBinContent(66,22);
   hM_bin40->SetBinContent(67,16);
   hM_bin40->SetBinContent(68,21);
   hM_bin40->SetBinContent(69,26);
   hM_bin40->SetBinContent(70,15);
   hM_bin40->SetBinContent(71,18);
   hM_bin40->SetBinContent(72,16);
   hM_bin40->SetBinContent(73,14);
   hM_bin40->SetBinContent(74,21);
   hM_bin40->SetBinContent(75,22);
   hM_bin40->SetBinContent(76,20);
   hM_bin40->SetBinContent(77,20);
   hM_bin40->SetBinContent(78,14);
   hM_bin40->SetBinContent(79,30);
   hM_bin40->SetBinContent(80,26);
   hM_bin40->SetBinContent(81,26);
   hM_bin40->SetBinContent(82,25);
   hM_bin40->SetBinContent(83,23);
   hM_bin40->SetBinContent(84,23);
   hM_bin40->SetBinContent(85,22);
   hM_bin40->SetBinContent(86,26);
   hM_bin40->SetBinContent(87,16);
   hM_bin40->SetBinContent(88,32);
   hM_bin40->SetBinContent(89,37);
   hM_bin40->SetBinContent(90,33);
   hM_bin40->SetBinContent(91,29);
   hM_bin40->SetBinContent(92,34);
   hM_bin40->SetBinContent(93,30);
   hM_bin40->SetBinContent(94,28);
   hM_bin40->SetBinContent(95,36);
   hM_bin40->SetBinContent(96,23);
   hM_bin40->SetBinContent(97,43);
   hM_bin40->SetBinContent(98,30);
   hM_bin40->SetBinContent(99,30);
   hM_bin40->SetBinContent(100,34);
   hM_bin40->SetBinContent(101,16842);
   hM_bin40->SetEntries(22607);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08411474,0.2010885);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(36.00824);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-7.933705);
   fsig->SetParError(0,3.422525);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,134.9449);
   fsig->SetParError(1,27.25577);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.1201107);
   fsig->SetParError(2,61.24917);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,125.3045);
   fsig->SetParError(3,4.062761);
   fsig->SetParLimits(3,0,312);
   fsig->SetParameter(4,0.1421811);
   fsig->SetParError(4,0.0006754151);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01953557);
   fsig->SetParError(5,0.0007050069);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin40->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin40");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 22607  ");
   text = ptstats->AddText("Mean  = 0.1724");
   text = ptstats->AddText("RMS   = 0.05959");
   text = ptstats->AddText("#chi^{2} / ndf = 36.01 / 28");
   text = ptstats->AddText("p0       = -7.934 #pm 3.423 ");
   text = ptstats->AddText("p1       = 134.9 #pm 27.3 ");
   text = ptstats->AddText("p2       = -0.1201 #pm 61.2492 ");
   text = ptstats->AddText("p3       = 125.3 #pm 4.1 ");
   text = ptstats->AddText("p4       = 0.1422 #pm 0.0007 ");
   text = ptstats->AddText("p5       = 0.01954 #pm 0.00071 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin40->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin40);

   ci = TColor::GetColor("#0000ff");
   hM_bin40->SetMarkerColor(ci);
   hM_bin40->SetMarkerStyle(24);
   hM_bin40->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin40->GetXaxis()->SetLabelFont(42);
   hM_bin40->GetXaxis()->SetLabelSize(0.035);
   hM_bin40->GetXaxis()->SetTitleSize(0.035);
   hM_bin40->GetXaxis()->SetTitleFont(42);
   hM_bin40->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin40->GetYaxis()->SetLabelFont(42);
   hM_bin40->GetYaxis()->SetLabelSize(0.035);
   hM_bin40->GetYaxis()->SetTitleSize(0.035);
   hM_bin40->GetYaxis()->SetTitleFont(42);
   hM_bin40->GetZaxis()->SetLabelFont(42);
   hM_bin40->GetZaxis()->SetLabelSize(0.035);
   hM_bin40->GetZaxis()->SetTitleSize(0.035);
   hM_bin40->GetZaxis()->SetTitleFont(42);
   hM_bin40->Draw("e");
   
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
   fmb->SetParameter(0,-7.933705);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,134.9449);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.1201107);
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
   fpeak->SetParameter(0,125.3045);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1421811);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.01953557);
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
