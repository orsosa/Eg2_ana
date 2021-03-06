{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 11 11:55:10 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-186.2668,0.350906,1676.401);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin19 = new TH1F("hM_bin19","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin19->SetBinContent(0,4219);
   hM_bin19->SetBinContent(13,4);
   hM_bin19->SetBinContent(14,17);
   hM_bin19->SetBinContent(15,50);
   hM_bin19->SetBinContent(16,34);
   hM_bin19->SetBinContent(17,40);
   hM_bin19->SetBinContent(18,39);
   hM_bin19->SetBinContent(19,29);
   hM_bin19->SetBinContent(20,27);
   hM_bin19->SetBinContent(21,29);
   hM_bin19->SetBinContent(22,32);
   hM_bin19->SetBinContent(23,30);
   hM_bin19->SetBinContent(24,32);
   hM_bin19->SetBinContent(25,28);
   hM_bin19->SetBinContent(26,25);
   hM_bin19->SetBinContent(27,45);
   hM_bin19->SetBinContent(28,33);
   hM_bin19->SetBinContent(29,57);
   hM_bin19->SetBinContent(30,55);
   hM_bin19->SetBinContent(31,50);
   hM_bin19->SetBinContent(32,60);
   hM_bin19->SetBinContent(33,56);
   hM_bin19->SetBinContent(34,84);
   hM_bin19->SetBinContent(35,77);
   hM_bin19->SetBinContent(36,90);
   hM_bin19->SetBinContent(37,87);
   hM_bin19->SetBinContent(38,116);
   hM_bin19->SetBinContent(39,149);
   hM_bin19->SetBinContent(40,213);
   hM_bin19->SetBinContent(41,284);
   hM_bin19->SetBinContent(42,353);
   hM_bin19->SetBinContent(43,468);
   hM_bin19->SetBinContent(44,586);
   hM_bin19->SetBinContent(45,741);
   hM_bin19->SetBinContent(46,877);
   hM_bin19->SetBinContent(47,1129);
   hM_bin19->SetBinContent(48,1242);
   hM_bin19->SetBinContent(49,1337);
   hM_bin19->SetBinContent(50,1382);
   hM_bin19->SetBinContent(51,1367);
   hM_bin19->SetBinContent(52,1280);
   hM_bin19->SetBinContent(53,1219);
   hM_bin19->SetBinContent(54,1099);
   hM_bin19->SetBinContent(55,964);
   hM_bin19->SetBinContent(56,867);
   hM_bin19->SetBinContent(57,767);
   hM_bin19->SetBinContent(58,625);
   hM_bin19->SetBinContent(59,528);
   hM_bin19->SetBinContent(60,474);
   hM_bin19->SetBinContent(61,444);
   hM_bin19->SetBinContent(62,411);
   hM_bin19->SetBinContent(63,379);
   hM_bin19->SetBinContent(64,358);
   hM_bin19->SetBinContent(65,329);
   hM_bin19->SetBinContent(66,306);
   hM_bin19->SetBinContent(67,337);
   hM_bin19->SetBinContent(68,328);
   hM_bin19->SetBinContent(69,341);
   hM_bin19->SetBinContent(70,360);
   hM_bin19->SetBinContent(71,340);
   hM_bin19->SetBinContent(72,334);
   hM_bin19->SetBinContent(73,328);
   hM_bin19->SetBinContent(74,325);
   hM_bin19->SetBinContent(75,303);
   hM_bin19->SetBinContent(76,336);
   hM_bin19->SetBinContent(77,353);
   hM_bin19->SetBinContent(78,354);
   hM_bin19->SetBinContent(79,361);
   hM_bin19->SetBinContent(80,384);
   hM_bin19->SetBinContent(81,384);
   hM_bin19->SetBinContent(82,370);
   hM_bin19->SetBinContent(83,361);
   hM_bin19->SetBinContent(84,377);
   hM_bin19->SetBinContent(85,373);
   hM_bin19->SetBinContent(86,390);
   hM_bin19->SetBinContent(87,383);
   hM_bin19->SetBinContent(88,371);
   hM_bin19->SetBinContent(89,412);
   hM_bin19->SetBinContent(90,392);
   hM_bin19->SetBinContent(91,391);
   hM_bin19->SetBinContent(92,399);
   hM_bin19->SetBinContent(93,448);
   hM_bin19->SetBinContent(94,417);
   hM_bin19->SetBinContent(95,439);
   hM_bin19->SetBinContent(96,422);
   hM_bin19->SetBinContent(97,411);
   hM_bin19->SetBinContent(98,432);
   hM_bin19->SetBinContent(99,414);
   hM_bin19->SetBinContent(100,449);
   hM_bin19->SetBinContent(101,39980);
   hM_bin19->SetEntries(78422);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07879934,0.1947328);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(151.9453);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-175.8274);
   fsig->SetParError(0,12.2776);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,2400.538);
   fsig->SetParError(1,99.87678);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-7.006656e-07);
   fsig->SetParError(2,380.2164);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,1120.103);
   fsig->SetParError(3,12.82108);
   fsig->SetParLimits(3,0,2764);
   fsig->SetParameter(4,0.1361178);
   fsig->SetParError(4,0.0002197742);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,1.225624e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin19->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin19");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 78422  ");
   text = ptstats->AddText("Mean  = 0.1796");
   text = ptstats->AddText("RMS   = 0.06397");
   text = ptstats->AddText("#chi^{2} / ndf = 151.9 / 27");
   text = ptstats->AddText("p0       = -175.8 #pm 12.3 ");
   text = ptstats->AddText("p1       =  2401 #pm 99.9 ");
   text = ptstats->AddText("p2       = -7.007e-07 #pm 3.802e+02 ");
   text = ptstats->AddText("p3       =  1120 #pm 12.8 ");
   text = ptstats->AddText("p4       = 0.1361 #pm 0.0002 ");
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
   fmb->SetParameter(0,-175.8274);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,2400.538);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-7.006656e-07);
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
   fpeak->SetParameter(0,1120.103);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1361178);
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
