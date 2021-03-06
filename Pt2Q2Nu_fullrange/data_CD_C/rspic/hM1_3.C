{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 14:53:39 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-21.15836,0.350906,190.4252);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin3 = new TH1F("hM_bin3","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin3->SetBinContent(0,1038);
   hM_bin3->SetBinContent(13,1);
   hM_bin3->SetBinContent(14,1);
   hM_bin3->SetBinContent(16,3);
   hM_bin3->SetBinContent(17,5);
   hM_bin3->SetBinContent(18,2);
   hM_bin3->SetBinContent(19,3);
   hM_bin3->SetBinContent(20,5);
   hM_bin3->SetBinContent(21,2);
   hM_bin3->SetBinContent(22,2);
   hM_bin3->SetBinContent(24,2);
   hM_bin3->SetBinContent(25,4);
   hM_bin3->SetBinContent(27,2);
   hM_bin3->SetBinContent(28,1);
   hM_bin3->SetBinContent(29,1);
   hM_bin3->SetBinContent(32,1);
   hM_bin3->SetBinContent(33,9);
   hM_bin3->SetBinContent(34,4);
   hM_bin3->SetBinContent(35,2);
   hM_bin3->SetBinContent(36,7);
   hM_bin3->SetBinContent(37,6);
   hM_bin3->SetBinContent(38,10);
   hM_bin3->SetBinContent(39,9);
   hM_bin3->SetBinContent(40,15);
   hM_bin3->SetBinContent(41,16);
   hM_bin3->SetBinContent(42,21);
   hM_bin3->SetBinContent(43,28);
   hM_bin3->SetBinContent(44,45);
   hM_bin3->SetBinContent(45,47);
   hM_bin3->SetBinContent(46,69);
   hM_bin3->SetBinContent(47,94);
   hM_bin3->SetBinContent(48,108);
   hM_bin3->SetBinContent(49,112);
   hM_bin3->SetBinContent(50,145);
   hM_bin3->SetBinContent(51,148);
   hM_bin3->SetBinContent(52,149);
   hM_bin3->SetBinContent(53,129);
   hM_bin3->SetBinContent(54,108);
   hM_bin3->SetBinContent(55,122);
   hM_bin3->SetBinContent(56,126);
   hM_bin3->SetBinContent(57,121);
   hM_bin3->SetBinContent(58,92);
   hM_bin3->SetBinContent(59,90);
   hM_bin3->SetBinContent(60,81);
   hM_bin3->SetBinContent(61,54);
   hM_bin3->SetBinContent(62,52);
   hM_bin3->SetBinContent(63,52);
   hM_bin3->SetBinContent(64,45);
   hM_bin3->SetBinContent(65,42);
   hM_bin3->SetBinContent(66,36);
   hM_bin3->SetBinContent(67,37);
   hM_bin3->SetBinContent(68,21);
   hM_bin3->SetBinContent(69,32);
   hM_bin3->SetBinContent(70,23);
   hM_bin3->SetBinContent(71,36);
   hM_bin3->SetBinContent(72,29);
   hM_bin3->SetBinContent(73,23);
   hM_bin3->SetBinContent(74,33);
   hM_bin3->SetBinContent(75,27);
   hM_bin3->SetBinContent(76,17);
   hM_bin3->SetBinContent(77,23);
   hM_bin3->SetBinContent(78,32);
   hM_bin3->SetBinContent(79,22);
   hM_bin3->SetBinContent(80,22);
   hM_bin3->SetBinContent(81,32);
   hM_bin3->SetBinContent(82,21);
   hM_bin3->SetBinContent(83,23);
   hM_bin3->SetBinContent(84,25);
   hM_bin3->SetBinContent(85,18);
   hM_bin3->SetBinContent(86,32);
   hM_bin3->SetBinContent(87,26);
   hM_bin3->SetBinContent(88,23);
   hM_bin3->SetBinContent(89,17);
   hM_bin3->SetBinContent(90,26);
   hM_bin3->SetBinContent(91,24);
   hM_bin3->SetBinContent(92,39);
   hM_bin3->SetBinContent(93,25);
   hM_bin3->SetBinContent(94,25);
   hM_bin3->SetBinContent(95,24);
   hM_bin3->SetBinContent(96,22);
   hM_bin3->SetBinContent(97,25);
   hM_bin3->SetBinContent(98,31);
   hM_bin3->SetBinContent(99,38);
   hM_bin3->SetBinContent(100,27);
   hM_bin3->SetBinContent(101,8426);
   hM_bin3->SetEntries(12593);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08562741,0.2015608);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(35.07771);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-18.02041);
   fsig->SetParError(0,4.055875);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,230.1049);
   fsig->SetParError(1,31.41399);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.051225e-06);
   fsig->SetParError(2,1373.541);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,123.4884);
   fsig->SetParError(3,4.114229);
   fsig->SetParLimits(3,0,298);
   fsig->SetParameter(4,0.1431573);
   fsig->SetParError(4,0.0006860661);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0004807724);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin3->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin3");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 12593  ");
   text = ptstats->AddText("Mean  = 0.1732");
   text = ptstats->AddText("RMS   =  0.056");
   text = ptstats->AddText("#chi^{2} / ndf = 35.08 / 27");
   text = ptstats->AddText("p0       = -18.02 #pm 4.06 ");
   text = ptstats->AddText("p1       = 230.1 #pm 31.4 ");
   text = ptstats->AddText("p2       = -1.051e-06 #pm 1.374e+03 ");
   text = ptstats->AddText("p3       = 123.5 #pm 4.1 ");
   text = ptstats->AddText("p4       = 0.1432 #pm 0.0007 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00048 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin3->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin3);

   ci = TColor::GetColor("#0000ff");
   hM_bin3->SetMarkerColor(ci);
   hM_bin3->SetMarkerStyle(24);
   hM_bin3->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin3->GetXaxis()->SetLabelFont(42);
   hM_bin3->GetXaxis()->SetLabelSize(0.035);
   hM_bin3->GetXaxis()->SetTitleSize(0.035);
   hM_bin3->GetXaxis()->SetTitleFont(42);
   hM_bin3->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin3->GetYaxis()->SetLabelFont(42);
   hM_bin3->GetYaxis()->SetLabelSize(0.035);
   hM_bin3->GetYaxis()->SetTitleSize(0.035);
   hM_bin3->GetYaxis()->SetTitleFont(42);
   hM_bin3->GetZaxis()->SetLabelFont(42);
   hM_bin3->GetZaxis()->SetLabelSize(0.035);
   hM_bin3->GetZaxis()->SetTitleSize(0.035);
   hM_bin3->GetZaxis()->SetTitleFont(42);
   hM_bin3->Draw("e");
   
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
   fmb->SetParameter(0,-18.02041);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,230.1049);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.051225e-06);
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
   fpeak->SetParameter(0,123.4884);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1431573);
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
