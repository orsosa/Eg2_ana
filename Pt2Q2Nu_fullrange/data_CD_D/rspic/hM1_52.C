{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 14:57:48 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-18.9699,0.350906,170.7291);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin52 = new TH1F("hM_bin52","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin52->SetBinContent(0,4508);
   hM_bin52->SetBinContent(14,1);
   hM_bin52->SetBinContent(15,1);
   hM_bin52->SetBinContent(16,2);
   hM_bin52->SetBinContent(17,2);
   hM_bin52->SetBinContent(18,7);
   hM_bin52->SetBinContent(19,1);
   hM_bin52->SetBinContent(20,1);
   hM_bin52->SetBinContent(21,2);
   hM_bin52->SetBinContent(22,1);
   hM_bin52->SetBinContent(23,6);
   hM_bin52->SetBinContent(24,1);
   hM_bin52->SetBinContent(25,1);
   hM_bin52->SetBinContent(26,5);
   hM_bin52->SetBinContent(27,6);
   hM_bin52->SetBinContent(28,3);
   hM_bin52->SetBinContent(29,3);
   hM_bin52->SetBinContent(30,5);
   hM_bin52->SetBinContent(31,6);
   hM_bin52->SetBinContent(32,7);
   hM_bin52->SetBinContent(33,4);
   hM_bin52->SetBinContent(34,6);
   hM_bin52->SetBinContent(35,9);
   hM_bin52->SetBinContent(36,7);
   hM_bin52->SetBinContent(37,5);
   hM_bin52->SetBinContent(38,3);
   hM_bin52->SetBinContent(39,15);
   hM_bin52->SetBinContent(40,9);
   hM_bin52->SetBinContent(41,7);
   hM_bin52->SetBinContent(42,13);
   hM_bin52->SetBinContent(43,20);
   hM_bin52->SetBinContent(44,25);
   hM_bin52->SetBinContent(45,51);
   hM_bin52->SetBinContent(46,43);
   hM_bin52->SetBinContent(47,50);
   hM_bin52->SetBinContent(48,74);
   hM_bin52->SetBinContent(49,80);
   hM_bin52->SetBinContent(50,119);
   hM_bin52->SetBinContent(51,132);
   hM_bin52->SetBinContent(52,118);
   hM_bin52->SetBinContent(53,116);
   hM_bin52->SetBinContent(54,127);
   hM_bin52->SetBinContent(55,133);
   hM_bin52->SetBinContent(56,116);
   hM_bin52->SetBinContent(57,107);
   hM_bin52->SetBinContent(58,109);
   hM_bin52->SetBinContent(59,112);
   hM_bin52->SetBinContent(60,78);
   hM_bin52->SetBinContent(61,60);
   hM_bin52->SetBinContent(62,55);
   hM_bin52->SetBinContent(63,55);
   hM_bin52->SetBinContent(64,38);
   hM_bin52->SetBinContent(65,36);
   hM_bin52->SetBinContent(66,35);
   hM_bin52->SetBinContent(67,31);
   hM_bin52->SetBinContent(68,30);
   hM_bin52->SetBinContent(69,28);
   hM_bin52->SetBinContent(70,27);
   hM_bin52->SetBinContent(71,35);
   hM_bin52->SetBinContent(72,23);
   hM_bin52->SetBinContent(73,15);
   hM_bin52->SetBinContent(74,19);
   hM_bin52->SetBinContent(75,25);
   hM_bin52->SetBinContent(76,22);
   hM_bin52->SetBinContent(77,26);
   hM_bin52->SetBinContent(78,20);
   hM_bin52->SetBinContent(79,27);
   hM_bin52->SetBinContent(80,22);
   hM_bin52->SetBinContent(81,20);
   hM_bin52->SetBinContent(82,27);
   hM_bin52->SetBinContent(83,29);
   hM_bin52->SetBinContent(84,28);
   hM_bin52->SetBinContent(85,20);
   hM_bin52->SetBinContent(86,26);
   hM_bin52->SetBinContent(87,19);
   hM_bin52->SetBinContent(88,23);
   hM_bin52->SetBinContent(89,22);
   hM_bin52->SetBinContent(90,22);
   hM_bin52->SetBinContent(91,26);
   hM_bin52->SetBinContent(92,27);
   hM_bin52->SetBinContent(93,30);
   hM_bin52->SetBinContent(94,32);
   hM_bin52->SetBinContent(95,32);
   hM_bin52->SetBinContent(96,25);
   hM_bin52->SetBinContent(97,27);
   hM_bin52->SetBinContent(98,25);
   hM_bin52->SetBinContent(99,33);
   hM_bin52->SetBinContent(100,28);
   hM_bin52->SetBinContent(101,20829);
   hM_bin52->SetEntries(28236);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.0906681,0.2066015);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(35.01238);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-19.79407);
   fsig->SetParError(0,3.484298);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,224.5839);
   fsig->SetParError(1,26.9822);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.051885e-07);
   fsig->SetParError(2,475.3826);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,113.2459);
   fsig->SetParError(3,3.813334);
   fsig->SetParLimits(3,0,266);
   fsig->SetParameter(4,0.147253);
   fsig->SetParError(4,0.000682509);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0002003464);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin52->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin52");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 28236  ");
   text = ptstats->AddText("Mean  = 0.1759");
   text = ptstats->AddText("RMS   = 0.05703");
   text = ptstats->AddText("#chi^{2} / ndf = 35.01 / 28");
   text = ptstats->AddText("p0       = -19.79 #pm 3.48 ");
   text = ptstats->AddText("p1       = 224.6 #pm 27.0 ");
   text = ptstats->AddText("p2       = -1.052e-07 #pm 4.754e+02 ");
   text = ptstats->AddText("p3       = 113.2 #pm 3.8 ");
   text = ptstats->AddText("p4       = 0.1473 #pm 0.0007 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00020 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin52->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin52);

   ci = TColor::GetColor("#0000ff");
   hM_bin52->SetMarkerColor(ci);
   hM_bin52->SetMarkerStyle(24);
   hM_bin52->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin52->GetXaxis()->SetLabelFont(42);
   hM_bin52->GetXaxis()->SetLabelSize(0.035);
   hM_bin52->GetXaxis()->SetTitleSize(0.035);
   hM_bin52->GetXaxis()->SetTitleFont(42);
   hM_bin52->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin52->GetYaxis()->SetLabelFont(42);
   hM_bin52->GetYaxis()->SetLabelSize(0.035);
   hM_bin52->GetYaxis()->SetTitleSize(0.035);
   hM_bin52->GetYaxis()->SetTitleFont(42);
   hM_bin52->GetZaxis()->SetLabelFont(42);
   hM_bin52->GetZaxis()->SetLabelSize(0.035);
   hM_bin52->GetZaxis()->SetTitleSize(0.035);
   hM_bin52->GetZaxis()->SetTitleFont(42);
   hM_bin52->Draw("e");
   
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
   fmb->SetParameter(0,-19.79407);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,224.5839);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.051885e-07);
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
   fpeak->SetParameter(0,113.2459);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.147253);
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
