{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 15:54:21 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-25.52204,0.350906,229.6983);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin28 = new TH1F("hM_bin28","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin28->SetBinContent(0,2568);
   hM_bin28->SetBinContent(13,1);
   hM_bin28->SetBinContent(14,1);
   hM_bin28->SetBinContent(15,1);
   hM_bin28->SetBinContent(16,5);
   hM_bin28->SetBinContent(17,5);
   hM_bin28->SetBinContent(18,1);
   hM_bin28->SetBinContent(19,4);
   hM_bin28->SetBinContent(20,2);
   hM_bin28->SetBinContent(22,4);
   hM_bin28->SetBinContent(23,4);
   hM_bin28->SetBinContent(24,5);
   hM_bin28->SetBinContent(25,4);
   hM_bin28->SetBinContent(26,2);
   hM_bin28->SetBinContent(27,2);
   hM_bin28->SetBinContent(28,3);
   hM_bin28->SetBinContent(29,5);
   hM_bin28->SetBinContent(30,7);
   hM_bin28->SetBinContent(31,3);
   hM_bin28->SetBinContent(32,7);
   hM_bin28->SetBinContent(33,5);
   hM_bin28->SetBinContent(34,3);
   hM_bin28->SetBinContent(35,9);
   hM_bin28->SetBinContent(36,4);
   hM_bin28->SetBinContent(37,5);
   hM_bin28->SetBinContent(39,9);
   hM_bin28->SetBinContent(40,13);
   hM_bin28->SetBinContent(41,14);
   hM_bin28->SetBinContent(42,24);
   hM_bin28->SetBinContent(43,27);
   hM_bin28->SetBinContent(44,26);
   hM_bin28->SetBinContent(45,55);
   hM_bin28->SetBinContent(46,68);
   hM_bin28->SetBinContent(47,92);
   hM_bin28->SetBinContent(48,120);
   hM_bin28->SetBinContent(49,139);
   hM_bin28->SetBinContent(50,162);
   hM_bin28->SetBinContent(51,166);
   hM_bin28->SetBinContent(52,181);
   hM_bin28->SetBinContent(53,169);
   hM_bin28->SetBinContent(54,171);
   hM_bin28->SetBinContent(55,165);
   hM_bin28->SetBinContent(56,141);
   hM_bin28->SetBinContent(57,153);
   hM_bin28->SetBinContent(58,123);
   hM_bin28->SetBinContent(59,96);
   hM_bin28->SetBinContent(60,90);
   hM_bin28->SetBinContent(61,76);
   hM_bin28->SetBinContent(62,54);
   hM_bin28->SetBinContent(63,42);
   hM_bin28->SetBinContent(64,49);
   hM_bin28->SetBinContent(65,41);
   hM_bin28->SetBinContent(66,28);
   hM_bin28->SetBinContent(67,29);
   hM_bin28->SetBinContent(68,38);
   hM_bin28->SetBinContent(69,32);
   hM_bin28->SetBinContent(70,23);
   hM_bin28->SetBinContent(71,36);
   hM_bin28->SetBinContent(72,24);
   hM_bin28->SetBinContent(73,20);
   hM_bin28->SetBinContent(74,31);
   hM_bin28->SetBinContent(75,26);
   hM_bin28->SetBinContent(76,27);
   hM_bin28->SetBinContent(77,23);
   hM_bin28->SetBinContent(78,29);
   hM_bin28->SetBinContent(79,34);
   hM_bin28->SetBinContent(80,35);
   hM_bin28->SetBinContent(81,24);
   hM_bin28->SetBinContent(82,35);
   hM_bin28->SetBinContent(83,26);
   hM_bin28->SetBinContent(84,44);
   hM_bin28->SetBinContent(85,28);
   hM_bin28->SetBinContent(86,36);
   hM_bin28->SetBinContent(87,36);
   hM_bin28->SetBinContent(88,35);
   hM_bin28->SetBinContent(89,25);
   hM_bin28->SetBinContent(90,38);
   hM_bin28->SetBinContent(91,45);
   hM_bin28->SetBinContent(92,41);
   hM_bin28->SetBinContent(93,38);
   hM_bin28->SetBinContent(94,43);
   hM_bin28->SetBinContent(95,34);
   hM_bin28->SetBinContent(96,31);
   hM_bin28->SetBinContent(97,45);
   hM_bin28->SetBinContent(98,33);
   hM_bin28->SetBinContent(99,38);
   hM_bin28->SetBinContent(100,38);
   hM_bin28->SetBinContent(101,15861);
   hM_bin28->SetEntries(22135);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08769304,0.2036265);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(40.93023);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-18.02637);
   fsig->SetParError(0,3.937494);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,202.1714);
   fsig->SetParError(1,29.19899);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.788714e-06);
   fsig->SetParError(2,285.0118);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,156.7633);
   fsig->SetParError(3,4.41318);
   fsig->SetParLimits(3,0,362);
   fsig->SetParameter(4,0.1449001);
   fsig->SetParError(4,0.0005252293);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,6.2417e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin28->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin28");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 22135  ");
   text = ptstats->AddText("Mean  = 0.1759");
   text = ptstats->AddText("RMS   = 0.05796");
   text = ptstats->AddText("#chi^{2} / ndf = 40.93 / 27");
   text = ptstats->AddText("p0       = -18.03 #pm 3.94 ");
   text = ptstats->AddText("p1       = 202.2 #pm 29.2 ");
   text = ptstats->AddText("p2       = -1.789e-06 #pm 2.850e+02 ");
   text = ptstats->AddText("p3       = 156.8 #pm 4.4 ");
   text = ptstats->AddText("p4       = 0.1449 #pm 0.0005 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00006 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin28->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin28);

   ci = TColor::GetColor("#0000ff");
   hM_bin28->SetMarkerColor(ci);
   hM_bin28->SetMarkerStyle(24);
   hM_bin28->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin28->GetXaxis()->SetLabelFont(42);
   hM_bin28->GetXaxis()->SetLabelSize(0.035);
   hM_bin28->GetXaxis()->SetTitleSize(0.035);
   hM_bin28->GetXaxis()->SetTitleFont(42);
   hM_bin28->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin28->GetYaxis()->SetLabelFont(42);
   hM_bin28->GetYaxis()->SetLabelSize(0.035);
   hM_bin28->GetYaxis()->SetTitleSize(0.035);
   hM_bin28->GetYaxis()->SetTitleFont(42);
   hM_bin28->GetZaxis()->SetLabelFont(42);
   hM_bin28->GetZaxis()->SetLabelSize(0.035);
   hM_bin28->GetZaxis()->SetTitleSize(0.035);
   hM_bin28->GetZaxis()->SetTitleFont(42);
   hM_bin28->Draw("e");
   
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
   fmb->SetParameter(0,-18.02637);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,202.1714);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.788714e-06);
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
   fpeak->SetParameter(0,156.7633);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1449001);
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
