{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 15:56:31 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-44.7526,0.350906,402.7734);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin13 = new TH1F("hM_bin13","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin13->SetBinContent(0,980);
   hM_bin13->SetBinContent(13,1);
   hM_bin13->SetBinContent(14,4);
   hM_bin13->SetBinContent(15,3);
   hM_bin13->SetBinContent(16,14);
   hM_bin13->SetBinContent(17,13);
   hM_bin13->SetBinContent(18,13);
   hM_bin13->SetBinContent(19,17);
   hM_bin13->SetBinContent(20,13);
   hM_bin13->SetBinContent(21,12);
   hM_bin13->SetBinContent(22,9);
   hM_bin13->SetBinContent(23,6);
   hM_bin13->SetBinContent(24,14);
   hM_bin13->SetBinContent(25,13);
   hM_bin13->SetBinContent(26,9);
   hM_bin13->SetBinContent(27,12);
   hM_bin13->SetBinContent(28,8);
   hM_bin13->SetBinContent(29,13);
   hM_bin13->SetBinContent(30,17);
   hM_bin13->SetBinContent(31,19);
   hM_bin13->SetBinContent(32,15);
   hM_bin13->SetBinContent(33,15);
   hM_bin13->SetBinContent(34,28);
   hM_bin13->SetBinContent(35,22);
   hM_bin13->SetBinContent(36,20);
   hM_bin13->SetBinContent(37,24);
   hM_bin13->SetBinContent(38,30);
   hM_bin13->SetBinContent(39,43);
   hM_bin13->SetBinContent(40,45);
   hM_bin13->SetBinContent(41,58);
   hM_bin13->SetBinContent(42,76);
   hM_bin13->SetBinContent(43,86);
   hM_bin13->SetBinContent(44,121);
   hM_bin13->SetBinContent(45,142);
   hM_bin13->SetBinContent(46,222);
   hM_bin13->SetBinContent(47,244);
   hM_bin13->SetBinContent(48,248);
   hM_bin13->SetBinContent(49,304);
   hM_bin13->SetBinContent(50,306);
   hM_bin13->SetBinContent(51,323);
   hM_bin13->SetBinContent(52,311);
   hM_bin13->SetBinContent(53,279);
   hM_bin13->SetBinContent(54,276);
   hM_bin13->SetBinContent(55,264);
   hM_bin13->SetBinContent(56,230);
   hM_bin13->SetBinContent(57,200);
   hM_bin13->SetBinContent(58,184);
   hM_bin13->SetBinContent(59,152);
   hM_bin13->SetBinContent(60,131);
   hM_bin13->SetBinContent(61,123);
   hM_bin13->SetBinContent(62,109);
   hM_bin13->SetBinContent(63,111);
   hM_bin13->SetBinContent(64,87);
   hM_bin13->SetBinContent(65,97);
   hM_bin13->SetBinContent(66,88);
   hM_bin13->SetBinContent(67,92);
   hM_bin13->SetBinContent(68,73);
   hM_bin13->SetBinContent(69,74);
   hM_bin13->SetBinContent(70,87);
   hM_bin13->SetBinContent(71,77);
   hM_bin13->SetBinContent(72,95);
   hM_bin13->SetBinContent(73,97);
   hM_bin13->SetBinContent(74,90);
   hM_bin13->SetBinContent(75,87);
   hM_bin13->SetBinContent(76,85);
   hM_bin13->SetBinContent(77,104);
   hM_bin13->SetBinContent(78,83);
   hM_bin13->SetBinContent(79,94);
   hM_bin13->SetBinContent(80,93);
   hM_bin13->SetBinContent(81,117);
   hM_bin13->SetBinContent(82,85);
   hM_bin13->SetBinContent(83,96);
   hM_bin13->SetBinContent(84,101);
   hM_bin13->SetBinContent(85,136);
   hM_bin13->SetBinContent(86,135);
   hM_bin13->SetBinContent(87,104);
   hM_bin13->SetBinContent(88,88);
   hM_bin13->SetBinContent(89,93);
   hM_bin13->SetBinContent(90,117);
   hM_bin13->SetBinContent(91,92);
   hM_bin13->SetBinContent(92,125);
   hM_bin13->SetBinContent(93,131);
   hM_bin13->SetBinContent(94,130);
   hM_bin13->SetBinContent(95,104);
   hM_bin13->SetBinContent(96,129);
   hM_bin13->SetBinContent(97,149);
   hM_bin13->SetBinContent(98,125);
   hM_bin13->SetBinContent(99,131);
   hM_bin13->SetBinContent(100,130);
   hM_bin13->SetBinContent(101,31481);
   hM_bin13->SetEntries(41234);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.081572,0.1975054);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(39.55859);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-36.77939);
   fsig->SetParError(0,5.789604);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,582.8203);
   fsig->SetParError(1,47.86763);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.064354e-06);
   fsig->SetParError(2,510.1306);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,255.6865);
   fsig->SetParError(3,6.218353);
   fsig->SetParLimits(3,0,646);
   fsig->SetParameter(4,0.1388688);
   fsig->SetParError(4,0.0004762524);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,7.996541e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin13->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin13");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 41234  ");
   text = ptstats->AddText("Mean  = 0.1844");
   text = ptstats->AddText("RMS   = 0.06577");
   text = ptstats->AddText("#chi^{2} / ndf = 39.56 / 28");
   text = ptstats->AddText("p0       = -36.78 #pm 5.79 ");
   text = ptstats->AddText("p1       = 582.8 #pm 47.9 ");
   text = ptstats->AddText("p2       = -1.064e-06 #pm 5.101e+02 ");
   text = ptstats->AddText("p3       = 255.7 #pm 6.2 ");
   text = ptstats->AddText("p4       = 0.1389 #pm 0.0005 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00008 ");
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
   fmb->SetParameter(0,-36.77939);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,582.8203);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.064354e-06);
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
   fpeak->SetParameter(0,255.6865);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1388688);
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
