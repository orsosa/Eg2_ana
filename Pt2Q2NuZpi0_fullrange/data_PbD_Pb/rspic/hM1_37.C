{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:27:18 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-49.33615,0.350906,444.0253);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin37 = new TH1F("hM_bin37","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin37->SetBinContent(13,1);
   hM_bin37->SetBinContent(14,9);
   hM_bin37->SetBinContent(15,15);
   hM_bin37->SetBinContent(16,16);
   hM_bin37->SetBinContent(17,27);
   hM_bin37->SetBinContent(18,21);
   hM_bin37->SetBinContent(19,42);
   hM_bin37->SetBinContent(20,29);
   hM_bin37->SetBinContent(21,29);
   hM_bin37->SetBinContent(22,36);
   hM_bin37->SetBinContent(23,48);
   hM_bin37->SetBinContent(24,41);
   hM_bin37->SetBinContent(25,42);
   hM_bin37->SetBinContent(26,48);
   hM_bin37->SetBinContent(27,45);
   hM_bin37->SetBinContent(28,55);
   hM_bin37->SetBinContent(29,51);
   hM_bin37->SetBinContent(30,64);
   hM_bin37->SetBinContent(31,58);
   hM_bin37->SetBinContent(32,63);
   hM_bin37->SetBinContent(33,63);
   hM_bin37->SetBinContent(34,46);
   hM_bin37->SetBinContent(35,71);
   hM_bin37->SetBinContent(36,82);
   hM_bin37->SetBinContent(37,67);
   hM_bin37->SetBinContent(38,90);
   hM_bin37->SetBinContent(39,99);
   hM_bin37->SetBinContent(40,115);
   hM_bin37->SetBinContent(41,106);
   hM_bin37->SetBinContent(42,153);
   hM_bin37->SetBinContent(43,157);
   hM_bin37->SetBinContent(44,204);
   hM_bin37->SetBinContent(45,255);
   hM_bin37->SetBinContent(46,276);
   hM_bin37->SetBinContent(47,338);
   hM_bin37->SetBinContent(48,311);
   hM_bin37->SetBinContent(49,347);
   hM_bin37->SetBinContent(50,357);
   hM_bin37->SetBinContent(51,348);
   hM_bin37->SetBinContent(52,355);
   hM_bin37->SetBinContent(53,294);
   hM_bin37->SetBinContent(54,295);
   hM_bin37->SetBinContent(55,271);
   hM_bin37->SetBinContent(56,230);
   hM_bin37->SetBinContent(57,193);
   hM_bin37->SetBinContent(58,162);
   hM_bin37->SetBinContent(59,144);
   hM_bin37->SetBinContent(60,144);
   hM_bin37->SetBinContent(61,112);
   hM_bin37->SetBinContent(62,120);
   hM_bin37->SetBinContent(63,99);
   hM_bin37->SetBinContent(64,91);
   hM_bin37->SetBinContent(65,62);
   hM_bin37->SetBinContent(66,78);
   hM_bin37->SetBinContent(67,60);
   hM_bin37->SetBinContent(68,72);
   hM_bin37->SetBinContent(69,55);
   hM_bin37->SetBinContent(70,58);
   hM_bin37->SetBinContent(71,77);
   hM_bin37->SetBinContent(72,57);
   hM_bin37->SetBinContent(73,56);
   hM_bin37->SetBinContent(74,62);
   hM_bin37->SetBinContent(75,50);
   hM_bin37->SetBinContent(76,56);
   hM_bin37->SetBinContent(77,53);
   hM_bin37->SetBinContent(78,50);
   hM_bin37->SetBinContent(79,64);
   hM_bin37->SetBinContent(80,34);
   hM_bin37->SetBinContent(81,50);
   hM_bin37->SetBinContent(82,53);
   hM_bin37->SetBinContent(83,55);
   hM_bin37->SetBinContent(84,55);
   hM_bin37->SetBinContent(85,44);
   hM_bin37->SetBinContent(86,48);
   hM_bin37->SetBinContent(87,70);
   hM_bin37->SetBinContent(88,40);
   hM_bin37->SetBinContent(89,63);
   hM_bin37->SetBinContent(90,48);
   hM_bin37->SetBinContent(91,48);
   hM_bin37->SetBinContent(92,33);
   hM_bin37->SetBinContent(93,45);
   hM_bin37->SetBinContent(94,45);
   hM_bin37->SetBinContent(95,62);
   hM_bin37->SetBinContent(96,47);
   hM_bin37->SetBinContent(97,37);
   hM_bin37->SetBinContent(98,37);
   hM_bin37->SetBinContent(99,44);
   hM_bin37->SetBinContent(100,49);
   hM_bin37->SetBinContent(101,2480);
   hM_bin37->SetEntries(11132);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07710905,0.1930425);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(42.04386);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-3.833497);
   fsig->SetParError(0,59.06529);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,953.688);
   fsig->SetParError(1,1005.737);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-3118.163);
   fsig->SetParError(2,3332.911);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,278.0548);
   fsig->SetParError(3,13.79642);
   fsig->SetParLimits(3,0,714);
   fsig->SetParameter(4,0.134798);
   fsig->SetParError(4,0.0005101997);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0002561451);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin37->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin37");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 11132  ");
   text = ptstats->AddText("Mean  = 0.1499");
   text = ptstats->AddText("RMS   = 0.06037");
   text = ptstats->AddText("#chi^{2} / ndf = 42.04 / 28");
   text = ptstats->AddText("p0       = -3.833 #pm 59.065 ");
   text = ptstats->AddText("p1       = 953.7 #pm 1005.7 ");
   text = ptstats->AddText("p2       = -3118 #pm 3332.9 ");
   text = ptstats->AddText("p3       = 278.1 #pm 13.8 ");
   text = ptstats->AddText("p4       = 0.1348 #pm 0.0005 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00026 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin37->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin37);

   ci = TColor::GetColor("#0000ff");
   hM_bin37->SetMarkerColor(ci);
   hM_bin37->SetMarkerStyle(24);
   hM_bin37->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin37->GetXaxis()->SetLabelFont(42);
   hM_bin37->GetXaxis()->SetLabelSize(0.035);
   hM_bin37->GetXaxis()->SetTitleSize(0.035);
   hM_bin37->GetXaxis()->SetTitleFont(42);
   hM_bin37->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin37->GetYaxis()->SetLabelFont(42);
   hM_bin37->GetYaxis()->SetLabelSize(0.035);
   hM_bin37->GetYaxis()->SetTitleSize(0.035);
   hM_bin37->GetYaxis()->SetTitleFont(42);
   hM_bin37->GetZaxis()->SetLabelFont(42);
   hM_bin37->GetZaxis()->SetLabelSize(0.035);
   hM_bin37->GetZaxis()->SetTitleSize(0.035);
   hM_bin37->GetZaxis()->SetTitleFont(42);
   hM_bin37->Draw("e");
   
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
   fmb->SetParameter(0,-3.833497);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,953.688);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-3118.163);
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
   fpeak->SetParameter(0,278.0548);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.134798);
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
