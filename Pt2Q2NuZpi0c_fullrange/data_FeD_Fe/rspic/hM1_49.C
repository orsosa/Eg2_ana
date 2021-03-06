{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue May  9 16:31:59 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-254.4323,0.350906,2289.89);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin49 = new TH1F("hM_bin49","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin49->SetBinContent(13,1);
   hM_bin49->SetBinContent(14,14);
   hM_bin49->SetBinContent(15,37);
   hM_bin49->SetBinContent(16,80);
   hM_bin49->SetBinContent(17,104);
   hM_bin49->SetBinContent(18,125);
   hM_bin49->SetBinContent(19,127);
   hM_bin49->SetBinContent(20,170);
   hM_bin49->SetBinContent(21,194);
   hM_bin49->SetBinContent(22,238);
   hM_bin49->SetBinContent(23,257);
   hM_bin49->SetBinContent(24,271);
   hM_bin49->SetBinContent(25,268);
   hM_bin49->SetBinContent(26,310);
   hM_bin49->SetBinContent(27,296);
   hM_bin49->SetBinContent(28,317);
   hM_bin49->SetBinContent(29,301);
   hM_bin49->SetBinContent(30,337);
   hM_bin49->SetBinContent(31,314);
   hM_bin49->SetBinContent(32,327);
   hM_bin49->SetBinContent(33,364);
   hM_bin49->SetBinContent(34,358);
   hM_bin49->SetBinContent(35,435);
   hM_bin49->SetBinContent(36,416);
   hM_bin49->SetBinContent(37,451);
   hM_bin49->SetBinContent(38,478);
   hM_bin49->SetBinContent(39,564);
   hM_bin49->SetBinContent(40,675);
   hM_bin49->SetBinContent(41,833);
   hM_bin49->SetBinContent(42,857);
   hM_bin49->SetBinContent(43,1066);
   hM_bin49->SetBinContent(44,1211);
   hM_bin49->SetBinContent(45,1532);
   hM_bin49->SetBinContent(46,1542);
   hM_bin49->SetBinContent(47,1687);
   hM_bin49->SetBinContent(48,1895);
   hM_bin49->SetBinContent(49,1846);
   hM_bin49->SetBinContent(50,1888);
   hM_bin49->SetBinContent(51,1800);
   hM_bin49->SetBinContent(52,1723);
   hM_bin49->SetBinContent(53,1537);
   hM_bin49->SetBinContent(54,1456);
   hM_bin49->SetBinContent(55,1194);
   hM_bin49->SetBinContent(56,1103);
   hM_bin49->SetBinContent(57,962);
   hM_bin49->SetBinContent(58,783);
   hM_bin49->SetBinContent(59,752);
   hM_bin49->SetBinContent(60,677);
   hM_bin49->SetBinContent(61,553);
   hM_bin49->SetBinContent(62,531);
   hM_bin49->SetBinContent(63,515);
   hM_bin49->SetBinContent(64,506);
   hM_bin49->SetBinContent(65,469);
   hM_bin49->SetBinContent(66,436);
   hM_bin49->SetBinContent(67,368);
   hM_bin49->SetBinContent(68,398);
   hM_bin49->SetBinContent(69,429);
   hM_bin49->SetBinContent(70,409);
   hM_bin49->SetBinContent(71,403);
   hM_bin49->SetBinContent(72,377);
   hM_bin49->SetBinContent(73,422);
   hM_bin49->SetBinContent(74,359);
   hM_bin49->SetBinContent(75,424);
   hM_bin49->SetBinContent(76,408);
   hM_bin49->SetBinContent(77,367);
   hM_bin49->SetBinContent(78,386);
   hM_bin49->SetBinContent(79,379);
   hM_bin49->SetBinContent(80,365);
   hM_bin49->SetBinContent(81,301);
   hM_bin49->SetBinContent(82,391);
   hM_bin49->SetBinContent(83,368);
   hM_bin49->SetBinContent(84,364);
   hM_bin49->SetBinContent(85,346);
   hM_bin49->SetBinContent(86,344);
   hM_bin49->SetBinContent(87,327);
   hM_bin49->SetBinContent(88,354);
   hM_bin49->SetBinContent(89,287);
   hM_bin49->SetBinContent(90,322);
   hM_bin49->SetBinContent(91,331);
   hM_bin49->SetBinContent(92,340);
   hM_bin49->SetBinContent(93,290);
   hM_bin49->SetBinContent(94,296);
   hM_bin49->SetBinContent(95,338);
   hM_bin49->SetBinContent(96,307);
   hM_bin49->SetBinContent(97,303);
   hM_bin49->SetBinContent(98,274);
   hM_bin49->SetBinContent(99,327);
   hM_bin49->SetBinContent(100,274);
   hM_bin49->SetBinContent(101,20358);
   hM_bin49->SetEntries(69519);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.0739215,0.1898549);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(69.54076);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,252.7619);
   fsig->SetParError(0,18.8372);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,914.2444);
   fsig->SetParError(1,138.8207);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.001225826);
   fsig->SetParError(2,1195.829);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,1451.382);
   fsig->SetParError(3,16.03746);
   fsig->SetParLimits(3,0,3790);
   fsig->SetParameter(4,0.1316917);
   fsig->SetParError(4,0.0002284394);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,2.937817e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin49->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin49");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 69519  ");
   text = ptstats->AddText("Mean  = 0.1534");
   text = ptstats->AddText("RMS   = 0.06327");
   text = ptstats->AddText("#chi^{2} / ndf = 69.54 / 28");
   text = ptstats->AddText("p0       = 252.8 #pm 18.8 ");
   text = ptstats->AddText("p1       = 914.2 #pm 138.8 ");
   text = ptstats->AddText("p2       = -0.001226 #pm 1195.829224 ");
   text = ptstats->AddText("p3       =  1451 #pm 16.0 ");
   text = ptstats->AddText("p4       = 0.1317 #pm 0.0002 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00003 ");
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
   fmb->SetParameter(0,252.7619);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,914.2444);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.001225826);
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
   fpeak->SetParameter(0,1451.382);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1316917);
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
