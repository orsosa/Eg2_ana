{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 14:51:20 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-315.1979,0.350906,2836.781);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin7 = new TH1F("hM_bin7","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin7->SetBinContent(0,3425);
   hM_bin7->SetBinContent(12,4);
   hM_bin7->SetBinContent(13,33);
   hM_bin7->SetBinContent(14,71);
   hM_bin7->SetBinContent(15,86);
   hM_bin7->SetBinContent(16,71);
   hM_bin7->SetBinContent(17,78);
   hM_bin7->SetBinContent(18,89);
   hM_bin7->SetBinContent(19,69);
   hM_bin7->SetBinContent(20,71);
   hM_bin7->SetBinContent(21,101);
   hM_bin7->SetBinContent(22,94);
   hM_bin7->SetBinContent(23,115);
   hM_bin7->SetBinContent(24,106);
   hM_bin7->SetBinContent(25,129);
   hM_bin7->SetBinContent(26,131);
   hM_bin7->SetBinContent(27,117);
   hM_bin7->SetBinContent(28,142);
   hM_bin7->SetBinContent(29,185);
   hM_bin7->SetBinContent(30,159);
   hM_bin7->SetBinContent(31,163);
   hM_bin7->SetBinContent(32,212);
   hM_bin7->SetBinContent(33,211);
   hM_bin7->SetBinContent(34,248);
   hM_bin7->SetBinContent(35,288);
   hM_bin7->SetBinContent(36,260);
   hM_bin7->SetBinContent(37,350);
   hM_bin7->SetBinContent(38,387);
   hM_bin7->SetBinContent(39,459);
   hM_bin7->SetBinContent(40,605);
   hM_bin7->SetBinContent(41,721);
   hM_bin7->SetBinContent(42,861);
   hM_bin7->SetBinContent(43,1112);
   hM_bin7->SetBinContent(44,1341);
   hM_bin7->SetBinContent(45,1550);
   hM_bin7->SetBinContent(46,1804);
   hM_bin7->SetBinContent(47,2041);
   hM_bin7->SetBinContent(48,2221);
   hM_bin7->SetBinContent(49,2332);
   hM_bin7->SetBinContent(50,2353);
   hM_bin7->SetBinContent(51,2310);
   hM_bin7->SetBinContent(52,2226);
   hM_bin7->SetBinContent(53,2110);
   hM_bin7->SetBinContent(54,1874);
   hM_bin7->SetBinContent(55,1691);
   hM_bin7->SetBinContent(56,1517);
   hM_bin7->SetBinContent(57,1356);
   hM_bin7->SetBinContent(58,1172);
   hM_bin7->SetBinContent(59,1006);
   hM_bin7->SetBinContent(60,896);
   hM_bin7->SetBinContent(61,836);
   hM_bin7->SetBinContent(62,816);
   hM_bin7->SetBinContent(63,677);
   hM_bin7->SetBinContent(64,698);
   hM_bin7->SetBinContent(65,662);
   hM_bin7->SetBinContent(66,609);
   hM_bin7->SetBinContent(67,656);
   hM_bin7->SetBinContent(68,562);
   hM_bin7->SetBinContent(69,628);
   hM_bin7->SetBinContent(70,641);
   hM_bin7->SetBinContent(71,610);
   hM_bin7->SetBinContent(72,636);
   hM_bin7->SetBinContent(73,600);
   hM_bin7->SetBinContent(74,629);
   hM_bin7->SetBinContent(75,566);
   hM_bin7->SetBinContent(76,556);
   hM_bin7->SetBinContent(77,584);
   hM_bin7->SetBinContent(78,592);
   hM_bin7->SetBinContent(79,596);
   hM_bin7->SetBinContent(80,562);
   hM_bin7->SetBinContent(81,571);
   hM_bin7->SetBinContent(82,549);
   hM_bin7->SetBinContent(83,603);
   hM_bin7->SetBinContent(84,601);
   hM_bin7->SetBinContent(85,600);
   hM_bin7->SetBinContent(86,527);
   hM_bin7->SetBinContent(87,597);
   hM_bin7->SetBinContent(88,572);
   hM_bin7->SetBinContent(89,569);
   hM_bin7->SetBinContent(90,606);
   hM_bin7->SetBinContent(91,587);
   hM_bin7->SetBinContent(92,565);
   hM_bin7->SetBinContent(93,586);
   hM_bin7->SetBinContent(94,585);
   hM_bin7->SetBinContent(95,625);
   hM_bin7->SetBinContent(96,569);
   hM_bin7->SetBinContent(97,611);
   hM_bin7->SetBinContent(98,584);
   hM_bin7->SetBinContent(99,583);
   hM_bin7->SetBinContent(100,623);
   hM_bin7->SetBinContent(101,86754);
   hM_bin7->SetEntries(152136);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07643191,0.1923653);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(70.56681);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-117.0172);
   fsig->SetParError(0,18.4412);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,3783.709);
   fsig->SetParError(1,142.4766);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-2.474324e-06);
   fsig->SetParError(2,926.5374);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,1894.825);
   fsig->SetParError(3,17.47744);
   fsig->SetParLimits(3,0,4706);
   fsig->SetParameter(4,0.1341455);
   fsig->SetParError(4,0.0001892148);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,1.992141e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin7->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin7");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 152136 ");
   text = ptstats->AddText("Mean  = 0.1701");
   text = ptstats->AddText("RMS   = 0.06355");
   text = ptstats->AddText("#chi^{2} / ndf = 70.57 / 28");
   text = ptstats->AddText("p0       =  -117 #pm 18.4 ");
   text = ptstats->AddText("p1       =  3784 #pm 142.5 ");
   text = ptstats->AddText("p2       = -2.474e-06 #pm 9.265e+02 ");
   text = ptstats->AddText("p3       =  1895 #pm 17.5 ");
   text = ptstats->AddText("p4       = 0.1341 #pm 0.0002 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00002 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin7->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin7);

   ci = TColor::GetColor("#0000ff");
   hM_bin7->SetMarkerColor(ci);
   hM_bin7->SetMarkerStyle(24);
   hM_bin7->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin7->GetXaxis()->SetLabelFont(42);
   hM_bin7->GetXaxis()->SetLabelSize(0.035);
   hM_bin7->GetXaxis()->SetTitleSize(0.035);
   hM_bin7->GetXaxis()->SetTitleFont(42);
   hM_bin7->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin7->GetYaxis()->SetLabelFont(42);
   hM_bin7->GetYaxis()->SetLabelSize(0.035);
   hM_bin7->GetYaxis()->SetTitleSize(0.035);
   hM_bin7->GetYaxis()->SetTitleFont(42);
   hM_bin7->GetZaxis()->SetLabelFont(42);
   hM_bin7->GetZaxis()->SetLabelSize(0.035);
   hM_bin7->GetZaxis()->SetTitleSize(0.035);
   hM_bin7->GetZaxis()->SetTitleFont(42);
   hM_bin7->Draw("e");
   
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
   fmb->SetParameter(0,-117.0172);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,3783.709);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-2.474324e-06);
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
   fpeak->SetParameter(0,1894.825);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1341455);
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
