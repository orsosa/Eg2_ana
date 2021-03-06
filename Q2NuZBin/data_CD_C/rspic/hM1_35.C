{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Jan 31 05:37:01 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-12.0895,0.350906,108.8055);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin35 = new TH1F("hM_bin35","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin35->SetBinContent(0,3446);
   hM_bin35->SetBinContent(15,1);
   hM_bin35->SetBinContent(17,1);
   hM_bin35->SetBinContent(18,3);
   hM_bin35->SetBinContent(19,4);
   hM_bin35->SetBinContent(20,3);
   hM_bin35->SetBinContent(21,4);
   hM_bin35->SetBinContent(22,1);
   hM_bin35->SetBinContent(23,1);
   hM_bin35->SetBinContent(24,4);
   hM_bin35->SetBinContent(25,3);
   hM_bin35->SetBinContent(26,4);
   hM_bin35->SetBinContent(27,3);
   hM_bin35->SetBinContent(28,2);
   hM_bin35->SetBinContent(29,8);
   hM_bin35->SetBinContent(30,4);
   hM_bin35->SetBinContent(31,4);
   hM_bin35->SetBinContent(32,3);
   hM_bin35->SetBinContent(33,5);
   hM_bin35->SetBinContent(34,4);
   hM_bin35->SetBinContent(35,4);
   hM_bin35->SetBinContent(36,6);
   hM_bin35->SetBinContent(37,8);
   hM_bin35->SetBinContent(38,7);
   hM_bin35->SetBinContent(39,15);
   hM_bin35->SetBinContent(40,7);
   hM_bin35->SetBinContent(41,17);
   hM_bin35->SetBinContent(42,14);
   hM_bin35->SetBinContent(43,14);
   hM_bin35->SetBinContent(44,19);
   hM_bin35->SetBinContent(45,36);
   hM_bin35->SetBinContent(46,39);
   hM_bin35->SetBinContent(47,43);
   hM_bin35->SetBinContent(48,54);
   hM_bin35->SetBinContent(49,77);
   hM_bin35->SetBinContent(50,66);
   hM_bin35->SetBinContent(51,65);
   hM_bin35->SetBinContent(52,67);
   hM_bin35->SetBinContent(53,76);
   hM_bin35->SetBinContent(54,83);
   hM_bin35->SetBinContent(55,69);
   hM_bin35->SetBinContent(56,70);
   hM_bin35->SetBinContent(57,54);
   hM_bin35->SetBinContent(58,55);
   hM_bin35->SetBinContent(59,35);
   hM_bin35->SetBinContent(60,43);
   hM_bin35->SetBinContent(61,33);
   hM_bin35->SetBinContent(62,21);
   hM_bin35->SetBinContent(63,23);
   hM_bin35->SetBinContent(64,26);
   hM_bin35->SetBinContent(65,17);
   hM_bin35->SetBinContent(66,20);
   hM_bin35->SetBinContent(67,26);
   hM_bin35->SetBinContent(68,18);
   hM_bin35->SetBinContent(69,14);
   hM_bin35->SetBinContent(70,8);
   hM_bin35->SetBinContent(71,21);
   hM_bin35->SetBinContent(72,13);
   hM_bin35->SetBinContent(73,20);
   hM_bin35->SetBinContent(74,13);
   hM_bin35->SetBinContent(75,15);
   hM_bin35->SetBinContent(76,14);
   hM_bin35->SetBinContent(77,13);
   hM_bin35->SetBinContent(78,17);
   hM_bin35->SetBinContent(79,14);
   hM_bin35->SetBinContent(80,21);
   hM_bin35->SetBinContent(81,16);
   hM_bin35->SetBinContent(82,17);
   hM_bin35->SetBinContent(83,21);
   hM_bin35->SetBinContent(84,16);
   hM_bin35->SetBinContent(85,23);
   hM_bin35->SetBinContent(86,5);
   hM_bin35->SetBinContent(87,22);
   hM_bin35->SetBinContent(88,20);
   hM_bin35->SetBinContent(89,15);
   hM_bin35->SetBinContent(90,15);
   hM_bin35->SetBinContent(91,26);
   hM_bin35->SetBinContent(92,20);
   hM_bin35->SetBinContent(93,16);
   hM_bin35->SetBinContent(94,23);
   hM_bin35->SetBinContent(95,14);
   hM_bin35->SetBinContent(96,32);
   hM_bin35->SetBinContent(97,15);
   hM_bin35->SetBinContent(98,23);
   hM_bin35->SetBinContent(99,22);
   hM_bin35->SetBinContent(100,28);
   hM_bin35->SetBinContent(101,19955);
   hM_bin35->SetEntries(25262);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08540307,0.2013365);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(31.52333);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-4.168436);
   fsig->SetParError(0,3.593756);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,96.34904);
   fsig->SetParError(1,25.82098);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-2.254783e-07);
   fsig->SetParError(2,470.3004);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,62.82289);
   fsig->SetParError(3,3.133223);
   fsig->SetParLimits(3,0,166);
   fsig->SetParameter(4,0.1429377);
   fsig->SetParError(4,0.0009835402);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0002716559);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin35->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin35");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 25262  ");
   text = ptstats->AddText("Mean  = 0.1764");
   text = ptstats->AddText("RMS   = 0.06233");
   text = ptstats->AddText("#chi^{2} / ndf = 31.52 / 27");
   text = ptstats->AddText("p0       = -4.168 #pm 3.594 ");
   text = ptstats->AddText("p1       = 96.35 #pm 25.82 ");
   text = ptstats->AddText("p2       = -2.255e-07 #pm 4.703e+02 ");
   text = ptstats->AddText("p3       = 62.82 #pm 3.13 ");
   text = ptstats->AddText("p4       = 0.1429 #pm 0.0010 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00027 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin35->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin35);

   ci = TColor::GetColor("#0000ff");
   hM_bin35->SetMarkerColor(ci);
   hM_bin35->SetMarkerStyle(24);
   hM_bin35->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin35->GetXaxis()->SetLabelFont(42);
   hM_bin35->GetXaxis()->SetLabelSize(0.035);
   hM_bin35->GetXaxis()->SetTitleSize(0.035);
   hM_bin35->GetXaxis()->SetTitleFont(42);
   hM_bin35->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin35->GetYaxis()->SetLabelFont(42);
   hM_bin35->GetYaxis()->SetLabelSize(0.035);
   hM_bin35->GetYaxis()->SetTitleSize(0.035);
   hM_bin35->GetYaxis()->SetTitleFont(42);
   hM_bin35->GetZaxis()->SetLabelFont(42);
   hM_bin35->GetZaxis()->SetLabelSize(0.035);
   hM_bin35->GetZaxis()->SetTitleSize(0.035);
   hM_bin35->GetZaxis()->SetTitleFont(42);
   hM_bin35->Draw("e");
   
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
   fmb->SetParameter(0,-4.168436);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,96.34904);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-2.254783e-07);
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
   fpeak->SetParameter(0,62.82289);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1429377);
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
