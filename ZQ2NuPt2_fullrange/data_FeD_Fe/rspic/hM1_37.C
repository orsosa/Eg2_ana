{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 11 12:06:19 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-67.35206,0.350906,606.1685);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin37 = new TH1F("hM_bin37","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin37->SetBinContent(0,1572);
   hM_bin37->SetBinContent(14,8);
   hM_bin37->SetBinContent(15,5);
   hM_bin37->SetBinContent(16,17);
   hM_bin37->SetBinContent(17,17);
   hM_bin37->SetBinContent(18,8);
   hM_bin37->SetBinContent(19,9);
   hM_bin37->SetBinContent(20,5);
   hM_bin37->SetBinContent(21,12);
   hM_bin37->SetBinContent(22,12);
   hM_bin37->SetBinContent(23,12);
   hM_bin37->SetBinContent(24,8);
   hM_bin37->SetBinContent(25,13);
   hM_bin37->SetBinContent(26,10);
   hM_bin37->SetBinContent(27,13);
   hM_bin37->SetBinContent(28,16);
   hM_bin37->SetBinContent(29,12);
   hM_bin37->SetBinContent(30,15);
   hM_bin37->SetBinContent(31,24);
   hM_bin37->SetBinContent(32,17);
   hM_bin37->SetBinContent(33,27);
   hM_bin37->SetBinContent(34,23);
   hM_bin37->SetBinContent(35,27);
   hM_bin37->SetBinContent(36,31);
   hM_bin37->SetBinContent(37,30);
   hM_bin37->SetBinContent(38,46);
   hM_bin37->SetBinContent(39,56);
   hM_bin37->SetBinContent(40,102);
   hM_bin37->SetBinContent(41,116);
   hM_bin37->SetBinContent(42,185);
   hM_bin37->SetBinContent(43,188);
   hM_bin37->SetBinContent(44,255);
   hM_bin37->SetBinContent(45,312);
   hM_bin37->SetBinContent(46,400);
   hM_bin37->SetBinContent(47,402);
   hM_bin37->SetBinContent(48,491);
   hM_bin37->SetBinContent(49,481);
   hM_bin37->SetBinContent(50,472);
   hM_bin37->SetBinContent(51,454);
   hM_bin37->SetBinContent(52,438);
   hM_bin37->SetBinContent(53,366);
   hM_bin37->SetBinContent(54,324);
   hM_bin37->SetBinContent(55,267);
   hM_bin37->SetBinContent(56,244);
   hM_bin37->SetBinContent(57,175);
   hM_bin37->SetBinContent(58,155);
   hM_bin37->SetBinContent(59,141);
   hM_bin37->SetBinContent(60,117);
   hM_bin37->SetBinContent(61,102);
   hM_bin37->SetBinContent(62,95);
   hM_bin37->SetBinContent(63,114);
   hM_bin37->SetBinContent(64,115);
   hM_bin37->SetBinContent(65,83);
   hM_bin37->SetBinContent(66,84);
   hM_bin37->SetBinContent(67,97);
   hM_bin37->SetBinContent(68,89);
   hM_bin37->SetBinContent(69,94);
   hM_bin37->SetBinContent(70,98);
   hM_bin37->SetBinContent(71,91);
   hM_bin37->SetBinContent(72,93);
   hM_bin37->SetBinContent(73,113);
   hM_bin37->SetBinContent(74,112);
   hM_bin37->SetBinContent(75,105);
   hM_bin37->SetBinContent(76,104);
   hM_bin37->SetBinContent(77,123);
   hM_bin37->SetBinContent(78,128);
   hM_bin37->SetBinContent(79,97);
   hM_bin37->SetBinContent(80,115);
   hM_bin37->SetBinContent(81,123);
   hM_bin37->SetBinContent(82,119);
   hM_bin37->SetBinContent(83,119);
   hM_bin37->SetBinContent(84,140);
   hM_bin37->SetBinContent(85,93);
   hM_bin37->SetBinContent(86,133);
   hM_bin37->SetBinContent(87,125);
   hM_bin37->SetBinContent(88,115);
   hM_bin37->SetBinContent(89,113);
   hM_bin37->SetBinContent(90,113);
   hM_bin37->SetBinContent(91,144);
   hM_bin37->SetBinContent(92,111);
   hM_bin37->SetBinContent(93,110);
   hM_bin37->SetBinContent(94,151);
   hM_bin37->SetBinContent(95,139);
   hM_bin37->SetBinContent(96,127);
   hM_bin37->SetBinContent(97,138);
   hM_bin37->SetBinContent(98,138);
   hM_bin37->SetBinContent(99,141);
   hM_bin37->SetBinContent(100,148);
   hM_bin37->SetBinContent(101,13631);
   hM_bin37->SetEntries(26353);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.0745682,0.1905016);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(124.9996);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-38.95698);
   fsig->SetParError(0,5.922122);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,578.1824);
   fsig->SetParError(1,50.895);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.15595e-07);
   fsig->SetParError(2,202.4467);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,394.3937);
   fsig->SetParError(3,7.315268);
   fsig->SetParLimits(3,0,982);
   fsig->SetParameter(4,0.1322977);
   fsig->SetParError(4,0.0003402347);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,2.024218e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin37->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin37");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 26353  ");
   text = ptstats->AddText("Mean  = 0.1758");
   text = ptstats->AddText("RMS   = 0.06501");
   text = ptstats->AddText("#chi^{2} / ndf =   125 / 28");
   text = ptstats->AddText("p0       = -38.96 #pm 5.92 ");
   text = ptstats->AddText("p1       = 578.2 #pm 50.9 ");
   text = ptstats->AddText("p2       = -1.156e-07 #pm 2.024e+02 ");
   text = ptstats->AddText("p3       = 394.4 #pm 7.3 ");
   text = ptstats->AddText("p4       = 0.1323 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00002 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin37->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin37);

   ci = TColor::GetColor("#0000ff");
   hM_bin37->SetMarkerColor(ci);
   hM_bin37->SetMarkerStyle(24);
   hM_bin37->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin37->GetXaxis()->SetLabelFont(42);
   hM_bin37->GetXaxis()->SetLabelSize(0.035);
   hM_bin37->GetXaxis()->SetTitleSize(0.035);
   hM_bin37->GetXaxis()->SetTitleFont(42);
   hM_bin37->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin37->GetYaxis()->SetLabelFont(42);
   hM_bin37->GetYaxis()->SetLabelSize(0.035);
   hM_bin37->GetYaxis()->SetTitleSize(0.035);
   hM_bin37->GetYaxis()->SetTitleFont(42);
   hM_bin37->GetZaxis()->SetLabelFont(42);
   hM_bin37->GetZaxis()->SetLabelSize(0.035);
   hM_bin37->GetZaxis()->SetTitleSize(0.035);
   hM_bin37->GetZaxis()->SetTitleFont(42);
   hM_bin37->Draw("e");
   
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
   fmb->SetParameter(0,-38.95698);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,578.1824);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.15595e-07);
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
   fpeak->SetParameter(0,394.3937);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1322977);
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
