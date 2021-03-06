{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 15:56:59 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-6.504414,0.350906,58.53972);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin23 = new TH1F("hM_bin23","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin23->SetBinContent(0,2646);
   hM_bin23->SetBinContent(15,1);
   hM_bin23->SetBinContent(16,1);
   hM_bin23->SetBinContent(17,1);
   hM_bin23->SetBinContent(19,1);
   hM_bin23->SetBinContent(22,1);
   hM_bin23->SetBinContent(23,1);
   hM_bin23->SetBinContent(24,3);
   hM_bin23->SetBinContent(25,2);
   hM_bin23->SetBinContent(26,2);
   hM_bin23->SetBinContent(27,1);
   hM_bin23->SetBinContent(28,1);
   hM_bin23->SetBinContent(30,1);
   hM_bin23->SetBinContent(31,1);
   hM_bin23->SetBinContent(32,1);
   hM_bin23->SetBinContent(34,2);
   hM_bin23->SetBinContent(35,2);
   hM_bin23->SetBinContent(37,3);
   hM_bin23->SetBinContent(39,1);
   hM_bin23->SetBinContent(40,1);
   hM_bin23->SetBinContent(41,2);
   hM_bin23->SetBinContent(42,6);
   hM_bin23->SetBinContent(43,6);
   hM_bin23->SetBinContent(44,7);
   hM_bin23->SetBinContent(45,12);
   hM_bin23->SetBinContent(46,18);
   hM_bin23->SetBinContent(47,13);
   hM_bin23->SetBinContent(48,28);
   hM_bin23->SetBinContent(49,19);
   hM_bin23->SetBinContent(50,23);
   hM_bin23->SetBinContent(51,42);
   hM_bin23->SetBinContent(52,27);
   hM_bin23->SetBinContent(53,30);
   hM_bin23->SetBinContent(54,36);
   hM_bin23->SetBinContent(55,43);
   hM_bin23->SetBinContent(56,26);
   hM_bin23->SetBinContent(57,26);
   hM_bin23->SetBinContent(58,35);
   hM_bin23->SetBinContent(59,17);
   hM_bin23->SetBinContent(60,36);
   hM_bin23->SetBinContent(61,17);
   hM_bin23->SetBinContent(62,12);
   hM_bin23->SetBinContent(63,14);
   hM_bin23->SetBinContent(64,19);
   hM_bin23->SetBinContent(65,17);
   hM_bin23->SetBinContent(66,7);
   hM_bin23->SetBinContent(67,14);
   hM_bin23->SetBinContent(68,7);
   hM_bin23->SetBinContent(69,8);
   hM_bin23->SetBinContent(70,8);
   hM_bin23->SetBinContent(71,8);
   hM_bin23->SetBinContent(72,8);
   hM_bin23->SetBinContent(73,10);
   hM_bin23->SetBinContent(74,10);
   hM_bin23->SetBinContent(75,10);
   hM_bin23->SetBinContent(76,8);
   hM_bin23->SetBinContent(77,12);
   hM_bin23->SetBinContent(78,9);
   hM_bin23->SetBinContent(79,11);
   hM_bin23->SetBinContent(80,5);
   hM_bin23->SetBinContent(81,15);
   hM_bin23->SetBinContent(82,11);
   hM_bin23->SetBinContent(83,4);
   hM_bin23->SetBinContent(84,9);
   hM_bin23->SetBinContent(85,6);
   hM_bin23->SetBinContent(86,12);
   hM_bin23->SetBinContent(87,11);
   hM_bin23->SetBinContent(88,11);
   hM_bin23->SetBinContent(89,7);
   hM_bin23->SetBinContent(90,8);
   hM_bin23->SetBinContent(91,9);
   hM_bin23->SetBinContent(92,4);
   hM_bin23->SetBinContent(93,7);
   hM_bin23->SetBinContent(94,11);
   hM_bin23->SetBinContent(95,7);
   hM_bin23->SetBinContent(96,12);
   hM_bin23->SetBinContent(97,7);
   hM_bin23->SetBinContent(98,14);
   hM_bin23->SetBinContent(99,9);
   hM_bin23->SetBinContent(100,13);
   hM_bin23->SetBinContent(101,4333);
   hM_bin23->SetEntries(7859);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.09051366,0.2064471);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(36.95737);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-8.327024);
   fsig->SetParError(0,1.385172);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,78.28011);
   fsig->SetParError(1,39.15865);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.3797277);
   fsig->SetParError(2,9450.487);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,29.38951);
   fsig->SetParError(3,1.894753);
   fsig->SetParLimits(3,0,86);
   fsig->SetParameter(4,0.1463264);
   fsig->SetParError(4,0.002398479);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.0204249);
   fsig->SetParError(5,0.00152784);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin23->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin23");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 7859   ");
   text = ptstats->AddText("Mean  = 0.1823");
   text = ptstats->AddText("RMS   = 0.05876");
   text = ptstats->AddText("#chi^{2} / ndf = 36.96 / 27");
   text = ptstats->AddText("p0       = -8.327 #pm 1.385 ");
   text = ptstats->AddText("p1       = 78.28 #pm 39.16 ");
   text = ptstats->AddText("p2       = -0.3797 #pm 9450.4863 ");
   text = ptstats->AddText("p3       = 29.39 #pm 1.89 ");
   text = ptstats->AddText("p4       = 0.1463 #pm 0.0024 ");
   text = ptstats->AddText("p5       = 0.02042 #pm 0.00153 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin23->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin23);

   ci = TColor::GetColor("#0000ff");
   hM_bin23->SetMarkerColor(ci);
   hM_bin23->SetMarkerStyle(24);
   hM_bin23->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin23->GetXaxis()->SetLabelFont(42);
   hM_bin23->GetXaxis()->SetLabelSize(0.035);
   hM_bin23->GetXaxis()->SetTitleSize(0.035);
   hM_bin23->GetXaxis()->SetTitleFont(42);
   hM_bin23->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin23->GetYaxis()->SetLabelFont(42);
   hM_bin23->GetYaxis()->SetLabelSize(0.035);
   hM_bin23->GetYaxis()->SetTitleSize(0.035);
   hM_bin23->GetYaxis()->SetTitleFont(42);
   hM_bin23->GetZaxis()->SetLabelFont(42);
   hM_bin23->GetZaxis()->SetLabelSize(0.035);
   hM_bin23->GetZaxis()->SetTitleSize(0.035);
   hM_bin23->GetZaxis()->SetTitleFont(42);
   hM_bin23->Draw("e");
   
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
   fmb->SetParameter(0,-8.327024);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,78.28011);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.3797277);
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
   fpeak->SetParameter(0,29.38951);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1463264);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.0204249);
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
