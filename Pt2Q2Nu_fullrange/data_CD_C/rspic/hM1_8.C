{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 14:53:50 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-54.85593,0.350906,493.7034);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin8 = new TH1F("hM_bin8","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin8->SetBinContent(0,1477);
   hM_bin8->SetBinContent(13,3);
   hM_bin8->SetBinContent(14,7);
   hM_bin8->SetBinContent(15,10);
   hM_bin8->SetBinContent(16,10);
   hM_bin8->SetBinContent(17,11);
   hM_bin8->SetBinContent(18,10);
   hM_bin8->SetBinContent(19,13);
   hM_bin8->SetBinContent(20,6);
   hM_bin8->SetBinContent(21,11);
   hM_bin8->SetBinContent(22,14);
   hM_bin8->SetBinContent(23,7);
   hM_bin8->SetBinContent(24,8);
   hM_bin8->SetBinContent(25,12);
   hM_bin8->SetBinContent(26,11);
   hM_bin8->SetBinContent(27,9);
   hM_bin8->SetBinContent(28,8);
   hM_bin8->SetBinContent(29,19);
   hM_bin8->SetBinContent(30,23);
   hM_bin8->SetBinContent(31,17);
   hM_bin8->SetBinContent(32,11);
   hM_bin8->SetBinContent(33,12);
   hM_bin8->SetBinContent(34,21);
   hM_bin8->SetBinContent(35,23);
   hM_bin8->SetBinContent(36,26);
   hM_bin8->SetBinContent(37,28);
   hM_bin8->SetBinContent(38,40);
   hM_bin8->SetBinContent(39,41);
   hM_bin8->SetBinContent(40,42);
   hM_bin8->SetBinContent(41,59);
   hM_bin8->SetBinContent(42,68);
   hM_bin8->SetBinContent(43,118);
   hM_bin8->SetBinContent(44,147);
   hM_bin8->SetBinContent(45,175);
   hM_bin8->SetBinContent(46,196);
   hM_bin8->SetBinContent(47,273);
   hM_bin8->SetBinContent(48,322);
   hM_bin8->SetBinContent(49,340);
   hM_bin8->SetBinContent(50,379);
   hM_bin8->SetBinContent(51,372);
   hM_bin8->SetBinContent(52,398);
   hM_bin8->SetBinContent(53,334);
   hM_bin8->SetBinContent(54,336);
   hM_bin8->SetBinContent(55,299);
   hM_bin8->SetBinContent(56,270);
   hM_bin8->SetBinContent(57,239);
   hM_bin8->SetBinContent(58,228);
   hM_bin8->SetBinContent(59,190);
   hM_bin8->SetBinContent(60,175);
   hM_bin8->SetBinContent(61,136);
   hM_bin8->SetBinContent(62,141);
   hM_bin8->SetBinContent(63,119);
   hM_bin8->SetBinContent(64,114);
   hM_bin8->SetBinContent(65,116);
   hM_bin8->SetBinContent(66,97);
   hM_bin8->SetBinContent(67,96);
   hM_bin8->SetBinContent(68,81);
   hM_bin8->SetBinContent(69,100);
   hM_bin8->SetBinContent(70,89);
   hM_bin8->SetBinContent(71,95);
   hM_bin8->SetBinContent(72,82);
   hM_bin8->SetBinContent(73,75);
   hM_bin8->SetBinContent(74,73);
   hM_bin8->SetBinContent(75,76);
   hM_bin8->SetBinContent(76,76);
   hM_bin8->SetBinContent(77,80);
   hM_bin8->SetBinContent(78,74);
   hM_bin8->SetBinContent(79,87);
   hM_bin8->SetBinContent(80,81);
   hM_bin8->SetBinContent(81,76);
   hM_bin8->SetBinContent(82,80);
   hM_bin8->SetBinContent(83,88);
   hM_bin8->SetBinContent(84,76);
   hM_bin8->SetBinContent(85,92);
   hM_bin8->SetBinContent(86,58);
   hM_bin8->SetBinContent(87,81);
   hM_bin8->SetBinContent(88,75);
   hM_bin8->SetBinContent(89,101);
   hM_bin8->SetBinContent(90,90);
   hM_bin8->SetBinContent(91,72);
   hM_bin8->SetBinContent(92,97);
   hM_bin8->SetBinContent(93,79);
   hM_bin8->SetBinContent(94,95);
   hM_bin8->SetBinContent(95,73);
   hM_bin8->SetBinContent(96,91);
   hM_bin8->SetBinContent(97,74);
   hM_bin8->SetBinContent(98,85);
   hM_bin8->SetBinContent(99,84);
   hM_bin8->SetBinContent(100,90);
   hM_bin8->SetBinContent(101,18629);
   hM_bin8->SetEntries(29022);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08235754,0.198291);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(54.13912);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-45.82752);
   fsig->SetParError(0,7.207136);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,674.1111);
   fsig->SetParError(1,55.78733);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-5.231395e-07);
   fsig->SetParError(2,598.2477);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,309.172);
   fsig->SetParError(3,6.893238);
   fsig->SetParLimits(3,0,796);
   fsig->SetParameter(4,0.1397354);
   fsig->SetParError(4,0.0004428895);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,7.15116e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin8->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin8");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 29022  ");
   text = ptstats->AddText("Mean  = 0.1733");
   text = ptstats->AddText("RMS   = 0.06007");
   text = ptstats->AddText("#chi^{2} / ndf = 54.14 / 27");
   text = ptstats->AddText("p0       = -45.83 #pm 7.21 ");
   text = ptstats->AddText("p1       = 674.1 #pm 55.8 ");
   text = ptstats->AddText("p2       = -5.231e-07 #pm 5.982e+02 ");
   text = ptstats->AddText("p3       = 309.2 #pm 6.9 ");
   text = ptstats->AddText("p4       = 0.1397 #pm 0.0004 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00007 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin8->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin8);

   ci = TColor::GetColor("#0000ff");
   hM_bin8->SetMarkerColor(ci);
   hM_bin8->SetMarkerStyle(24);
   hM_bin8->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin8->GetXaxis()->SetLabelFont(42);
   hM_bin8->GetXaxis()->SetLabelSize(0.035);
   hM_bin8->GetXaxis()->SetTitleSize(0.035);
   hM_bin8->GetXaxis()->SetTitleFont(42);
   hM_bin8->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin8->GetYaxis()->SetLabelFont(42);
   hM_bin8->GetYaxis()->SetLabelSize(0.035);
   hM_bin8->GetYaxis()->SetTitleSize(0.035);
   hM_bin8->GetYaxis()->SetTitleFont(42);
   hM_bin8->GetZaxis()->SetLabelFont(42);
   hM_bin8->GetZaxis()->SetLabelSize(0.035);
   hM_bin8->GetZaxis()->SetTitleSize(0.035);
   hM_bin8->GetZaxis()->SetTitleFont(42);
   hM_bin8->Draw("e");
   
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
   fmb->SetParameter(0,-45.82752);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,674.1111);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-5.231395e-07);
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
   fpeak->SetParameter(0,309.172);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1397354);
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
