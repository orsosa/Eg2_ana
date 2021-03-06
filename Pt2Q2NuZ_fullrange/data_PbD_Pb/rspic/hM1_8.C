{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 15:50:19 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-23.20582,0.350906,208.8524);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin8 = new TH1F("hM_bin8","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin8->SetBinContent(0,321);
   hM_bin8->SetBinContent(16,5);
   hM_bin8->SetBinContent(17,4);
   hM_bin8->SetBinContent(18,4);
   hM_bin8->SetBinContent(19,3);
   hM_bin8->SetBinContent(21,5);
   hM_bin8->SetBinContent(22,2);
   hM_bin8->SetBinContent(24,1);
   hM_bin8->SetBinContent(25,2);
   hM_bin8->SetBinContent(26,6);
   hM_bin8->SetBinContent(27,7);
   hM_bin8->SetBinContent(28,4);
   hM_bin8->SetBinContent(29,6);
   hM_bin8->SetBinContent(30,1);
   hM_bin8->SetBinContent(31,7);
   hM_bin8->SetBinContent(32,3);
   hM_bin8->SetBinContent(33,4);
   hM_bin8->SetBinContent(34,6);
   hM_bin8->SetBinContent(35,6);
   hM_bin8->SetBinContent(36,11);
   hM_bin8->SetBinContent(37,12);
   hM_bin8->SetBinContent(38,8);
   hM_bin8->SetBinContent(39,13);
   hM_bin8->SetBinContent(40,19);
   hM_bin8->SetBinContent(41,24);
   hM_bin8->SetBinContent(42,30);
   hM_bin8->SetBinContent(43,47);
   hM_bin8->SetBinContent(44,45);
   hM_bin8->SetBinContent(45,73);
   hM_bin8->SetBinContent(46,109);
   hM_bin8->SetBinContent(47,96);
   hM_bin8->SetBinContent(48,151);
   hM_bin8->SetBinContent(49,125);
   hM_bin8->SetBinContent(50,148);
   hM_bin8->SetBinContent(51,152);
   hM_bin8->SetBinContent(52,164);
   hM_bin8->SetBinContent(53,158);
   hM_bin8->SetBinContent(54,149);
   hM_bin8->SetBinContent(55,127);
   hM_bin8->SetBinContent(56,109);
   hM_bin8->SetBinContent(57,94);
   hM_bin8->SetBinContent(58,83);
   hM_bin8->SetBinContent(59,61);
   hM_bin8->SetBinContent(60,51);
   hM_bin8->SetBinContent(61,42);
   hM_bin8->SetBinContent(62,49);
   hM_bin8->SetBinContent(63,33);
   hM_bin8->SetBinContent(64,41);
   hM_bin8->SetBinContent(65,39);
   hM_bin8->SetBinContent(66,26);
   hM_bin8->SetBinContent(67,36);
   hM_bin8->SetBinContent(68,34);
   hM_bin8->SetBinContent(69,40);
   hM_bin8->SetBinContent(70,24);
   hM_bin8->SetBinContent(71,32);
   hM_bin8->SetBinContent(72,37);
   hM_bin8->SetBinContent(73,24);
   hM_bin8->SetBinContent(74,32);
   hM_bin8->SetBinContent(75,24);
   hM_bin8->SetBinContent(76,28);
   hM_bin8->SetBinContent(77,36);
   hM_bin8->SetBinContent(78,38);
   hM_bin8->SetBinContent(79,25);
   hM_bin8->SetBinContent(80,34);
   hM_bin8->SetBinContent(81,30);
   hM_bin8->SetBinContent(82,36);
   hM_bin8->SetBinContent(83,33);
   hM_bin8->SetBinContent(84,32);
   hM_bin8->SetBinContent(85,37);
   hM_bin8->SetBinContent(86,35);
   hM_bin8->SetBinContent(87,31);
   hM_bin8->SetBinContent(88,33);
   hM_bin8->SetBinContent(89,36);
   hM_bin8->SetBinContent(90,37);
   hM_bin8->SetBinContent(91,35);
   hM_bin8->SetBinContent(92,32);
   hM_bin8->SetBinContent(93,34);
   hM_bin8->SetBinContent(94,33);
   hM_bin8->SetBinContent(95,47);
   hM_bin8->SetBinContent(96,34);
   hM_bin8->SetBinContent(97,38);
   hM_bin8->SetBinContent(98,32);
   hM_bin8->SetBinContent(99,41);
   hM_bin8->SetBinContent(100,30);
   hM_bin8->SetBinContent(101,7166);
   hM_bin8->SetEntries(10992);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08134764,0.1972811);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(49.02876);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-14.84442);
   fsig->SetParError(0,3.626863);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,207.3752);
   fsig->SetParError(1,29.7817);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-2.961927e-05);
   fsig->SetParError(2,231.9757);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,131.5004);
   fsig->SetParError(3,4.26334);
   fsig->SetParLimits(3,0,328);
   fsig->SetParameter(4,0.1390152);
   fsig->SetParError(4,0.000599026);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,7.571318e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin8->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin8");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 10992  ");
   text = ptstats->AddText("Mean  = 0.1748");
   text = ptstats->AddText("RMS   = 0.06007");
   text = ptstats->AddText("#chi^{2} / ndf = 49.03 / 28");
   text = ptstats->AddText("p0       = -14.84 #pm 3.63 ");
   text = ptstats->AddText("p1       = 207.4 #pm 29.8 ");
   text = ptstats->AddText("p2       = -2.962e-05 #pm 2.320e+02 ");
   text = ptstats->AddText("p3       = 131.5 #pm 4.3 ");
   text = ptstats->AddText("p4       = 0.139 #pm 0.001 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00008 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin8->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin8);

   ci = TColor::GetColor("#0000ff");
   hM_bin8->SetMarkerColor(ci);
   hM_bin8->SetMarkerStyle(24);
   hM_bin8->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin8->GetXaxis()->SetLabelFont(42);
   hM_bin8->GetXaxis()->SetLabelSize(0.035);
   hM_bin8->GetXaxis()->SetTitleSize(0.035);
   hM_bin8->GetXaxis()->SetTitleFont(42);
   hM_bin8->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin8->GetYaxis()->SetLabelFont(42);
   hM_bin8->GetYaxis()->SetLabelSize(0.035);
   hM_bin8->GetYaxis()->SetTitleSize(0.035);
   hM_bin8->GetYaxis()->SetTitleFont(42);
   hM_bin8->GetZaxis()->SetLabelFont(42);
   hM_bin8->GetZaxis()->SetLabelSize(0.035);
   hM_bin8->GetZaxis()->SetTitleSize(0.035);
   hM_bin8->GetZaxis()->SetTitleFont(42);
   hM_bin8->Draw("e");
   
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
   fmb->SetParameter(0,-14.84442);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,207.3752);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-2.961927e-05);
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
   fpeak->SetParameter(0,131.5004);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1390152);
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
