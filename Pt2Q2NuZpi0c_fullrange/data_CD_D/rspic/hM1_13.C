{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue May  9 16:24:53 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-186.9318,0.350906,1682.386);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin13 = new TH1F("hM_bin13","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin13->SetBinContent(14,2);
   hM_bin13->SetBinContent(15,18);
   hM_bin13->SetBinContent(16,39);
   hM_bin13->SetBinContent(17,51);
   hM_bin13->SetBinContent(18,83);
   hM_bin13->SetBinContent(19,104);
   hM_bin13->SetBinContent(20,144);
   hM_bin13->SetBinContent(21,147);
   hM_bin13->SetBinContent(22,180);
   hM_bin13->SetBinContent(23,176);
   hM_bin13->SetBinContent(24,155);
   hM_bin13->SetBinContent(25,180);
   hM_bin13->SetBinContent(26,197);
   hM_bin13->SetBinContent(27,192);
   hM_bin13->SetBinContent(28,193);
   hM_bin13->SetBinContent(29,209);
   hM_bin13->SetBinContent(30,208);
   hM_bin13->SetBinContent(31,302);
   hM_bin13->SetBinContent(32,201);
   hM_bin13->SetBinContent(33,272);
   hM_bin13->SetBinContent(34,296);
   hM_bin13->SetBinContent(35,275);
   hM_bin13->SetBinContent(36,307);
   hM_bin13->SetBinContent(37,311);
   hM_bin13->SetBinContent(38,343);
   hM_bin13->SetBinContent(39,370);
   hM_bin13->SetBinContent(40,389);
   hM_bin13->SetBinContent(41,517);
   hM_bin13->SetBinContent(42,507);
   hM_bin13->SetBinContent(43,574);
   hM_bin13->SetBinContent(44,714);
   hM_bin13->SetBinContent(45,863);
   hM_bin13->SetBinContent(46,982);
   hM_bin13->SetBinContent(47,1139);
   hM_bin13->SetBinContent(48,1222);
   hM_bin13->SetBinContent(49,1250);
   hM_bin13->SetBinContent(50,1364);
   hM_bin13->SetBinContent(51,1387);
   hM_bin13->SetBinContent(52,1289);
   hM_bin13->SetBinContent(53,1326);
   hM_bin13->SetBinContent(54,1178);
   hM_bin13->SetBinContent(55,1126);
   hM_bin13->SetBinContent(56,1027);
   hM_bin13->SetBinContent(57,942);
   hM_bin13->SetBinContent(58,833);
   hM_bin13->SetBinContent(59,782);
   hM_bin13->SetBinContent(60,655);
   hM_bin13->SetBinContent(61,653);
   hM_bin13->SetBinContent(62,623);
   hM_bin13->SetBinContent(63,555);
   hM_bin13->SetBinContent(64,518);
   hM_bin13->SetBinContent(65,436);
   hM_bin13->SetBinContent(66,441);
   hM_bin13->SetBinContent(67,442);
   hM_bin13->SetBinContent(68,461);
   hM_bin13->SetBinContent(69,398);
   hM_bin13->SetBinContent(70,423);
   hM_bin13->SetBinContent(71,418);
   hM_bin13->SetBinContent(72,347);
   hM_bin13->SetBinContent(73,364);
   hM_bin13->SetBinContent(74,421);
   hM_bin13->SetBinContent(75,387);
   hM_bin13->SetBinContent(76,386);
   hM_bin13->SetBinContent(77,372);
   hM_bin13->SetBinContent(78,321);
   hM_bin13->SetBinContent(79,383);
   hM_bin13->SetBinContent(80,327);
   hM_bin13->SetBinContent(81,349);
   hM_bin13->SetBinContent(82,378);
   hM_bin13->SetBinContent(83,370);
   hM_bin13->SetBinContent(84,361);
   hM_bin13->SetBinContent(85,349);
   hM_bin13->SetBinContent(86,328);
   hM_bin13->SetBinContent(87,328);
   hM_bin13->SetBinContent(88,325);
   hM_bin13->SetBinContent(89,331);
   hM_bin13->SetBinContent(90,303);
   hM_bin13->SetBinContent(91,344);
   hM_bin13->SetBinContent(92,315);
   hM_bin13->SetBinContent(93,279);
   hM_bin13->SetBinContent(94,312);
   hM_bin13->SetBinContent(95,325);
   hM_bin13->SetBinContent(96,297);
   hM_bin13->SetBinContent(97,291);
   hM_bin13->SetBinContent(98,300);
   hM_bin13->SetBinContent(99,293);
   hM_bin13->SetBinContent(100,261);
   hM_bin13->SetBinContent(101,20590);
   hM_bin13->SetEntries(60726);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07993583,0.1958693);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(55.77574);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,120.9561);
   fsig->SetParError(0,18.1416);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,1642.62);
   fsig->SetParError(1,129.43);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.0005603956);
   fsig->SetParError(2,7255.612);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,990.9835);
   fsig->SetParError(3,14.08052);
   fsig->SetParLimits(3,0,2774);
   fsig->SetParameter(4,0.1376726);
   fsig->SetParError(4,0.0003013621);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0001329547);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin13->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin13");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 60726  ");
   text = ptstats->AddText("Mean  = 0.1632");
   text = ptstats->AddText("RMS   = 0.06409");
   text = ptstats->AddText("#chi^{2} / ndf = 55.78 / 28");
   text = ptstats->AddText("p0       =   121 #pm 18.1 ");
   text = ptstats->AddText("p1       =  1643 #pm 129.4 ");
   text = ptstats->AddText("p2       = -0.0005604 #pm 7255.6118164 ");
   text = ptstats->AddText("p3       =   991 #pm 14.1 ");
   text = ptstats->AddText("p4       = 0.1377 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00013 ");
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
   fmb->SetParameter(0,120.9561);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1642.62);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.0005603956);
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
   fpeak->SetParameter(0,990.9835);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1376726);
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
