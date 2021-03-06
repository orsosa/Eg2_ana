{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue May  9 16:28:50 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-138.7333,0.350906,1248.6);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin14 = new TH1F("hM_bin14","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin14->SetBinContent(14,8);
   hM_bin14->SetBinContent(15,25);
   hM_bin14->SetBinContent(16,45);
   hM_bin14->SetBinContent(17,57);
   hM_bin14->SetBinContent(18,53);
   hM_bin14->SetBinContent(19,66);
   hM_bin14->SetBinContent(20,90);
   hM_bin14->SetBinContent(21,92);
   hM_bin14->SetBinContent(22,106);
   hM_bin14->SetBinContent(23,110);
   hM_bin14->SetBinContent(24,144);
   hM_bin14->SetBinContent(25,135);
   hM_bin14->SetBinContent(26,135);
   hM_bin14->SetBinContent(27,152);
   hM_bin14->SetBinContent(28,158);
   hM_bin14->SetBinContent(29,142);
   hM_bin14->SetBinContent(30,166);
   hM_bin14->SetBinContent(31,149);
   hM_bin14->SetBinContent(32,167);
   hM_bin14->SetBinContent(33,207);
   hM_bin14->SetBinContent(34,195);
   hM_bin14->SetBinContent(35,196);
   hM_bin14->SetBinContent(36,232);
   hM_bin14->SetBinContent(37,227);
   hM_bin14->SetBinContent(38,286);
   hM_bin14->SetBinContent(39,305);
   hM_bin14->SetBinContent(40,353);
   hM_bin14->SetBinContent(41,386);
   hM_bin14->SetBinContent(42,472);
   hM_bin14->SetBinContent(43,557);
   hM_bin14->SetBinContent(44,633);
   hM_bin14->SetBinContent(45,699);
   hM_bin14->SetBinContent(46,906);
   hM_bin14->SetBinContent(47,996);
   hM_bin14->SetBinContent(48,1012);
   hM_bin14->SetBinContent(49,1025);
   hM_bin14->SetBinContent(50,1012);
   hM_bin14->SetBinContent(51,1014);
   hM_bin14->SetBinContent(52,873);
   hM_bin14->SetBinContent(53,976);
   hM_bin14->SetBinContent(54,755);
   hM_bin14->SetBinContent(55,667);
   hM_bin14->SetBinContent(56,660);
   hM_bin14->SetBinContent(57,549);
   hM_bin14->SetBinContent(58,453);
   hM_bin14->SetBinContent(59,384);
   hM_bin14->SetBinContent(60,336);
   hM_bin14->SetBinContent(61,306);
   hM_bin14->SetBinContent(62,294);
   hM_bin14->SetBinContent(63,288);
   hM_bin14->SetBinContent(64,299);
   hM_bin14->SetBinContent(65,225);
   hM_bin14->SetBinContent(66,242);
   hM_bin14->SetBinContent(67,190);
   hM_bin14->SetBinContent(68,223);
   hM_bin14->SetBinContent(69,188);
   hM_bin14->SetBinContent(70,218);
   hM_bin14->SetBinContent(71,223);
   hM_bin14->SetBinContent(72,205);
   hM_bin14->SetBinContent(73,174);
   hM_bin14->SetBinContent(74,211);
   hM_bin14->SetBinContent(75,203);
   hM_bin14->SetBinContent(76,209);
   hM_bin14->SetBinContent(77,204);
   hM_bin14->SetBinContent(78,193);
   hM_bin14->SetBinContent(79,222);
   hM_bin14->SetBinContent(80,187);
   hM_bin14->SetBinContent(81,199);
   hM_bin14->SetBinContent(82,184);
   hM_bin14->SetBinContent(83,169);
   hM_bin14->SetBinContent(84,169);
   hM_bin14->SetBinContent(85,180);
   hM_bin14->SetBinContent(86,185);
   hM_bin14->SetBinContent(87,180);
   hM_bin14->SetBinContent(88,154);
   hM_bin14->SetBinContent(89,146);
   hM_bin14->SetBinContent(90,155);
   hM_bin14->SetBinContent(91,169);
   hM_bin14->SetBinContent(92,169);
   hM_bin14->SetBinContent(93,154);
   hM_bin14->SetBinContent(94,163);
   hM_bin14->SetBinContent(95,206);
   hM_bin14->SetBinContent(96,158);
   hM_bin14->SetBinContent(97,129);
   hM_bin14->SetBinContent(98,140);
   hM_bin14->SetBinContent(99,154);
   hM_bin14->SetBinContent(100,143);
   hM_bin14->SetBinContent(101,9805);
   hM_bin14->SetEntries(35981);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07466278,0.1905962);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(76.76539);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,139.768);
   fsig->SetParError(0,13.66182);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,437.1515);
   fsig->SetParError(1,101.7172);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-3.03386e-06);
   fsig->SetParError(2,937.4059);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,801.7172);
   fsig->SetParError(3,11.85569);
   fsig->SetParLimits(3,0,2050);
   fsig->SetParameter(4,0.1325362);
   fsig->SetParError(4,0.0003025315);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,4.252942e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin14->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin14");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 35981  ");
   text = ptstats->AddText("Mean  = 0.1532");
   text = ptstats->AddText("RMS   = 0.06194");
   text = ptstats->AddText("#chi^{2} / ndf = 76.77 / 28");
   text = ptstats->AddText("p0       = 139.8 #pm 13.7 ");
   text = ptstats->AddText("p1       = 437.2 #pm 101.7 ");
   text = ptstats->AddText("p2       = -3.034e-06 #pm 9.374e+02 ");
   text = ptstats->AddText("p3       = 801.7 #pm 11.9 ");
   text = ptstats->AddText("p4       = 0.1325 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00004 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin14->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin14);

   ci = TColor::GetColor("#0000ff");
   hM_bin14->SetMarkerColor(ci);
   hM_bin14->SetMarkerStyle(24);
   hM_bin14->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin14->GetXaxis()->SetLabelFont(42);
   hM_bin14->GetXaxis()->SetLabelSize(0.035);
   hM_bin14->GetXaxis()->SetTitleSize(0.035);
   hM_bin14->GetXaxis()->SetTitleFont(42);
   hM_bin14->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin14->GetYaxis()->SetLabelFont(42);
   hM_bin14->GetYaxis()->SetLabelSize(0.035);
   hM_bin14->GetYaxis()->SetTitleSize(0.035);
   hM_bin14->GetYaxis()->SetTitleFont(42);
   hM_bin14->GetZaxis()->SetLabelFont(42);
   hM_bin14->GetZaxis()->SetLabelSize(0.035);
   hM_bin14->GetZaxis()->SetTitleSize(0.035);
   hM_bin14->GetZaxis()->SetTitleFont(42);
   hM_bin14->Draw("e");
   
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
   fmb->SetParameter(0,139.768);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,437.1515);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-3.03386e-06);
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
   fpeak->SetParameter(0,801.7172);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1325362);
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
