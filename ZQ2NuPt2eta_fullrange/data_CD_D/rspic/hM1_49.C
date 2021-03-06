{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 18 12:13:54 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.1901558,142.5359,0.8890623,580.8442);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin49 = new TH1F("hM_bin49","M_{#gamma #gamma}",100,0.2600464,0.8191716);
   hM_bin49->SetBinContent(0,14381);
   hM_bin49->SetBinContent(1,231);
   hM_bin49->SetBinContent(2,247);
   hM_bin49->SetBinContent(3,275);
   hM_bin49->SetBinContent(4,256);
   hM_bin49->SetBinContent(5,291);
   hM_bin49->SetBinContent(6,254);
   hM_bin49->SetBinContent(7,292);
   hM_bin49->SetBinContent(8,273);
   hM_bin49->SetBinContent(9,288);
   hM_bin49->SetBinContent(10,291);
   hM_bin49->SetBinContent(11,349);
   hM_bin49->SetBinContent(12,333);
   hM_bin49->SetBinContent(13,323);
   hM_bin49->SetBinContent(14,326);
   hM_bin49->SetBinContent(15,317);
   hM_bin49->SetBinContent(16,373);
   hM_bin49->SetBinContent(17,373);
   hM_bin49->SetBinContent(18,368);
   hM_bin49->SetBinContent(19,362);
   hM_bin49->SetBinContent(20,424);
   hM_bin49->SetBinContent(21,409);
   hM_bin49->SetBinContent(22,387);
   hM_bin49->SetBinContent(23,382);
   hM_bin49->SetBinContent(24,388);
   hM_bin49->SetBinContent(25,376);
   hM_bin49->SetBinContent(26,399);
   hM_bin49->SetBinContent(27,418);
   hM_bin49->SetBinContent(28,417);
   hM_bin49->SetBinContent(29,417);
   hM_bin49->SetBinContent(30,398);
   hM_bin49->SetBinContent(31,429);
   hM_bin49->SetBinContent(32,411);
   hM_bin49->SetBinContent(33,411);
   hM_bin49->SetBinContent(34,419);
   hM_bin49->SetBinContent(35,436);
   hM_bin49->SetBinContent(36,442);
   hM_bin49->SetBinContent(37,434);
   hM_bin49->SetBinContent(38,433);
   hM_bin49->SetBinContent(39,448);
   hM_bin49->SetBinContent(40,438);
   hM_bin49->SetBinContent(41,436);
   hM_bin49->SetBinContent(42,462);
   hM_bin49->SetBinContent(43,471);
   hM_bin49->SetBinContent(44,467);
   hM_bin49->SetBinContent(45,451);
   hM_bin49->SetBinContent(46,447);
   hM_bin49->SetBinContent(47,448);
   hM_bin49->SetBinContent(48,441);
   hM_bin49->SetBinContent(49,468);
   hM_bin49->SetBinContent(50,478);
   hM_bin49->SetBinContent(51,458);
   hM_bin49->SetBinContent(52,471);
   hM_bin49->SetBinContent(53,470);
   hM_bin49->SetBinContent(54,489);
   hM_bin49->SetBinContent(55,433);
   hM_bin49->SetBinContent(56,484);
   hM_bin49->SetBinContent(57,438);
   hM_bin49->SetBinContent(58,498);
   hM_bin49->SetBinContent(59,421);
   hM_bin49->SetBinContent(60,487);
   hM_bin49->SetBinContent(61,459);
   hM_bin49->SetBinContent(62,445);
   hM_bin49->SetBinContent(63,415);
   hM_bin49->SetBinContent(64,438);
   hM_bin49->SetBinContent(65,410);
   hM_bin49->SetBinContent(66,415);
   hM_bin49->SetBinContent(67,404);
   hM_bin49->SetBinContent(68,422);
   hM_bin49->SetBinContent(69,403);
   hM_bin49->SetBinContent(70,410);
   hM_bin49->SetBinContent(71,364);
   hM_bin49->SetBinContent(72,391);
   hM_bin49->SetBinContent(73,356);
   hM_bin49->SetBinContent(74,388);
   hM_bin49->SetBinContent(75,415);
   hM_bin49->SetBinContent(76,353);
   hM_bin49->SetBinContent(77,352);
   hM_bin49->SetBinContent(78,351);
   hM_bin49->SetBinContent(79,364);
   hM_bin49->SetBinContent(80,373);
   hM_bin49->SetBinContent(81,352);
   hM_bin49->SetBinContent(82,344);
   hM_bin49->SetBinContent(83,317);
   hM_bin49->SetBinContent(84,312);
   hM_bin49->SetBinContent(85,282);
   hM_bin49->SetBinContent(86,316);
   hM_bin49->SetBinContent(87,293);
   hM_bin49->SetBinContent(88,301);
   hM_bin49->SetBinContent(89,298);
   hM_bin49->SetBinContent(90,287);
   hM_bin49->SetBinContent(91,280);
   hM_bin49->SetBinContent(92,259);
   hM_bin49->SetBinContent(93,272);
   hM_bin49->SetBinContent(94,260);
   hM_bin49->SetBinContent(95,247);
   hM_bin49->SetBinContent(96,253);
   hM_bin49->SetBinContent(97,246);
   hM_bin49->SetBinContent(98,230);
   hM_bin49->SetBinContent(99,219);
   hM_bin49->SetBinContent(100,217);
   hM_bin49->SetBinContent(101,6197);
   hM_bin49->SetEntries(57847);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.3336002,0.7645504);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(58.42583);
   fsig->SetNDF(71);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-306.4036);
   fsig->SetParError(0,68.97327);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,2865.088);
   fsig->SetParError(1,270.1621);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-2753.845);
   fsig->SetParError(2,244.2865);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,31.46217);
   fsig->SetParError(3,10.46987);
   fsig->SetParLimits(3,0,996);
   fsig->SetParameter(4,0.559792);
   fsig->SetParError(4,0.01183214);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.04788336);
   fsig->SetParError(5,0.01975865);
   fsig->SetParLimits(5,0.04788336,0.07182504);
   hM_bin49->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin49");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 57847  ");
   text = ptstats->AddText("Mean  = 0.5347");
   text = ptstats->AddText("RMS   = 0.1467");
   text = ptstats->AddText("#chi^{2} / ndf = 58.43 / 71");
   text = ptstats->AddText("p0       = -306.4 #pm 69.0 ");
   text = ptstats->AddText("p1       =  2865 #pm 270.2 ");
   text = ptstats->AddText("p2       = -2754 #pm 244.3 ");
   text = ptstats->AddText("p3       = 31.46 #pm 10.47 ");
   text = ptstats->AddText("p4       = 0.5598 #pm 0.0118 ");
   text = ptstats->AddText("p5       = 0.04788 #pm 0.01976 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin49->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin49);

   ci = TColor::GetColor("#0000ff");
   hM_bin49->SetMarkerColor(ci);
   hM_bin49->SetMarkerStyle(24);
   hM_bin49->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin49->GetXaxis()->SetLabelFont(42);
   hM_bin49->GetXaxis()->SetLabelSize(0.035);
   hM_bin49->GetXaxis()->SetTitleSize(0.035);
   hM_bin49->GetXaxis()->SetTitleFont(42);
   hM_bin49->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin49->GetYaxis()->SetLabelFont(42);
   hM_bin49->GetYaxis()->SetLabelSize(0.035);
   hM_bin49->GetYaxis()->SetTitleSize(0.035);
   hM_bin49->GetYaxis()->SetTitleFont(42);
   hM_bin49->GetZaxis()->SetLabelFont(42);
   hM_bin49->GetZaxis()->SetLabelSize(0.035);
   hM_bin49->GetZaxis()->SetTitleSize(0.035);
   hM_bin49->GetZaxis()->SetTitleFont(42);
   hM_bin49->Draw("e");
   
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
   fmb->SetParameter(0,-306.4036);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,2865.088);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-2753.845);
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
   fpeak->SetParameter(0,31.46217);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.559792);
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
