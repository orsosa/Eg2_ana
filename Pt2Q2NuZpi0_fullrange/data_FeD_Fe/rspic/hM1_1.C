{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:38:51 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-251.7771,0.350906,2265.993);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin1 = new TH1F("hM_bin1","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin1->SetBinContent(13,1);
   hM_bin1->SetBinContent(14,26);
   hM_bin1->SetBinContent(15,57);
   hM_bin1->SetBinContent(16,65);
   hM_bin1->SetBinContent(17,103);
   hM_bin1->SetBinContent(18,83);
   hM_bin1->SetBinContent(19,155);
   hM_bin1->SetBinContent(20,136);
   hM_bin1->SetBinContent(21,174);
   hM_bin1->SetBinContent(22,179);
   hM_bin1->SetBinContent(23,157);
   hM_bin1->SetBinContent(24,193);
   hM_bin1->SetBinContent(25,166);
   hM_bin1->SetBinContent(26,198);
   hM_bin1->SetBinContent(27,199);
   hM_bin1->SetBinContent(28,244);
   hM_bin1->SetBinContent(29,278);
   hM_bin1->SetBinContent(30,224);
   hM_bin1->SetBinContent(31,271);
   hM_bin1->SetBinContent(32,268);
   hM_bin1->SetBinContent(33,276);
   hM_bin1->SetBinContent(34,284);
   hM_bin1->SetBinContent(35,303);
   hM_bin1->SetBinContent(36,316);
   hM_bin1->SetBinContent(37,365);
   hM_bin1->SetBinContent(38,461);
   hM_bin1->SetBinContent(39,568);
   hM_bin1->SetBinContent(40,626);
   hM_bin1->SetBinContent(41,846);
   hM_bin1->SetBinContent(42,977);
   hM_bin1->SetBinContent(43,1104);
   hM_bin1->SetBinContent(44,1301);
   hM_bin1->SetBinContent(45,1508);
   hM_bin1->SetBinContent(46,1658);
   hM_bin1->SetBinContent(47,1862);
   hM_bin1->SetBinContent(48,1843);
   hM_bin1->SetBinContent(49,1875);
   hM_bin1->SetBinContent(50,1827);
   hM_bin1->SetBinContent(51,1739);
   hM_bin1->SetBinContent(52,1623);
   hM_bin1->SetBinContent(53,1358);
   hM_bin1->SetBinContent(54,1248);
   hM_bin1->SetBinContent(55,990);
   hM_bin1->SetBinContent(56,889);
   hM_bin1->SetBinContent(57,755);
   hM_bin1->SetBinContent(58,610);
   hM_bin1->SetBinContent(59,553);
   hM_bin1->SetBinContent(60,444);
   hM_bin1->SetBinContent(61,474);
   hM_bin1->SetBinContent(62,375);
   hM_bin1->SetBinContent(63,355);
   hM_bin1->SetBinContent(64,383);
   hM_bin1->SetBinContent(65,320);
   hM_bin1->SetBinContent(66,290);
   hM_bin1->SetBinContent(67,310);
   hM_bin1->SetBinContent(68,283);
   hM_bin1->SetBinContent(69,278);
   hM_bin1->SetBinContent(70,289);
   hM_bin1->SetBinContent(71,298);
   hM_bin1->SetBinContent(72,280);
   hM_bin1->SetBinContent(73,249);
   hM_bin1->SetBinContent(74,281);
   hM_bin1->SetBinContent(75,304);
   hM_bin1->SetBinContent(76,250);
   hM_bin1->SetBinContent(77,260);
   hM_bin1->SetBinContent(78,261);
   hM_bin1->SetBinContent(79,243);
   hM_bin1->SetBinContent(80,247);
   hM_bin1->SetBinContent(81,247);
   hM_bin1->SetBinContent(82,294);
   hM_bin1->SetBinContent(83,229);
   hM_bin1->SetBinContent(84,211);
   hM_bin1->SetBinContent(85,217);
   hM_bin1->SetBinContent(86,280);
   hM_bin1->SetBinContent(87,247);
   hM_bin1->SetBinContent(88,231);
   hM_bin1->SetBinContent(89,208);
   hM_bin1->SetBinContent(90,230);
   hM_bin1->SetBinContent(91,219);
   hM_bin1->SetBinContent(92,218);
   hM_bin1->SetBinContent(93,192);
   hM_bin1->SetBinContent(94,192);
   hM_bin1->SetBinContent(95,240);
   hM_bin1->SetBinContent(96,207);
   hM_bin1->SetBinContent(97,230);
   hM_bin1->SetBinContent(98,192);
   hM_bin1->SetBinContent(99,211);
   hM_bin1->SetBinContent(100,195);
   hM_bin1->SetBinContent(101,11620);
   hM_bin1->SetEntries(53526);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07123289,0.1871663);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(88.20661);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,161.9592);
   fsig->SetParError(0,15.79714);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,709.2299);
   fsig->SetParError(1,121.0719);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-6.815972e-06);
   fsig->SetParError(2,650.0925);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,1548.483);
   fsig->SetParError(3,15.34086);
   fsig->SetParLimits(3,0,3750);
   fsig->SetParameter(4,0.1290328);
   fsig->SetParError(4,0.0002004708);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,1.688578e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin1->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin1");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 53526  ");
   text = ptstats->AddText("Mean  = 0.1473");
   text = ptstats->AddText("RMS   = 0.05927");
   text = ptstats->AddText("#chi^{2} / ndf = 88.21 / 28");
   text = ptstats->AddText("p0       =   162 #pm 15.8 ");
   text = ptstats->AddText("p1       = 709.2 #pm 121.1 ");
   text = ptstats->AddText("p2       = -6.816e-06 #pm 6.501e+02 ");
   text = ptstats->AddText("p3       =  1548 #pm 15.3 ");
   text = ptstats->AddText("p4       = 0.129 #pm 0.000 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00002 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin1);

   ci = TColor::GetColor("#0000ff");
   hM_bin1->SetMarkerColor(ci);
   hM_bin1->SetMarkerStyle(24);
   hM_bin1->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin1->GetXaxis()->SetLabelFont(42);
   hM_bin1->GetXaxis()->SetLabelSize(0.035);
   hM_bin1->GetXaxis()->SetTitleSize(0.035);
   hM_bin1->GetXaxis()->SetTitleFont(42);
   hM_bin1->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin1->GetYaxis()->SetLabelFont(42);
   hM_bin1->GetYaxis()->SetLabelSize(0.035);
   hM_bin1->GetYaxis()->SetTitleSize(0.035);
   hM_bin1->GetYaxis()->SetTitleFont(42);
   hM_bin1->GetZaxis()->SetLabelFont(42);
   hM_bin1->GetZaxis()->SetLabelSize(0.035);
   hM_bin1->GetZaxis()->SetTitleSize(0.035);
   hM_bin1->GetZaxis()->SetTitleFont(42);
   hM_bin1->Draw("e");
   
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
   fmb->SetParameter(0,161.9592);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,709.2299);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-6.815972e-06);
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
   fpeak->SetParameter(0,1548.483);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1290328);
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
