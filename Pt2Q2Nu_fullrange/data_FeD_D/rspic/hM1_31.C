{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 15:03:03 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-356.2918,0.350906,3206.626);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin31 = new TH1F("hM_bin31","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin31->SetBinContent(0,4684);
   hM_bin31->SetBinContent(12,4);
   hM_bin31->SetBinContent(13,34);
   hM_bin31->SetBinContent(14,69);
   hM_bin31->SetBinContent(15,81);
   hM_bin31->SetBinContent(16,80);
   hM_bin31->SetBinContent(17,53);
   hM_bin31->SetBinContent(18,89);
   hM_bin31->SetBinContent(19,75);
   hM_bin31->SetBinContent(20,100);
   hM_bin31->SetBinContent(21,86);
   hM_bin31->SetBinContent(22,104);
   hM_bin31->SetBinContent(23,106);
   hM_bin31->SetBinContent(24,109);
   hM_bin31->SetBinContent(25,147);
   hM_bin31->SetBinContent(26,145);
   hM_bin31->SetBinContent(27,157);
   hM_bin31->SetBinContent(28,172);
   hM_bin31->SetBinContent(29,199);
   hM_bin31->SetBinContent(30,208);
   hM_bin31->SetBinContent(31,208);
   hM_bin31->SetBinContent(32,214);
   hM_bin31->SetBinContent(33,240);
   hM_bin31->SetBinContent(34,307);
   hM_bin31->SetBinContent(35,299);
   hM_bin31->SetBinContent(36,341);
   hM_bin31->SetBinContent(37,396);
   hM_bin31->SetBinContent(38,511);
   hM_bin31->SetBinContent(39,607);
   hM_bin31->SetBinContent(40,781);
   hM_bin31->SetBinContent(41,1002);
   hM_bin31->SetBinContent(42,1311);
   hM_bin31->SetBinContent(43,1496);
   hM_bin31->SetBinContent(44,1813);
   hM_bin31->SetBinContent(45,2157);
   hM_bin31->SetBinContent(46,2357);
   hM_bin31->SetBinContent(47,2618);
   hM_bin31->SetBinContent(48,2663);
   hM_bin31->SetBinContent(49,2642);
   hM_bin31->SetBinContent(50,2513);
   hM_bin31->SetBinContent(51,2406);
   hM_bin31->SetBinContent(52,2181);
   hM_bin31->SetBinContent(53,2031);
   hM_bin31->SetBinContent(54,1777);
   hM_bin31->SetBinContent(55,1581);
   hM_bin31->SetBinContent(56,1360);
   hM_bin31->SetBinContent(57,1188);
   hM_bin31->SetBinContent(58,1101);
   hM_bin31->SetBinContent(59,948);
   hM_bin31->SetBinContent(60,836);
   hM_bin31->SetBinContent(61,752);
   hM_bin31->SetBinContent(62,761);
   hM_bin31->SetBinContent(63,738);
   hM_bin31->SetBinContent(64,729);
   hM_bin31->SetBinContent(65,726);
   hM_bin31->SetBinContent(66,671);
   hM_bin31->SetBinContent(67,669);
   hM_bin31->SetBinContent(68,700);
   hM_bin31->SetBinContent(69,683);
   hM_bin31->SetBinContent(70,674);
   hM_bin31->SetBinContent(71,685);
   hM_bin31->SetBinContent(72,667);
   hM_bin31->SetBinContent(73,676);
   hM_bin31->SetBinContent(74,645);
   hM_bin31->SetBinContent(75,681);
   hM_bin31->SetBinContent(76,678);
   hM_bin31->SetBinContent(77,713);
   hM_bin31->SetBinContent(78,709);
   hM_bin31->SetBinContent(79,681);
   hM_bin31->SetBinContent(80,699);
   hM_bin31->SetBinContent(81,655);
   hM_bin31->SetBinContent(82,670);
   hM_bin31->SetBinContent(83,686);
   hM_bin31->SetBinContent(84,644);
   hM_bin31->SetBinContent(85,708);
   hM_bin31->SetBinContent(86,670);
   hM_bin31->SetBinContent(87,658);
   hM_bin31->SetBinContent(88,652);
   hM_bin31->SetBinContent(89,698);
   hM_bin31->SetBinContent(90,686);
   hM_bin31->SetBinContent(91,684);
   hM_bin31->SetBinContent(92,667);
   hM_bin31->SetBinContent(93,642);
   hM_bin31->SetBinContent(94,685);
   hM_bin31->SetBinContent(95,706);
   hM_bin31->SetBinContent(96,674);
   hM_bin31->SetBinContent(97,651);
   hM_bin31->SetBinContent(98,668);
   hM_bin31->SetBinContent(99,659);
   hM_bin31->SetBinContent(100,628);
   hM_bin31->SetBinContent(101,99942);
   hM_bin31->SetEntries(173857);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07186668,0.1878001);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(156.2352);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-181.5343);
   fsig->SetParError(0,19.24019);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,4459.075);
   fsig->SetParError(1,157.0502);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-4.433086e-05);
   fsig->SetParError(2,567.5547);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,2132.619);
   fsig->SetParError(3,18.46022);
   fsig->SetParLimits(3,0,5326);
   fsig->SetParameter(4,0.1294484);
   fsig->SetParError(4,0.0001728402);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,8.321701e-06);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin31->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin31");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 173857 ");
   text = ptstats->AddText("Mean  = 0.1692");
   text = ptstats->AddText("RMS   = 0.06464");
   text = ptstats->AddText("#chi^{2} / ndf = 156.2 / 27");
   text = ptstats->AddText("p0       = -181.5 #pm 19.2 ");
   text = ptstats->AddText("p1       =  4459 #pm 157.1 ");
   text = ptstats->AddText("p2       = -4.433e-05 #pm 5.676e+02 ");
   text = ptstats->AddText("p3       =  2133 #pm 18.5 ");
   text = ptstats->AddText("p4       = 0.1294 #pm 0.0002 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00001 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin31->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin31);

   ci = TColor::GetColor("#0000ff");
   hM_bin31->SetMarkerColor(ci);
   hM_bin31->SetMarkerStyle(24);
   hM_bin31->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin31->GetXaxis()->SetLabelFont(42);
   hM_bin31->GetXaxis()->SetLabelSize(0.035);
   hM_bin31->GetXaxis()->SetTitleSize(0.035);
   hM_bin31->GetXaxis()->SetTitleFont(42);
   hM_bin31->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin31->GetYaxis()->SetLabelFont(42);
   hM_bin31->GetYaxis()->SetLabelSize(0.035);
   hM_bin31->GetYaxis()->SetTitleSize(0.035);
   hM_bin31->GetYaxis()->SetTitleFont(42);
   hM_bin31->GetZaxis()->SetLabelFont(42);
   hM_bin31->GetZaxis()->SetLabelSize(0.035);
   hM_bin31->GetZaxis()->SetTitleSize(0.035);
   hM_bin31->GetZaxis()->SetTitleFont(42);
   hM_bin31->Draw("e");
   
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
   fmb->SetParameter(0,-181.5343);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,4459.075);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-4.433086e-05);
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
   fpeak->SetParameter(0,2132.619);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1294484);
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
