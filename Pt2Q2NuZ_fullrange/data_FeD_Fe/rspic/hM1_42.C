{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 16:04:18 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-112.4517,0.350906,1012.065);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin42 = new TH1F("hM_bin42","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin42->SetBinContent(0,2242);
   hM_bin42->SetBinContent(13,1);
   hM_bin42->SetBinContent(14,23);
   hM_bin42->SetBinContent(15,36);
   hM_bin42->SetBinContent(16,30);
   hM_bin42->SetBinContent(17,49);
   hM_bin42->SetBinContent(18,42);
   hM_bin42->SetBinContent(19,29);
   hM_bin42->SetBinContent(20,18);
   hM_bin42->SetBinContent(21,22);
   hM_bin42->SetBinContent(22,31);
   hM_bin42->SetBinContent(23,34);
   hM_bin42->SetBinContent(24,29);
   hM_bin42->SetBinContent(25,22);
   hM_bin42->SetBinContent(26,36);
   hM_bin42->SetBinContent(27,35);
   hM_bin42->SetBinContent(28,38);
   hM_bin42->SetBinContent(29,39);
   hM_bin42->SetBinContent(30,62);
   hM_bin42->SetBinContent(31,53);
   hM_bin42->SetBinContent(32,48);
   hM_bin42->SetBinContent(33,79);
   hM_bin42->SetBinContent(34,75);
   hM_bin42->SetBinContent(35,69);
   hM_bin42->SetBinContent(36,99);
   hM_bin42->SetBinContent(37,92);
   hM_bin42->SetBinContent(38,138);
   hM_bin42->SetBinContent(39,148);
   hM_bin42->SetBinContent(40,201);
   hM_bin42->SetBinContent(41,257);
   hM_bin42->SetBinContent(42,312);
   hM_bin42->SetBinContent(43,417);
   hM_bin42->SetBinContent(44,472);
   hM_bin42->SetBinContent(45,583);
   hM_bin42->SetBinContent(46,682);
   hM_bin42->SetBinContent(47,757);
   hM_bin42->SetBinContent(48,777);
   hM_bin42->SetBinContent(49,787);
   hM_bin42->SetBinContent(50,828);
   hM_bin42->SetBinContent(51,792);
   hM_bin42->SetBinContent(52,738);
   hM_bin42->SetBinContent(53,621);
   hM_bin42->SetBinContent(54,564);
   hM_bin42->SetBinContent(55,504);
   hM_bin42->SetBinContent(56,466);
   hM_bin42->SetBinContent(57,397);
   hM_bin42->SetBinContent(58,343);
   hM_bin42->SetBinContent(59,316);
   hM_bin42->SetBinContent(60,275);
   hM_bin42->SetBinContent(61,274);
   hM_bin42->SetBinContent(62,254);
   hM_bin42->SetBinContent(63,260);
   hM_bin42->SetBinContent(64,248);
   hM_bin42->SetBinContent(65,233);
   hM_bin42->SetBinContent(66,229);
   hM_bin42->SetBinContent(67,217);
   hM_bin42->SetBinContent(68,265);
   hM_bin42->SetBinContent(69,244);
   hM_bin42->SetBinContent(70,254);
   hM_bin42->SetBinContent(71,254);
   hM_bin42->SetBinContent(72,264);
   hM_bin42->SetBinContent(73,262);
   hM_bin42->SetBinContent(74,239);
   hM_bin42->SetBinContent(75,259);
   hM_bin42->SetBinContent(76,277);
   hM_bin42->SetBinContent(77,257);
   hM_bin42->SetBinContent(78,281);
   hM_bin42->SetBinContent(79,265);
   hM_bin42->SetBinContent(80,299);
   hM_bin42->SetBinContent(81,291);
   hM_bin42->SetBinContent(82,287);
   hM_bin42->SetBinContent(83,278);
   hM_bin42->SetBinContent(84,287);
   hM_bin42->SetBinContent(85,310);
   hM_bin42->SetBinContent(86,282);
   hM_bin42->SetBinContent(87,308);
   hM_bin42->SetBinContent(88,305);
   hM_bin42->SetBinContent(89,305);
   hM_bin42->SetBinContent(90,349);
   hM_bin42->SetBinContent(91,322);
   hM_bin42->SetBinContent(92,338);
   hM_bin42->SetBinContent(93,327);
   hM_bin42->SetBinContent(94,341);
   hM_bin42->SetBinContent(95,325);
   hM_bin42->SetBinContent(96,333);
   hM_bin42->SetBinContent(97,388);
   hM_bin42->SetBinContent(98,361);
   hM_bin42->SetBinContent(99,335);
   hM_bin42->SetBinContent(100,387);
   hM_bin42->SetBinContent(101,61091);
   hM_bin42->SetEntries(87393);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07402644,0.1899599);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(86.79432);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-75.31323);
   fsig->SetParError(0,10.09136);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,1535.801);
   fsig->SetParError(1,83.521);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-3.002637e-06);
   fsig->SetParError(2,380.0714);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,633.4785);
   fsig->SetParError(3,10.08525);
   fsig->SetParLimits(3,0,1656);
   fsig->SetParameter(4,0.1317783);
   fsig->SetParError(4,0.0003097418);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,2.32563e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin42->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin42");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 87393  ");
   text = ptstats->AddText("Mean  = 0.1829");
   text = ptstats->AddText("RMS   = 0.06826");
   text = ptstats->AddText("#chi^{2} / ndf = 86.79 / 28");
   text = ptstats->AddText("p0       = -75.31 #pm 10.09 ");
   text = ptstats->AddText("p1       =  1536 #pm 83.5 ");
   text = ptstats->AddText("p2       = -3.003e-06 #pm 3.801e+02 ");
   text = ptstats->AddText("p3       = 633.5 #pm 10.1 ");
   text = ptstats->AddText("p4       = 0.1318 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00002 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin42->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin42);

   ci = TColor::GetColor("#0000ff");
   hM_bin42->SetMarkerColor(ci);
   hM_bin42->SetMarkerStyle(24);
   hM_bin42->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin42->GetXaxis()->SetLabelFont(42);
   hM_bin42->GetXaxis()->SetLabelSize(0.035);
   hM_bin42->GetXaxis()->SetTitleSize(0.035);
   hM_bin42->GetXaxis()->SetTitleFont(42);
   hM_bin42->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin42->GetYaxis()->SetLabelFont(42);
   hM_bin42->GetYaxis()->SetLabelSize(0.035);
   hM_bin42->GetYaxis()->SetTitleSize(0.035);
   hM_bin42->GetYaxis()->SetTitleFont(42);
   hM_bin42->GetZaxis()->SetLabelFont(42);
   hM_bin42->GetZaxis()->SetLabelSize(0.035);
   hM_bin42->GetZaxis()->SetTitleSize(0.035);
   hM_bin42->GetZaxis()->SetTitleFont(42);
   hM_bin42->Draw("e");
   
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
   fmb->SetParameter(0,-75.31323);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1535.801);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-3.002637e-06);
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
   fpeak->SetParameter(0,633.4785);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1317783);
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
