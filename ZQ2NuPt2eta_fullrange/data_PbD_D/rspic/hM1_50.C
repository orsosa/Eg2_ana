{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 18 12:07:51 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.1901558,80.10988,0.8890623,622.8647);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin50 = new TH1F("hM_bin50","M_{#gamma #gamma}",100,0.2600464,0.8191716);
   hM_bin50->SetBinContent(0,11695);
   hM_bin50->SetBinContent(1,167);
   hM_bin50->SetBinContent(2,182);
   hM_bin50->SetBinContent(3,169);
   hM_bin50->SetBinContent(4,179);
   hM_bin50->SetBinContent(5,170);
   hM_bin50->SetBinContent(6,173);
   hM_bin50->SetBinContent(7,177);
   hM_bin50->SetBinContent(8,194);
   hM_bin50->SetBinContent(9,182);
   hM_bin50->SetBinContent(10,228);
   hM_bin50->SetBinContent(11,210);
   hM_bin50->SetBinContent(12,238);
   hM_bin50->SetBinContent(13,219);
   hM_bin50->SetBinContent(14,265);
   hM_bin50->SetBinContent(15,261);
   hM_bin50->SetBinContent(16,260);
   hM_bin50->SetBinContent(17,246);
   hM_bin50->SetBinContent(18,272);
   hM_bin50->SetBinContent(19,290);
   hM_bin50->SetBinContent(20,268);
   hM_bin50->SetBinContent(21,253);
   hM_bin50->SetBinContent(22,298);
   hM_bin50->SetBinContent(23,286);
   hM_bin50->SetBinContent(24,316);
   hM_bin50->SetBinContent(25,300);
   hM_bin50->SetBinContent(26,297);
   hM_bin50->SetBinContent(27,313);
   hM_bin50->SetBinContent(28,348);
   hM_bin50->SetBinContent(29,317);
   hM_bin50->SetBinContent(30,337);
   hM_bin50->SetBinContent(31,362);
   hM_bin50->SetBinContent(32,332);
   hM_bin50->SetBinContent(33,345);
   hM_bin50->SetBinContent(34,401);
   hM_bin50->SetBinContent(35,340);
   hM_bin50->SetBinContent(36,357);
   hM_bin50->SetBinContent(37,379);
   hM_bin50->SetBinContent(38,384);
   hM_bin50->SetBinContent(39,431);
   hM_bin50->SetBinContent(40,415);
   hM_bin50->SetBinContent(41,428);
   hM_bin50->SetBinContent(42,370);
   hM_bin50->SetBinContent(43,420);
   hM_bin50->SetBinContent(44,443);
   hM_bin50->SetBinContent(45,427);
   hM_bin50->SetBinContent(46,449);
   hM_bin50->SetBinContent(47,460);
   hM_bin50->SetBinContent(48,458);
   hM_bin50->SetBinContent(49,458);
   hM_bin50->SetBinContent(50,481);
   hM_bin50->SetBinContent(51,455);
   hM_bin50->SetBinContent(52,444);
   hM_bin50->SetBinContent(53,487);
   hM_bin50->SetBinContent(54,475);
   hM_bin50->SetBinContent(55,476);
   hM_bin50->SetBinContent(56,482);
   hM_bin50->SetBinContent(57,522);
   hM_bin50->SetBinContent(58,463);
   hM_bin50->SetBinContent(59,515);
   hM_bin50->SetBinContent(60,455);
   hM_bin50->SetBinContent(61,525);
   hM_bin50->SetBinContent(62,466);
   hM_bin50->SetBinContent(63,477);
   hM_bin50->SetBinContent(64,469);
   hM_bin50->SetBinContent(65,470);
   hM_bin50->SetBinContent(66,479);
   hM_bin50->SetBinContent(67,477);
   hM_bin50->SetBinContent(68,459);
   hM_bin50->SetBinContent(69,477);
   hM_bin50->SetBinContent(70,463);
   hM_bin50->SetBinContent(71,475);
   hM_bin50->SetBinContent(72,455);
   hM_bin50->SetBinContent(73,474);
   hM_bin50->SetBinContent(74,441);
   hM_bin50->SetBinContent(75,466);
   hM_bin50->SetBinContent(76,487);
   hM_bin50->SetBinContent(77,456);
   hM_bin50->SetBinContent(78,470);
   hM_bin50->SetBinContent(79,512);
   hM_bin50->SetBinContent(80,417);
   hM_bin50->SetBinContent(81,455);
   hM_bin50->SetBinContent(82,459);
   hM_bin50->SetBinContent(83,468);
   hM_bin50->SetBinContent(84,423);
   hM_bin50->SetBinContent(85,412);
   hM_bin50->SetBinContent(86,433);
   hM_bin50->SetBinContent(87,475);
   hM_bin50->SetBinContent(88,475);
   hM_bin50->SetBinContent(89,417);
   hM_bin50->SetBinContent(90,471);
   hM_bin50->SetBinContent(91,431);
   hM_bin50->SetBinContent(92,417);
   hM_bin50->SetBinContent(93,420);
   hM_bin50->SetBinContent(94,477);
   hM_bin50->SetBinContent(95,402);
   hM_bin50->SetBinContent(96,399);
   hM_bin50->SetBinContent(97,432);
   hM_bin50->SetBinContent(98,441);
   hM_bin50->SetBinContent(99,397);
   hM_bin50->SetBinContent(100,425);
   hM_bin50->SetBinContent(101,17527);
   hM_bin50->SetEntries(67695);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.334488,0.7654382);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(74.71171);
   fsig->SetNDF(71);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-172.2258);
   fsig->SetParError(0,95.30476);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,1592.802);
   fsig->SetParError(1,385.8428);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1022.211);
   fsig->SetParError(2,352.3229);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,80.1691);
   fsig->SetParError(3,13.41913);
   fsig->SetParLimits(3,0,1050);
   fsig->SetParameter(4,0.5594948);
   fsig->SetParError(4,0.006638483);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.07182504);
   fsig->SetParError(5,0.01780046);
   fsig->SetParLimits(5,0.04788336,0.07182504);
   hM_bin50->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin50");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 67695  ");
   text = ptstats->AddText("Mean  = 0.5741");
   text = ptstats->AddText("RMS   = 0.1469");
   text = ptstats->AddText("#chi^{2} / ndf = 74.71 / 71");
   text = ptstats->AddText("p0       = -172.2 #pm 95.3 ");
   text = ptstats->AddText("p1       =  1593 #pm 385.8 ");
   text = ptstats->AddText("p2       = -1022 #pm 352.3 ");
   text = ptstats->AddText("p3       = 80.17 #pm 13.42 ");
   text = ptstats->AddText("p4       = 0.5595 #pm 0.0066 ");
   text = ptstats->AddText("p5       = 0.07183 #pm 0.01780 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin50->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin50);

   ci = TColor::GetColor("#0000ff");
   hM_bin50->SetMarkerColor(ci);
   hM_bin50->SetMarkerStyle(24);
   hM_bin50->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin50->GetXaxis()->SetLabelFont(42);
   hM_bin50->GetXaxis()->SetLabelSize(0.035);
   hM_bin50->GetXaxis()->SetTitleSize(0.035);
   hM_bin50->GetXaxis()->SetTitleFont(42);
   hM_bin50->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin50->GetYaxis()->SetLabelFont(42);
   hM_bin50->GetYaxis()->SetLabelSize(0.035);
   hM_bin50->GetYaxis()->SetTitleSize(0.035);
   hM_bin50->GetYaxis()->SetTitleFont(42);
   hM_bin50->GetZaxis()->SetLabelFont(42);
   hM_bin50->GetZaxis()->SetLabelSize(0.035);
   hM_bin50->GetZaxis()->SetTitleSize(0.035);
   hM_bin50->GetZaxis()->SetTitleFont(42);
   hM_bin50->Draw("e");
   
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
   fmb->SetParameter(0,-172.2258);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1592.802);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1022.211);
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
   fpeak->SetParameter(0,80.1691);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.5594948);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.07182504);
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
