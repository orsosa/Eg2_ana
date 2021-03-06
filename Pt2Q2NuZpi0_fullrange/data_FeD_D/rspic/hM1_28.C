{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:46:25 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-98.42289,0.350906,885.806);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin28 = new TH1F("hM_bin28","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin28->SetBinContent(14,1);
   hM_bin28->SetBinContent(15,15);
   hM_bin28->SetBinContent(16,30);
   hM_bin28->SetBinContent(17,42);
   hM_bin28->SetBinContent(18,42);
   hM_bin28->SetBinContent(19,67);
   hM_bin28->SetBinContent(20,60);
   hM_bin28->SetBinContent(21,83);
   hM_bin28->SetBinContent(22,98);
   hM_bin28->SetBinContent(23,99);
   hM_bin28->SetBinContent(24,98);
   hM_bin28->SetBinContent(25,83);
   hM_bin28->SetBinContent(26,93);
   hM_bin28->SetBinContent(27,134);
   hM_bin28->SetBinContent(28,138);
   hM_bin28->SetBinContent(29,104);
   hM_bin28->SetBinContent(30,127);
   hM_bin28->SetBinContent(31,136);
   hM_bin28->SetBinContent(32,114);
   hM_bin28->SetBinContent(33,139);
   hM_bin28->SetBinContent(34,180);
   hM_bin28->SetBinContent(35,151);
   hM_bin28->SetBinContent(36,164);
   hM_bin28->SetBinContent(37,171);
   hM_bin28->SetBinContent(38,182);
   hM_bin28->SetBinContent(39,188);
   hM_bin28->SetBinContent(40,289);
   hM_bin28->SetBinContent(41,285);
   hM_bin28->SetBinContent(42,348);
   hM_bin28->SetBinContent(43,398);
   hM_bin28->SetBinContent(44,461);
   hM_bin28->SetBinContent(45,506);
   hM_bin28->SetBinContent(46,615);
   hM_bin28->SetBinContent(47,649);
   hM_bin28->SetBinContent(48,689);
   hM_bin28->SetBinContent(49,665);
   hM_bin28->SetBinContent(50,720);
   hM_bin28->SetBinContent(51,708);
   hM_bin28->SetBinContent(52,723);
   hM_bin28->SetBinContent(53,668);
   hM_bin28->SetBinContent(54,630);
   hM_bin28->SetBinContent(55,526);
   hM_bin28->SetBinContent(56,453);
   hM_bin28->SetBinContent(57,406);
   hM_bin28->SetBinContent(58,326);
   hM_bin28->SetBinContent(59,285);
   hM_bin28->SetBinContent(60,276);
   hM_bin28->SetBinContent(61,233);
   hM_bin28->SetBinContent(62,167);
   hM_bin28->SetBinContent(63,199);
   hM_bin28->SetBinContent(64,221);
   hM_bin28->SetBinContent(65,168);
   hM_bin28->SetBinContent(66,156);
   hM_bin28->SetBinContent(67,118);
   hM_bin28->SetBinContent(68,156);
   hM_bin28->SetBinContent(69,141);
   hM_bin28->SetBinContent(70,126);
   hM_bin28->SetBinContent(71,159);
   hM_bin28->SetBinContent(72,120);
   hM_bin28->SetBinContent(73,123);
   hM_bin28->SetBinContent(74,129);
   hM_bin28->SetBinContent(75,104);
   hM_bin28->SetBinContent(76,115);
   hM_bin28->SetBinContent(77,118);
   hM_bin28->SetBinContent(78,108);
   hM_bin28->SetBinContent(79,104);
   hM_bin28->SetBinContent(80,105);
   hM_bin28->SetBinContent(81,121);
   hM_bin28->SetBinContent(82,91);
   hM_bin28->SetBinContent(83,111);
   hM_bin28->SetBinContent(84,97);
   hM_bin28->SetBinContent(85,118);
   hM_bin28->SetBinContent(86,115);
   hM_bin28->SetBinContent(87,94);
   hM_bin28->SetBinContent(88,110);
   hM_bin28->SetBinContent(89,74);
   hM_bin28->SetBinContent(90,92);
   hM_bin28->SetBinContent(91,93);
   hM_bin28->SetBinContent(92,97);
   hM_bin28->SetBinContent(93,69);
   hM_bin28->SetBinContent(94,99);
   hM_bin28->SetBinContent(95,86);
   hM_bin28->SetBinContent(96,92);
   hM_bin28->SetBinContent(97,84);
   hM_bin28->SetBinContent(98,76);
   hM_bin28->SetBinContent(99,72);
   hM_bin28->SetBinContent(100,78);
   hM_bin28->SetBinContent(101,4583);
   hM_bin28->SetEntries(22687);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07575841,0.1916918);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(53.92981);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,128.081);
   fsig->SetParError(0,13.07012);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,107.4148);
   fsig->SetParError(1,94.14714);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-9.689443e-05);
   fsig->SetParError(2,1192.055);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,575.235);
   fsig->SetParError(3,10.20718);
   fsig->SetParLimits(3,0,1446);
   fsig->SetParameter(4,0.1336858);
   fsig->SetParError(4,0.0003738029);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,9.742087e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin28->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin28");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 22687  ");
   text = ptstats->AddText("Mean  = 0.1479");
   text = ptstats->AddText("RMS   = 0.05932");
   text = ptstats->AddText("#chi^{2} / ndf = 53.93 / 27");
   text = ptstats->AddText("p0       = 128.1 #pm 13.1 ");
   text = ptstats->AddText("p1       = 107.4 #pm 94.1 ");
   text = ptstats->AddText("p2       = -9.689e-05 #pm 1.192e+03 ");
   text = ptstats->AddText("p3       = 575.2 #pm 10.2 ");
   text = ptstats->AddText("p4       = 0.1337 #pm 0.0004 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00010 ");
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
   fmb->SetParameter(0,128.081);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,107.4148);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-9.689443e-05);
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
   fpeak->SetParameter(0,575.235);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1336858);
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
