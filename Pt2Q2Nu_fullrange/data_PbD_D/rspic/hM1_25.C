{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 14:52:07 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-336.6759,0.350906,3030.083);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin25 = new TH1F("hM_bin25","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin25->SetBinContent(0,4475);
   hM_bin25->SetBinContent(12,1);
   hM_bin25->SetBinContent(13,39);
   hM_bin25->SetBinContent(14,71);
   hM_bin25->SetBinContent(15,74);
   hM_bin25->SetBinContent(16,81);
   hM_bin25->SetBinContent(17,83);
   hM_bin25->SetBinContent(18,78);
   hM_bin25->SetBinContent(19,76);
   hM_bin25->SetBinContent(20,76);
   hM_bin25->SetBinContent(21,94);
   hM_bin25->SetBinContent(22,114);
   hM_bin25->SetBinContent(23,104);
   hM_bin25->SetBinContent(24,98);
   hM_bin25->SetBinContent(25,134);
   hM_bin25->SetBinContent(26,128);
   hM_bin25->SetBinContent(27,141);
   hM_bin25->SetBinContent(28,173);
   hM_bin25->SetBinContent(29,156);
   hM_bin25->SetBinContent(30,186);
   hM_bin25->SetBinContent(31,187);
   hM_bin25->SetBinContent(32,199);
   hM_bin25->SetBinContent(33,250);
   hM_bin25->SetBinContent(34,232);
   hM_bin25->SetBinContent(35,242);
   hM_bin25->SetBinContent(36,296);
   hM_bin25->SetBinContent(37,357);
   hM_bin25->SetBinContent(38,446);
   hM_bin25->SetBinContent(39,491);
   hM_bin25->SetBinContent(40,643);
   hM_bin25->SetBinContent(41,755);
   hM_bin25->SetBinContent(42,928);
   hM_bin25->SetBinContent(43,1164);
   hM_bin25->SetBinContent(44,1424);
   hM_bin25->SetBinContent(45,1677);
   hM_bin25->SetBinContent(46,2060);
   hM_bin25->SetBinContent(47,2256);
   hM_bin25->SetBinContent(48,2416);
   hM_bin25->SetBinContent(49,2515);
   hM_bin25->SetBinContent(50,2515);
   hM_bin25->SetBinContent(51,2409);
   hM_bin25->SetBinContent(52,2450);
   hM_bin25->SetBinContent(53,2146);
   hM_bin25->SetBinContent(54,2070);
   hM_bin25->SetBinContent(55,1723);
   hM_bin25->SetBinContent(56,1615);
   hM_bin25->SetBinContent(57,1377);
   hM_bin25->SetBinContent(58,1217);
   hM_bin25->SetBinContent(59,1095);
   hM_bin25->SetBinContent(60,985);
   hM_bin25->SetBinContent(61,882);
   hM_bin25->SetBinContent(62,836);
   hM_bin25->SetBinContent(63,793);
   hM_bin25->SetBinContent(64,752);
   hM_bin25->SetBinContent(65,679);
   hM_bin25->SetBinContent(66,698);
   hM_bin25->SetBinContent(67,655);
   hM_bin25->SetBinContent(68,633);
   hM_bin25->SetBinContent(69,630);
   hM_bin25->SetBinContent(70,578);
   hM_bin25->SetBinContent(71,632);
   hM_bin25->SetBinContent(72,634);
   hM_bin25->SetBinContent(73,595);
   hM_bin25->SetBinContent(74,601);
   hM_bin25->SetBinContent(75,610);
   hM_bin25->SetBinContent(76,548);
   hM_bin25->SetBinContent(77,641);
   hM_bin25->SetBinContent(78,625);
   hM_bin25->SetBinContent(79,616);
   hM_bin25->SetBinContent(80,649);
   hM_bin25->SetBinContent(81,636);
   hM_bin25->SetBinContent(82,574);
   hM_bin25->SetBinContent(83,595);
   hM_bin25->SetBinContent(84,574);
   hM_bin25->SetBinContent(85,658);
   hM_bin25->SetBinContent(86,626);
   hM_bin25->SetBinContent(87,637);
   hM_bin25->SetBinContent(88,598);
   hM_bin25->SetBinContent(89,637);
   hM_bin25->SetBinContent(90,566);
   hM_bin25->SetBinContent(91,621);
   hM_bin25->SetBinContent(92,578);
   hM_bin25->SetBinContent(93,601);
   hM_bin25->SetBinContent(94,622);
   hM_bin25->SetBinContent(95,626);
   hM_bin25->SetBinContent(96,618);
   hM_bin25->SetBinContent(97,632);
   hM_bin25->SetBinContent(98,645);
   hM_bin25->SetBinContent(99,626);
   hM_bin25->SetBinContent(100,586);
   hM_bin25->SetBinContent(101,92772);
   hM_bin25->SetEntries(162837);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07623467,0.1921681);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(94.98726);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-184.2483);
   fsig->SetParError(0,19.47807);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,4451.862);
   fsig->SetParError(1,157.5235);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.000965348);
   fsig->SetParError(2,1067.267);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,2036.134);
   fsig->SetParError(3,18.45744);
   fsig->SetParLimits(3,0,5030);
   fsig->SetParameter(4,0.1336153);
   fsig->SetParError(4,0.0001836257);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,1.759835e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin25->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin25");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 162837 ");
   text = ptstats->AddText("Mean  = 0.1696");
   text = ptstats->AddText("RMS   = 0.06322");
   text = ptstats->AddText("#chi^{2} / ndf = 94.99 / 27");
   text = ptstats->AddText("p0       = -184.2 #pm 19.5 ");
   text = ptstats->AddText("p1       =  4452 #pm 157.5 ");
   text = ptstats->AddText("p2       = -0.0009653 #pm 1067.2674561 ");
   text = ptstats->AddText("p3       =  2036 #pm 18.5 ");
   text = ptstats->AddText("p4       = 0.1336 #pm 0.0002 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00002 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin25->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin25);

   ci = TColor::GetColor("#0000ff");
   hM_bin25->SetMarkerColor(ci);
   hM_bin25->SetMarkerStyle(24);
   hM_bin25->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin25->GetXaxis()->SetLabelFont(42);
   hM_bin25->GetXaxis()->SetLabelSize(0.035);
   hM_bin25->GetXaxis()->SetTitleSize(0.035);
   hM_bin25->GetXaxis()->SetTitleFont(42);
   hM_bin25->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin25->GetYaxis()->SetLabelFont(42);
   hM_bin25->GetYaxis()->SetLabelSize(0.035);
   hM_bin25->GetYaxis()->SetTitleSize(0.035);
   hM_bin25->GetYaxis()->SetTitleFont(42);
   hM_bin25->GetZaxis()->SetLabelFont(42);
   hM_bin25->GetZaxis()->SetLabelSize(0.035);
   hM_bin25->GetZaxis()->SetTitleSize(0.035);
   hM_bin25->GetZaxis()->SetTitleFont(42);
   hM_bin25->Draw("e");
   
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
   fmb->SetParameter(0,-184.2483);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,4451.862);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.000965348);
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
   fpeak->SetParameter(0,2036.134);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1336153);
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
