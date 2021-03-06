{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:27:06 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-25.24976,0.350906,227.2478);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin34 = new TH1F("hM_bin34","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin34->SetBinContent(15,9);
   hM_bin34->SetBinContent(16,9);
   hM_bin34->SetBinContent(17,11);
   hM_bin34->SetBinContent(18,14);
   hM_bin34->SetBinContent(19,12);
   hM_bin34->SetBinContent(20,10);
   hM_bin34->SetBinContent(21,16);
   hM_bin34->SetBinContent(22,24);
   hM_bin34->SetBinContent(23,22);
   hM_bin34->SetBinContent(24,31);
   hM_bin34->SetBinContent(25,27);
   hM_bin34->SetBinContent(26,40);
   hM_bin34->SetBinContent(27,28);
   hM_bin34->SetBinContent(28,24);
   hM_bin34->SetBinContent(29,28);
   hM_bin34->SetBinContent(30,30);
   hM_bin34->SetBinContent(31,36);
   hM_bin34->SetBinContent(32,43);
   hM_bin34->SetBinContent(33,31);
   hM_bin34->SetBinContent(34,27);
   hM_bin34->SetBinContent(35,40);
   hM_bin34->SetBinContent(36,36);
   hM_bin34->SetBinContent(37,41);
   hM_bin34->SetBinContent(38,39);
   hM_bin34->SetBinContent(39,44);
   hM_bin34->SetBinContent(40,58);
   hM_bin34->SetBinContent(41,53);
   hM_bin34->SetBinContent(42,51);
   hM_bin34->SetBinContent(43,96);
   hM_bin34->SetBinContent(44,88);
   hM_bin34->SetBinContent(45,106);
   hM_bin34->SetBinContent(46,108);
   hM_bin34->SetBinContent(47,144);
   hM_bin34->SetBinContent(48,171);
   hM_bin34->SetBinContent(49,159);
   hM_bin34->SetBinContent(50,151);
   hM_bin34->SetBinContent(51,179);
   hM_bin34->SetBinContent(52,162);
   hM_bin34->SetBinContent(53,172);
   hM_bin34->SetBinContent(54,144);
   hM_bin34->SetBinContent(55,147);
   hM_bin34->SetBinContent(56,141);
   hM_bin34->SetBinContent(57,129);
   hM_bin34->SetBinContent(58,109);
   hM_bin34->SetBinContent(59,86);
   hM_bin34->SetBinContent(60,83);
   hM_bin34->SetBinContent(61,90);
   hM_bin34->SetBinContent(62,52);
   hM_bin34->SetBinContent(63,67);
   hM_bin34->SetBinContent(64,46);
   hM_bin34->SetBinContent(65,48);
   hM_bin34->SetBinContent(66,42);
   hM_bin34->SetBinContent(67,49);
   hM_bin34->SetBinContent(68,49);
   hM_bin34->SetBinContent(69,41);
   hM_bin34->SetBinContent(70,40);
   hM_bin34->SetBinContent(71,45);
   hM_bin34->SetBinContent(72,31);
   hM_bin34->SetBinContent(73,40);
   hM_bin34->SetBinContent(74,29);
   hM_bin34->SetBinContent(75,35);
   hM_bin34->SetBinContent(76,36);
   hM_bin34->SetBinContent(77,18);
   hM_bin34->SetBinContent(78,42);
   hM_bin34->SetBinContent(79,20);
   hM_bin34->SetBinContent(80,40);
   hM_bin34->SetBinContent(81,30);
   hM_bin34->SetBinContent(82,31);
   hM_bin34->SetBinContent(83,24);
   hM_bin34->SetBinContent(84,13);
   hM_bin34->SetBinContent(85,22);
   hM_bin34->SetBinContent(86,22);
   hM_bin34->SetBinContent(87,22);
   hM_bin34->SetBinContent(88,25);
   hM_bin34->SetBinContent(89,24);
   hM_bin34->SetBinContent(90,32);
   hM_bin34->SetBinContent(91,22);
   hM_bin34->SetBinContent(92,33);
   hM_bin34->SetBinContent(93,23);
   hM_bin34->SetBinContent(94,18);
   hM_bin34->SetBinContent(95,22);
   hM_bin34->SetBinContent(96,19);
   hM_bin34->SetBinContent(97,24);
   hM_bin34->SetBinContent(98,27);
   hM_bin34->SetBinContent(99,19);
   hM_bin34->SetBinContent(100,17);
   hM_bin34->SetBinContent(101,1270);
   hM_bin34->SetEntries(5808);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.0808401,0.1967735);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(31.61338);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,27.00787);
   fsig->SetParError(0,6.282729);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,78.6267);
   fsig->SetParError(1,44.12746);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-7.734854e-06);
   fsig->SetParError(2,1599.44);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,132.7106);
   fsig->SetParError(3,4.931786);
   fsig->SetParLimits(3,0,358);
   fsig->SetParameter(4,0.1387556);
   fsig->SetParError(4,0.0007963988);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.001089772);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin34->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin34");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 5808   ");
   text = ptstats->AddText("Mean  = 0.1515");
   text = ptstats->AddText("RMS   = 0.05978");
   text = ptstats->AddText("#chi^{2} / ndf = 31.61 / 28");
   text = ptstats->AddText("p0       = 27.01 #pm 6.28 ");
   text = ptstats->AddText("p1       = 78.63 #pm 44.13 ");
   text = ptstats->AddText("p2       = -7.735e-06 #pm 1.599e+03 ");
   text = ptstats->AddText("p3       = 132.7 #pm 4.9 ");
   text = ptstats->AddText("p4       = 0.1388 #pm 0.0008 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00109 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin34->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin34);

   ci = TColor::GetColor("#0000ff");
   hM_bin34->SetMarkerColor(ci);
   hM_bin34->SetMarkerStyle(24);
   hM_bin34->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin34->GetXaxis()->SetLabelFont(42);
   hM_bin34->GetXaxis()->SetLabelSize(0.035);
   hM_bin34->GetXaxis()->SetTitleSize(0.035);
   hM_bin34->GetXaxis()->SetTitleFont(42);
   hM_bin34->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin34->GetYaxis()->SetLabelFont(42);
   hM_bin34->GetYaxis()->SetLabelSize(0.035);
   hM_bin34->GetYaxis()->SetTitleSize(0.035);
   hM_bin34->GetYaxis()->SetTitleFont(42);
   hM_bin34->GetZaxis()->SetLabelFont(42);
   hM_bin34->GetZaxis()->SetLabelSize(0.035);
   hM_bin34->GetZaxis()->SetTitleSize(0.035);
   hM_bin34->GetZaxis()->SetTitleFont(42);
   hM_bin34->Draw("e");
   
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
   fmb->SetParameter(0,27.00787);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,78.6267);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-7.734854e-06);
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
   fpeak->SetParameter(0,132.7106);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1387556);
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
