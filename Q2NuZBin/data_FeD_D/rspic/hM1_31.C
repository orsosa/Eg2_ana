{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Jan 31 05:44:09 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-39.89227,0.350906,359.0304);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin31 = new TH1F("hM_bin31","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin31->SetBinContent(0,5990);
   hM_bin31->SetBinContent(15,1);
   hM_bin31->SetBinContent(16,8);
   hM_bin31->SetBinContent(17,9);
   hM_bin31->SetBinContent(18,5);
   hM_bin31->SetBinContent(19,5);
   hM_bin31->SetBinContent(20,4);
   hM_bin31->SetBinContent(21,8);
   hM_bin31->SetBinContent(22,4);
   hM_bin31->SetBinContent(23,3);
   hM_bin31->SetBinContent(25,4);
   hM_bin31->SetBinContent(26,3);
   hM_bin31->SetBinContent(27,8);
   hM_bin31->SetBinContent(28,7);
   hM_bin31->SetBinContent(29,3);
   hM_bin31->SetBinContent(30,9);
   hM_bin31->SetBinContent(31,6);
   hM_bin31->SetBinContent(32,10);
   hM_bin31->SetBinContent(33,13);
   hM_bin31->SetBinContent(34,12);
   hM_bin31->SetBinContent(35,7);
   hM_bin31->SetBinContent(36,15);
   hM_bin31->SetBinContent(37,16);
   hM_bin31->SetBinContent(38,25);
   hM_bin31->SetBinContent(39,25);
   hM_bin31->SetBinContent(40,32);
   hM_bin31->SetBinContent(41,36);
   hM_bin31->SetBinContent(42,44);
   hM_bin31->SetBinContent(43,89);
   hM_bin31->SetBinContent(44,82);
   hM_bin31->SetBinContent(45,108);
   hM_bin31->SetBinContent(46,190);
   hM_bin31->SetBinContent(47,195);
   hM_bin31->SetBinContent(48,221);
   hM_bin31->SetBinContent(49,254);
   hM_bin31->SetBinContent(50,280);
   hM_bin31->SetBinContent(51,254);
   hM_bin31->SetBinContent(52,287);
   hM_bin31->SetBinContent(53,226);
   hM_bin31->SetBinContent(54,245);
   hM_bin31->SetBinContent(55,208);
   hM_bin31->SetBinContent(56,213);
   hM_bin31->SetBinContent(57,163);
   hM_bin31->SetBinContent(58,134);
   hM_bin31->SetBinContent(59,99);
   hM_bin31->SetBinContent(60,95);
   hM_bin31->SetBinContent(61,81);
   hM_bin31->SetBinContent(62,54);
   hM_bin31->SetBinContent(63,50);
   hM_bin31->SetBinContent(64,48);
   hM_bin31->SetBinContent(65,51);
   hM_bin31->SetBinContent(66,49);
   hM_bin31->SetBinContent(67,58);
   hM_bin31->SetBinContent(68,36);
   hM_bin31->SetBinContent(69,46);
   hM_bin31->SetBinContent(70,33);
   hM_bin31->SetBinContent(71,46);
   hM_bin31->SetBinContent(72,27);
   hM_bin31->SetBinContent(73,38);
   hM_bin31->SetBinContent(74,56);
   hM_bin31->SetBinContent(75,48);
   hM_bin31->SetBinContent(76,35);
   hM_bin31->SetBinContent(77,37);
   hM_bin31->SetBinContent(78,59);
   hM_bin31->SetBinContent(79,34);
   hM_bin31->SetBinContent(80,63);
   hM_bin31->SetBinContent(81,51);
   hM_bin31->SetBinContent(82,56);
   hM_bin31->SetBinContent(83,52);
   hM_bin31->SetBinContent(84,57);
   hM_bin31->SetBinContent(85,49);
   hM_bin31->SetBinContent(86,62);
   hM_bin31->SetBinContent(87,71);
   hM_bin31->SetBinContent(88,54);
   hM_bin31->SetBinContent(89,68);
   hM_bin31->SetBinContent(90,66);
   hM_bin31->SetBinContent(91,74);
   hM_bin31->SetBinContent(92,68);
   hM_bin31->SetBinContent(93,82);
   hM_bin31->SetBinContent(94,70);
   hM_bin31->SetBinContent(95,80);
   hM_bin31->SetBinContent(96,63);
   hM_bin31->SetBinContent(97,83);
   hM_bin31->SetBinContent(98,85);
   hM_bin31->SetBinContent(99,79);
   hM_bin31->SetBinContent(100,74);
   hM_bin31->SetBinContent(101,40636);
   hM_bin31->SetEntries(52584);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08134595,0.1972794);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(77.11447);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-18.15095);
   fsig->SetParError(0,4.31626);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,263.0746);
   fsig->SetParError(1,35.33968);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-4.793746e-07);
   fsig->SetParError(2,275.4247);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,233.3309);
   fsig->SetParError(3,5.444045);
   fsig->SetParLimits(3,0,574);
   fsig->SetParameter(4,0.1389181);
   fsig->SetParError(4,0.0004342595);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,3.796674e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin31->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin31");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 52584  ");
   text = ptstats->AddText("Mean  = 0.1768");
   text = ptstats->AddText("RMS   = 0.06292");
   text = ptstats->AddText("#chi^{2} / ndf = 77.11 / 28");
   text = ptstats->AddText("p0       = -18.15 #pm 4.32 ");
   text = ptstats->AddText("p1       = 263.1 #pm 35.3 ");
   text = ptstats->AddText("p2       = -4.794e-07 #pm 2.754e+02 ");
   text = ptstats->AddText("p3       = 233.3 #pm 5.4 ");
   text = ptstats->AddText("p4       = 0.1389 #pm 0.0004 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00004 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin31->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin31);

   ci = TColor::GetColor("#0000ff");
   hM_bin31->SetMarkerColor(ci);
   hM_bin31->SetMarkerStyle(24);
   hM_bin31->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin31->GetXaxis()->SetLabelFont(42);
   hM_bin31->GetXaxis()->SetLabelSize(0.035);
   hM_bin31->GetXaxis()->SetTitleSize(0.035);
   hM_bin31->GetXaxis()->SetTitleFont(42);
   hM_bin31->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin31->GetYaxis()->SetLabelFont(42);
   hM_bin31->GetYaxis()->SetLabelSize(0.035);
   hM_bin31->GetYaxis()->SetTitleSize(0.035);
   hM_bin31->GetYaxis()->SetTitleFont(42);
   hM_bin31->GetZaxis()->SetLabelFont(42);
   hM_bin31->GetZaxis()->SetLabelSize(0.035);
   hM_bin31->GetZaxis()->SetTitleSize(0.035);
   hM_bin31->GetZaxis()->SetTitleFont(42);
   hM_bin31->Draw("e");
   
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
   fmb->SetParameter(0,-18.15095);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,263.0746);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-4.793746e-07);
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
   fpeak->SetParameter(0,233.3309);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1389181);
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
