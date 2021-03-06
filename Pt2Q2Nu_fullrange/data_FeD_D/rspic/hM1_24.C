{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 15:02:39 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-742.9721,0.350906,6686.749);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin24 = new TH1F("hM_bin24","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin24->SetBinContent(0,3907);
   hM_bin24->SetBinContent(4,1);
   hM_bin24->SetBinContent(11,1);
   hM_bin24->SetBinContent(12,193);
   hM_bin24->SetBinContent(13,498);
   hM_bin24->SetBinContent(14,486);
   hM_bin24->SetBinContent(15,426);
   hM_bin24->SetBinContent(16,420);
   hM_bin24->SetBinContent(17,394);
   hM_bin24->SetBinContent(18,437);
   hM_bin24->SetBinContent(19,486);
   hM_bin24->SetBinContent(20,542);
   hM_bin24->SetBinContent(21,560);
   hM_bin24->SetBinContent(22,704);
   hM_bin24->SetBinContent(23,698);
   hM_bin24->SetBinContent(24,775);
   hM_bin24->SetBinContent(25,838);
   hM_bin24->SetBinContent(26,913);
   hM_bin24->SetBinContent(27,1045);
   hM_bin24->SetBinContent(28,1101);
   hM_bin24->SetBinContent(29,1130);
   hM_bin24->SetBinContent(30,1250);
   hM_bin24->SetBinContent(31,1294);
   hM_bin24->SetBinContent(32,1447);
   hM_bin24->SetBinContent(33,1552);
   hM_bin24->SetBinContent(34,1614);
   hM_bin24->SetBinContent(35,1856);
   hM_bin24->SetBinContent(36,2002);
   hM_bin24->SetBinContent(37,2134);
   hM_bin24->SetBinContent(38,2491);
   hM_bin24->SetBinContent(39,2976);
   hM_bin24->SetBinContent(40,3262);
   hM_bin24->SetBinContent(41,3605);
   hM_bin24->SetBinContent(42,4129);
   hM_bin24->SetBinContent(43,4448);
   hM_bin24->SetBinContent(44,4910);
   hM_bin24->SetBinContent(45,5107);
   hM_bin24->SetBinContent(46,5423);
   hM_bin24->SetBinContent(47,5586);
   hM_bin24->SetBinContent(48,5513);
   hM_bin24->SetBinContent(49,5173);
   hM_bin24->SetBinContent(50,5041);
   hM_bin24->SetBinContent(51,4588);
   hM_bin24->SetBinContent(52,4391);
   hM_bin24->SetBinContent(53,4088);
   hM_bin24->SetBinContent(54,3560);
   hM_bin24->SetBinContent(55,3301);
   hM_bin24->SetBinContent(56,3201);
   hM_bin24->SetBinContent(57,2965);
   hM_bin24->SetBinContent(58,2696);
   hM_bin24->SetBinContent(59,2630);
   hM_bin24->SetBinContent(60,2428);
   hM_bin24->SetBinContent(61,2466);
   hM_bin24->SetBinContent(62,2396);
   hM_bin24->SetBinContent(63,2300);
   hM_bin24->SetBinContent(64,2281);
   hM_bin24->SetBinContent(65,2288);
   hM_bin24->SetBinContent(66,2231);
   hM_bin24->SetBinContent(67,2118);
   hM_bin24->SetBinContent(68,2287);
   hM_bin24->SetBinContent(69,2148);
   hM_bin24->SetBinContent(70,2113);
   hM_bin24->SetBinContent(71,2197);
   hM_bin24->SetBinContent(72,2057);
   hM_bin24->SetBinContent(73,2140);
   hM_bin24->SetBinContent(74,2074);
   hM_bin24->SetBinContent(75,2072);
   hM_bin24->SetBinContent(76,2011);
   hM_bin24->SetBinContent(77,1964);
   hM_bin24->SetBinContent(78,1983);
   hM_bin24->SetBinContent(79,1971);
   hM_bin24->SetBinContent(80,1972);
   hM_bin24->SetBinContent(81,1943);
   hM_bin24->SetBinContent(82,1965);
   hM_bin24->SetBinContent(83,1888);
   hM_bin24->SetBinContent(84,1816);
   hM_bin24->SetBinContent(85,1878);
   hM_bin24->SetBinContent(86,1899);
   hM_bin24->SetBinContent(87,1890);
   hM_bin24->SetBinContent(88,1872);
   hM_bin24->SetBinContent(89,1830);
   hM_bin24->SetBinContent(90,1689);
   hM_bin24->SetBinContent(91,1769);
   hM_bin24->SetBinContent(92,1748);
   hM_bin24->SetBinContent(93,1725);
   hM_bin24->SetBinContent(94,1704);
   hM_bin24->SetBinContent(95,1647);
   hM_bin24->SetBinContent(96,1695);
   hM_bin24->SetBinContent(97,1630);
   hM_bin24->SetBinContent(98,1595);
   hM_bin24->SetBinContent(99,1711);
   hM_bin24->SetBinContent(100,1607);
   hM_bin24->SetBinContent(101,140116);
   hM_bin24->SetEntries(338902);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.06295615,0.1843677);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(56.14865);
   fsig->SetNDF(29);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,512.3366);
   fsig->SetParError(0,34.26029);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,11792.44);
   fsig->SetParError(1,269.0813);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-10000);
   fsig->SetParError(2,7590.102);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,3619.986);
   fsig->SetParError(3,28.9209);
   fsig->SetParLimits(3,0,11172);
   fsig->SetParameter(4,0.1231355);
   fsig->SetParError(4,0.0001728092);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01941569);
   fsig->SetParError(5,0.0002115456);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin24->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin24");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 338902 ");
   text = ptstats->AddText("Mean  = 0.1624");
   text = ptstats->AddText("RMS   = 0.06977");
   text = ptstats->AddText("#chi^{2} / ndf = 56.15 / 29");
   text = ptstats->AddText("p0       = 512.3 #pm 34.3 ");
   text = ptstats->AddText("p1       = 1.179e+04 #pm 2.691e+02 ");
   text = ptstats->AddText("p2       = -1e+04 #pm 7.59e+03 ");
   text = ptstats->AddText("p3       =  3620 #pm 28.9 ");
   text = ptstats->AddText("p4       = 0.1231 #pm 0.0002 ");
   text = ptstats->AddText("p5       = 0.01942 #pm 0.00021 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin24->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin24);

   ci = TColor::GetColor("#0000ff");
   hM_bin24->SetMarkerColor(ci);
   hM_bin24->SetMarkerStyle(24);
   hM_bin24->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin24->GetXaxis()->SetLabelFont(42);
   hM_bin24->GetXaxis()->SetLabelSize(0.035);
   hM_bin24->GetXaxis()->SetTitleSize(0.035);
   hM_bin24->GetXaxis()->SetTitleFont(42);
   hM_bin24->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin24->GetYaxis()->SetLabelFont(42);
   hM_bin24->GetYaxis()->SetLabelSize(0.035);
   hM_bin24->GetYaxis()->SetTitleSize(0.035);
   hM_bin24->GetYaxis()->SetTitleFont(42);
   hM_bin24->GetZaxis()->SetLabelFont(42);
   hM_bin24->GetZaxis()->SetLabelSize(0.035);
   hM_bin24->GetZaxis()->SetTitleSize(0.035);
   hM_bin24->GetZaxis()->SetTitleFont(42);
   hM_bin24->Draw("e");
   
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
   fmb->SetParameter(0,512.3366);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,11792.44);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-10000);
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
   fpeak->SetParameter(0,3619.986);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1231355);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.01941569);
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
