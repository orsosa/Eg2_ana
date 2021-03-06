{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 16:06:31 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-289.998,0.350906,2609.981);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin18 = new TH1F("hM_bin18","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin18->SetBinContent(0,3052);
   hM_bin18->SetBinContent(13,19);
   hM_bin18->SetBinContent(14,61);
   hM_bin18->SetBinContent(15,79);
   hM_bin18->SetBinContent(16,76);
   hM_bin18->SetBinContent(17,59);
   hM_bin18->SetBinContent(18,61);
   hM_bin18->SetBinContent(19,45);
   hM_bin18->SetBinContent(20,70);
   hM_bin18->SetBinContent(21,57);
   hM_bin18->SetBinContent(22,67);
   hM_bin18->SetBinContent(23,88);
   hM_bin18->SetBinContent(24,75);
   hM_bin18->SetBinContent(25,90);
   hM_bin18->SetBinContent(26,105);
   hM_bin18->SetBinContent(27,91);
   hM_bin18->SetBinContent(28,101);
   hM_bin18->SetBinContent(29,115);
   hM_bin18->SetBinContent(30,123);
   hM_bin18->SetBinContent(31,164);
   hM_bin18->SetBinContent(32,153);
   hM_bin18->SetBinContent(33,178);
   hM_bin18->SetBinContent(34,203);
   hM_bin18->SetBinContent(35,238);
   hM_bin18->SetBinContent(36,266);
   hM_bin18->SetBinContent(37,325);
   hM_bin18->SetBinContent(38,372);
   hM_bin18->SetBinContent(39,463);
   hM_bin18->SetBinContent(40,635);
   hM_bin18->SetBinContent(41,805);
   hM_bin18->SetBinContent(42,1010);
   hM_bin18->SetBinContent(43,1197);
   hM_bin18->SetBinContent(44,1422);
   hM_bin18->SetBinContent(45,1676);
   hM_bin18->SetBinContent(46,1863);
   hM_bin18->SetBinContent(47,2061);
   hM_bin18->SetBinContent(48,2163);
   hM_bin18->SetBinContent(49,2100);
   hM_bin18->SetBinContent(50,2070);
   hM_bin18->SetBinContent(51,1898);
   hM_bin18->SetBinContent(52,1796);
   hM_bin18->SetBinContent(53,1646);
   hM_bin18->SetBinContent(54,1339);
   hM_bin18->SetBinContent(55,1217);
   hM_bin18->SetBinContent(56,1079);
   hM_bin18->SetBinContent(57,945);
   hM_bin18->SetBinContent(58,818);
   hM_bin18->SetBinContent(59,809);
   hM_bin18->SetBinContent(60,730);
   hM_bin18->SetBinContent(61,690);
   hM_bin18->SetBinContent(62,615);
   hM_bin18->SetBinContent(63,641);
   hM_bin18->SetBinContent(64,628);
   hM_bin18->SetBinContent(65,631);
   hM_bin18->SetBinContent(66,655);
   hM_bin18->SetBinContent(67,636);
   hM_bin18->SetBinContent(68,633);
   hM_bin18->SetBinContent(69,676);
   hM_bin18->SetBinContent(70,744);
   hM_bin18->SetBinContent(71,623);
   hM_bin18->SetBinContent(72,695);
   hM_bin18->SetBinContent(73,651);
   hM_bin18->SetBinContent(74,671);
   hM_bin18->SetBinContent(75,684);
   hM_bin18->SetBinContent(76,706);
   hM_bin18->SetBinContent(77,707);
   hM_bin18->SetBinContent(78,651);
   hM_bin18->SetBinContent(79,701);
   hM_bin18->SetBinContent(80,701);
   hM_bin18->SetBinContent(81,746);
   hM_bin18->SetBinContent(82,728);
   hM_bin18->SetBinContent(83,746);
   hM_bin18->SetBinContent(84,741);
   hM_bin18->SetBinContent(85,787);
   hM_bin18->SetBinContent(86,727);
   hM_bin18->SetBinContent(87,810);
   hM_bin18->SetBinContent(88,797);
   hM_bin18->SetBinContent(89,772);
   hM_bin18->SetBinContent(90,785);
   hM_bin18->SetBinContent(91,767);
   hM_bin18->SetBinContent(92,786);
   hM_bin18->SetBinContent(93,772);
   hM_bin18->SetBinContent(94,871);
   hM_bin18->SetBinContent(95,827);
   hM_bin18->SetBinContent(96,857);
   hM_bin18->SetBinContent(97,832);
   hM_bin18->SetBinContent(98,828);
   hM_bin18->SetBinContent(99,806);
   hM_bin18->SetBinContent(100,835);
   hM_bin18->SetBinContent(101,96267);
   hM_bin18->SetEntries(161501);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07148375,0.1874172);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(168.1161);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-184.3817);
   fsig->SetParError(0,14.90669);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,4006.809);
   fsig->SetParError(1,131.5783);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-2.922625e-07);
   fsig->SetParError(2,429.2565);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,1662.295);
   fsig->SetParError(3,16.57286);
   fsig->SetParLimits(3,0,4326);
   fsig->SetParameter(4,0.1293886);
   fsig->SetParError(4,0.0001914873);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,1.045451e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin18->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin18");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 161501 ");
   text = ptstats->AddText("Mean  = 0.1801");
   text = ptstats->AddText("RMS   = 0.06761");
   text = ptstats->AddText("#chi^{2} / ndf = 168.1 / 28");
   text = ptstats->AddText("p0       = -184.4 #pm 14.9 ");
   text = ptstats->AddText("p1       =  4007 #pm 131.6 ");
   text = ptstats->AddText("p2       = -2.923e-07 #pm 4.293e+02 ");
   text = ptstats->AddText("p3       =  1662 #pm 16.6 ");
   text = ptstats->AddText("p4       = 0.1294 #pm 0.0002 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00001 ");
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
   fmb->SetParameter(0,-184.3817);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,4006.809);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-2.922625e-07);
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
   fpeak->SetParameter(0,1662.295);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1293886);
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
