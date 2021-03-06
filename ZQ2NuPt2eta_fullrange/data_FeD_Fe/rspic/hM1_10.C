{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 18 12:15:07 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.1901558,-13.0432,0.8890623,151.5991);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin10 = new TH1F("hM_bin10","M_{#gamma #gamma}",100,0.2600464,0.8191716);
   hM_bin10->SetBinContent(0,1942);
   hM_bin10->SetBinContent(1,13);
   hM_bin10->SetBinContent(2,14);
   hM_bin10->SetBinContent(3,18);
   hM_bin10->SetBinContent(4,31);
   hM_bin10->SetBinContent(5,29);
   hM_bin10->SetBinContent(6,22);
   hM_bin10->SetBinContent(7,30);
   hM_bin10->SetBinContent(8,15);
   hM_bin10->SetBinContent(9,30);
   hM_bin10->SetBinContent(10,32);
   hM_bin10->SetBinContent(11,31);
   hM_bin10->SetBinContent(12,33);
   hM_bin10->SetBinContent(13,23);
   hM_bin10->SetBinContent(14,29);
   hM_bin10->SetBinContent(15,28);
   hM_bin10->SetBinContent(16,38);
   hM_bin10->SetBinContent(17,31);
   hM_bin10->SetBinContent(18,34);
   hM_bin10->SetBinContent(19,34);
   hM_bin10->SetBinContent(20,36);
   hM_bin10->SetBinContent(21,35);
   hM_bin10->SetBinContent(22,42);
   hM_bin10->SetBinContent(23,50);
   hM_bin10->SetBinContent(24,42);
   hM_bin10->SetBinContent(25,45);
   hM_bin10->SetBinContent(26,47);
   hM_bin10->SetBinContent(27,45);
   hM_bin10->SetBinContent(28,45);
   hM_bin10->SetBinContent(29,46);
   hM_bin10->SetBinContent(30,59);
   hM_bin10->SetBinContent(31,64);
   hM_bin10->SetBinContent(32,56);
   hM_bin10->SetBinContent(33,43);
   hM_bin10->SetBinContent(34,64);
   hM_bin10->SetBinContent(35,55);
   hM_bin10->SetBinContent(36,58);
   hM_bin10->SetBinContent(37,63);
   hM_bin10->SetBinContent(38,67);
   hM_bin10->SetBinContent(39,74);
   hM_bin10->SetBinContent(40,57);
   hM_bin10->SetBinContent(41,68);
   hM_bin10->SetBinContent(42,75);
   hM_bin10->SetBinContent(43,74);
   hM_bin10->SetBinContent(44,84);
   hM_bin10->SetBinContent(45,60);
   hM_bin10->SetBinContent(46,82);
   hM_bin10->SetBinContent(47,94);
   hM_bin10->SetBinContent(48,83);
   hM_bin10->SetBinContent(49,103);
   hM_bin10->SetBinContent(50,92);
   hM_bin10->SetBinContent(51,76);
   hM_bin10->SetBinContent(52,99);
   hM_bin10->SetBinContent(53,98);
   hM_bin10->SetBinContent(54,89);
   hM_bin10->SetBinContent(55,96);
   hM_bin10->SetBinContent(56,103);
   hM_bin10->SetBinContent(57,91);
   hM_bin10->SetBinContent(58,92);
   hM_bin10->SetBinContent(59,88);
   hM_bin10->SetBinContent(60,83);
   hM_bin10->SetBinContent(61,92);
   hM_bin10->SetBinContent(62,105);
   hM_bin10->SetBinContent(63,94);
   hM_bin10->SetBinContent(64,88);
   hM_bin10->SetBinContent(65,111);
   hM_bin10->SetBinContent(66,92);
   hM_bin10->SetBinContent(67,98);
   hM_bin10->SetBinContent(68,95);
   hM_bin10->SetBinContent(69,82);
   hM_bin10->SetBinContent(70,91);
   hM_bin10->SetBinContent(71,91);
   hM_bin10->SetBinContent(72,88);
   hM_bin10->SetBinContent(73,96);
   hM_bin10->SetBinContent(74,86);
   hM_bin10->SetBinContent(75,116);
   hM_bin10->SetBinContent(76,107);
   hM_bin10->SetBinContent(77,89);
   hM_bin10->SetBinContent(78,86);
   hM_bin10->SetBinContent(79,84);
   hM_bin10->SetBinContent(80,100);
   hM_bin10->SetBinContent(81,97);
   hM_bin10->SetBinContent(82,112);
   hM_bin10->SetBinContent(83,96);
   hM_bin10->SetBinContent(84,95);
   hM_bin10->SetBinContent(85,118);
   hM_bin10->SetBinContent(86,107);
   hM_bin10->SetBinContent(87,90);
   hM_bin10->SetBinContent(88,100);
   hM_bin10->SetBinContent(89,93);
   hM_bin10->SetBinContent(90,107);
   hM_bin10->SetBinContent(91,113);
   hM_bin10->SetBinContent(92,98);
   hM_bin10->SetBinContent(93,92);
   hM_bin10->SetBinContent(94,116);
   hM_bin10->SetBinContent(95,101);
   hM_bin10->SetBinContent(96,104);
   hM_bin10->SetBinContent(97,94);
   hM_bin10->SetBinContent(98,84);
   hM_bin10->SetBinContent(99,88);
   hM_bin10->SetBinContent(100,94);
   hM_bin10->SetBinContent(101,7981);
   hM_bin10->SetEntries(17151);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.3792228,0.7267422);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(48.18713);
   fsig->SetNDF(56);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-22.81675);
   fsig->SetParError(0,3.589882);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,174.5185);
   fsig->SetParError(1,2.086443);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-7.386367);
   fsig->SetParError(2,12.6855);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,20.90868);
   fsig->SetParError(3,3.291334);
   fsig->SetParLimits(3,0,236);
   fsig->SetParameter(4,0.5558844);
   fsig->SetParError(4,0.00998733);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.05322841);
   fsig->SetParError(5,0.01445683);
   fsig->SetParLimits(5,0.04788336,0.07182504);
   hM_bin10->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin10");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 17151  ");
   text = ptstats->AddText("Mean  = 0.5988");
   text = ptstats->AddText("RMS   = 0.1406");
   text = ptstats->AddText("#chi^{2} / ndf = 48.19 / 56");
   text = ptstats->AddText("p0       = -22.82 #pm 3.59 ");
   text = ptstats->AddText("p1       = 174.5 #pm 2.1 ");
   text = ptstats->AddText("p2       = -7.386 #pm 12.685 ");
   text = ptstats->AddText("p3       = 20.91 #pm 3.29 ");
   text = ptstats->AddText("p4       = 0.5559 #pm 0.0100 ");
   text = ptstats->AddText("p5       = 0.05323 #pm 0.01446 ");
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
   fmb->SetParameter(0,-22.81675);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,174.5185);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-7.386367);
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
   fpeak->SetParameter(0,20.90868);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.5558844);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.05322841);
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
