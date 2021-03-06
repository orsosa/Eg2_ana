{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:30:57 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-287.3447,0.350906,2586.102);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin37 = new TH1F("hM_bin37","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin37->SetBinContent(13,2);
   hM_bin37->SetBinContent(14,19);
   hM_bin37->SetBinContent(15,61);
   hM_bin37->SetBinContent(16,65);
   hM_bin37->SetBinContent(17,112);
   hM_bin37->SetBinContent(18,126);
   hM_bin37->SetBinContent(19,182);
   hM_bin37->SetBinContent(20,178);
   hM_bin37->SetBinContent(21,192);
   hM_bin37->SetBinContent(22,211);
   hM_bin37->SetBinContent(23,221);
   hM_bin37->SetBinContent(24,236);
   hM_bin37->SetBinContent(25,233);
   hM_bin37->SetBinContent(26,276);
   hM_bin37->SetBinContent(27,291);
   hM_bin37->SetBinContent(28,260);
   hM_bin37->SetBinContent(29,298);
   hM_bin37->SetBinContent(30,289);
   hM_bin37->SetBinContent(31,310);
   hM_bin37->SetBinContent(32,286);
   hM_bin37->SetBinContent(33,321);
   hM_bin37->SetBinContent(34,349);
   hM_bin37->SetBinContent(35,343);
   hM_bin37->SetBinContent(36,420);
   hM_bin37->SetBinContent(37,459);
   hM_bin37->SetBinContent(38,516);
   hM_bin37->SetBinContent(39,540);
   hM_bin37->SetBinContent(40,575);
   hM_bin37->SetBinContent(41,698);
   hM_bin37->SetBinContent(42,845);
   hM_bin37->SetBinContent(43,961);
   hM_bin37->SetBinContent(44,1137);
   hM_bin37->SetBinContent(45,1428);
   hM_bin37->SetBinContent(46,1554);
   hM_bin37->SetBinContent(47,1818);
   hM_bin37->SetBinContent(48,1919);
   hM_bin37->SetBinContent(49,2114);
   hM_bin37->SetBinContent(50,2143);
   hM_bin37->SetBinContent(51,2125);
   hM_bin37->SetBinContent(52,2016);
   hM_bin37->SetBinContent(53,1847);
   hM_bin37->SetBinContent(54,1694);
   hM_bin37->SetBinContent(55,1510);
   hM_bin37->SetBinContent(56,1357);
   hM_bin37->SetBinContent(57,1072);
   hM_bin37->SetBinContent(58,879);
   hM_bin37->SetBinContent(59,796);
   hM_bin37->SetBinContent(60,732);
   hM_bin37->SetBinContent(61,606);
   hM_bin37->SetBinContent(62,653);
   hM_bin37->SetBinContent(63,533);
   hM_bin37->SetBinContent(64,488);
   hM_bin37->SetBinContent(65,490);
   hM_bin37->SetBinContent(66,426);
   hM_bin37->SetBinContent(67,411);
   hM_bin37->SetBinContent(68,359);
   hM_bin37->SetBinContent(69,399);
   hM_bin37->SetBinContent(70,393);
   hM_bin37->SetBinContent(71,381);
   hM_bin37->SetBinContent(72,344);
   hM_bin37->SetBinContent(73,375);
   hM_bin37->SetBinContent(74,324);
   hM_bin37->SetBinContent(75,300);
   hM_bin37->SetBinContent(76,338);
   hM_bin37->SetBinContent(77,357);
   hM_bin37->SetBinContent(78,348);
   hM_bin37->SetBinContent(79,344);
   hM_bin37->SetBinContent(80,292);
   hM_bin37->SetBinContent(81,300);
   hM_bin37->SetBinContent(82,299);
   hM_bin37->SetBinContent(83,317);
   hM_bin37->SetBinContent(84,284);
   hM_bin37->SetBinContent(85,275);
   hM_bin37->SetBinContent(86,313);
   hM_bin37->SetBinContent(87,311);
   hM_bin37->SetBinContent(88,277);
   hM_bin37->SetBinContent(89,285);
   hM_bin37->SetBinContent(90,276);
   hM_bin37->SetBinContent(91,293);
   hM_bin37->SetBinContent(92,227);
   hM_bin37->SetBinContent(93,266);
   hM_bin37->SetBinContent(94,249);
   hM_bin37->SetBinContent(95,256);
   hM_bin37->SetBinContent(96,257);
   hM_bin37->SetBinContent(97,244);
   hM_bin37->SetBinContent(98,233);
   hM_bin37->SetBinContent(99,229);
   hM_bin37->SetBinContent(100,250);
   hM_bin37->SetBinContent(101,15297);
   hM_bin37->SetEntries(64915);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07653384,0.1924673);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(129.8438);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,247.0824);
   fsig->SetParError(0,19.31379);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,777.5872);
   fsig->SetParError(1,137.0608);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.005535e-05);
   fsig->SetParError(2,921.6495);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,1666.53);
   fsig->SetParError(3,16.60833);
   fsig->SetParLimits(3,0,4286);
   fsig->SetParameter(4,0.1344415);
   fsig->SetParError(4,0.0002005661);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,1.587231e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin37->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin37");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 64915  ");
   text = ptstats->AddText("Mean  = 0.1507");
   text = ptstats->AddText("RMS   = 0.05943");
   text = ptstats->AddText("#chi^{2} / ndf = 129.8 / 28");
   text = ptstats->AddText("p0       = 247.1 #pm 19.3 ");
   text = ptstats->AddText("p1       = 777.6 #pm 137.1 ");
   text = ptstats->AddText("p2       = -1.006e-05 #pm 9.216e+02 ");
   text = ptstats->AddText("p3       =  1667 #pm 16.6 ");
   text = ptstats->AddText("p4       = 0.1344 #pm 0.0002 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00002 ");
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
   fmb->SetParameter(0,247.0824);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,777.5872);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.005535e-05);
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
   fpeak->SetParameter(0,1666.53);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1344415);
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
