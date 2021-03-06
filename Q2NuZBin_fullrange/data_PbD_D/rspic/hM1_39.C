{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr  4 12:29:49 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-33.39783,0.350906,300.5804);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin39 = new TH1F("hM_bin39","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin39->SetBinContent(0,3238);
   hM_bin39->SetBinContent(15,2);
   hM_bin39->SetBinContent(16,5);
   hM_bin39->SetBinContent(17,10);
   hM_bin39->SetBinContent(18,5);
   hM_bin39->SetBinContent(19,8);
   hM_bin39->SetBinContent(20,7);
   hM_bin39->SetBinContent(21,7);
   hM_bin39->SetBinContent(22,7);
   hM_bin39->SetBinContent(23,7);
   hM_bin39->SetBinContent(24,7);
   hM_bin39->SetBinContent(25,1);
   hM_bin39->SetBinContent(26,7);
   hM_bin39->SetBinContent(27,4);
   hM_bin39->SetBinContent(28,5);
   hM_bin39->SetBinContent(29,4);
   hM_bin39->SetBinContent(30,9);
   hM_bin39->SetBinContent(31,6);
   hM_bin39->SetBinContent(32,11);
   hM_bin39->SetBinContent(33,9);
   hM_bin39->SetBinContent(34,1);
   hM_bin39->SetBinContent(35,13);
   hM_bin39->SetBinContent(36,17);
   hM_bin39->SetBinContent(37,15);
   hM_bin39->SetBinContent(38,18);
   hM_bin39->SetBinContent(39,21);
   hM_bin39->SetBinContent(40,23);
   hM_bin39->SetBinContent(41,36);
   hM_bin39->SetBinContent(42,50);
   hM_bin39->SetBinContent(43,55);
   hM_bin39->SetBinContent(44,75);
   hM_bin39->SetBinContent(45,93);
   hM_bin39->SetBinContent(46,116);
   hM_bin39->SetBinContent(47,145);
   hM_bin39->SetBinContent(48,166);
   hM_bin39->SetBinContent(49,198);
   hM_bin39->SetBinContent(50,234);
   hM_bin39->SetBinContent(51,239);
   hM_bin39->SetBinContent(52,227);
   hM_bin39->SetBinContent(53,234);
   hM_bin39->SetBinContent(54,216);
   hM_bin39->SetBinContent(55,204);
   hM_bin39->SetBinContent(56,179);
   hM_bin39->SetBinContent(57,141);
   hM_bin39->SetBinContent(58,149);
   hM_bin39->SetBinContent(59,118);
   hM_bin39->SetBinContent(60,98);
   hM_bin39->SetBinContent(61,89);
   hM_bin39->SetBinContent(62,56);
   hM_bin39->SetBinContent(63,55);
   hM_bin39->SetBinContent(64,68);
   hM_bin39->SetBinContent(65,49);
   hM_bin39->SetBinContent(66,42);
   hM_bin39->SetBinContent(67,43);
   hM_bin39->SetBinContent(68,48);
   hM_bin39->SetBinContent(69,44);
   hM_bin39->SetBinContent(70,49);
   hM_bin39->SetBinContent(71,39);
   hM_bin39->SetBinContent(72,43);
   hM_bin39->SetBinContent(73,54);
   hM_bin39->SetBinContent(74,36);
   hM_bin39->SetBinContent(75,39);
   hM_bin39->SetBinContent(76,47);
   hM_bin39->SetBinContent(77,31);
   hM_bin39->SetBinContent(78,51);
   hM_bin39->SetBinContent(79,53);
   hM_bin39->SetBinContent(80,38);
   hM_bin39->SetBinContent(81,41);
   hM_bin39->SetBinContent(82,51);
   hM_bin39->SetBinContent(83,49);
   hM_bin39->SetBinContent(84,57);
   hM_bin39->SetBinContent(85,49);
   hM_bin39->SetBinContent(86,41);
   hM_bin39->SetBinContent(87,48);
   hM_bin39->SetBinContent(88,41);
   hM_bin39->SetBinContent(89,61);
   hM_bin39->SetBinContent(90,37);
   hM_bin39->SetBinContent(91,49);
   hM_bin39->SetBinContent(92,58);
   hM_bin39->SetBinContent(93,60);
   hM_bin39->SetBinContent(94,55);
   hM_bin39->SetBinContent(95,62);
   hM_bin39->SetBinContent(96,71);
   hM_bin39->SetBinContent(97,68);
   hM_bin39->SetBinContent(98,70);
   hM_bin39->SetBinContent(99,83);
   hM_bin39->SetBinContent(100,65);
   hM_bin39->SetBinContent(101,20189);
   hM_bin39->SetEntries(28719);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08316427,0.1990977);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(32.83271);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-14.36036);
   fsig->SetParError(0,5.241288);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,252.2547);
   fsig->SetParError(1,40.5716);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-2.79114e-05);
   fsig->SetParError(2,391.5681);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,199.2143);
   fsig->SetParError(3,5.315399);
   fsig->SetParLimits(3,0,478);
   fsig->SetParameter(4,0.1412192);
   fsig->SetParError(4,0.0005199686);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,8.094722e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin39->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin39");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 28719  ");
   text = ptstats->AddText("Mean  = 0.1767");
   text = ptstats->AddText("RMS   = 0.06199");
   text = ptstats->AddText("#chi^{2} / ndf = 32.83 / 27");
   text = ptstats->AddText("p0       = -14.36 #pm 5.24 ");
   text = ptstats->AddText("p1       = 252.3 #pm 40.6 ");
   text = ptstats->AddText("p2       = -2.791e-05 #pm 3.916e+02 ");
   text = ptstats->AddText("p3       = 199.2 #pm 5.3 ");
   text = ptstats->AddText("p4       = 0.1412 #pm 0.0005 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00008 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin39->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin39);

   ci = TColor::GetColor("#0000ff");
   hM_bin39->SetMarkerColor(ci);
   hM_bin39->SetMarkerStyle(24);
   hM_bin39->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin39->GetXaxis()->SetLabelFont(42);
   hM_bin39->GetXaxis()->SetLabelSize(0.035);
   hM_bin39->GetXaxis()->SetTitleSize(0.035);
   hM_bin39->GetXaxis()->SetTitleFont(42);
   hM_bin39->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin39->GetYaxis()->SetLabelFont(42);
   hM_bin39->GetYaxis()->SetLabelSize(0.035);
   hM_bin39->GetYaxis()->SetTitleSize(0.035);
   hM_bin39->GetYaxis()->SetTitleFont(42);
   hM_bin39->GetZaxis()->SetLabelFont(42);
   hM_bin39->GetZaxis()->SetLabelSize(0.035);
   hM_bin39->GetZaxis()->SetTitleSize(0.035);
   hM_bin39->GetZaxis()->SetTitleFont(42);
   hM_bin39->Draw("e");
   
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
   fmb->SetParameter(0,-14.36036);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,252.2547);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-2.79114e-05);
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
   fpeak->SetParameter(0,199.2143);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1412192);
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
