{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 14:54:04 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-53.64491,0.350906,482.8041);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin14 = new TH1F("hM_bin14","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin14->SetBinContent(0,1729);
   hM_bin14->SetBinContent(13,1);
   hM_bin14->SetBinContent(14,6);
   hM_bin14->SetBinContent(15,9);
   hM_bin14->SetBinContent(16,10);
   hM_bin14->SetBinContent(17,14);
   hM_bin14->SetBinContent(18,8);
   hM_bin14->SetBinContent(19,6);
   hM_bin14->SetBinContent(20,15);
   hM_bin14->SetBinContent(21,9);
   hM_bin14->SetBinContent(22,12);
   hM_bin14->SetBinContent(23,15);
   hM_bin14->SetBinContent(24,7);
   hM_bin14->SetBinContent(25,16);
   hM_bin14->SetBinContent(26,9);
   hM_bin14->SetBinContent(27,15);
   hM_bin14->SetBinContent(28,23);
   hM_bin14->SetBinContent(29,16);
   hM_bin14->SetBinContent(30,26);
   hM_bin14->SetBinContent(31,13);
   hM_bin14->SetBinContent(32,22);
   hM_bin14->SetBinContent(33,17);
   hM_bin14->SetBinContent(34,30);
   hM_bin14->SetBinContent(35,30);
   hM_bin14->SetBinContent(36,26);
   hM_bin14->SetBinContent(37,32);
   hM_bin14->SetBinContent(38,33);
   hM_bin14->SetBinContent(39,52);
   hM_bin14->SetBinContent(40,60);
   hM_bin14->SetBinContent(41,63);
   hM_bin14->SetBinContent(42,85);
   hM_bin14->SetBinContent(43,143);
   hM_bin14->SetBinContent(44,154);
   hM_bin14->SetBinContent(45,179);
   hM_bin14->SetBinContent(46,233);
   hM_bin14->SetBinContent(47,249);
   hM_bin14->SetBinContent(48,310);
   hM_bin14->SetBinContent(49,346);
   hM_bin14->SetBinContent(50,389);
   hM_bin14->SetBinContent(51,383);
   hM_bin14->SetBinContent(52,384);
   hM_bin14->SetBinContent(53,372);
   hM_bin14->SetBinContent(54,312);
   hM_bin14->SetBinContent(55,301);
   hM_bin14->SetBinContent(56,284);
   hM_bin14->SetBinContent(57,232);
   hM_bin14->SetBinContent(58,200);
   hM_bin14->SetBinContent(59,211);
   hM_bin14->SetBinContent(60,162);
   hM_bin14->SetBinContent(61,147);
   hM_bin14->SetBinContent(62,138);
   hM_bin14->SetBinContent(63,108);
   hM_bin14->SetBinContent(64,107);
   hM_bin14->SetBinContent(65,98);
   hM_bin14->SetBinContent(66,96);
   hM_bin14->SetBinContent(67,78);
   hM_bin14->SetBinContent(68,88);
   hM_bin14->SetBinContent(69,99);
   hM_bin14->SetBinContent(70,95);
   hM_bin14->SetBinContent(71,100);
   hM_bin14->SetBinContent(72,81);
   hM_bin14->SetBinContent(73,80);
   hM_bin14->SetBinContent(74,88);
   hM_bin14->SetBinContent(75,80);
   hM_bin14->SetBinContent(76,79);
   hM_bin14->SetBinContent(77,75);
   hM_bin14->SetBinContent(78,85);
   hM_bin14->SetBinContent(79,108);
   hM_bin14->SetBinContent(80,100);
   hM_bin14->SetBinContent(81,88);
   hM_bin14->SetBinContent(82,111);
   hM_bin14->SetBinContent(83,86);
   hM_bin14->SetBinContent(84,95);
   hM_bin14->SetBinContent(85,92);
   hM_bin14->SetBinContent(86,97);
   hM_bin14->SetBinContent(87,96);
   hM_bin14->SetBinContent(88,113);
   hM_bin14->SetBinContent(89,100);
   hM_bin14->SetBinContent(90,81);
   hM_bin14->SetBinContent(91,90);
   hM_bin14->SetBinContent(92,116);
   hM_bin14->SetBinContent(93,117);
   hM_bin14->SetBinContent(94,119);
   hM_bin14->SetBinContent(95,87);
   hM_bin14->SetBinContent(96,107);
   hM_bin14->SetBinContent(97,116);
   hM_bin14->SetBinContent(98,106);
   hM_bin14->SetBinContent(99,94);
   hM_bin14->SetBinContent(100,106);
   hM_bin14->SetBinContent(101,22779);
   hM_bin14->SetEntries(33979);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08144283,0.1973763);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(40.15788);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-30.58744);
   fsig->SetParError(0,6.512947);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,570.8872);
   fsig->SetParError(1,51.58836);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-9.079075e-06);
   fsig->SetParError(2,703.0717);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,313.45);
   fsig->SetParError(3,6.805777);
   fsig->SetParLimits(3,0,778);
   fsig->SetParameter(4,0.1391463);
   fsig->SetParError(4,0.0004355248);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,9.71165e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin14->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin14");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 33979  ");
   text = ptstats->AddText("Mean  = 0.1763");
   text = ptstats->AddText("RMS   = 0.0627");
   text = ptstats->AddText("#chi^{2} / ndf = 40.16 / 28");
   text = ptstats->AddText("p0       = -30.59 #pm 6.51 ");
   text = ptstats->AddText("p1       = 570.9 #pm 51.6 ");
   text = ptstats->AddText("p2       = -9.079e-06 #pm 7.031e+02 ");
   text = ptstats->AddText("p3       = 313.4 #pm 6.8 ");
   text = ptstats->AddText("p4       = 0.1391 #pm 0.0004 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00010 ");
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
   fmb->SetParameter(0,-30.58744);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,570.8872);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-9.079075e-06);
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
   fpeak->SetParameter(0,313.45);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1391463);
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
