{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:39:01 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-61.44369,0.350906,552.9932);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin3 = new TH1F("hM_bin3","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin3->SetBinContent(14,9);
   hM_bin3->SetBinContent(15,15);
   hM_bin3->SetBinContent(16,19);
   hM_bin3->SetBinContent(17,19);
   hM_bin3->SetBinContent(18,23);
   hM_bin3->SetBinContent(19,29);
   hM_bin3->SetBinContent(20,18);
   hM_bin3->SetBinContent(21,46);
   hM_bin3->SetBinContent(22,55);
   hM_bin3->SetBinContent(23,46);
   hM_bin3->SetBinContent(24,64);
   hM_bin3->SetBinContent(25,42);
   hM_bin3->SetBinContent(26,57);
   hM_bin3->SetBinContent(27,54);
   hM_bin3->SetBinContent(28,44);
   hM_bin3->SetBinContent(29,56);
   hM_bin3->SetBinContent(30,42);
   hM_bin3->SetBinContent(31,67);
   hM_bin3->SetBinContent(32,76);
   hM_bin3->SetBinContent(33,86);
   hM_bin3->SetBinContent(34,56);
   hM_bin3->SetBinContent(35,86);
   hM_bin3->SetBinContent(36,67);
   hM_bin3->SetBinContent(37,88);
   hM_bin3->SetBinContent(38,86);
   hM_bin3->SetBinContent(39,110);
   hM_bin3->SetBinContent(40,132);
   hM_bin3->SetBinContent(41,156);
   hM_bin3->SetBinContent(42,178);
   hM_bin3->SetBinContent(43,225);
   hM_bin3->SetBinContent(44,250);
   hM_bin3->SetBinContent(45,287);
   hM_bin3->SetBinContent(46,356);
   hM_bin3->SetBinContent(47,387);
   hM_bin3->SetBinContent(48,370);
   hM_bin3->SetBinContent(49,400);
   hM_bin3->SetBinContent(50,447);
   hM_bin3->SetBinContent(51,432);
   hM_bin3->SetBinContent(52,400);
   hM_bin3->SetBinContent(53,357);
   hM_bin3->SetBinContent(54,334);
   hM_bin3->SetBinContent(55,305);
   hM_bin3->SetBinContent(56,279);
   hM_bin3->SetBinContent(57,225);
   hM_bin3->SetBinContent(58,175);
   hM_bin3->SetBinContent(59,166);
   hM_bin3->SetBinContent(60,135);
   hM_bin3->SetBinContent(61,114);
   hM_bin3->SetBinContent(62,110);
   hM_bin3->SetBinContent(63,100);
   hM_bin3->SetBinContent(64,96);
   hM_bin3->SetBinContent(65,81);
   hM_bin3->SetBinContent(66,70);
   hM_bin3->SetBinContent(67,71);
   hM_bin3->SetBinContent(68,74);
   hM_bin3->SetBinContent(69,62);
   hM_bin3->SetBinContent(70,53);
   hM_bin3->SetBinContent(71,68);
   hM_bin3->SetBinContent(72,60);
   hM_bin3->SetBinContent(73,50);
   hM_bin3->SetBinContent(74,43);
   hM_bin3->SetBinContent(75,59);
   hM_bin3->SetBinContent(76,58);
   hM_bin3->SetBinContent(77,44);
   hM_bin3->SetBinContent(78,52);
   hM_bin3->SetBinContent(79,56);
   hM_bin3->SetBinContent(80,40);
   hM_bin3->SetBinContent(81,51);
   hM_bin3->SetBinContent(82,45);
   hM_bin3->SetBinContent(83,39);
   hM_bin3->SetBinContent(84,33);
   hM_bin3->SetBinContent(85,50);
   hM_bin3->SetBinContent(86,40);
   hM_bin3->SetBinContent(87,51);
   hM_bin3->SetBinContent(88,53);
   hM_bin3->SetBinContent(89,42);
   hM_bin3->SetBinContent(90,35);
   hM_bin3->SetBinContent(91,41);
   hM_bin3->SetBinContent(92,39);
   hM_bin3->SetBinContent(93,33);
   hM_bin3->SetBinContent(94,40);
   hM_bin3->SetBinContent(95,34);
   hM_bin3->SetBinContent(96,41);
   hM_bin3->SetBinContent(97,37);
   hM_bin3->SetBinContent(98,37);
   hM_bin3->SetBinContent(99,28);
   hM_bin3->SetBinContent(100,29);
   hM_bin3->SetBinContent(101,1996);
   hM_bin3->SetEntries(11511);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07594857,0.191882);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(21.71117);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,45.56219);
   fsig->SetParError(0,8.710698);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,133.2246);
   fsig->SetParError(1,63.54417);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.0006441408);
   fsig->SetParError(2,72.25377);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,353.4468);
   fsig->SetParError(3,7.521093);
   fsig->SetParLimits(3,0,894);
   fsig->SetParameter(4,0.1336019);
   fsig->SetParError(4,0.0004458749);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0002799553);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin3->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin3");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 11511  ");
   text = ptstats->AddText("Mean  = 0.1447");
   text = ptstats->AddText("RMS   = 0.0558");
   text = ptstats->AddText("#chi^{2} / ndf = 21.71 / 27");
   text = ptstats->AddText("p0       = 45.56 #pm 8.71 ");
   text = ptstats->AddText("p1       = 133.2 #pm 63.5 ");
   text = ptstats->AddText("p2       = -0.0006441 #pm 72.2537689 ");
   text = ptstats->AddText("p3       = 353.4 #pm 7.5 ");
   text = ptstats->AddText("p4       = 0.1336 #pm 0.0004 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00028 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin3->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin3);

   ci = TColor::GetColor("#0000ff");
   hM_bin3->SetMarkerColor(ci);
   hM_bin3->SetMarkerStyle(24);
   hM_bin3->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin3->GetXaxis()->SetLabelFont(42);
   hM_bin3->GetXaxis()->SetLabelSize(0.035);
   hM_bin3->GetXaxis()->SetTitleSize(0.035);
   hM_bin3->GetXaxis()->SetTitleFont(42);
   hM_bin3->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin3->GetYaxis()->SetLabelFont(42);
   hM_bin3->GetYaxis()->SetLabelSize(0.035);
   hM_bin3->GetYaxis()->SetTitleSize(0.035);
   hM_bin3->GetYaxis()->SetTitleFont(42);
   hM_bin3->GetZaxis()->SetLabelFont(42);
   hM_bin3->GetZaxis()->SetLabelSize(0.035);
   hM_bin3->GetZaxis()->SetTitleSize(0.035);
   hM_bin3->GetZaxis()->SetTitleFont(42);
   hM_bin3->Draw("e");
   
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
   fmb->SetParameter(0,45.56219);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,133.2246);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.0006441408);
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
   fpeak->SetParameter(0,353.4468);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1336019);
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
