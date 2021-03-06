{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 11 11:51:05 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-24.70503,0.350906,222.3452);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin7 = new TH1F("hM_bin7","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin7->SetBinContent(0,719);
   hM_bin7->SetBinContent(14,1);
   hM_bin7->SetBinContent(15,4);
   hM_bin7->SetBinContent(16,8);
   hM_bin7->SetBinContent(17,2);
   hM_bin7->SetBinContent(18,5);
   hM_bin7->SetBinContent(19,3);
   hM_bin7->SetBinContent(20,5);
   hM_bin7->SetBinContent(21,5);
   hM_bin7->SetBinContent(22,6);
   hM_bin7->SetBinContent(23,2);
   hM_bin7->SetBinContent(24,4);
   hM_bin7->SetBinContent(25,8);
   hM_bin7->SetBinContent(26,7);
   hM_bin7->SetBinContent(27,5);
   hM_bin7->SetBinContent(28,4);
   hM_bin7->SetBinContent(29,1);
   hM_bin7->SetBinContent(31,5);
   hM_bin7->SetBinContent(32,4);
   hM_bin7->SetBinContent(33,5);
   hM_bin7->SetBinContent(34,7);
   hM_bin7->SetBinContent(35,8);
   hM_bin7->SetBinContent(36,12);
   hM_bin7->SetBinContent(37,16);
   hM_bin7->SetBinContent(38,12);
   hM_bin7->SetBinContent(39,18);
   hM_bin7->SetBinContent(40,24);
   hM_bin7->SetBinContent(41,21);
   hM_bin7->SetBinContent(42,30);
   hM_bin7->SetBinContent(43,48);
   hM_bin7->SetBinContent(44,50);
   hM_bin7->SetBinContent(45,87);
   hM_bin7->SetBinContent(46,102);
   hM_bin7->SetBinContent(47,121);
   hM_bin7->SetBinContent(48,160);
   hM_bin7->SetBinContent(49,152);
   hM_bin7->SetBinContent(50,167);
   hM_bin7->SetBinContent(51,150);
   hM_bin7->SetBinContent(52,175);
   hM_bin7->SetBinContent(53,169);
   hM_bin7->SetBinContent(54,151);
   hM_bin7->SetBinContent(55,148);
   hM_bin7->SetBinContent(56,137);
   hM_bin7->SetBinContent(57,122);
   hM_bin7->SetBinContent(58,101);
   hM_bin7->SetBinContent(59,67);
   hM_bin7->SetBinContent(60,70);
   hM_bin7->SetBinContent(61,57);
   hM_bin7->SetBinContent(62,57);
   hM_bin7->SetBinContent(63,54);
   hM_bin7->SetBinContent(64,50);
   hM_bin7->SetBinContent(65,43);
   hM_bin7->SetBinContent(66,49);
   hM_bin7->SetBinContent(67,38);
   hM_bin7->SetBinContent(68,36);
   hM_bin7->SetBinContent(69,40);
   hM_bin7->SetBinContent(70,32);
   hM_bin7->SetBinContent(71,42);
   hM_bin7->SetBinContent(72,39);
   hM_bin7->SetBinContent(73,21);
   hM_bin7->SetBinContent(74,46);
   hM_bin7->SetBinContent(75,46);
   hM_bin7->SetBinContent(76,33);
   hM_bin7->SetBinContent(77,35);
   hM_bin7->SetBinContent(78,40);
   hM_bin7->SetBinContent(79,33);
   hM_bin7->SetBinContent(80,36);
   hM_bin7->SetBinContent(81,46);
   hM_bin7->SetBinContent(82,45);
   hM_bin7->SetBinContent(83,48);
   hM_bin7->SetBinContent(84,46);
   hM_bin7->SetBinContent(85,62);
   hM_bin7->SetBinContent(86,43);
   hM_bin7->SetBinContent(87,43);
   hM_bin7->SetBinContent(88,52);
   hM_bin7->SetBinContent(89,50);
   hM_bin7->SetBinContent(90,61);
   hM_bin7->SetBinContent(91,44);
   hM_bin7->SetBinContent(92,41);
   hM_bin7->SetBinContent(93,46);
   hM_bin7->SetBinContent(94,36);
   hM_bin7->SetBinContent(95,54);
   hM_bin7->SetBinContent(96,57);
   hM_bin7->SetBinContent(97,55);
   hM_bin7->SetBinContent(98,60);
   hM_bin7->SetBinContent(99,66);
   hM_bin7->SetBinContent(100,64);
   hM_bin7->SetBinContent(101,9535);
   hM_bin7->SetEntries(14509);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08236068,0.1982941);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(42.88245);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-18.88897);
   fsig->SetParError(0,4.804316);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,272.8875);
   fsig->SetParError(1,36.99573);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-2.064098e-07);
   fsig->SetParError(2,354.1121);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,143.5391);
   fsig->SetParError(3,4.583496);
   fsig->SetParLimits(3,0,350);
   fsig->SetParameter(4,0.1399517);
   fsig->SetParError(4,0.000610496);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,8.438603e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin7->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin7");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 14509  ");
   text = ptstats->AddText("Mean  = 0.1806");
   text = ptstats->AddText("RMS   = 0.06326");
   text = ptstats->AddText("#chi^{2} / ndf = 42.88 / 27");
   text = ptstats->AddText("p0       = -18.89 #pm 4.80 ");
   text = ptstats->AddText("p1       = 272.9 #pm 37.0 ");
   text = ptstats->AddText("p2       = -2.064e-07 #pm 3.541e+02 ");
   text = ptstats->AddText("p3       = 143.5 #pm 4.6 ");
   text = ptstats->AddText("p4       =  0.14 #pm 0.00 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00008 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin7->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin7);

   ci = TColor::GetColor("#0000ff");
   hM_bin7->SetMarkerColor(ci);
   hM_bin7->SetMarkerStyle(24);
   hM_bin7->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin7->GetXaxis()->SetLabelFont(42);
   hM_bin7->GetXaxis()->SetLabelSize(0.035);
   hM_bin7->GetXaxis()->SetTitleSize(0.035);
   hM_bin7->GetXaxis()->SetTitleFont(42);
   hM_bin7->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin7->GetYaxis()->SetLabelFont(42);
   hM_bin7->GetYaxis()->SetLabelSize(0.035);
   hM_bin7->GetYaxis()->SetTitleSize(0.035);
   hM_bin7->GetYaxis()->SetTitleFont(42);
   hM_bin7->GetZaxis()->SetLabelFont(42);
   hM_bin7->GetZaxis()->SetLabelSize(0.035);
   hM_bin7->GetZaxis()->SetTitleSize(0.035);
   hM_bin7->GetZaxis()->SetTitleFont(42);
   hM_bin7->Draw("e");
   
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
   fmb->SetParameter(0,-18.88897);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,272.8875);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-2.064098e-07);
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
   fpeak->SetParameter(0,143.5391);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1399517);
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
