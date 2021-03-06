{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 16:05:54 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-53.77948,0.350906,484.0153);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin9 = new TH1F("hM_bin9","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin9->SetBinContent(0,1993);
   hM_bin9->SetBinContent(14,2);
   hM_bin9->SetBinContent(15,3);
   hM_bin9->SetBinContent(16,5);
   hM_bin9->SetBinContent(17,5);
   hM_bin9->SetBinContent(18,4);
   hM_bin9->SetBinContent(19,3);
   hM_bin9->SetBinContent(20,2);
   hM_bin9->SetBinContent(21,7);
   hM_bin9->SetBinContent(22,1);
   hM_bin9->SetBinContent(23,2);
   hM_bin9->SetBinContent(24,7);
   hM_bin9->SetBinContent(25,6);
   hM_bin9->SetBinContent(26,5);
   hM_bin9->SetBinContent(27,8);
   hM_bin9->SetBinContent(28,7);
   hM_bin9->SetBinContent(29,11);
   hM_bin9->SetBinContent(30,7);
   hM_bin9->SetBinContent(31,9);
   hM_bin9->SetBinContent(32,11);
   hM_bin9->SetBinContent(33,14);
   hM_bin9->SetBinContent(34,10);
   hM_bin9->SetBinContent(35,11);
   hM_bin9->SetBinContent(36,12);
   hM_bin9->SetBinContent(37,16);
   hM_bin9->SetBinContent(38,23);
   hM_bin9->SetBinContent(39,28);
   hM_bin9->SetBinContent(40,37);
   hM_bin9->SetBinContent(41,50);
   hM_bin9->SetBinContent(42,80);
   hM_bin9->SetBinContent(43,102);
   hM_bin9->SetBinContent(44,150);
   hM_bin9->SetBinContent(45,149);
   hM_bin9->SetBinContent(46,210);
   hM_bin9->SetBinContent(47,294);
   hM_bin9->SetBinContent(48,339);
   hM_bin9->SetBinContent(49,382);
   hM_bin9->SetBinContent(50,390);
   hM_bin9->SetBinContent(51,357);
   hM_bin9->SetBinContent(52,340);
   hM_bin9->SetBinContent(53,366);
   hM_bin9->SetBinContent(54,322);
   hM_bin9->SetBinContent(55,285);
   hM_bin9->SetBinContent(56,261);
   hM_bin9->SetBinContent(57,172);
   hM_bin9->SetBinContent(58,167);
   hM_bin9->SetBinContent(59,122);
   hM_bin9->SetBinContent(60,107);
   hM_bin9->SetBinContent(61,91);
   hM_bin9->SetBinContent(62,96);
   hM_bin9->SetBinContent(63,68);
   hM_bin9->SetBinContent(64,64);
   hM_bin9->SetBinContent(65,61);
   hM_bin9->SetBinContent(66,74);
   hM_bin9->SetBinContent(67,53);
   hM_bin9->SetBinContent(68,45);
   hM_bin9->SetBinContent(69,59);
   hM_bin9->SetBinContent(70,66);
   hM_bin9->SetBinContent(71,62);
   hM_bin9->SetBinContent(72,58);
   hM_bin9->SetBinContent(73,61);
   hM_bin9->SetBinContent(74,56);
   hM_bin9->SetBinContent(75,57);
   hM_bin9->SetBinContent(76,58);
   hM_bin9->SetBinContent(77,71);
   hM_bin9->SetBinContent(78,63);
   hM_bin9->SetBinContent(79,67);
   hM_bin9->SetBinContent(80,66);
   hM_bin9->SetBinContent(81,76);
   hM_bin9->SetBinContent(82,57);
   hM_bin9->SetBinContent(83,59);
   hM_bin9->SetBinContent(84,61);
   hM_bin9->SetBinContent(85,50);
   hM_bin9->SetBinContent(86,78);
   hM_bin9->SetBinContent(87,63);
   hM_bin9->SetBinContent(88,76);
   hM_bin9->SetBinContent(89,88);
   hM_bin9->SetBinContent(90,70);
   hM_bin9->SetBinContent(91,76);
   hM_bin9->SetBinContent(92,85);
   hM_bin9->SetBinContent(93,66);
   hM_bin9->SetBinContent(94,71);
   hM_bin9->SetBinContent(95,81);
   hM_bin9->SetBinContent(96,65);
   hM_bin9->SetBinContent(97,78);
   hM_bin9->SetBinContent(98,76);
   hM_bin9->SetBinContent(99,84);
   hM_bin9->SetBinContent(100,97);
   hM_bin9->SetBinContent(101,21747);
   hM_bin9->SetEntries(31394);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08029898,0.1962324);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(106.8052);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-32.28084);
   fsig->SetParError(0,4.834423);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,382.4853);
   fsig->SetParError(1,39.24425);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-2.065863e-07);
   fsig->SetParError(2,225.4236);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,321.9485);
   fsig->SetParError(3,6.274184);
   fsig->SetParLimits(3,0,780);
   fsig->SetParameter(4,0.1377481);
   fsig->SetParError(4,0.0003585167);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,2.391493e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin9->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin9");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 31394  ");
   text = ptstats->AddText("Mean  = 0.1724");
   text = ptstats->AddText("RMS   = 0.05968");
   text = ptstats->AddText("#chi^{2} / ndf = 106.8 / 28");
   text = ptstats->AddText("p0       = -32.28 #pm 4.83 ");
   text = ptstats->AddText("p1       = 382.5 #pm 39.2 ");
   text = ptstats->AddText("p2       = -2.066e-07 #pm 2.254e+02 ");
   text = ptstats->AddText("p3       = 321.9 #pm 6.3 ");
   text = ptstats->AddText("p4       = 0.1377 #pm 0.0004 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00002 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin9->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin9);

   ci = TColor::GetColor("#0000ff");
   hM_bin9->SetMarkerColor(ci);
   hM_bin9->SetMarkerStyle(24);
   hM_bin9->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin9->GetXaxis()->SetLabelFont(42);
   hM_bin9->GetXaxis()->SetLabelSize(0.035);
   hM_bin9->GetXaxis()->SetTitleSize(0.035);
   hM_bin9->GetXaxis()->SetTitleFont(42);
   hM_bin9->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin9->GetYaxis()->SetLabelFont(42);
   hM_bin9->GetYaxis()->SetLabelSize(0.035);
   hM_bin9->GetYaxis()->SetTitleSize(0.035);
   hM_bin9->GetYaxis()->SetTitleFont(42);
   hM_bin9->GetZaxis()->SetLabelFont(42);
   hM_bin9->GetZaxis()->SetLabelSize(0.035);
   hM_bin9->GetZaxis()->SetTitleSize(0.035);
   hM_bin9->GetZaxis()->SetTitleFont(42);
   hM_bin9->Draw("e");
   
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
   fmb->SetParameter(0,-32.28084);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,382.4853);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-2.065863e-07);
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
   fpeak->SetParameter(0,321.9485);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1377481);
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
