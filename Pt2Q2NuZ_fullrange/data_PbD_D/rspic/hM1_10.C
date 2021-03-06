{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 15:53:23 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-25.38591,0.350906,228.4731);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin10 = new TH1F("hM_bin10","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin10->SetBinContent(0,2245);
   hM_bin10->SetBinContent(14,1);
   hM_bin10->SetBinContent(15,3);
   hM_bin10->SetBinContent(16,7);
   hM_bin10->SetBinContent(17,5);
   hM_bin10->SetBinContent(18,5);
   hM_bin10->SetBinContent(19,4);
   hM_bin10->SetBinContent(20,1);
   hM_bin10->SetBinContent(21,4);
   hM_bin10->SetBinContent(22,3);
   hM_bin10->SetBinContent(23,1);
   hM_bin10->SetBinContent(24,3);
   hM_bin10->SetBinContent(25,4);
   hM_bin10->SetBinContent(26,4);
   hM_bin10->SetBinContent(27,5);
   hM_bin10->SetBinContent(28,3);
   hM_bin10->SetBinContent(29,2);
   hM_bin10->SetBinContent(30,2);
   hM_bin10->SetBinContent(31,2);
   hM_bin10->SetBinContent(32,3);
   hM_bin10->SetBinContent(33,2);
   hM_bin10->SetBinContent(34,6);
   hM_bin10->SetBinContent(35,3);
   hM_bin10->SetBinContent(36,7);
   hM_bin10->SetBinContent(37,9);
   hM_bin10->SetBinContent(38,6);
   hM_bin10->SetBinContent(39,6);
   hM_bin10->SetBinContent(40,10);
   hM_bin10->SetBinContent(41,9);
   hM_bin10->SetBinContent(42,20);
   hM_bin10->SetBinContent(43,30);
   hM_bin10->SetBinContent(44,52);
   hM_bin10->SetBinContent(45,57);
   hM_bin10->SetBinContent(46,83);
   hM_bin10->SetBinContent(47,108);
   hM_bin10->SetBinContent(48,126);
   hM_bin10->SetBinContent(49,149);
   hM_bin10->SetBinContent(50,149);
   hM_bin10->SetBinContent(51,169);
   hM_bin10->SetBinContent(52,159);
   hM_bin10->SetBinContent(53,158);
   hM_bin10->SetBinContent(54,180);
   hM_bin10->SetBinContent(55,155);
   hM_bin10->SetBinContent(56,157);
   hM_bin10->SetBinContent(57,133);
   hM_bin10->SetBinContent(58,116);
   hM_bin10->SetBinContent(59,86);
   hM_bin10->SetBinContent(60,81);
   hM_bin10->SetBinContent(61,74);
   hM_bin10->SetBinContent(62,80);
   hM_bin10->SetBinContent(63,38);
   hM_bin10->SetBinContent(64,43);
   hM_bin10->SetBinContent(65,39);
   hM_bin10->SetBinContent(66,40);
   hM_bin10->SetBinContent(67,30);
   hM_bin10->SetBinContent(68,32);
   hM_bin10->SetBinContent(69,32);
   hM_bin10->SetBinContent(70,36);
   hM_bin10->SetBinContent(71,48);
   hM_bin10->SetBinContent(72,32);
   hM_bin10->SetBinContent(73,26);
   hM_bin10->SetBinContent(74,29);
   hM_bin10->SetBinContent(75,30);
   hM_bin10->SetBinContent(76,40);
   hM_bin10->SetBinContent(77,29);
   hM_bin10->SetBinContent(78,28);
   hM_bin10->SetBinContent(79,28);
   hM_bin10->SetBinContent(80,34);
   hM_bin10->SetBinContent(81,27);
   hM_bin10->SetBinContent(82,28);
   hM_bin10->SetBinContent(83,40);
   hM_bin10->SetBinContent(84,26);
   hM_bin10->SetBinContent(85,27);
   hM_bin10->SetBinContent(86,30);
   hM_bin10->SetBinContent(87,44);
   hM_bin10->SetBinContent(88,34);
   hM_bin10->SetBinContent(89,41);
   hM_bin10->SetBinContent(90,30);
   hM_bin10->SetBinContent(91,34);
   hM_bin10->SetBinContent(92,38);
   hM_bin10->SetBinContent(93,35);
   hM_bin10->SetBinContent(94,58);
   hM_bin10->SetBinContent(95,43);
   hM_bin10->SetBinContent(96,32);
   hM_bin10->SetBinContent(97,30);
   hM_bin10->SetBinContent(98,50);
   hM_bin10->SetBinContent(99,35);
   hM_bin10->SetBinContent(100,36);
   hM_bin10->SetBinContent(101,15413);
   hM_bin10->SetEntries(21432);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08670177,0.2026352);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(45.96161);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-26.24826);
   fsig->SetParError(0,3.797232);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,269.5078);
   fsig->SetParError(1,29.31907);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-8.114432e-05);
   fsig->SetParError(2,239.4372);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,154.4698);
   fsig->SetParError(3,4.322334);
   fsig->SetParLimits(3,0,360);
   fsig->SetParameter(4,0.1434171);
   fsig->SetParError(4,0.0005542107);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,6.063184e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin10->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin10");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 21432  ");
   text = ptstats->AddText("Mean  = 0.1762");
   text = ptstats->AddText("RMS   = 0.05827");
   text = ptstats->AddText("#chi^{2} / ndf = 45.96 / 28");
   text = ptstats->AddText("p0       = -26.25 #pm 3.80 ");
   text = ptstats->AddText("p1       = 269.5 #pm 29.3 ");
   text = ptstats->AddText("p2       = -8.114e-05 #pm 2.394e+02 ");
   text = ptstats->AddText("p3       = 154.5 #pm 4.3 ");
   text = ptstats->AddText("p4       = 0.1434 #pm 0.0006 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00006 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin10->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin10);

   ci = TColor::GetColor("#0000ff");
   hM_bin10->SetMarkerColor(ci);
   hM_bin10->SetMarkerStyle(24);
   hM_bin10->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin10->GetXaxis()->SetLabelFont(42);
   hM_bin10->GetXaxis()->SetLabelSize(0.035);
   hM_bin10->GetXaxis()->SetTitleSize(0.035);
   hM_bin10->GetXaxis()->SetTitleFont(42);
   hM_bin10->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin10->GetYaxis()->SetLabelFont(42);
   hM_bin10->GetYaxis()->SetLabelSize(0.035);
   hM_bin10->GetYaxis()->SetTitleSize(0.035);
   hM_bin10->GetYaxis()->SetTitleFont(42);
   hM_bin10->GetZaxis()->SetLabelFont(42);
   hM_bin10->GetZaxis()->SetLabelSize(0.035);
   hM_bin10->GetZaxis()->SetTitleSize(0.035);
   hM_bin10->GetZaxis()->SetTitleFont(42);
   hM_bin10->Draw("e");
   
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
   fmb->SetParameter(0,-26.24826);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,269.5078);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-8.114432e-05);
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
   fpeak->SetParameter(0,154.4698);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1434171);
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
