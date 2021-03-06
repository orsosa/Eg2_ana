{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 14:57:04 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-18.42196,0.350906,165.7977);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin34 = new TH1F("hM_bin34","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin34->SetBinContent(0,3385);
   hM_bin34->SetBinContent(14,2);
   hM_bin34->SetBinContent(16,3);
   hM_bin34->SetBinContent(17,2);
   hM_bin34->SetBinContent(18,2);
   hM_bin34->SetBinContent(19,6);
   hM_bin34->SetBinContent(20,2);
   hM_bin34->SetBinContent(21,2);
   hM_bin34->SetBinContent(22,3);
   hM_bin34->SetBinContent(23,4);
   hM_bin34->SetBinContent(24,1);
   hM_bin34->SetBinContent(25,3);
   hM_bin34->SetBinContent(26,2);
   hM_bin34->SetBinContent(27,3);
   hM_bin34->SetBinContent(28,2);
   hM_bin34->SetBinContent(29,2);
   hM_bin34->SetBinContent(30,6);
   hM_bin34->SetBinContent(31,3);
   hM_bin34->SetBinContent(32,5);
   hM_bin34->SetBinContent(33,7);
   hM_bin34->SetBinContent(34,3);
   hM_bin34->SetBinContent(35,6);
   hM_bin34->SetBinContent(36,4);
   hM_bin34->SetBinContent(37,2);
   hM_bin34->SetBinContent(38,2);
   hM_bin34->SetBinContent(39,5);
   hM_bin34->SetBinContent(40,14);
   hM_bin34->SetBinContent(41,13);
   hM_bin34->SetBinContent(42,19);
   hM_bin34->SetBinContent(43,17);
   hM_bin34->SetBinContent(44,29);
   hM_bin34->SetBinContent(45,33);
   hM_bin34->SetBinContent(46,47);
   hM_bin34->SetBinContent(47,71);
   hM_bin34->SetBinContent(48,69);
   hM_bin34->SetBinContent(49,70);
   hM_bin34->SetBinContent(50,118);
   hM_bin34->SetBinContent(51,116);
   hM_bin34->SetBinContent(52,127);
   hM_bin34->SetBinContent(53,90);
   hM_bin34->SetBinContent(54,129);
   hM_bin34->SetBinContent(55,129);
   hM_bin34->SetBinContent(56,99);
   hM_bin34->SetBinContent(57,100);
   hM_bin34->SetBinContent(58,74);
   hM_bin34->SetBinContent(59,82);
   hM_bin34->SetBinContent(60,73);
   hM_bin34->SetBinContent(61,53);
   hM_bin34->SetBinContent(62,48);
   hM_bin34->SetBinContent(63,45);
   hM_bin34->SetBinContent(64,38);
   hM_bin34->SetBinContent(65,30);
   hM_bin34->SetBinContent(66,28);
   hM_bin34->SetBinContent(67,22);
   hM_bin34->SetBinContent(68,26);
   hM_bin34->SetBinContent(69,21);
   hM_bin34->SetBinContent(70,29);
   hM_bin34->SetBinContent(71,26);
   hM_bin34->SetBinContent(72,16);
   hM_bin34->SetBinContent(73,25);
   hM_bin34->SetBinContent(74,9);
   hM_bin34->SetBinContent(75,29);
   hM_bin34->SetBinContent(76,16);
   hM_bin34->SetBinContent(77,17);
   hM_bin34->SetBinContent(78,17);
   hM_bin34->SetBinContent(79,30);
   hM_bin34->SetBinContent(80,37);
   hM_bin34->SetBinContent(81,19);
   hM_bin34->SetBinContent(82,23);
   hM_bin34->SetBinContent(83,17);
   hM_bin34->SetBinContent(84,30);
   hM_bin34->SetBinContent(85,23);
   hM_bin34->SetBinContent(86,23);
   hM_bin34->SetBinContent(87,27);
   hM_bin34->SetBinContent(88,18);
   hM_bin34->SetBinContent(89,30);
   hM_bin34->SetBinContent(90,24);
   hM_bin34->SetBinContent(91,30);
   hM_bin34->SetBinContent(92,32);
   hM_bin34->SetBinContent(93,23);
   hM_bin34->SetBinContent(94,29);
   hM_bin34->SetBinContent(95,27);
   hM_bin34->SetBinContent(96,26);
   hM_bin34->SetBinContent(97,23);
   hM_bin34->SetBinContent(98,18);
   hM_bin34->SetBinContent(99,22);
   hM_bin34->SetBinContent(100,32);
   hM_bin34->SetBinContent(101,18423);
   hM_bin34->SetEntries(24467);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08871924,0.2046527);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(36.6257);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-17.15242);
   fsig->SetParError(0,2.744013);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,193.5112);
   fsig->SetParError(1,23.61438);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-5.550175e-05);
   fsig->SetParError(2,1521.197);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,103.9389);
   fsig->SetParError(3,3.663094);
   fsig->SetParLimits(3,0,258);
   fsig->SetParameter(4,0.1454312);
   fsig->SetParError(4,0.0007017454);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0005550594);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin34->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin34");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 24467  ");
   text = ptstats->AddText("Mean  = 0.1762");
   text = ptstats->AddText("RMS   = 0.05778");
   text = ptstats->AddText("#chi^{2} / ndf = 36.63 / 28");
   text = ptstats->AddText("p0       = -17.15 #pm 2.74 ");
   text = ptstats->AddText("p1       = 193.5 #pm 23.6 ");
   text = ptstats->AddText("p2       = -5.55e-05 #pm 1.52e+03 ");
   text = ptstats->AddText("p3       = 103.9 #pm 3.7 ");
   text = ptstats->AddText("p4       = 0.1454 #pm 0.0007 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00056 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin34->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin34);

   ci = TColor::GetColor("#0000ff");
   hM_bin34->SetMarkerColor(ci);
   hM_bin34->SetMarkerStyle(24);
   hM_bin34->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin34->GetXaxis()->SetLabelFont(42);
   hM_bin34->GetXaxis()->SetLabelSize(0.035);
   hM_bin34->GetXaxis()->SetTitleSize(0.035);
   hM_bin34->GetXaxis()->SetTitleFont(42);
   hM_bin34->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin34->GetYaxis()->SetLabelFont(42);
   hM_bin34->GetYaxis()->SetLabelSize(0.035);
   hM_bin34->GetYaxis()->SetTitleSize(0.035);
   hM_bin34->GetYaxis()->SetTitleFont(42);
   hM_bin34->GetZaxis()->SetLabelFont(42);
   hM_bin34->GetZaxis()->SetLabelSize(0.035);
   hM_bin34->GetZaxis()->SetTitleSize(0.035);
   hM_bin34->GetZaxis()->SetTitleFont(42);
   hM_bin34->Draw("e");
   
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
   fmb->SetParameter(0,-17.15242);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,193.5112);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-5.550175e-05);
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
   fpeak->SetParameter(0,103.9389);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1454312);
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
