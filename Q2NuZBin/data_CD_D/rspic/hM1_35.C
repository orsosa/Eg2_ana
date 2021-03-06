{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Jan 31 05:38:59 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-14.85079,0.350906,133.6571);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin35 = new TH1F("hM_bin35","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin35->SetBinContent(0,4934);
   hM_bin35->SetBinContent(15,1);
   hM_bin35->SetBinContent(16,1);
   hM_bin35->SetBinContent(17,5);
   hM_bin35->SetBinContent(18,5);
   hM_bin35->SetBinContent(19,3);
   hM_bin35->SetBinContent(20,3);
   hM_bin35->SetBinContent(21,3);
   hM_bin35->SetBinContent(22,2);
   hM_bin35->SetBinContent(23,3);
   hM_bin35->SetBinContent(24,2);
   hM_bin35->SetBinContent(25,5);
   hM_bin35->SetBinContent(26,4);
   hM_bin35->SetBinContent(27,2);
   hM_bin35->SetBinContent(28,5);
   hM_bin35->SetBinContent(29,2);
   hM_bin35->SetBinContent(30,2);
   hM_bin35->SetBinContent(31,11);
   hM_bin35->SetBinContent(32,3);
   hM_bin35->SetBinContent(33,3);
   hM_bin35->SetBinContent(34,7);
   hM_bin35->SetBinContent(35,7);
   hM_bin35->SetBinContent(36,9);
   hM_bin35->SetBinContent(37,5);
   hM_bin35->SetBinContent(38,8);
   hM_bin35->SetBinContent(39,9);
   hM_bin35->SetBinContent(40,24);
   hM_bin35->SetBinContent(41,15);
   hM_bin35->SetBinContent(42,26);
   hM_bin35->SetBinContent(43,25);
   hM_bin35->SetBinContent(44,35);
   hM_bin35->SetBinContent(45,45);
   hM_bin35->SetBinContent(46,53);
   hM_bin35->SetBinContent(47,55);
   hM_bin35->SetBinContent(48,69);
   hM_bin35->SetBinContent(49,87);
   hM_bin35->SetBinContent(50,85);
   hM_bin35->SetBinContent(51,103);
   hM_bin35->SetBinContent(52,95);
   hM_bin35->SetBinContent(53,101);
   hM_bin35->SetBinContent(54,90);
   hM_bin35->SetBinContent(55,94);
   hM_bin35->SetBinContent(56,94);
   hM_bin35->SetBinContent(57,72);
   hM_bin35->SetBinContent(58,62);
   hM_bin35->SetBinContent(59,74);
   hM_bin35->SetBinContent(60,55);
   hM_bin35->SetBinContent(61,58);
   hM_bin35->SetBinContent(62,45);
   hM_bin35->SetBinContent(63,31);
   hM_bin35->SetBinContent(64,30);
   hM_bin35->SetBinContent(65,20);
   hM_bin35->SetBinContent(66,30);
   hM_bin35->SetBinContent(67,31);
   hM_bin35->SetBinContent(68,18);
   hM_bin35->SetBinContent(69,17);
   hM_bin35->SetBinContent(70,20);
   hM_bin35->SetBinContent(71,23);
   hM_bin35->SetBinContent(72,23);
   hM_bin35->SetBinContent(73,25);
   hM_bin35->SetBinContent(74,17);
   hM_bin35->SetBinContent(75,17);
   hM_bin35->SetBinContent(76,24);
   hM_bin35->SetBinContent(77,22);
   hM_bin35->SetBinContent(78,28);
   hM_bin35->SetBinContent(79,22);
   hM_bin35->SetBinContent(80,22);
   hM_bin35->SetBinContent(81,22);
   hM_bin35->SetBinContent(82,23);
   hM_bin35->SetBinContent(83,31);
   hM_bin35->SetBinContent(84,29);
   hM_bin35->SetBinContent(85,17);
   hM_bin35->SetBinContent(86,21);
   hM_bin35->SetBinContent(87,24);
   hM_bin35->SetBinContent(88,26);
   hM_bin35->SetBinContent(89,26);
   hM_bin35->SetBinContent(90,19);
   hM_bin35->SetBinContent(91,22);
   hM_bin35->SetBinContent(92,29);
   hM_bin35->SetBinContent(93,40);
   hM_bin35->SetBinContent(94,37);
   hM_bin35->SetBinContent(95,27);
   hM_bin35->SetBinContent(96,30);
   hM_bin35->SetBinContent(97,40);
   hM_bin35->SetBinContent(98,21);
   hM_bin35->SetBinContent(99,28);
   hM_bin35->SetBinContent(100,31);
   hM_bin35->SetBinContent(101,28472);
   hM_bin35->SetEntries(35941);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08374197,0.2033321);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(25.57406);
   fsig->SetNDF(29);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-5.763197);
   fsig->SetParError(0,3.424168);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,116.746);
   fsig->SetParError(1,25.63908);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.0004772826);
   fsig->SetParError(2,8682.492);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,86.74027);
   fsig->SetParError(3,3.456473);
   fsig->SetParLimits(3,0,206);
   fsig->SetParameter(4,0.1435483);
   fsig->SetParError(4,0.0008827136);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.02033261);
   fsig->SetParError(5,0.001000581);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin35->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin35");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 35941  ");
   text = ptstats->AddText("Mean  = 0.1779");
   text = ptstats->AddText("RMS   = 0.06198");
   text = ptstats->AddText("#chi^{2} / ndf = 25.57 / 29");
   text = ptstats->AddText("p0       = -5.763 #pm 3.424 ");
   text = ptstats->AddText("p1       = 116.7 #pm 25.6 ");
   text = ptstats->AddText("p2       = -0.0004773 #pm 8682.4912109 ");
   text = ptstats->AddText("p3       = 86.74 #pm 3.46 ");
   text = ptstats->AddText("p4       = 0.1435 #pm 0.0009 ");
   text = ptstats->AddText("p5       = 0.02033 #pm 0.00100 ");
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
   fmb->SetParameter(0,-5.763197);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,116.746);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.0004772826);
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
   fpeak->SetParameter(0,86.74027);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1435483);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.02033261);
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
