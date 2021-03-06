{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 18 12:09:06 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.1901558,-10.70265,0.8890623,96.32386);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin16 = new TH1F("hM_bin16","M_{#gamma #gamma}",100,0.2600464,0.8191716);
   hM_bin16->SetBinContent(0,1206);
   hM_bin16->SetBinContent(1,11);
   hM_bin16->SetBinContent(2,9);
   hM_bin16->SetBinContent(3,6);
   hM_bin16->SetBinContent(4,11);
   hM_bin16->SetBinContent(5,10);
   hM_bin16->SetBinContent(6,8);
   hM_bin16->SetBinContent(7,6);
   hM_bin16->SetBinContent(8,4);
   hM_bin16->SetBinContent(9,12);
   hM_bin16->SetBinContent(10,6);
   hM_bin16->SetBinContent(11,15);
   hM_bin16->SetBinContent(12,17);
   hM_bin16->SetBinContent(13,23);
   hM_bin16->SetBinContent(14,9);
   hM_bin16->SetBinContent(15,16);
   hM_bin16->SetBinContent(16,18);
   hM_bin16->SetBinContent(17,26);
   hM_bin16->SetBinContent(18,16);
   hM_bin16->SetBinContent(19,15);
   hM_bin16->SetBinContent(20,17);
   hM_bin16->SetBinContent(21,17);
   hM_bin16->SetBinContent(22,9);
   hM_bin16->SetBinContent(23,32);
   hM_bin16->SetBinContent(24,19);
   hM_bin16->SetBinContent(25,25);
   hM_bin16->SetBinContent(26,18);
   hM_bin16->SetBinContent(27,23);
   hM_bin16->SetBinContent(28,19);
   hM_bin16->SetBinContent(29,25);
   hM_bin16->SetBinContent(30,25);
   hM_bin16->SetBinContent(31,27);
   hM_bin16->SetBinContent(32,30);
   hM_bin16->SetBinContent(33,17);
   hM_bin16->SetBinContent(34,27);
   hM_bin16->SetBinContent(35,33);
   hM_bin16->SetBinContent(36,20);
   hM_bin16->SetBinContent(37,23);
   hM_bin16->SetBinContent(38,22);
   hM_bin16->SetBinContent(39,36);
   hM_bin16->SetBinContent(40,32);
   hM_bin16->SetBinContent(41,26);
   hM_bin16->SetBinContent(42,38);
   hM_bin16->SetBinContent(43,32);
   hM_bin16->SetBinContent(44,40);
   hM_bin16->SetBinContent(45,37);
   hM_bin16->SetBinContent(46,31);
   hM_bin16->SetBinContent(47,45);
   hM_bin16->SetBinContent(48,34);
   hM_bin16->SetBinContent(49,41);
   hM_bin16->SetBinContent(50,50);
   hM_bin16->SetBinContent(51,49);
   hM_bin16->SetBinContent(52,50);
   hM_bin16->SetBinContent(53,39);
   hM_bin16->SetBinContent(54,41);
   hM_bin16->SetBinContent(55,60);
   hM_bin16->SetBinContent(56,52);
   hM_bin16->SetBinContent(57,46);
   hM_bin16->SetBinContent(58,43);
   hM_bin16->SetBinContent(59,67);
   hM_bin16->SetBinContent(60,54);
   hM_bin16->SetBinContent(61,40);
   hM_bin16->SetBinContent(62,50);
   hM_bin16->SetBinContent(63,49);
   hM_bin16->SetBinContent(64,60);
   hM_bin16->SetBinContent(65,48);
   hM_bin16->SetBinContent(66,58);
   hM_bin16->SetBinContent(67,46);
   hM_bin16->SetBinContent(68,43);
   hM_bin16->SetBinContent(69,55);
   hM_bin16->SetBinContent(70,65);
   hM_bin16->SetBinContent(71,64);
   hM_bin16->SetBinContent(72,54);
   hM_bin16->SetBinContent(73,53);
   hM_bin16->SetBinContent(74,60);
   hM_bin16->SetBinContent(75,55);
   hM_bin16->SetBinContent(76,56);
   hM_bin16->SetBinContent(77,54);
   hM_bin16->SetBinContent(78,37);
   hM_bin16->SetBinContent(79,50);
   hM_bin16->SetBinContent(80,67);
   hM_bin16->SetBinContent(81,56);
   hM_bin16->SetBinContent(82,63);
   hM_bin16->SetBinContent(83,51);
   hM_bin16->SetBinContent(84,55);
   hM_bin16->SetBinContent(85,57);
   hM_bin16->SetBinContent(86,55);
   hM_bin16->SetBinContent(87,42);
   hM_bin16->SetBinContent(88,53);
   hM_bin16->SetBinContent(89,55);
   hM_bin16->SetBinContent(90,64);
   hM_bin16->SetBinContent(91,73);
   hM_bin16->SetBinContent(92,61);
   hM_bin16->SetBinContent(93,67);
   hM_bin16->SetBinContent(94,55);
   hM_bin16->SetBinContent(95,65);
   hM_bin16->SetBinContent(96,53);
   hM_bin16->SetBinContent(97,67);
   hM_bin16->SetBinContent(98,55);
   hM_bin16->SetBinContent(99,59);
   hM_bin16->SetBinContent(100,56);
   hM_bin16->SetBinContent(101,8324);
   hM_bin16->SetEntries(13365);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.4229754,0.7338074);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(57.87624);
   fsig->SetNDF(50);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-26.55016);
   fsig->SetParError(0,7.450536);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,112.4885);
   fsig->SetParError(1,15.2276);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.424015e-05);
   fsig->SetParError(2,198.8057);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,11.04395);
   fsig->SetParError(3,3.313018);
   fsig->SetParLimits(3,0,146);
   fsig->SetParameter(4,0.5837793);
   fsig->SetParError(4,0.01961309);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.06041413);
   fsig->SetParError(5,0.01811396);
   fsig->SetParLimits(5,0.04788336,0.07182504);
   hM_bin16->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin16");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 13365  ");
   text = ptstats->AddText("Mean  = 0.6126");
   text = ptstats->AddText("RMS   = 0.1379");
   text = ptstats->AddText("#chi^{2} / ndf = 57.88 / 50");
   text = ptstats->AddText("p0       = -26.55 #pm 7.45 ");
   text = ptstats->AddText("p1       = 112.5 #pm 15.2 ");
   text = ptstats->AddText("p2       = -1.424e-05 #pm 1.988e+02 ");
   text = ptstats->AddText("p3       = 11.04 #pm 3.31 ");
   text = ptstats->AddText("p4       = 0.5838 #pm 0.0196 ");
   text = ptstats->AddText("p5       = 0.06041 #pm 0.01811 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin16->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin16);

   ci = TColor::GetColor("#0000ff");
   hM_bin16->SetMarkerColor(ci);
   hM_bin16->SetMarkerStyle(24);
   hM_bin16->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin16->GetXaxis()->SetLabelFont(42);
   hM_bin16->GetXaxis()->SetLabelSize(0.035);
   hM_bin16->GetXaxis()->SetTitleSize(0.035);
   hM_bin16->GetXaxis()->SetTitleFont(42);
   hM_bin16->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin16->GetYaxis()->SetLabelFont(42);
   hM_bin16->GetYaxis()->SetLabelSize(0.035);
   hM_bin16->GetYaxis()->SetTitleSize(0.035);
   hM_bin16->GetYaxis()->SetTitleFont(42);
   hM_bin16->GetZaxis()->SetLabelFont(42);
   hM_bin16->GetZaxis()->SetLabelSize(0.035);
   hM_bin16->GetZaxis()->SetTitleSize(0.035);
   hM_bin16->GetZaxis()->SetTitleFont(42);
   hM_bin16->Draw("e");
   
   TF1 *fmb = new TF1("fmb","pol2",0.3600464,0.7191716);
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
   fmb->SetParameter(0,-26.55016);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,112.4885);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.424015e-05);
   fmb->SetParError(2,0);
   fmb->SetParLimits(2,0,0);
   fmb->Draw("same");
   
   TF1 *fpeak = new TF1("fpeak","gaus",0.3600464,0.7191716);
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
   fpeak->SetParameter(0,11.04395);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.5837793);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.06041413);
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
