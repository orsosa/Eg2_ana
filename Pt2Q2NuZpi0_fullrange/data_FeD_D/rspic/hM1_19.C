{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:45:34 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-544.0159,0.350906,4896.143);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin19 = new TH1F("hM_bin19","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin19->SetBinContent(13,6);
   hM_bin19->SetBinContent(14,27);
   hM_bin19->SetBinContent(15,69);
   hM_bin19->SetBinContent(16,123);
   hM_bin19->SetBinContent(17,159);
   hM_bin19->SetBinContent(18,211);
   hM_bin19->SetBinContent(19,264);
   hM_bin19->SetBinContent(20,277);
   hM_bin19->SetBinContent(21,347);
   hM_bin19->SetBinContent(22,402);
   hM_bin19->SetBinContent(23,411);
   hM_bin19->SetBinContent(24,402);
   hM_bin19->SetBinContent(25,496);
   hM_bin19->SetBinContent(26,426);
   hM_bin19->SetBinContent(27,522);
   hM_bin19->SetBinContent(28,527);
   hM_bin19->SetBinContent(29,497);
   hM_bin19->SetBinContent(30,523);
   hM_bin19->SetBinContent(31,522);
   hM_bin19->SetBinContent(32,555);
   hM_bin19->SetBinContent(33,616);
   hM_bin19->SetBinContent(34,606);
   hM_bin19->SetBinContent(35,741);
   hM_bin19->SetBinContent(36,806);
   hM_bin19->SetBinContent(37,903);
   hM_bin19->SetBinContent(38,1028);
   hM_bin19->SetBinContent(39,1126);
   hM_bin19->SetBinContent(40,1454);
   hM_bin19->SetBinContent(41,1666);
   hM_bin19->SetBinContent(42,2083);
   hM_bin19->SetBinContent(43,2401);
   hM_bin19->SetBinContent(44,2842);
   hM_bin19->SetBinContent(45,3287);
   hM_bin19->SetBinContent(46,3546);
   hM_bin19->SetBinContent(47,3797);
   hM_bin19->SetBinContent(48,3962);
   hM_bin19->SetBinContent(49,4081);
   hM_bin19->SetBinContent(50,3967);
   hM_bin19->SetBinContent(51,3580);
   hM_bin19->SetBinContent(52,3228);
   hM_bin19->SetBinContent(53,2948);
   hM_bin19->SetBinContent(54,2462);
   hM_bin19->SetBinContent(55,2130);
   hM_bin19->SetBinContent(56,1822);
   hM_bin19->SetBinContent(57,1549);
   hM_bin19->SetBinContent(58,1336);
   hM_bin19->SetBinContent(59,1169);
   hM_bin19->SetBinContent(60,990);
   hM_bin19->SetBinContent(61,879);
   hM_bin19->SetBinContent(62,838);
   hM_bin19->SetBinContent(63,770);
   hM_bin19->SetBinContent(64,752);
   hM_bin19->SetBinContent(65,724);
   hM_bin19->SetBinContent(66,680);
   hM_bin19->SetBinContent(67,640);
   hM_bin19->SetBinContent(68,667);
   hM_bin19->SetBinContent(69,659);
   hM_bin19->SetBinContent(70,611);
   hM_bin19->SetBinContent(71,631);
   hM_bin19->SetBinContent(72,617);
   hM_bin19->SetBinContent(73,639);
   hM_bin19->SetBinContent(74,606);
   hM_bin19->SetBinContent(75,579);
   hM_bin19->SetBinContent(76,593);
   hM_bin19->SetBinContent(77,558);
   hM_bin19->SetBinContent(78,529);
   hM_bin19->SetBinContent(79,529);
   hM_bin19->SetBinContent(80,543);
   hM_bin19->SetBinContent(81,493);
   hM_bin19->SetBinContent(82,524);
   hM_bin19->SetBinContent(83,579);
   hM_bin19->SetBinContent(84,534);
   hM_bin19->SetBinContent(85,485);
   hM_bin19->SetBinContent(86,509);
   hM_bin19->SetBinContent(87,530);
   hM_bin19->SetBinContent(88,523);
   hM_bin19->SetBinContent(89,500);
   hM_bin19->SetBinContent(90,527);
   hM_bin19->SetBinContent(91,487);
   hM_bin19->SetBinContent(92,504);
   hM_bin19->SetBinContent(93,445);
   hM_bin19->SetBinContent(94,445);
   hM_bin19->SetBinContent(95,461);
   hM_bin19->SetBinContent(96,468);
   hM_bin19->SetBinContent(97,453);
   hM_bin19->SetBinContent(98,406);
   hM_bin19->SetBinContent(99,474);
   hM_bin19->SetBinContent(100,394);
   hM_bin19->SetBinContent(101,26691);
   hM_bin19->SetEntries(116368);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07077689,0.1867103);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(160.8645);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,402.3862);
   fsig->SetParError(0,23.46486);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,1240.578);
   fsig->SetParError(1,177.8349);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.38816e-06);
   fsig->SetParError(2,753.5284);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,3239.741);
   fsig->SetParError(3,22.37882);
   fsig->SetParLimits(3,0,8162);
   fsig->SetParameter(4,0.1286846);
   fsig->SetParError(4,0.0001393052);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,8.044983e-06);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin19->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin19");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 116368 ");
   text = ptstats->AddText("Mean  = 0.1475");
   text = ptstats->AddText("RMS   = 0.05955");
   text = ptstats->AddText("#chi^{2} / ndf = 160.9 / 28");
   text = ptstats->AddText("p0       = 402.4 #pm 23.5 ");
   text = ptstats->AddText("p1       =  1241 #pm 177.8 ");
   text = ptstats->AddText("p2       = -1.388e-06 #pm 7.535e+02 ");
   text = ptstats->AddText("p3       =  3240 #pm 22.4 ");
   text = ptstats->AddText("p4       = 0.1287 #pm 0.0001 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00001 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin19->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin19);

   ci = TColor::GetColor("#0000ff");
   hM_bin19->SetMarkerColor(ci);
   hM_bin19->SetMarkerStyle(24);
   hM_bin19->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin19->GetXaxis()->SetLabelFont(42);
   hM_bin19->GetXaxis()->SetLabelSize(0.035);
   hM_bin19->GetXaxis()->SetTitleSize(0.035);
   hM_bin19->GetXaxis()->SetTitleFont(42);
   hM_bin19->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin19->GetYaxis()->SetLabelFont(42);
   hM_bin19->GetYaxis()->SetLabelSize(0.035);
   hM_bin19->GetYaxis()->SetTitleSize(0.035);
   hM_bin19->GetYaxis()->SetTitleFont(42);
   hM_bin19->GetZaxis()->SetLabelFont(42);
   hM_bin19->GetZaxis()->SetLabelSize(0.035);
   hM_bin19->GetZaxis()->SetTitleSize(0.035);
   hM_bin19->GetZaxis()->SetTitleFont(42);
   hM_bin19->Draw("e");
   
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
   fmb->SetParameter(0,402.3862);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1240.578);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.38816e-06);
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
   fpeak->SetParameter(0,3239.741);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1286846);
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
