{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 16:02:03 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-20.475,0.350906,184.275);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin10 = new TH1F("hM_bin10","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin10->SetBinContent(0,1242);
   hM_bin10->SetBinContent(14,2);
   hM_bin10->SetBinContent(15,2);
   hM_bin10->SetBinContent(16,4);
   hM_bin10->SetBinContent(17,3);
   hM_bin10->SetBinContent(18,2);
   hM_bin10->SetBinContent(19,4);
   hM_bin10->SetBinContent(20,3);
   hM_bin10->SetBinContent(21,1);
   hM_bin10->SetBinContent(23,2);
   hM_bin10->SetBinContent(24,5);
   hM_bin10->SetBinContent(25,1);
   hM_bin10->SetBinContent(26,2);
   hM_bin10->SetBinContent(27,1);
   hM_bin10->SetBinContent(28,4);
   hM_bin10->SetBinContent(30,5);
   hM_bin10->SetBinContent(31,6);
   hM_bin10->SetBinContent(32,3);
   hM_bin10->SetBinContent(33,5);
   hM_bin10->SetBinContent(34,4);
   hM_bin10->SetBinContent(35,4);
   hM_bin10->SetBinContent(36,1);
   hM_bin10->SetBinContent(37,9);
   hM_bin10->SetBinContent(38,5);
   hM_bin10->SetBinContent(39,14);
   hM_bin10->SetBinContent(40,18);
   hM_bin10->SetBinContent(41,23);
   hM_bin10->SetBinContent(42,29);
   hM_bin10->SetBinContent(43,36);
   hM_bin10->SetBinContent(44,59);
   hM_bin10->SetBinContent(45,61);
   hM_bin10->SetBinContent(46,72);
   hM_bin10->SetBinContent(47,87);
   hM_bin10->SetBinContent(48,106);
   hM_bin10->SetBinContent(49,116);
   hM_bin10->SetBinContent(50,129);
   hM_bin10->SetBinContent(51,124);
   hM_bin10->SetBinContent(52,144);
   hM_bin10->SetBinContent(53,111);
   hM_bin10->SetBinContent(54,102);
   hM_bin10->SetBinContent(55,99);
   hM_bin10->SetBinContent(56,83);
   hM_bin10->SetBinContent(57,84);
   hM_bin10->SetBinContent(58,66);
   hM_bin10->SetBinContent(59,47);
   hM_bin10->SetBinContent(60,47);
   hM_bin10->SetBinContent(61,48);
   hM_bin10->SetBinContent(62,29);
   hM_bin10->SetBinContent(63,25);
   hM_bin10->SetBinContent(64,24);
   hM_bin10->SetBinContent(65,25);
   hM_bin10->SetBinContent(66,15);
   hM_bin10->SetBinContent(67,23);
   hM_bin10->SetBinContent(68,23);
   hM_bin10->SetBinContent(69,16);
   hM_bin10->SetBinContent(70,15);
   hM_bin10->SetBinContent(71,18);
   hM_bin10->SetBinContent(72,25);
   hM_bin10->SetBinContent(73,19);
   hM_bin10->SetBinContent(74,21);
   hM_bin10->SetBinContent(75,18);
   hM_bin10->SetBinContent(76,17);
   hM_bin10->SetBinContent(77,15);
   hM_bin10->SetBinContent(78,21);
   hM_bin10->SetBinContent(79,23);
   hM_bin10->SetBinContent(80,18);
   hM_bin10->SetBinContent(81,20);
   hM_bin10->SetBinContent(82,29);
   hM_bin10->SetBinContent(83,28);
   hM_bin10->SetBinContent(84,25);
   hM_bin10->SetBinContent(85,28);
   hM_bin10->SetBinContent(86,22);
   hM_bin10->SetBinContent(87,20);
   hM_bin10->SetBinContent(88,26);
   hM_bin10->SetBinContent(89,31);
   hM_bin10->SetBinContent(90,40);
   hM_bin10->SetBinContent(91,31);
   hM_bin10->SetBinContent(92,33);
   hM_bin10->SetBinContent(93,26);
   hM_bin10->SetBinContent(94,28);
   hM_bin10->SetBinContent(95,25);
   hM_bin10->SetBinContent(96,30);
   hM_bin10->SetBinContent(97,29);
   hM_bin10->SetBinContent(98,25);
   hM_bin10->SetBinContent(99,26);
   hM_bin10->SetBinContent(100,30);
   hM_bin10->SetBinContent(101,9395);
   hM_bin10->SetEntries(13362);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08105193,0.1969854);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(25.98093);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-14.92164);
   fsig->SetParError(0,2.454156);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,166.3002);
   fsig->SetParError(1,22.10909);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.0001840664);
   fsig->SetParError(2,633.2117);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,113.1217);
   fsig->SetParError(3,3.653964);
   fsig->SetParLimits(3,0,288);
   fsig->SetParameter(4,0.1379053);
   fsig->SetParError(4,0.0006446858);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.000285344);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin10->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin10");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 13362  ");
   text = ptstats->AddText("Mean  = 0.1727");
   text = ptstats->AddText("RMS   = 0.06084");
   text = ptstats->AddText("#chi^{2} / ndf = 25.98 / 28");
   text = ptstats->AddText("p0       = -14.92 #pm 2.45 ");
   text = ptstats->AddText("p1       = 166.3 #pm 22.1 ");
   text = ptstats->AddText("p2       = -0.0001841 #pm 633.2116699 ");
   text = ptstats->AddText("p3       = 113.1 #pm 3.7 ");
   text = ptstats->AddText("p4       = 0.1379 #pm 0.0006 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00029 ");
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
   fmb->SetParameter(0,-14.92164);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,166.3002);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.0001840664);
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
   fpeak->SetParameter(0,113.1217);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1379053);
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
