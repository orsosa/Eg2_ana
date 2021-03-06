{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 15:50:43 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-7.631063,0.350906,68.67956);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin16 = new TH1F("hM_bin16","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin16->SetBinContent(0,466);
   hM_bin16->SetBinContent(14,2);
   hM_bin16->SetBinContent(15,3);
   hM_bin16->SetBinContent(17,1);
   hM_bin16->SetBinContent(18,1);
   hM_bin16->SetBinContent(20,1);
   hM_bin16->SetBinContent(23,3);
   hM_bin16->SetBinContent(24,1);
   hM_bin16->SetBinContent(27,1);
   hM_bin16->SetBinContent(28,1);
   hM_bin16->SetBinContent(29,1);
   hM_bin16->SetBinContent(30,3);
   hM_bin16->SetBinContent(31,1);
   hM_bin16->SetBinContent(32,1);
   hM_bin16->SetBinContent(33,1);
   hM_bin16->SetBinContent(35,1);
   hM_bin16->SetBinContent(36,1);
   hM_bin16->SetBinContent(37,1);
   hM_bin16->SetBinContent(39,5);
   hM_bin16->SetBinContent(40,7);
   hM_bin16->SetBinContent(41,6);
   hM_bin16->SetBinContent(42,8);
   hM_bin16->SetBinContent(43,11);
   hM_bin16->SetBinContent(44,8);
   hM_bin16->SetBinContent(45,11);
   hM_bin16->SetBinContent(46,15);
   hM_bin16->SetBinContent(47,25);
   hM_bin16->SetBinContent(48,42);
   hM_bin16->SetBinContent(49,40);
   hM_bin16->SetBinContent(50,47);
   hM_bin16->SetBinContent(51,48);
   hM_bin16->SetBinContent(52,36);
   hM_bin16->SetBinContent(53,48);
   hM_bin16->SetBinContent(54,51);
   hM_bin16->SetBinContent(55,30);
   hM_bin16->SetBinContent(56,46);
   hM_bin16->SetBinContent(57,31);
   hM_bin16->SetBinContent(58,26);
   hM_bin16->SetBinContent(59,28);
   hM_bin16->SetBinContent(60,20);
   hM_bin16->SetBinContent(61,18);
   hM_bin16->SetBinContent(62,24);
   hM_bin16->SetBinContent(63,17);
   hM_bin16->SetBinContent(64,11);
   hM_bin16->SetBinContent(65,10);
   hM_bin16->SetBinContent(66,6);
   hM_bin16->SetBinContent(67,8);
   hM_bin16->SetBinContent(68,10);
   hM_bin16->SetBinContent(69,11);
   hM_bin16->SetBinContent(70,6);
   hM_bin16->SetBinContent(71,7);
   hM_bin16->SetBinContent(72,12);
   hM_bin16->SetBinContent(73,11);
   hM_bin16->SetBinContent(74,13);
   hM_bin16->SetBinContent(75,13);
   hM_bin16->SetBinContent(76,13);
   hM_bin16->SetBinContent(77,10);
   hM_bin16->SetBinContent(78,10);
   hM_bin16->SetBinContent(79,12);
   hM_bin16->SetBinContent(80,8);
   hM_bin16->SetBinContent(81,10);
   hM_bin16->SetBinContent(82,10);
   hM_bin16->SetBinContent(83,10);
   hM_bin16->SetBinContent(84,9);
   hM_bin16->SetBinContent(85,10);
   hM_bin16->SetBinContent(86,10);
   hM_bin16->SetBinContent(87,9);
   hM_bin16->SetBinContent(88,10);
   hM_bin16->SetBinContent(89,11);
   hM_bin16->SetBinContent(90,13);
   hM_bin16->SetBinContent(91,10);
   hM_bin16->SetBinContent(92,12);
   hM_bin16->SetBinContent(93,13);
   hM_bin16->SetBinContent(94,12);
   hM_bin16->SetBinContent(95,14);
   hM_bin16->SetBinContent(96,13);
   hM_bin16->SetBinContent(97,7);
   hM_bin16->SetBinContent(98,8);
   hM_bin16->SetBinContent(99,13);
   hM_bin16->SetBinContent(100,14);
   hM_bin16->SetBinContent(101,4649);
   hM_bin16->SetEntries(6176);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08649984,0.2024333);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(35.01118);
   fsig->SetNDF(26);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-4.653042);
   fsig->SetParError(0,2.16747);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,59.66676);
   fsig->SetParError(1,16.66039);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-9.820298e-06);
   fsig->SetParError(2,708.1435);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,38.72431);
   fsig->SetParError(3,2.305384);
   fsig->SetParLimits(3,0,102);
   fsig->SetParameter(4,0.1437774);
   fsig->SetParError(4,0.001148055);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0005247698);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin16->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin16");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 6176   ");
   text = ptstats->AddText("Mean  = 0.1789");
   text = ptstats->AddText("RMS   = 0.05973");
   text = ptstats->AddText("#chi^{2} / ndf = 35.01 / 26");
   text = ptstats->AddText("p0       = -4.653 #pm 2.167 ");
   text = ptstats->AddText("p1       = 59.67 #pm 16.66 ");
   text = ptstats->AddText("p2       = -9.82e-06 #pm 7.08e+02 ");
   text = ptstats->AddText("p3       = 38.72 #pm 2.31 ");
   text = ptstats->AddText("p4       = 0.1438 #pm 0.0011 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00052 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin16->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin16);

   ci = TColor::GetColor("#0000ff");
   hM_bin16->SetMarkerColor(ci);
   hM_bin16->SetMarkerStyle(24);
   hM_bin16->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin16->GetXaxis()->SetLabelFont(42);
   hM_bin16->GetXaxis()->SetLabelSize(0.035);
   hM_bin16->GetXaxis()->SetTitleSize(0.035);
   hM_bin16->GetXaxis()->SetTitleFont(42);
   hM_bin16->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin16->GetYaxis()->SetLabelFont(42);
   hM_bin16->GetYaxis()->SetLabelSize(0.035);
   hM_bin16->GetYaxis()->SetTitleSize(0.035);
   hM_bin16->GetYaxis()->SetTitleFont(42);
   hM_bin16->GetZaxis()->SetLabelFont(42);
   hM_bin16->GetZaxis()->SetLabelSize(0.035);
   hM_bin16->GetZaxis()->SetTitleSize(0.035);
   hM_bin16->GetZaxis()->SetTitleFont(42);
   hM_bin16->Draw("e");
   
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
   fmb->SetParameter(0,-4.653042);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,59.66676);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-9.820298e-06);
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
   fpeak->SetParameter(0,38.72431);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1437774);
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
