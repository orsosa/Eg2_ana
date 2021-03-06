{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 18 12:11:59 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.1901558,106.7198,0.8890623,517.7355);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin13 = new TH1F("hM_bin13","M_{#gamma #gamma}",100,0.2600464,0.8191716);
   hM_bin13->SetBinContent(0,10320);
   hM_bin13->SetBinContent(1,214);
   hM_bin13->SetBinContent(2,185);
   hM_bin13->SetBinContent(3,200);
   hM_bin13->SetBinContent(4,176);
   hM_bin13->SetBinContent(5,217);
   hM_bin13->SetBinContent(6,235);
   hM_bin13->SetBinContent(7,259);
   hM_bin13->SetBinContent(8,202);
   hM_bin13->SetBinContent(9,242);
   hM_bin13->SetBinContent(10,231);
   hM_bin13->SetBinContent(11,239);
   hM_bin13->SetBinContent(12,240);
   hM_bin13->SetBinContent(13,264);
   hM_bin13->SetBinContent(14,252);
   hM_bin13->SetBinContent(15,235);
   hM_bin13->SetBinContent(16,257);
   hM_bin13->SetBinContent(17,278);
   hM_bin13->SetBinContent(18,275);
   hM_bin13->SetBinContent(19,298);
   hM_bin13->SetBinContent(20,303);
   hM_bin13->SetBinContent(21,290);
   hM_bin13->SetBinContent(22,290);
   hM_bin13->SetBinContent(23,312);
   hM_bin13->SetBinContent(24,318);
   hM_bin13->SetBinContent(25,270);
   hM_bin13->SetBinContent(26,309);
   hM_bin13->SetBinContent(27,323);
   hM_bin13->SetBinContent(28,332);
   hM_bin13->SetBinContent(29,346);
   hM_bin13->SetBinContent(30,348);
   hM_bin13->SetBinContent(31,340);
   hM_bin13->SetBinContent(32,364);
   hM_bin13->SetBinContent(33,317);
   hM_bin13->SetBinContent(34,366);
   hM_bin13->SetBinContent(35,352);
   hM_bin13->SetBinContent(36,366);
   hM_bin13->SetBinContent(37,338);
   hM_bin13->SetBinContent(38,386);
   hM_bin13->SetBinContent(39,326);
   hM_bin13->SetBinContent(40,369);
   hM_bin13->SetBinContent(41,373);
   hM_bin13->SetBinContent(42,322);
   hM_bin13->SetBinContent(43,362);
   hM_bin13->SetBinContent(44,383);
   hM_bin13->SetBinContent(45,388);
   hM_bin13->SetBinContent(46,404);
   hM_bin13->SetBinContent(47,398);
   hM_bin13->SetBinContent(48,359);
   hM_bin13->SetBinContent(49,341);
   hM_bin13->SetBinContent(50,391);
   hM_bin13->SetBinContent(51,408);
   hM_bin13->SetBinContent(52,440);
   hM_bin13->SetBinContent(53,398);
   hM_bin13->SetBinContent(54,402);
   hM_bin13->SetBinContent(55,392);
   hM_bin13->SetBinContent(56,382);
   hM_bin13->SetBinContent(57,411);
   hM_bin13->SetBinContent(58,392);
   hM_bin13->SetBinContent(59,398);
   hM_bin13->SetBinContent(60,417);
   hM_bin13->SetBinContent(61,398);
   hM_bin13->SetBinContent(62,376);
   hM_bin13->SetBinContent(63,369);
   hM_bin13->SetBinContent(64,365);
   hM_bin13->SetBinContent(65,369);
   hM_bin13->SetBinContent(66,382);
   hM_bin13->SetBinContent(67,371);
   hM_bin13->SetBinContent(68,400);
   hM_bin13->SetBinContent(69,331);
   hM_bin13->SetBinContent(70,378);
   hM_bin13->SetBinContent(71,327);
   hM_bin13->SetBinContent(72,378);
   hM_bin13->SetBinContent(73,355);
   hM_bin13->SetBinContent(74,337);
   hM_bin13->SetBinContent(75,335);
   hM_bin13->SetBinContent(76,343);
   hM_bin13->SetBinContent(77,328);
   hM_bin13->SetBinContent(78,333);
   hM_bin13->SetBinContent(79,330);
   hM_bin13->SetBinContent(80,292);
   hM_bin13->SetBinContent(81,328);
   hM_bin13->SetBinContent(82,296);
   hM_bin13->SetBinContent(83,304);
   hM_bin13->SetBinContent(84,294);
   hM_bin13->SetBinContent(85,303);
   hM_bin13->SetBinContent(86,276);
   hM_bin13->SetBinContent(87,314);
   hM_bin13->SetBinContent(88,282);
   hM_bin13->SetBinContent(89,270);
   hM_bin13->SetBinContent(90,270);
   hM_bin13->SetBinContent(91,267);
   hM_bin13->SetBinContent(92,251);
   hM_bin13->SetBinContent(93,265);
   hM_bin13->SetBinContent(94,248);
   hM_bin13->SetBinContent(95,252);
   hM_bin13->SetBinContent(96,252);
   hM_bin13->SetBinContent(97,229);
   hM_bin13->SetBinContent(98,239);
   hM_bin13->SetBinContent(99,212);
   hM_bin13->SetBinContent(100,242);
   hM_bin13->SetBinContent(101,5830);
   hM_bin13->SetEntries(47866);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.4335644,0.7208645);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(55.6535);
   fsig->SetNDF(45);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-196.4314);
   fsig->SetParError(0,308.8137);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,2054.018);
   fsig->SetParError(1,1113.643);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1882);
   fsig->SetParError(2,954.8765);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,36.6237);
   fsig->SetParError(3,17.28122);
   fsig->SetParLimits(3,0,880);
   fsig->SetParameter(4,0.5777657);
   fsig->SetParError(4,0.01149501);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.04788336);
   fsig->SetParError(5,0.022035);
   fsig->SetParLimits(5,0.04788336,0.07182504);
   hM_bin13->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin13");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 47866  ");
   text = ptstats->AddText("Mean  = 0.5457");
   text = ptstats->AddText("RMS   = 0.1476");
   text = ptstats->AddText("#chi^{2} / ndf = 55.65 / 45");
   text = ptstats->AddText("p0       = -196.4 #pm 308.8 ");
   text = ptstats->AddText("p1       =  2054 #pm 1113.6 ");
   text = ptstats->AddText("p2       = -1882 #pm 954.9 ");
   text = ptstats->AddText("p3       = 36.62 #pm 17.28 ");
   text = ptstats->AddText("p4       = 0.5778 #pm 0.0115 ");
   text = ptstats->AddText("p5       = 0.04788 #pm 0.02203 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin13->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin13);

   ci = TColor::GetColor("#0000ff");
   hM_bin13->SetMarkerColor(ci);
   hM_bin13->SetMarkerStyle(24);
   hM_bin13->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin13->GetXaxis()->SetLabelFont(42);
   hM_bin13->GetXaxis()->SetLabelSize(0.035);
   hM_bin13->GetXaxis()->SetTitleSize(0.035);
   hM_bin13->GetXaxis()->SetTitleFont(42);
   hM_bin13->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin13->GetYaxis()->SetLabelFont(42);
   hM_bin13->GetYaxis()->SetLabelSize(0.035);
   hM_bin13->GetYaxis()->SetTitleSize(0.035);
   hM_bin13->GetYaxis()->SetTitleFont(42);
   hM_bin13->GetZaxis()->SetLabelFont(42);
   hM_bin13->GetZaxis()->SetLabelSize(0.035);
   hM_bin13->GetZaxis()->SetTitleSize(0.035);
   hM_bin13->GetZaxis()->SetTitleFont(42);
   hM_bin13->Draw("e");
   
   TF1 *fmb = new TF1("fmb","pol2",0.3600464,0.7191716);
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
   fmb->SetParameter(0,-196.4314);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,2054.018);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1882);
   fmb->SetParError(2,0);
   fmb->SetParLimits(2,0,0);
   fmb->Draw("same");
   
   TF1 *fpeak = new TF1("fpeak","gaus",0.3600464,0.7191716);
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
   fpeak->SetParameter(0,36.6237);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.5777657);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.04788336);
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
