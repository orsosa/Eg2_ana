{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 15:59:03 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-31.5,0.350906,283.5);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin9 = new TH1F("hM_bin9","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin9->SetBinContent(0,1166);
   hM_bin9->SetBinContent(14,3);
   hM_bin9->SetBinContent(15,6);
   hM_bin9->SetBinContent(16,4);
   hM_bin9->SetBinContent(17,7);
   hM_bin9->SetBinContent(18,5);
   hM_bin9->SetBinContent(19,4);
   hM_bin9->SetBinContent(20,4);
   hM_bin9->SetBinContent(21,4);
   hM_bin9->SetBinContent(22,3);
   hM_bin9->SetBinContent(23,3);
   hM_bin9->SetBinContent(24,5);
   hM_bin9->SetBinContent(25,4);
   hM_bin9->SetBinContent(26,3);
   hM_bin9->SetBinContent(27,6);
   hM_bin9->SetBinContent(28,6);
   hM_bin9->SetBinContent(29,3);
   hM_bin9->SetBinContent(30,5);
   hM_bin9->SetBinContent(31,8);
   hM_bin9->SetBinContent(32,3);
   hM_bin9->SetBinContent(33,7);
   hM_bin9->SetBinContent(34,5);
   hM_bin9->SetBinContent(35,4);
   hM_bin9->SetBinContent(36,12);
   hM_bin9->SetBinContent(37,9);
   hM_bin9->SetBinContent(38,9);
   hM_bin9->SetBinContent(39,15);
   hM_bin9->SetBinContent(40,24);
   hM_bin9->SetBinContent(41,27);
   hM_bin9->SetBinContent(42,32);
   hM_bin9->SetBinContent(43,47);
   hM_bin9->SetBinContent(44,59);
   hM_bin9->SetBinContent(45,72);
   hM_bin9->SetBinContent(46,95);
   hM_bin9->SetBinContent(47,124);
   hM_bin9->SetBinContent(48,146);
   hM_bin9->SetBinContent(49,190);
   hM_bin9->SetBinContent(50,195);
   hM_bin9->SetBinContent(51,205);
   hM_bin9->SetBinContent(52,225);
   hM_bin9->SetBinContent(53,207);
   hM_bin9->SetBinContent(54,224);
   hM_bin9->SetBinContent(55,189);
   hM_bin9->SetBinContent(56,175);
   hM_bin9->SetBinContent(57,146);
   hM_bin9->SetBinContent(58,132);
   hM_bin9->SetBinContent(59,93);
   hM_bin9->SetBinContent(60,96);
   hM_bin9->SetBinContent(61,94);
   hM_bin9->SetBinContent(62,86);
   hM_bin9->SetBinContent(63,64);
   hM_bin9->SetBinContent(64,52);
   hM_bin9->SetBinContent(65,48);
   hM_bin9->SetBinContent(66,42);
   hM_bin9->SetBinContent(67,48);
   hM_bin9->SetBinContent(68,39);
   hM_bin9->SetBinContent(69,43);
   hM_bin9->SetBinContent(70,35);
   hM_bin9->SetBinContent(71,42);
   hM_bin9->SetBinContent(72,38);
   hM_bin9->SetBinContent(73,45);
   hM_bin9->SetBinContent(74,26);
   hM_bin9->SetBinContent(75,45);
   hM_bin9->SetBinContent(76,46);
   hM_bin9->SetBinContent(77,44);
   hM_bin9->SetBinContent(78,46);
   hM_bin9->SetBinContent(79,36);
   hM_bin9->SetBinContent(80,42);
   hM_bin9->SetBinContent(81,41);
   hM_bin9->SetBinContent(82,43);
   hM_bin9->SetBinContent(83,43);
   hM_bin9->SetBinContent(84,35);
   hM_bin9->SetBinContent(85,36);
   hM_bin9->SetBinContent(86,43);
   hM_bin9->SetBinContent(87,55);
   hM_bin9->SetBinContent(88,46);
   hM_bin9->SetBinContent(89,38);
   hM_bin9->SetBinContent(90,41);
   hM_bin9->SetBinContent(91,61);
   hM_bin9->SetBinContent(92,48);
   hM_bin9->SetBinContent(93,49);
   hM_bin9->SetBinContent(94,56);
   hM_bin9->SetBinContent(95,44);
   hM_bin9->SetBinContent(96,41);
   hM_bin9->SetBinContent(97,67);
   hM_bin9->SetBinContent(98,54);
   hM_bin9->SetBinContent(99,48);
   hM_bin9->SetBinContent(100,52);
   hM_bin9->SetBinContent(101,12941);
   hM_bin9->SetEntries(18859);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08521696,0.2011504);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(36.83457);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-21.52437);
   fsig->SetParError(0,4.262638);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,289.2717);
   fsig->SetParError(1,34.67066);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.813199e-05);
   fsig->SetParError(2,417.2585);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,182.7522);
   fsig->SetParError(3,4.966231);
   fsig->SetParLimits(3,0,450);
   fsig->SetParameter(4,0.1426646);
   fsig->SetParError(4,0.0005232145);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,8.551405e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin9->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin9");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 18859  ");
   text = ptstats->AddText("Mean  = 0.1765");
   text = ptstats->AddText("RMS   = 0.05957");
   text = ptstats->AddText("#chi^{2} / ndf = 36.83 / 28");
   text = ptstats->AddText("p0       = -21.52 #pm 4.26 ");
   text = ptstats->AddText("p1       = 289.3 #pm 34.7 ");
   text = ptstats->AddText("p2       = -1.813e-05 #pm 4.173e+02 ");
   text = ptstats->AddText("p3       = 182.8 #pm 5.0 ");
   text = ptstats->AddText("p4       = 0.1427 #pm 0.0005 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00009 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin9->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin9);

   ci = TColor::GetColor("#0000ff");
   hM_bin9->SetMarkerColor(ci);
   hM_bin9->SetMarkerStyle(24);
   hM_bin9->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin9->GetXaxis()->SetLabelFont(42);
   hM_bin9->GetXaxis()->SetLabelSize(0.035);
   hM_bin9->GetXaxis()->SetTitleSize(0.035);
   hM_bin9->GetXaxis()->SetTitleFont(42);
   hM_bin9->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin9->GetYaxis()->SetLabelFont(42);
   hM_bin9->GetYaxis()->SetLabelSize(0.035);
   hM_bin9->GetYaxis()->SetTitleSize(0.035);
   hM_bin9->GetYaxis()->SetTitleFont(42);
   hM_bin9->GetZaxis()->SetLabelFont(42);
   hM_bin9->GetZaxis()->SetLabelSize(0.035);
   hM_bin9->GetZaxis()->SetTitleSize(0.035);
   hM_bin9->GetZaxis()->SetTitleFont(42);
   hM_bin9->Draw("e");
   
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
   fmb->SetParameter(0,-21.52437);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,289.2717);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.813199e-05);
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
   fpeak->SetParameter(0,182.7522);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1426646);
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
