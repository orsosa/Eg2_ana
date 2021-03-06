{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 18 12:11:50 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.1901558,-16.86428,0.8890623,188.5294);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin10 = new TH1F("hM_bin10","M_{#gamma #gamma}",100,0.2600464,0.8191716);
   hM_bin10->SetBinContent(0,2181);
   hM_bin10->SetBinContent(1,20);
   hM_bin10->SetBinContent(2,28);
   hM_bin10->SetBinContent(3,15);
   hM_bin10->SetBinContent(4,29);
   hM_bin10->SetBinContent(5,23);
   hM_bin10->SetBinContent(6,25);
   hM_bin10->SetBinContent(7,27);
   hM_bin10->SetBinContent(8,19);
   hM_bin10->SetBinContent(9,26);
   hM_bin10->SetBinContent(10,42);
   hM_bin10->SetBinContent(11,30);
   hM_bin10->SetBinContent(12,36);
   hM_bin10->SetBinContent(13,41);
   hM_bin10->SetBinContent(14,30);
   hM_bin10->SetBinContent(15,37);
   hM_bin10->SetBinContent(16,46);
   hM_bin10->SetBinContent(17,46);
   hM_bin10->SetBinContent(18,40);
   hM_bin10->SetBinContent(19,43);
   hM_bin10->SetBinContent(20,53);
   hM_bin10->SetBinContent(21,33);
   hM_bin10->SetBinContent(22,42);
   hM_bin10->SetBinContent(23,46);
   hM_bin10->SetBinContent(24,54);
   hM_bin10->SetBinContent(25,44);
   hM_bin10->SetBinContent(26,63);
   hM_bin10->SetBinContent(27,60);
   hM_bin10->SetBinContent(28,53);
   hM_bin10->SetBinContent(29,56);
   hM_bin10->SetBinContent(30,59);
   hM_bin10->SetBinContent(31,59);
   hM_bin10->SetBinContent(32,57);
   hM_bin10->SetBinContent(33,69);
   hM_bin10->SetBinContent(34,56);
   hM_bin10->SetBinContent(35,64);
   hM_bin10->SetBinContent(36,79);
   hM_bin10->SetBinContent(37,78);
   hM_bin10->SetBinContent(38,78);
   hM_bin10->SetBinContent(39,61);
   hM_bin10->SetBinContent(40,66);
   hM_bin10->SetBinContent(41,91);
   hM_bin10->SetBinContent(42,85);
   hM_bin10->SetBinContent(43,102);
   hM_bin10->SetBinContent(44,85);
   hM_bin10->SetBinContent(45,99);
   hM_bin10->SetBinContent(46,79);
   hM_bin10->SetBinContent(47,101);
   hM_bin10->SetBinContent(48,95);
   hM_bin10->SetBinContent(49,99);
   hM_bin10->SetBinContent(50,104);
   hM_bin10->SetBinContent(51,106);
   hM_bin10->SetBinContent(52,91);
   hM_bin10->SetBinContent(53,108);
   hM_bin10->SetBinContent(54,109);
   hM_bin10->SetBinContent(55,104);
   hM_bin10->SetBinContent(56,106);
   hM_bin10->SetBinContent(57,108);
   hM_bin10->SetBinContent(58,100);
   hM_bin10->SetBinContent(59,93);
   hM_bin10->SetBinContent(60,110);
   hM_bin10->SetBinContent(61,105);
   hM_bin10->SetBinContent(62,117);
   hM_bin10->SetBinContent(63,104);
   hM_bin10->SetBinContent(64,112);
   hM_bin10->SetBinContent(65,109);
   hM_bin10->SetBinContent(66,148);
   hM_bin10->SetBinContent(67,98);
   hM_bin10->SetBinContent(68,139);
   hM_bin10->SetBinContent(69,131);
   hM_bin10->SetBinContent(70,104);
   hM_bin10->SetBinContent(71,98);
   hM_bin10->SetBinContent(72,112);
   hM_bin10->SetBinContent(73,94);
   hM_bin10->SetBinContent(74,128);
   hM_bin10->SetBinContent(75,105);
   hM_bin10->SetBinContent(76,117);
   hM_bin10->SetBinContent(77,110);
   hM_bin10->SetBinContent(78,126);
   hM_bin10->SetBinContent(79,114);
   hM_bin10->SetBinContent(80,103);
   hM_bin10->SetBinContent(81,121);
   hM_bin10->SetBinContent(82,130);
   hM_bin10->SetBinContent(83,108);
   hM_bin10->SetBinContent(84,104);
   hM_bin10->SetBinContent(85,100);
   hM_bin10->SetBinContent(86,107);
   hM_bin10->SetBinContent(87,116);
   hM_bin10->SetBinContent(88,124);
   hM_bin10->SetBinContent(89,139);
   hM_bin10->SetBinContent(90,121);
   hM_bin10->SetBinContent(91,132);
   hM_bin10->SetBinContent(92,124);
   hM_bin10->SetBinContent(93,112);
   hM_bin10->SetBinContent(94,111);
   hM_bin10->SetBinContent(95,139);
   hM_bin10->SetBinContent(96,117);
   hM_bin10->SetBinContent(97,111);
   hM_bin10->SetBinContent(98,126);
   hM_bin10->SetBinContent(99,124);
   hM_bin10->SetBinContent(100,137);
   hM_bin10->SetBinContent(101,9841);
   hM_bin10->SetEntries(20507);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.3406798,0.7716287);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(79.61538);
   fsig->SetNDF(71);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-29.31099);
   fsig->SetParError(0,5.360309);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,197.0213);
   fsig->SetParError(1,10.95984);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-5.597447e-06);
   fsig->SetParError(2,204.7634);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,24.04907);
   fsig->SetParError(3,3.261602);
   fsig->SetParLimits(3,0,296);
   fsig->SetParameter(4,0.5645286);
   fsig->SetParError(4,0.01076115);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.07182504);
   fsig->SetParError(5,0.02084247);
   fsig->SetParLimits(5,0.04788336,0.07182504);
   hM_bin10->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin10");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 20507  ");
   text = ptstats->AddText("Mean  = 0.6021");
   text = ptstats->AddText("RMS   = 0.1411");
   text = ptstats->AddText("#chi^{2} / ndf = 79.62 / 71");
   text = ptstats->AddText("p0       = -29.31 #pm 5.36 ");
   text = ptstats->AddText("p1       =   197 #pm 11.0 ");
   text = ptstats->AddText("p2       = -5.597e-06 #pm 2.048e+02 ");
   text = ptstats->AddText("p3       = 24.05 #pm 3.26 ");
   text = ptstats->AddText("p4       = 0.5645 #pm 0.0108 ");
   text = ptstats->AddText("p5       = 0.07183 #pm 0.02084 ");
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
   
   TF1 *fmb = new TF1("fmb","pol2",0.3600464,0.7191716);
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
   fmb->SetParameter(0,-29.31099);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,197.0213);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-5.597447e-06);
   fmb->SetParError(2,0);
   fmb->SetParLimits(2,0,0);
   fmb->Draw("same");
   
   TF1 *fpeak = new TF1("fpeak","gaus",0.3600464,0.7191716);
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
   fpeak->SetParameter(0,24.04907);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.5645286);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.07182504);
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
