{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:36:26 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-307.1086,0.350906,2763.977);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin18 = new TH1F("hM_bin18","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin18->SetBinContent(13,9);
   hM_bin18->SetBinContent(14,35);
   hM_bin18->SetBinContent(15,51);
   hM_bin18->SetBinContent(16,116);
   hM_bin18->SetBinContent(17,176);
   hM_bin18->SetBinContent(18,182);
   hM_bin18->SetBinContent(19,212);
   hM_bin18->SetBinContent(20,255);
   hM_bin18->SetBinContent(21,291);
   hM_bin18->SetBinContent(22,328);
   hM_bin18->SetBinContent(23,330);
   hM_bin18->SetBinContent(24,333);
   hM_bin18->SetBinContent(25,384);
   hM_bin18->SetBinContent(26,387);
   hM_bin18->SetBinContent(27,334);
   hM_bin18->SetBinContent(28,403);
   hM_bin18->SetBinContent(29,407);
   hM_bin18->SetBinContent(30,444);
   hM_bin18->SetBinContent(31,496);
   hM_bin18->SetBinContent(32,468);
   hM_bin18->SetBinContent(33,441);
   hM_bin18->SetBinContent(34,478);
   hM_bin18->SetBinContent(35,498);
   hM_bin18->SetBinContent(36,587);
   hM_bin18->SetBinContent(37,572);
   hM_bin18->SetBinContent(38,627);
   hM_bin18->SetBinContent(39,722);
   hM_bin18->SetBinContent(40,801);
   hM_bin18->SetBinContent(41,824);
   hM_bin18->SetBinContent(42,1000);
   hM_bin18->SetBinContent(43,1278);
   hM_bin18->SetBinContent(44,1399);
   hM_bin18->SetBinContent(45,1564);
   hM_bin18->SetBinContent(46,1772);
   hM_bin18->SetBinContent(47,1930);
   hM_bin18->SetBinContent(48,2169);
   hM_bin18->SetBinContent(49,2229);
   hM_bin18->SetBinContent(50,2292);
   hM_bin18->SetBinContent(51,2257);
   hM_bin18->SetBinContent(52,2083);
   hM_bin18->SetBinContent(53,2080);
   hM_bin18->SetBinContent(54,1793);
   hM_bin18->SetBinContent(55,1680);
   hM_bin18->SetBinContent(56,1482);
   hM_bin18->SetBinContent(57,1354);
   hM_bin18->SetBinContent(58,1256);
   hM_bin18->SetBinContent(59,1023);
   hM_bin18->SetBinContent(60,1113);
   hM_bin18->SetBinContent(61,894);
   hM_bin18->SetBinContent(62,734);
   hM_bin18->SetBinContent(63,755);
   hM_bin18->SetBinContent(64,775);
   hM_bin18->SetBinContent(65,742);
   hM_bin18->SetBinContent(66,643);
   hM_bin18->SetBinContent(67,590);
   hM_bin18->SetBinContent(68,625);
   hM_bin18->SetBinContent(69,604);
   hM_bin18->SetBinContent(70,583);
   hM_bin18->SetBinContent(71,568);
   hM_bin18->SetBinContent(72,595);
   hM_bin18->SetBinContent(73,569);
   hM_bin18->SetBinContent(74,529);
   hM_bin18->SetBinContent(75,524);
   hM_bin18->SetBinContent(76,567);
   hM_bin18->SetBinContent(77,594);
   hM_bin18->SetBinContent(78,514);
   hM_bin18->SetBinContent(79,490);
   hM_bin18->SetBinContent(80,546);
   hM_bin18->SetBinContent(81,508);
   hM_bin18->SetBinContent(82,528);
   hM_bin18->SetBinContent(83,528);
   hM_bin18->SetBinContent(84,514);
   hM_bin18->SetBinContent(85,440);
   hM_bin18->SetBinContent(86,464);
   hM_bin18->SetBinContent(87,500);
   hM_bin18->SetBinContent(88,490);
   hM_bin18->SetBinContent(89,507);
   hM_bin18->SetBinContent(90,491);
   hM_bin18->SetBinContent(91,452);
   hM_bin18->SetBinContent(92,448);
   hM_bin18->SetBinContent(93,434);
   hM_bin18->SetBinContent(94,452);
   hM_bin18->SetBinContent(95,489);
   hM_bin18->SetBinContent(96,454);
   hM_bin18->SetBinContent(97,430);
   hM_bin18->SetBinContent(98,437);
   hM_bin18->SetBinContent(99,424);
   hM_bin18->SetBinContent(100,488);
   hM_bin18->SetBinContent(101,25987);
   hM_bin18->SetEntries(90851);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07671763,0.1926511);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(100.0276);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,327.5583);
   fsig->SetParError(0,22.77092);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,1618.598);
   fsig->SetParError(1,164.429);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.005257502);
   fsig->SetParError(2,9983.583);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,1664.099);
   fsig->SetParError(3,17.99038);
   fsig->SetParLimits(3,0,4584);
   fsig->SetParameter(4,0.1343931);
   fsig->SetParError(4,0.0002285464);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,7.386716e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin18->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin18");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 90851  ");
   text = ptstats->AddText("Mean  = 0.1571");
   text = ptstats->AddText("RMS   = 0.0651");
   text = ptstats->AddText("#chi^{2} / ndf =   100 / 28");
   text = ptstats->AddText("p0       = 327.6 #pm 22.8 ");
   text = ptstats->AddText("p1       =  1619 #pm 164.4 ");
   text = ptstats->AddText("p2       = -0.005258 #pm 9983.583008 ");
   text = ptstats->AddText("p3       =  1664 #pm 18.0 ");
   text = ptstats->AddText("p4       = 0.1344 #pm 0.0002 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00007 ");
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
   fmb->SetParameter(0,327.5583);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1618.598);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.005257502);
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
   fpeak->SetParameter(0,1664.099);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1343931);
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
