{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 11 11:59:12 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-9.031346,0.350906,81.28211);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin33 = new TH1F("hM_bin33","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin33->SetBinContent(0,986);
   hM_bin33->SetBinContent(16,2);
   hM_bin33->SetBinContent(18,3);
   hM_bin33->SetBinContent(19,2);
   hM_bin33->SetBinContent(20,4);
   hM_bin33->SetBinContent(21,1);
   hM_bin33->SetBinContent(22,3);
   hM_bin33->SetBinContent(23,1);
   hM_bin33->SetBinContent(24,2);
   hM_bin33->SetBinContent(25,1);
   hM_bin33->SetBinContent(26,1);
   hM_bin33->SetBinContent(27,1);
   hM_bin33->SetBinContent(28,2);
   hM_bin33->SetBinContent(29,2);
   hM_bin33->SetBinContent(30,2);
   hM_bin33->SetBinContent(31,1);
   hM_bin33->SetBinContent(32,4);
   hM_bin33->SetBinContent(33,2);
   hM_bin33->SetBinContent(34,2);
   hM_bin33->SetBinContent(35,2);
   hM_bin33->SetBinContent(36,2);
   hM_bin33->SetBinContent(37,3);
   hM_bin33->SetBinContent(38,6);
   hM_bin33->SetBinContent(39,8);
   hM_bin33->SetBinContent(40,5);
   hM_bin33->SetBinContent(41,5);
   hM_bin33->SetBinContent(42,15);
   hM_bin33->SetBinContent(43,13);
   hM_bin33->SetBinContent(44,25);
   hM_bin33->SetBinContent(45,29);
   hM_bin33->SetBinContent(46,38);
   hM_bin33->SetBinContent(47,34);
   hM_bin33->SetBinContent(48,42);
   hM_bin33->SetBinContent(49,51);
   hM_bin33->SetBinContent(50,46);
   hM_bin33->SetBinContent(51,49);
   hM_bin33->SetBinContent(52,41);
   hM_bin33->SetBinContent(53,52);
   hM_bin33->SetBinContent(54,46);
   hM_bin33->SetBinContent(55,49);
   hM_bin33->SetBinContent(56,61);
   hM_bin33->SetBinContent(57,47);
   hM_bin33->SetBinContent(58,44);
   hM_bin33->SetBinContent(59,39);
   hM_bin33->SetBinContent(60,26);
   hM_bin33->SetBinContent(61,25);
   hM_bin33->SetBinContent(62,30);
   hM_bin33->SetBinContent(63,16);
   hM_bin33->SetBinContent(64,19);
   hM_bin33->SetBinContent(65,9);
   hM_bin33->SetBinContent(66,7);
   hM_bin33->SetBinContent(67,10);
   hM_bin33->SetBinContent(68,9);
   hM_bin33->SetBinContent(69,9);
   hM_bin33->SetBinContent(70,6);
   hM_bin33->SetBinContent(71,14);
   hM_bin33->SetBinContent(72,10);
   hM_bin33->SetBinContent(73,14);
   hM_bin33->SetBinContent(74,11);
   hM_bin33->SetBinContent(75,10);
   hM_bin33->SetBinContent(76,8);
   hM_bin33->SetBinContent(77,16);
   hM_bin33->SetBinContent(78,7);
   hM_bin33->SetBinContent(79,17);
   hM_bin33->SetBinContent(80,4);
   hM_bin33->SetBinContent(81,11);
   hM_bin33->SetBinContent(82,8);
   hM_bin33->SetBinContent(83,6);
   hM_bin33->SetBinContent(84,15);
   hM_bin33->SetBinContent(85,15);
   hM_bin33->SetBinContent(86,10);
   hM_bin33->SetBinContent(87,8);
   hM_bin33->SetBinContent(88,8);
   hM_bin33->SetBinContent(89,11);
   hM_bin33->SetBinContent(90,16);
   hM_bin33->SetBinContent(91,18);
   hM_bin33->SetBinContent(92,14);
   hM_bin33->SetBinContent(93,20);
   hM_bin33->SetBinContent(94,19);
   hM_bin33->SetBinContent(95,18);
   hM_bin33->SetBinContent(96,17);
   hM_bin33->SetBinContent(97,16);
   hM_bin33->SetBinContent(98,15);
   hM_bin33->SetBinContent(99,13);
   hM_bin33->SetBinContent(100,15);
   hM_bin33->SetBinContent(101,15991);
   hM_bin33->SetEntries(18315);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08211266,0.2054029);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(28.84161);
   fsig->SetNDF(29);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-2.523071);
   fsig->SetParError(0,2.363079);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,37.61435);
   fsig->SetParError(1,17.09012);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.001530725);
   fsig->SetParError(2,1071.58);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,50.5064);
   fsig->SetParError(3,2.427584);
   fsig->SetParLimits(3,0,122);
   fsig->SetParameter(4,0.1437409);
   fsig->SetParError(4,0.001153476);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.02151969);
   fsig->SetParError(5,0.001186818);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin33->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin33");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 18315  ");
   text = ptstats->AddText("Mean  = 0.1757");
   text = ptstats->AddText("RMS   = 0.06158");
   text = ptstats->AddText("#chi^{2} / ndf = 28.84 / 29");
   text = ptstats->AddText("p0       = -2.523 #pm 2.363 ");
   text = ptstats->AddText("p1       = 37.61 #pm 17.09 ");
   text = ptstats->AddText("p2       = -0.001531 #pm 1071.580078 ");
   text = ptstats->AddText("p3       = 50.51 #pm 2.43 ");
   text = ptstats->AddText("p4       = 0.1437 #pm 0.0012 ");
   text = ptstats->AddText("p5       = 0.02152 #pm 0.00119 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin33->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin33);

   ci = TColor::GetColor("#0000ff");
   hM_bin33->SetMarkerColor(ci);
   hM_bin33->SetMarkerStyle(24);
   hM_bin33->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin33->GetXaxis()->SetLabelFont(42);
   hM_bin33->GetXaxis()->SetLabelSize(0.035);
   hM_bin33->GetXaxis()->SetTitleSize(0.035);
   hM_bin33->GetXaxis()->SetTitleFont(42);
   hM_bin33->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin33->GetYaxis()->SetLabelFont(42);
   hM_bin33->GetYaxis()->SetLabelSize(0.035);
   hM_bin33->GetYaxis()->SetTitleSize(0.035);
   hM_bin33->GetYaxis()->SetTitleFont(42);
   hM_bin33->GetZaxis()->SetLabelFont(42);
   hM_bin33->GetZaxis()->SetLabelSize(0.035);
   hM_bin33->GetZaxis()->SetTitleSize(0.035);
   hM_bin33->GetZaxis()->SetTitleFont(42);
   hM_bin33->Draw("e");
   
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
   fmb->SetParameter(0,-2.523071);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,37.61435);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.001530725);
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
   fpeak->SetParameter(0,50.5064);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1437409);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.02151969);
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
