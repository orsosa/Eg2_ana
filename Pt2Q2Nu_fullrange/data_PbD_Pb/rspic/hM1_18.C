{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 14:49:19 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-161.5141,0.350906,1453.626);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin18 = new TH1F("hM_bin18","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin18->SetBinContent(0,679);
   hM_bin18->SetBinContent(11,1);
   hM_bin18->SetBinContent(12,53);
   hM_bin18->SetBinContent(13,156);
   hM_bin18->SetBinContent(14,141);
   hM_bin18->SetBinContent(15,100);
   hM_bin18->SetBinContent(16,98);
   hM_bin18->SetBinContent(17,115);
   hM_bin18->SetBinContent(18,120);
   hM_bin18->SetBinContent(19,119);
   hM_bin18->SetBinContent(20,130);
   hM_bin18->SetBinContent(21,150);
   hM_bin18->SetBinContent(22,155);
   hM_bin18->SetBinContent(23,173);
   hM_bin18->SetBinContent(24,173);
   hM_bin18->SetBinContent(25,185);
   hM_bin18->SetBinContent(26,211);
   hM_bin18->SetBinContent(27,188);
   hM_bin18->SetBinContent(28,234);
   hM_bin18->SetBinContent(29,237);
   hM_bin18->SetBinContent(30,229);
   hM_bin18->SetBinContent(31,287);
   hM_bin18->SetBinContent(32,279);
   hM_bin18->SetBinContent(33,286);
   hM_bin18->SetBinContent(34,345);
   hM_bin18->SetBinContent(35,359);
   hM_bin18->SetBinContent(36,406);
   hM_bin18->SetBinContent(37,428);
   hM_bin18->SetBinContent(38,435);
   hM_bin18->SetBinContent(39,509);
   hM_bin18->SetBinContent(40,614);
   hM_bin18->SetBinContent(41,623);
   hM_bin18->SetBinContent(42,797);
   hM_bin18->SetBinContent(43,838);
   hM_bin18->SetBinContent(44,980);
   hM_bin18->SetBinContent(45,951);
   hM_bin18->SetBinContent(46,1115);
   hM_bin18->SetBinContent(47,1150);
   hM_bin18->SetBinContent(48,1196);
   hM_bin18->SetBinContent(49,1163);
   hM_bin18->SetBinContent(50,1191);
   hM_bin18->SetBinContent(51,1136);
   hM_bin18->SetBinContent(52,1077);
   hM_bin18->SetBinContent(53,1040);
   hM_bin18->SetBinContent(54,944);
   hM_bin18->SetBinContent(55,854);
   hM_bin18->SetBinContent(56,824);
   hM_bin18->SetBinContent(57,729);
   hM_bin18->SetBinContent(58,647);
   hM_bin18->SetBinContent(59,665);
   hM_bin18->SetBinContent(60,552);
   hM_bin18->SetBinContent(61,532);
   hM_bin18->SetBinContent(62,508);
   hM_bin18->SetBinContent(63,472);
   hM_bin18->SetBinContent(64,505);
   hM_bin18->SetBinContent(65,454);
   hM_bin18->SetBinContent(66,459);
   hM_bin18->SetBinContent(67,472);
   hM_bin18->SetBinContent(68,411);
   hM_bin18->SetBinContent(69,433);
   hM_bin18->SetBinContent(70,453);
   hM_bin18->SetBinContent(71,403);
   hM_bin18->SetBinContent(72,389);
   hM_bin18->SetBinContent(73,423);
   hM_bin18->SetBinContent(74,417);
   hM_bin18->SetBinContent(75,361);
   hM_bin18->SetBinContent(76,390);
   hM_bin18->SetBinContent(77,370);
   hM_bin18->SetBinContent(78,371);
   hM_bin18->SetBinContent(79,397);
   hM_bin18->SetBinContent(80,347);
   hM_bin18->SetBinContent(81,378);
   hM_bin18->SetBinContent(82,341);
   hM_bin18->SetBinContent(83,335);
   hM_bin18->SetBinContent(84,341);
   hM_bin18->SetBinContent(85,302);
   hM_bin18->SetBinContent(86,330);
   hM_bin18->SetBinContent(87,312);
   hM_bin18->SetBinContent(88,291);
   hM_bin18->SetBinContent(89,353);
   hM_bin18->SetBinContent(90,278);
   hM_bin18->SetBinContent(91,304);
   hM_bin18->SetBinContent(92,290);
   hM_bin18->SetBinContent(93,291);
   hM_bin18->SetBinContent(94,280);
   hM_bin18->SetBinContent(95,255);
   hM_bin18->SetBinContent(96,273);
   hM_bin18->SetBinContent(97,253);
   hM_bin18->SetBinContent(98,276);
   hM_bin18->SetBinContent(99,259);
   hM_bin18->SetBinContent(100,268);
   hM_bin18->SetBinContent(101,19372);
   hM_bin18->SetEntries(60016);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.06516059,0.1944447);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(33.41059);
   fsig->SetNDF(31);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,36.1329);
   fsig->SetParError(0,36.93971);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,4098.323);
   fsig->SetParError(1,667.5858);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-9943.309);
   fsig->SetParError(2,9776.813);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,788.0675);
   fsig->SetParError(3,15.47455);
   fsig->SetParLimits(3,0,2392);
   fsig->SetParameter(4,0.1295632);
   fsig->SetParError(4,0.0003692063);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.02001462);
   fsig->SetParError(5,0.0004597359);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin18->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin18");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 60016  ");
   text = ptstats->AddText("Mean  = 0.1574");
   text = ptstats->AddText("RMS   = 0.06719");
   text = ptstats->AddText("#chi^{2} / ndf = 33.41 / 31");
   text = ptstats->AddText("p0       = 36.13 #pm 36.94 ");
   text = ptstats->AddText("p1       =  4098 #pm 667.6 ");
   text = ptstats->AddText("p2       = -9943 #pm 9776.8 ");
   text = ptstats->AddText("p3       = 788.1 #pm 15.5 ");
   text = ptstats->AddText("p4       = 0.1296 #pm 0.0004 ");
   text = ptstats->AddText("p5       = 0.02001 #pm 0.00046 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin18->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin18);

   ci = TColor::GetColor("#0000ff");
   hM_bin18->SetMarkerColor(ci);
   hM_bin18->SetMarkerStyle(24);
   hM_bin18->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin18->GetXaxis()->SetLabelFont(42);
   hM_bin18->GetXaxis()->SetLabelSize(0.035);
   hM_bin18->GetXaxis()->SetTitleSize(0.035);
   hM_bin18->GetXaxis()->SetTitleFont(42);
   hM_bin18->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin18->GetYaxis()->SetLabelFont(42);
   hM_bin18->GetYaxis()->SetLabelSize(0.035);
   hM_bin18->GetYaxis()->SetTitleSize(0.035);
   hM_bin18->GetYaxis()->SetTitleFont(42);
   hM_bin18->GetZaxis()->SetLabelFont(42);
   hM_bin18->GetZaxis()->SetLabelSize(0.035);
   hM_bin18->GetZaxis()->SetTitleSize(0.035);
   hM_bin18->GetZaxis()->SetTitleFont(42);
   hM_bin18->Draw("e");
   
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
   fmb->SetParameter(0,36.1329);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,4098.323);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-9943.309);
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
   fpeak->SetParameter(0,788.0675);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1295632);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.02001462);
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
