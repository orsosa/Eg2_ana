{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 11 11:56:29 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-25.38591,0.350906,228.4731);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin41 = new TH1F("hM_bin41","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin41->SetBinContent(0,1763);
   hM_bin41->SetBinContent(15,2);
   hM_bin41->SetBinContent(16,2);
   hM_bin41->SetBinContent(17,2);
   hM_bin41->SetBinContent(18,6);
   hM_bin41->SetBinContent(19,3);
   hM_bin41->SetBinContent(20,3);
   hM_bin41->SetBinContent(21,5);
   hM_bin41->SetBinContent(23,4);
   hM_bin41->SetBinContent(24,5);
   hM_bin41->SetBinContent(25,4);
   hM_bin41->SetBinContent(26,2);
   hM_bin41->SetBinContent(27,3);
   hM_bin41->SetBinContent(28,6);
   hM_bin41->SetBinContent(29,3);
   hM_bin41->SetBinContent(30,6);
   hM_bin41->SetBinContent(31,2);
   hM_bin41->SetBinContent(32,9);
   hM_bin41->SetBinContent(33,2);
   hM_bin41->SetBinContent(34,4);
   hM_bin41->SetBinContent(35,10);
   hM_bin41->SetBinContent(36,8);
   hM_bin41->SetBinContent(37,6);
   hM_bin41->SetBinContent(38,9);
   hM_bin41->SetBinContent(39,15);
   hM_bin41->SetBinContent(40,7);
   hM_bin41->SetBinContent(41,18);
   hM_bin41->SetBinContent(42,32);
   hM_bin41->SetBinContent(43,46);
   hM_bin41->SetBinContent(44,44);
   hM_bin41->SetBinContent(45,58);
   hM_bin41->SetBinContent(46,71);
   hM_bin41->SetBinContent(47,88);
   hM_bin41->SetBinContent(48,112);
   hM_bin41->SetBinContent(49,151);
   hM_bin41->SetBinContent(50,153);
   hM_bin41->SetBinContent(51,180);
   hM_bin41->SetBinContent(52,149);
   hM_bin41->SetBinContent(53,173);
   hM_bin41->SetBinContent(54,178);
   hM_bin41->SetBinContent(55,129);
   hM_bin41->SetBinContent(56,141);
   hM_bin41->SetBinContent(57,113);
   hM_bin41->SetBinContent(58,111);
   hM_bin41->SetBinContent(59,106);
   hM_bin41->SetBinContent(60,67);
   hM_bin41->SetBinContent(61,45);
   hM_bin41->SetBinContent(62,46);
   hM_bin41->SetBinContent(63,37);
   hM_bin41->SetBinContent(64,48);
   hM_bin41->SetBinContent(65,31);
   hM_bin41->SetBinContent(66,20);
   hM_bin41->SetBinContent(67,25);
   hM_bin41->SetBinContent(68,18);
   hM_bin41->SetBinContent(69,20);
   hM_bin41->SetBinContent(70,18);
   hM_bin41->SetBinContent(71,10);
   hM_bin41->SetBinContent(72,17);
   hM_bin41->SetBinContent(73,12);
   hM_bin41->SetBinContent(74,11);
   hM_bin41->SetBinContent(75,18);
   hM_bin41->SetBinContent(76,18);
   hM_bin41->SetBinContent(77,22);
   hM_bin41->SetBinContent(78,20);
   hM_bin41->SetBinContent(79,19);
   hM_bin41->SetBinContent(80,13);
   hM_bin41->SetBinContent(81,24);
   hM_bin41->SetBinContent(82,11);
   hM_bin41->SetBinContent(83,27);
   hM_bin41->SetBinContent(84,16);
   hM_bin41->SetBinContent(85,21);
   hM_bin41->SetBinContent(86,16);
   hM_bin41->SetBinContent(87,20);
   hM_bin41->SetBinContent(88,22);
   hM_bin41->SetBinContent(89,15);
   hM_bin41->SetBinContent(90,19);
   hM_bin41->SetBinContent(91,19);
   hM_bin41->SetBinContent(92,20);
   hM_bin41->SetBinContent(93,27);
   hM_bin41->SetBinContent(94,18);
   hM_bin41->SetBinContent(95,19);
   hM_bin41->SetBinContent(96,22);
   hM_bin41->SetBinContent(97,25);
   hM_bin41->SetBinContent(98,42);
   hM_bin41->SetBinContent(99,26);
   hM_bin41->SetBinContent(100,29);
   hM_bin41->SetBinContent(101,25333);
   hM_bin41->SetEntries(30250);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08538283,0.2013163);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(49.83468);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-11.58755);
   fsig->SetParError(0,3.841218);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,138.2029);
   fsig->SetParError(1,28.19252);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-5.002039e-07);
   fsig->SetParError(2,476.2167);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,151.6825);
   fsig->SetParError(3,4.259328);
   fsig->SetParLimits(3,0,360);
   fsig->SetParameter(4,0.142653);
   fsig->SetParError(4,0.0005579333);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0001247466);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin41->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin41");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 30250  ");
   text = ptstats->AddText("Mean  = 0.1648");
   text = ptstats->AddText("RMS   = 0.05456");
   text = ptstats->AddText("#chi^{2} / ndf = 49.83 / 27");
   text = ptstats->AddText("p0       = -11.59 #pm 3.84 ");
   text = ptstats->AddText("p1       = 138.2 #pm 28.2 ");
   text = ptstats->AddText("p2       = -5.002e-07 #pm 4.762e+02 ");
   text = ptstats->AddText("p3       = 151.7 #pm 4.3 ");
   text = ptstats->AddText("p4       = 0.1427 #pm 0.0006 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00012 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin41->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin41);

   ci = TColor::GetColor("#0000ff");
   hM_bin41->SetMarkerColor(ci);
   hM_bin41->SetMarkerStyle(24);
   hM_bin41->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin41->GetXaxis()->SetLabelFont(42);
   hM_bin41->GetXaxis()->SetLabelSize(0.035);
   hM_bin41->GetXaxis()->SetTitleSize(0.035);
   hM_bin41->GetXaxis()->SetTitleFont(42);
   hM_bin41->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin41->GetYaxis()->SetLabelFont(42);
   hM_bin41->GetYaxis()->SetLabelSize(0.035);
   hM_bin41->GetYaxis()->SetTitleSize(0.035);
   hM_bin41->GetYaxis()->SetTitleFont(42);
   hM_bin41->GetZaxis()->SetLabelFont(42);
   hM_bin41->GetZaxis()->SetLabelSize(0.035);
   hM_bin41->GetZaxis()->SetTitleSize(0.035);
   hM_bin41->GetZaxis()->SetTitleFont(42);
   hM_bin41->Draw("e");
   
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
   fmb->SetParameter(0,-11.58755);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,138.2029);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-5.002039e-07);
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
   fpeak->SetParameter(0,151.6825);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.142653);
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
