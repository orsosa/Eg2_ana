{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:36:08 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-189.459,0.350906,1705.13);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin13 = new TH1F("hM_bin13","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin13->SetBinContent(13,2);
   hM_bin13->SetBinContent(14,27);
   hM_bin13->SetBinContent(15,35);
   hM_bin13->SetBinContent(16,57);
   hM_bin13->SetBinContent(17,84);
   hM_bin13->SetBinContent(18,120);
   hM_bin13->SetBinContent(19,160);
   hM_bin13->SetBinContent(20,166);
   hM_bin13->SetBinContent(21,176);
   hM_bin13->SetBinContent(22,179);
   hM_bin13->SetBinContent(23,163);
   hM_bin13->SetBinContent(24,210);
   hM_bin13->SetBinContent(25,187);
   hM_bin13->SetBinContent(26,214);
   hM_bin13->SetBinContent(27,276);
   hM_bin13->SetBinContent(28,265);
   hM_bin13->SetBinContent(29,250);
   hM_bin13->SetBinContent(30,286);
   hM_bin13->SetBinContent(31,269);
   hM_bin13->SetBinContent(32,306);
   hM_bin13->SetBinContent(33,289);
   hM_bin13->SetBinContent(34,294);
   hM_bin13->SetBinContent(35,318);
   hM_bin13->SetBinContent(36,368);
   hM_bin13->SetBinContent(37,409);
   hM_bin13->SetBinContent(38,355);
   hM_bin13->SetBinContent(39,416);
   hM_bin13->SetBinContent(40,463);
   hM_bin13->SetBinContent(41,523);
   hM_bin13->SetBinContent(42,616);
   hM_bin13->SetBinContent(43,674);
   hM_bin13->SetBinContent(44,822);
   hM_bin13->SetBinContent(45,954);
   hM_bin13->SetBinContent(46,1007);
   hM_bin13->SetBinContent(47,1211);
   hM_bin13->SetBinContent(48,1265);
   hM_bin13->SetBinContent(49,1330);
   hM_bin13->SetBinContent(50,1353);
   hM_bin13->SetBinContent(51,1366);
   hM_bin13->SetBinContent(52,1406);
   hM_bin13->SetBinContent(53,1293);
   hM_bin13->SetBinContent(54,1254);
   hM_bin13->SetBinContent(55,1181);
   hM_bin13->SetBinContent(56,1084);
   hM_bin13->SetBinContent(57,902);
   hM_bin13->SetBinContent(58,778);
   hM_bin13->SetBinContent(59,783);
   hM_bin13->SetBinContent(60,633);
   hM_bin13->SetBinContent(61,638);
   hM_bin13->SetBinContent(62,513);
   hM_bin13->SetBinContent(63,524);
   hM_bin13->SetBinContent(64,432);
   hM_bin13->SetBinContent(65,463);
   hM_bin13->SetBinContent(66,418);
   hM_bin13->SetBinContent(67,426);
   hM_bin13->SetBinContent(68,410);
   hM_bin13->SetBinContent(69,341);
   hM_bin13->SetBinContent(70,346);
   hM_bin13->SetBinContent(71,410);
   hM_bin13->SetBinContent(72,414);
   hM_bin13->SetBinContent(73,379);
   hM_bin13->SetBinContent(74,346);
   hM_bin13->SetBinContent(75,327);
   hM_bin13->SetBinContent(76,349);
   hM_bin13->SetBinContent(77,347);
   hM_bin13->SetBinContent(78,367);
   hM_bin13->SetBinContent(79,317);
   hM_bin13->SetBinContent(80,293);
   hM_bin13->SetBinContent(81,372);
   hM_bin13->SetBinContent(82,300);
   hM_bin13->SetBinContent(83,343);
   hM_bin13->SetBinContent(84,341);
   hM_bin13->SetBinContent(85,308);
   hM_bin13->SetBinContent(86,343);
   hM_bin13->SetBinContent(87,317);
   hM_bin13->SetBinContent(88,333);
   hM_bin13->SetBinContent(89,274);
   hM_bin13->SetBinContent(90,285);
   hM_bin13->SetBinContent(91,263);
   hM_bin13->SetBinContent(92,270);
   hM_bin13->SetBinContent(93,262);
   hM_bin13->SetBinContent(94,265);
   hM_bin13->SetBinContent(95,264);
   hM_bin13->SetBinContent(96,281);
   hM_bin13->SetBinContent(97,305);
   hM_bin13->SetBinContent(98,271);
   hM_bin13->SetBinContent(99,261);
   hM_bin13->SetBinContent(100,261);
   hM_bin13->SetBinContent(101,19968);
   hM_bin13->SetEntries(60726);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07802261,0.1958684);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(44.52359);
   fsig->SetNDF(29);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,227.7382);
   fsig->SetParError(0,17.09556);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,912.1558);
   fsig->SetParError(1,121.7756);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.03720585);
   fsig->SetParError(2,8685.145);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,1033.79);
   fsig->SetParError(3,14.0519);
   fsig->SetParLimits(3,0,2812);
   fsig->SetParameter(4,0.1367207);
   fsig->SetParError(4,0.0002894914);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0002197236);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin13->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin13");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 60726  ");
   text = ptstats->AddText("Mean  = 0.1579");
   text = ptstats->AddText("RMS   = 0.06433");
   text = ptstats->AddText("#chi^{2} / ndf = 44.52 / 29");
   text = ptstats->AddText("p0       = 227.7 #pm 17.1 ");
   text = ptstats->AddText("p1       = 912.2 #pm 121.8 ");
   text = ptstats->AddText("p2       = -0.03721 #pm 8685.14551 ");
   text = ptstats->AddText("p3       =  1034 #pm 14.1 ");
   text = ptstats->AddText("p4       = 0.1367 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00022 ");
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
   fmb->SetParameter(0,227.7382);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,912.1558);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.03720585);
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
   fpeak->SetParameter(0,1033.79);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1367207);
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
