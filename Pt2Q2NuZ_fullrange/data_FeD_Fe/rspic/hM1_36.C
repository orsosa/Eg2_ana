{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 16:03:52 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-89.32783,0.350906,803.9504);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin36 = new TH1F("hM_bin36","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin36->SetBinContent(0,1283);
   hM_bin36->SetBinContent(13,4);
   hM_bin36->SetBinContent(14,25);
   hM_bin36->SetBinContent(15,33);
   hM_bin36->SetBinContent(16,32);
   hM_bin36->SetBinContent(17,22);
   hM_bin36->SetBinContent(18,16);
   hM_bin36->SetBinContent(19,18);
   hM_bin36->SetBinContent(20,14);
   hM_bin36->SetBinContent(21,20);
   hM_bin36->SetBinContent(22,18);
   hM_bin36->SetBinContent(23,20);
   hM_bin36->SetBinContent(24,16);
   hM_bin36->SetBinContent(25,24);
   hM_bin36->SetBinContent(26,28);
   hM_bin36->SetBinContent(27,38);
   hM_bin36->SetBinContent(28,33);
   hM_bin36->SetBinContent(29,29);
   hM_bin36->SetBinContent(30,38);
   hM_bin36->SetBinContent(31,39);
   hM_bin36->SetBinContent(32,31);
   hM_bin36->SetBinContent(33,47);
   hM_bin36->SetBinContent(34,60);
   hM_bin36->SetBinContent(35,61);
   hM_bin36->SetBinContent(36,71);
   hM_bin36->SetBinContent(37,74);
   hM_bin36->SetBinContent(38,118);
   hM_bin36->SetBinContent(39,131);
   hM_bin36->SetBinContent(40,189);
   hM_bin36->SetBinContent(41,216);
   hM_bin36->SetBinContent(42,310);
   hM_bin36->SetBinContent(43,355);
   hM_bin36->SetBinContent(44,430);
   hM_bin36->SetBinContent(45,478);
   hM_bin36->SetBinContent(46,556);
   hM_bin36->SetBinContent(47,601);
   hM_bin36->SetBinContent(48,655);
   hM_bin36->SetBinContent(49,648);
   hM_bin36->SetBinContent(50,647);
   hM_bin36->SetBinContent(51,605);
   hM_bin36->SetBinContent(52,544);
   hM_bin36->SetBinContent(53,534);
   hM_bin36->SetBinContent(54,449);
   hM_bin36->SetBinContent(55,350);
   hM_bin36->SetBinContent(56,336);
   hM_bin36->SetBinContent(57,271);
   hM_bin36->SetBinContent(58,278);
   hM_bin36->SetBinContent(59,250);
   hM_bin36->SetBinContent(60,195);
   hM_bin36->SetBinContent(61,178);
   hM_bin36->SetBinContent(62,177);
   hM_bin36->SetBinContent(63,204);
   hM_bin36->SetBinContent(64,182);
   hM_bin36->SetBinContent(65,163);
   hM_bin36->SetBinContent(66,177);
   hM_bin36->SetBinContent(67,185);
   hM_bin36->SetBinContent(68,197);
   hM_bin36->SetBinContent(69,164);
   hM_bin36->SetBinContent(70,176);
   hM_bin36->SetBinContent(71,181);
   hM_bin36->SetBinContent(72,165);
   hM_bin36->SetBinContent(73,215);
   hM_bin36->SetBinContent(74,196);
   hM_bin36->SetBinContent(75,199);
   hM_bin36->SetBinContent(76,179);
   hM_bin36->SetBinContent(77,210);
   hM_bin36->SetBinContent(78,220);
   hM_bin36->SetBinContent(79,208);
   hM_bin36->SetBinContent(80,190);
   hM_bin36->SetBinContent(81,193);
   hM_bin36->SetBinContent(82,196);
   hM_bin36->SetBinContent(83,224);
   hM_bin36->SetBinContent(84,239);
   hM_bin36->SetBinContent(85,178);
   hM_bin36->SetBinContent(86,253);
   hM_bin36->SetBinContent(87,224);
   hM_bin36->SetBinContent(88,207);
   hM_bin36->SetBinContent(89,228);
   hM_bin36->SetBinContent(90,225);
   hM_bin36->SetBinContent(91,227);
   hM_bin36->SetBinContent(92,213);
   hM_bin36->SetBinContent(93,212);
   hM_bin36->SetBinContent(94,260);
   hM_bin36->SetBinContent(95,251);
   hM_bin36->SetBinContent(96,229);
   hM_bin36->SetBinContent(97,220);
   hM_bin36->SetBinContent(98,223);
   hM_bin36->SetBinContent(99,251);
   hM_bin36->SetBinContent(100,259);
   hM_bin36->SetBinContent(101,28069);
   hM_bin36->SetEntries(47587);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07230841,0.1882419);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(64.2545);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-59.97114);
   fsig->SetParError(0,9.094013);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,1147.032);
   fsig->SetParError(1,76.85431);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-3.493826e-06);
   fsig->SetParError(2,479.3288);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,525.1685);
   fsig->SetParError(3,9.19824);
   fsig->SetParLimits(3,0,1310);
   fsig->SetParameter(4,0.1300999);
   fsig->SetParError(4,0.0003475398);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,3.273746e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin36->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin36");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 47587  ");
   text = ptstats->AddText("Mean  = 0.1788");
   text = ptstats->AddText("RMS   = 0.0674");
   text = ptstats->AddText("#chi^{2} / ndf = 64.25 / 27");
   text = ptstats->AddText("p0       = -59.97 #pm 9.09 ");
   text = ptstats->AddText("p1       =  1147 #pm 76.9 ");
   text = ptstats->AddText("p2       = -3.494e-06 #pm 4.793e+02 ");
   text = ptstats->AddText("p3       = 525.2 #pm 9.2 ");
   text = ptstats->AddText("p4       = 0.1301 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00003 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin36->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin36);

   ci = TColor::GetColor("#0000ff");
   hM_bin36->SetMarkerColor(ci);
   hM_bin36->SetMarkerStyle(24);
   hM_bin36->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin36->GetXaxis()->SetLabelFont(42);
   hM_bin36->GetXaxis()->SetLabelSize(0.035);
   hM_bin36->GetXaxis()->SetTitleSize(0.035);
   hM_bin36->GetXaxis()->SetTitleFont(42);
   hM_bin36->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin36->GetYaxis()->SetLabelFont(42);
   hM_bin36->GetYaxis()->SetLabelSize(0.035);
   hM_bin36->GetYaxis()->SetTitleSize(0.035);
   hM_bin36->GetYaxis()->SetTitleFont(42);
   hM_bin36->GetZaxis()->SetLabelFont(42);
   hM_bin36->GetZaxis()->SetLabelSize(0.035);
   hM_bin36->GetZaxis()->SetTitleSize(0.035);
   hM_bin36->GetZaxis()->SetTitleFont(42);
   hM_bin36->Draw("e");
   
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
   fmb->SetParameter(0,-59.97114);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1147.032);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-3.493826e-06);
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
   fpeak->SetParameter(0,525.1685);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1300999);
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
