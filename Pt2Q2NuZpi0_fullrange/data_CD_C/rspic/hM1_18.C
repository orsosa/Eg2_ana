{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:33:12 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-206.2122,0.350906,1855.91);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin18 = new TH1F("hM_bin18","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin18->SetBinContent(13,2);
   hM_bin18->SetBinContent(14,15);
   hM_bin18->SetBinContent(15,62);
   hM_bin18->SetBinContent(16,79);
   hM_bin18->SetBinContent(17,126);
   hM_bin18->SetBinContent(18,127);
   hM_bin18->SetBinContent(19,178);
   hM_bin18->SetBinContent(20,157);
   hM_bin18->SetBinContent(21,140);
   hM_bin18->SetBinContent(22,213);
   hM_bin18->SetBinContent(23,215);
   hM_bin18->SetBinContent(24,207);
   hM_bin18->SetBinContent(25,208);
   hM_bin18->SetBinContent(26,243);
   hM_bin18->SetBinContent(27,248);
   hM_bin18->SetBinContent(28,267);
   hM_bin18->SetBinContent(29,267);
   hM_bin18->SetBinContent(30,247);
   hM_bin18->SetBinContent(31,284);
   hM_bin18->SetBinContent(32,310);
   hM_bin18->SetBinContent(33,278);
   hM_bin18->SetBinContent(34,321);
   hM_bin18->SetBinContent(35,300);
   hM_bin18->SetBinContent(36,378);
   hM_bin18->SetBinContent(37,331);
   hM_bin18->SetBinContent(38,370);
   hM_bin18->SetBinContent(39,431);
   hM_bin18->SetBinContent(40,562);
   hM_bin18->SetBinContent(41,618);
   hM_bin18->SetBinContent(42,698);
   hM_bin18->SetBinContent(43,800);
   hM_bin18->SetBinContent(44,932);
   hM_bin18->SetBinContent(45,1088);
   hM_bin18->SetBinContent(46,1153);
   hM_bin18->SetBinContent(47,1238);
   hM_bin18->SetBinContent(48,1361);
   hM_bin18->SetBinContent(49,1532);
   hM_bin18->SetBinContent(50,1479);
   hM_bin18->SetBinContent(51,1485);
   hM_bin18->SetBinContent(52,1478);
   hM_bin18->SetBinContent(53,1350);
   hM_bin18->SetBinContent(54,1247);
   hM_bin18->SetBinContent(55,1044);
   hM_bin18->SetBinContent(56,1063);
   hM_bin18->SetBinContent(57,935);
   hM_bin18->SetBinContent(58,837);
   hM_bin18->SetBinContent(59,747);
   hM_bin18->SetBinContent(60,622);
   hM_bin18->SetBinContent(61,553);
   hM_bin18->SetBinContent(62,514);
   hM_bin18->SetBinContent(63,474);
   hM_bin18->SetBinContent(64,444);
   hM_bin18->SetBinContent(65,448);
   hM_bin18->SetBinContent(66,402);
   hM_bin18->SetBinContent(67,449);
   hM_bin18->SetBinContent(68,400);
   hM_bin18->SetBinContent(69,393);
   hM_bin18->SetBinContent(70,359);
   hM_bin18->SetBinContent(71,353);
   hM_bin18->SetBinContent(72,343);
   hM_bin18->SetBinContent(73,346);
   hM_bin18->SetBinContent(74,348);
   hM_bin18->SetBinContent(75,343);
   hM_bin18->SetBinContent(76,348);
   hM_bin18->SetBinContent(77,344);
   hM_bin18->SetBinContent(78,324);
   hM_bin18->SetBinContent(79,324);
   hM_bin18->SetBinContent(80,375);
   hM_bin18->SetBinContent(81,326);
   hM_bin18->SetBinContent(82,305);
   hM_bin18->SetBinContent(83,343);
   hM_bin18->SetBinContent(84,325);
   hM_bin18->SetBinContent(85,332);
   hM_bin18->SetBinContent(86,296);
   hM_bin18->SetBinContent(87,285);
   hM_bin18->SetBinContent(88,305);
   hM_bin18->SetBinContent(89,255);
   hM_bin18->SetBinContent(90,249);
   hM_bin18->SetBinContent(91,254);
   hM_bin18->SetBinContent(92,246);
   hM_bin18->SetBinContent(93,280);
   hM_bin18->SetBinContent(94,301);
   hM_bin18->SetBinContent(95,248);
   hM_bin18->SetBinContent(96,260);
   hM_bin18->SetBinContent(97,266);
   hM_bin18->SetBinContent(98,265);
   hM_bin18->SetBinContent(99,253);
   hM_bin18->SetBinContent(100,246);
   hM_bin18->SetBinContent(101,16224);
   hM_bin18->SetEntries(58021);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07675377,0.1926876);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(48.09335);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,194.5795);
   fsig->SetParError(0,18.18482);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,1115.938);
   fsig->SetParError(1,131.2129);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.0002303911);
   fsig->SetParError(2,7574.849);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,1133.988);
   fsig->SetParError(3,14.56535);
   fsig->SetParLimits(3,0,3064);
   fsig->SetParameter(4,0.1344295);
   fsig->SetParError(4,0.0002764606);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0007434151);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin18->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin18");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 58021  ");
   text = ptstats->AddText("Mean  = 0.1554");
   text = ptstats->AddText("RMS   = 0.06371");
   text = ptstats->AddText("#chi^{2} / ndf = 48.09 / 28");
   text = ptstats->AddText("p0       = 194.6 #pm 18.2 ");
   text = ptstats->AddText("p1       =  1116 #pm 131.2 ");
   text = ptstats->AddText("p2       = -0.0002304 #pm 7574.8486328 ");
   text = ptstats->AddText("p3       =  1134 #pm 14.6 ");
   text = ptstats->AddText("p4       = 0.1344 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00074 ");
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
   fmb->SetParameter(0,194.5795);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1115.938);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.0002303911);
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
   fpeak->SetParameter(0,1133.988);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1344295);
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
