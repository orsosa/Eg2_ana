{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:27:22 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-27.01866,0.350906,243.1679);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin38 = new TH1F("hM_bin38","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin38->SetBinContent(13,1);
   hM_bin38->SetBinContent(14,5);
   hM_bin38->SetBinContent(15,9);
   hM_bin38->SetBinContent(16,3);
   hM_bin38->SetBinContent(17,6);
   hM_bin38->SetBinContent(18,9);
   hM_bin38->SetBinContent(19,22);
   hM_bin38->SetBinContent(20,14);
   hM_bin38->SetBinContent(21,15);
   hM_bin38->SetBinContent(22,19);
   hM_bin38->SetBinContent(23,23);
   hM_bin38->SetBinContent(24,23);
   hM_bin38->SetBinContent(25,16);
   hM_bin38->SetBinContent(26,33);
   hM_bin38->SetBinContent(27,22);
   hM_bin38->SetBinContent(28,24);
   hM_bin38->SetBinContent(29,27);
   hM_bin38->SetBinContent(30,32);
   hM_bin38->SetBinContent(31,21);
   hM_bin38->SetBinContent(32,18);
   hM_bin38->SetBinContent(33,27);
   hM_bin38->SetBinContent(34,29);
   hM_bin38->SetBinContent(35,29);
   hM_bin38->SetBinContent(36,36);
   hM_bin38->SetBinContent(37,37);
   hM_bin38->SetBinContent(38,52);
   hM_bin38->SetBinContent(39,58);
   hM_bin38->SetBinContent(40,52);
   hM_bin38->SetBinContent(41,49);
   hM_bin38->SetBinContent(42,76);
   hM_bin38->SetBinContent(43,69);
   hM_bin38->SetBinContent(44,115);
   hM_bin38->SetBinContent(45,130);
   hM_bin38->SetBinContent(46,150);
   hM_bin38->SetBinContent(47,184);
   hM_bin38->SetBinContent(48,163);
   hM_bin38->SetBinContent(49,192);
   hM_bin38->SetBinContent(50,179);
   hM_bin38->SetBinContent(51,190);
   hM_bin38->SetBinContent(52,190);
   hM_bin38->SetBinContent(53,161);
   hM_bin38->SetBinContent(54,163);
   hM_bin38->SetBinContent(55,156);
   hM_bin38->SetBinContent(56,130);
   hM_bin38->SetBinContent(57,134);
   hM_bin38->SetBinContent(58,86);
   hM_bin38->SetBinContent(59,79);
   hM_bin38->SetBinContent(60,80);
   hM_bin38->SetBinContent(61,57);
   hM_bin38->SetBinContent(62,41);
   hM_bin38->SetBinContent(63,51);
   hM_bin38->SetBinContent(64,47);
   hM_bin38->SetBinContent(65,45);
   hM_bin38->SetBinContent(66,27);
   hM_bin38->SetBinContent(67,37);
   hM_bin38->SetBinContent(68,38);
   hM_bin38->SetBinContent(69,32);
   hM_bin38->SetBinContent(70,36);
   hM_bin38->SetBinContent(71,35);
   hM_bin38->SetBinContent(72,28);
   hM_bin38->SetBinContent(73,20);
   hM_bin38->SetBinContent(74,16);
   hM_bin38->SetBinContent(75,32);
   hM_bin38->SetBinContent(76,31);
   hM_bin38->SetBinContent(77,21);
   hM_bin38->SetBinContent(78,35);
   hM_bin38->SetBinContent(79,22);
   hM_bin38->SetBinContent(80,10);
   hM_bin38->SetBinContent(81,34);
   hM_bin38->SetBinContent(82,28);
   hM_bin38->SetBinContent(83,33);
   hM_bin38->SetBinContent(84,20);
   hM_bin38->SetBinContent(85,22);
   hM_bin38->SetBinContent(86,20);
   hM_bin38->SetBinContent(87,12);
   hM_bin38->SetBinContent(88,33);
   hM_bin38->SetBinContent(89,17);
   hM_bin38->SetBinContent(90,19);
   hM_bin38->SetBinContent(91,15);
   hM_bin38->SetBinContent(92,16);
   hM_bin38->SetBinContent(93,18);
   hM_bin38->SetBinContent(94,17);
   hM_bin38->SetBinContent(95,22);
   hM_bin38->SetBinContent(96,11);
   hM_bin38->SetBinContent(97,18);
   hM_bin38->SetBinContent(98,19);
   hM_bin38->SetBinContent(99,17);
   hM_bin38->SetBinContent(100,20);
   hM_bin38->SetBinContent(101,1014);
   hM_bin38->SetEntries(5424);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.0777599,0.1936933);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(39.92209);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,26.39476);
   fsig->SetParError(0,5.604358);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,22.94509);
   fsig->SetParError(1,40.14469);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.0009708643);
   fsig->SetParError(2,6190.851);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,159.2656);
   fsig->SetParError(3,4.985936);
   fsig->SetParLimits(3,0,384);
   fsig->SetParameter(4,0.1361114);
   fsig->SetParError(4,0.000651466);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0004015528);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin38->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin38");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 5424   ");
   text = ptstats->AddText("Mean  = 0.1475");
   text = ptstats->AddText("RMS   = 0.05644");
   text = ptstats->AddText("#chi^{2} / ndf = 39.92 / 28");
   text = ptstats->AddText("p0       = 26.39 #pm 5.60 ");
   text = ptstats->AddText("p1       = 22.95 #pm 40.14 ");
   text = ptstats->AddText("p2       = -0.0009709 #pm 6190.8515625 ");
   text = ptstats->AddText("p3       = 159.3 #pm 5.0 ");
   text = ptstats->AddText("p4       = 0.1361 #pm 0.0007 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00040 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin38->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin38);

   ci = TColor::GetColor("#0000ff");
   hM_bin38->SetMarkerColor(ci);
   hM_bin38->SetMarkerStyle(24);
   hM_bin38->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin38->GetXaxis()->SetLabelFont(42);
   hM_bin38->GetXaxis()->SetLabelSize(0.035);
   hM_bin38->GetXaxis()->SetTitleSize(0.035);
   hM_bin38->GetXaxis()->SetTitleFont(42);
   hM_bin38->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin38->GetYaxis()->SetLabelFont(42);
   hM_bin38->GetYaxis()->SetLabelSize(0.035);
   hM_bin38->GetYaxis()->SetTitleSize(0.035);
   hM_bin38->GetYaxis()->SetTitleFont(42);
   hM_bin38->GetZaxis()->SetLabelFont(42);
   hM_bin38->GetZaxis()->SetLabelSize(0.035);
   hM_bin38->GetZaxis()->SetTitleSize(0.035);
   hM_bin38->GetZaxis()->SetTitleFont(42);
   hM_bin38->Draw("e");
   
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
   fmb->SetParameter(0,26.39476);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,22.94509);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.0009708643);
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
   fpeak->SetParameter(0,159.2656);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1361114);
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
