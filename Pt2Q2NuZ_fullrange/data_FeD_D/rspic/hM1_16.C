{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 16:06:23 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-29.05711,0.350906,261.514);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin16 = new TH1F("hM_bin16","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin16->SetBinContent(0,2817);
   hM_bin16->SetBinContent(15,2);
   hM_bin16->SetBinContent(16,2);
   hM_bin16->SetBinContent(17,3);
   hM_bin16->SetBinContent(19,3);
   hM_bin16->SetBinContent(20,1);
   hM_bin16->SetBinContent(21,3);
   hM_bin16->SetBinContent(22,1);
   hM_bin16->SetBinContent(23,4);
   hM_bin16->SetBinContent(24,8);
   hM_bin16->SetBinContent(25,3);
   hM_bin16->SetBinContent(26,6);
   hM_bin16->SetBinContent(27,7);
   hM_bin16->SetBinContent(28,8);
   hM_bin16->SetBinContent(29,3);
   hM_bin16->SetBinContent(30,6);
   hM_bin16->SetBinContent(31,4);
   hM_bin16->SetBinContent(32,5);
   hM_bin16->SetBinContent(33,7);
   hM_bin16->SetBinContent(34,4);
   hM_bin16->SetBinContent(35,3);
   hM_bin16->SetBinContent(36,11);
   hM_bin16->SetBinContent(37,11);
   hM_bin16->SetBinContent(38,9);
   hM_bin16->SetBinContent(39,14);
   hM_bin16->SetBinContent(40,16);
   hM_bin16->SetBinContent(41,31);
   hM_bin16->SetBinContent(42,24);
   hM_bin16->SetBinContent(43,44);
   hM_bin16->SetBinContent(44,70);
   hM_bin16->SetBinContent(45,86);
   hM_bin16->SetBinContent(46,93);
   hM_bin16->SetBinContent(47,123);
   hM_bin16->SetBinContent(48,149);
   hM_bin16->SetBinContent(49,189);
   hM_bin16->SetBinContent(50,198);
   hM_bin16->SetBinContent(51,177);
   hM_bin16->SetBinContent(52,195);
   hM_bin16->SetBinContent(53,207);
   hM_bin16->SetBinContent(54,175);
   hM_bin16->SetBinContent(55,169);
   hM_bin16->SetBinContent(56,136);
   hM_bin16->SetBinContent(57,120);
   hM_bin16->SetBinContent(58,94);
   hM_bin16->SetBinContent(59,64);
   hM_bin16->SetBinContent(60,74);
   hM_bin16->SetBinContent(61,63);
   hM_bin16->SetBinContent(62,53);
   hM_bin16->SetBinContent(63,34);
   hM_bin16->SetBinContent(64,49);
   hM_bin16->SetBinContent(65,38);
   hM_bin16->SetBinContent(66,44);
   hM_bin16->SetBinContent(67,23);
   hM_bin16->SetBinContent(68,26);
   hM_bin16->SetBinContent(69,25);
   hM_bin16->SetBinContent(70,33);
   hM_bin16->SetBinContent(71,30);
   hM_bin16->SetBinContent(72,32);
   hM_bin16->SetBinContent(73,30);
   hM_bin16->SetBinContent(74,26);
   hM_bin16->SetBinContent(75,35);
   hM_bin16->SetBinContent(76,31);
   hM_bin16->SetBinContent(77,32);
   hM_bin16->SetBinContent(78,41);
   hM_bin16->SetBinContent(79,29);
   hM_bin16->SetBinContent(80,32);
   hM_bin16->SetBinContent(81,28);
   hM_bin16->SetBinContent(82,29);
   hM_bin16->SetBinContent(83,35);
   hM_bin16->SetBinContent(84,35);
   hM_bin16->SetBinContent(85,33);
   hM_bin16->SetBinContent(86,41);
   hM_bin16->SetBinContent(87,32);
   hM_bin16->SetBinContent(88,45);
   hM_bin16->SetBinContent(89,41);
   hM_bin16->SetBinContent(90,41);
   hM_bin16->SetBinContent(91,41);
   hM_bin16->SetBinContent(92,43);
   hM_bin16->SetBinContent(93,48);
   hM_bin16->SetBinContent(94,43);
   hM_bin16->SetBinContent(95,44);
   hM_bin16->SetBinContent(96,44);
   hM_bin16->SetBinContent(97,44);
   hM_bin16->SetBinContent(98,51);
   hM_bin16->SetBinContent(99,45);
   hM_bin16->SetBinContent(100,44);
   hM_bin16->SetBinContent(101,21385);
   hM_bin16->SetEntries(28277);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08265493,0.1985884);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(67.15818);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-15.80777);
   fsig->SetParError(0,4.258474);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,195.9878);
   fsig->SetParError(1,32.6846);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.584913e-06);
   fsig->SetParError(2,278.3018);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,168.2286);
   fsig->SetParError(3,4.661906);
   fsig->SetParLimits(3,0,414);
   fsig->SetParameter(4,0.1401211);
   fsig->SetParError(4,0.0005210881);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,6.172654e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin16->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin16");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 28277  ");
   text = ptstats->AddText("Mean  = 0.1743");
   text = ptstats->AddText("RMS   = 0.06008");
   text = ptstats->AddText("#chi^{2} / ndf = 67.16 / 27");
   text = ptstats->AddText("p0       = -15.81 #pm 4.26 ");
   text = ptstats->AddText("p1       =   196 #pm 32.7 ");
   text = ptstats->AddText("p2       = -1.585e-06 #pm 2.783e+02 ");
   text = ptstats->AddText("p3       = 168.2 #pm 4.7 ");
   text = ptstats->AddText("p4       = 0.1401 #pm 0.0005 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00006 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin16->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin16);

   ci = TColor::GetColor("#0000ff");
   hM_bin16->SetMarkerColor(ci);
   hM_bin16->SetMarkerStyle(24);
   hM_bin16->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin16->GetXaxis()->SetLabelFont(42);
   hM_bin16->GetXaxis()->SetLabelSize(0.035);
   hM_bin16->GetXaxis()->SetTitleSize(0.035);
   hM_bin16->GetXaxis()->SetTitleFont(42);
   hM_bin16->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin16->GetYaxis()->SetLabelFont(42);
   hM_bin16->GetYaxis()->SetLabelSize(0.035);
   hM_bin16->GetYaxis()->SetTitleSize(0.035);
   hM_bin16->GetYaxis()->SetTitleFont(42);
   hM_bin16->GetZaxis()->SetLabelFont(42);
   hM_bin16->GetZaxis()->SetLabelSize(0.035);
   hM_bin16->GetZaxis()->SetTitleSize(0.035);
   hM_bin16->GetZaxis()->SetTitleFont(42);
   hM_bin16->Draw("e");
   
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
   fmb->SetParameter(0,-15.80777);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,195.9878);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.584913e-06);
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
   fpeak->SetParameter(0,168.2286);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1401211);
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
