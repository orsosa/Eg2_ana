{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 18 12:20:16 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.1901558,-160.3157,0.8890623,1442.841);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin18 = new TH1F("hM_bin18","M_{#gamma #gamma}",100,0.2600464,0.8191716);
   hM_bin18->SetBinContent(0,60316);
   hM_bin18->SetBinContent(1,1166);
   hM_bin18->SetBinContent(2,1132);
   hM_bin18->SetBinContent(3,1143);
   hM_bin18->SetBinContent(4,1144);
   hM_bin18->SetBinContent(5,1154);
   hM_bin18->SetBinContent(6,1187);
   hM_bin18->SetBinContent(7,1145);
   hM_bin18->SetBinContent(8,1085);
   hM_bin18->SetBinContent(9,1179);
   hM_bin18->SetBinContent(10,1077);
   hM_bin18->SetBinContent(11,1100);
   hM_bin18->SetBinContent(12,1137);
   hM_bin18->SetBinContent(13,1034);
   hM_bin18->SetBinContent(14,1081);
   hM_bin18->SetBinContent(15,1066);
   hM_bin18->SetBinContent(16,1003);
   hM_bin18->SetBinContent(17,1044);
   hM_bin18->SetBinContent(18,993);
   hM_bin18->SetBinContent(19,929);
   hM_bin18->SetBinContent(20,923);
   hM_bin18->SetBinContent(21,887);
   hM_bin18->SetBinContent(22,929);
   hM_bin18->SetBinContent(23,916);
   hM_bin18->SetBinContent(24,874);
   hM_bin18->SetBinContent(25,879);
   hM_bin18->SetBinContent(26,774);
   hM_bin18->SetBinContent(27,858);
   hM_bin18->SetBinContent(28,793);
   hM_bin18->SetBinContent(29,775);
   hM_bin18->SetBinContent(30,736);
   hM_bin18->SetBinContent(31,750);
   hM_bin18->SetBinContent(32,731);
   hM_bin18->SetBinContent(33,684);
   hM_bin18->SetBinContent(34,666);
   hM_bin18->SetBinContent(35,651);
   hM_bin18->SetBinContent(36,621);
   hM_bin18->SetBinContent(37,605);
   hM_bin18->SetBinContent(38,570);
   hM_bin18->SetBinContent(39,543);
   hM_bin18->SetBinContent(40,527);
   hM_bin18->SetBinContent(41,499);
   hM_bin18->SetBinContent(42,463);
   hM_bin18->SetBinContent(43,415);
   hM_bin18->SetBinContent(44,435);
   hM_bin18->SetBinContent(45,420);
   hM_bin18->SetBinContent(46,410);
   hM_bin18->SetBinContent(47,369);
   hM_bin18->SetBinContent(48,344);
   hM_bin18->SetBinContent(49,351);
   hM_bin18->SetBinContent(50,269);
   hM_bin18->SetBinContent(51,269);
   hM_bin18->SetBinContent(52,256);
   hM_bin18->SetBinContent(53,239);
   hM_bin18->SetBinContent(54,205);
   hM_bin18->SetBinContent(55,208);
   hM_bin18->SetBinContent(56,218);
   hM_bin18->SetBinContent(57,200);
   hM_bin18->SetBinContent(58,152);
   hM_bin18->SetBinContent(59,155);
   hM_bin18->SetBinContent(60,143);
   hM_bin18->SetBinContent(61,118);
   hM_bin18->SetBinContent(62,125);
   hM_bin18->SetBinContent(63,108);
   hM_bin18->SetBinContent(64,105);
   hM_bin18->SetBinContent(65,92);
   hM_bin18->SetBinContent(66,91);
   hM_bin18->SetBinContent(67,78);
   hM_bin18->SetBinContent(68,77);
   hM_bin18->SetBinContent(69,92);
   hM_bin18->SetBinContent(70,56);
   hM_bin18->SetBinContent(71,56);
   hM_bin18->SetBinContent(72,59);
   hM_bin18->SetBinContent(73,43);
   hM_bin18->SetBinContent(74,57);
   hM_bin18->SetBinContent(75,47);
   hM_bin18->SetBinContent(76,44);
   hM_bin18->SetBinContent(77,34);
   hM_bin18->SetBinContent(78,36);
   hM_bin18->SetBinContent(79,24);
   hM_bin18->SetBinContent(80,35);
   hM_bin18->SetBinContent(81,25);
   hM_bin18->SetBinContent(82,38);
   hM_bin18->SetBinContent(83,20);
   hM_bin18->SetBinContent(84,24);
   hM_bin18->SetBinContent(85,23);
   hM_bin18->SetBinContent(86,25);
   hM_bin18->SetBinContent(87,18);
   hM_bin18->SetBinContent(88,28);
   hM_bin18->SetBinContent(89,25);
   hM_bin18->SetBinContent(90,22);
   hM_bin18->SetBinContent(91,21);
   hM_bin18->SetBinContent(92,17);
   hM_bin18->SetBinContent(93,17);
   hM_bin18->SetBinContent(94,14);
   hM_bin18->SetBinContent(95,10);
   hM_bin18->SetBinContent(96,8);
   hM_bin18->SetBinContent(97,14);
   hM_bin18->SetBinContent(98,26);
   hM_bin18->SetBinContent(99,17);
   hM_bin18->SetBinContent(100,13);
   hM_bin18->SetBinContent(101,389);
   hM_bin18->SetEntries(104998);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.1827721,0.6137223);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(77.45934);
   fsig->SetNDF(57);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,1883.378);
   fsig->SetParError(0,37.74231);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,-2946.735);
   fsig->SetParError(1,66.77481);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-8.450097e-06);
   fsig->SetParError(2,115.6691);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,171.4457);
   fsig->SetParError(3,19.00724);
   fsig->SetParLimits(3,0,2374);
   fsig->SetParameter(4,0.3633533);
   fsig->SetParError(4,0.004510482);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.07182504);
   fsig->SetParError(5,0.001775333);
   fsig->SetParLimits(5,0.04788336,0.07182504);
   hM_bin18->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin18");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 104998 ");
   text = ptstats->AddText("Mean  = 0.3934");
   text = ptstats->AddText("RMS   = 0.09946");
   text = ptstats->AddText("#chi^{2} / ndf = 77.46 / 57");
   text = ptstats->AddText("p0       =  1883 #pm 37.7 ");
   text = ptstats->AddText("p1       = -2947 #pm 66.8 ");
   text = ptstats->AddText("p2       = -8.45e-06 #pm 1.16e+02 ");
   text = ptstats->AddText("p3       = 171.4 #pm 19.0 ");
   text = ptstats->AddText("p4       = 0.3634 #pm 0.0045 ");
   text = ptstats->AddText("p5       = 0.07183 #pm 0.00178 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin18->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin18);

   ci = TColor::GetColor("#0000ff");
   hM_bin18->SetMarkerColor(ci);
   hM_bin18->SetMarkerStyle(24);
   hM_bin18->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin18->GetXaxis()->SetLabelFont(42);
   hM_bin18->GetXaxis()->SetLabelSize(0.035);
   hM_bin18->GetXaxis()->SetTitleSize(0.035);
   hM_bin18->GetXaxis()->SetTitleFont(42);
   hM_bin18->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin18->GetYaxis()->SetLabelFont(42);
   hM_bin18->GetYaxis()->SetLabelSize(0.035);
   hM_bin18->GetYaxis()->SetTitleSize(0.035);
   hM_bin18->GetYaxis()->SetTitleFont(42);
   hM_bin18->GetZaxis()->SetLabelFont(42);
   hM_bin18->GetZaxis()->SetLabelSize(0.035);
   hM_bin18->GetZaxis()->SetTitleSize(0.035);
   hM_bin18->GetZaxis()->SetTitleFont(42);
   hM_bin18->Draw("e");
   
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
   fmb->SetParameter(0,1883.378);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,-2946.735);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-8.450097e-06);
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
   fpeak->SetParameter(0,171.4457);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.3633533);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.07182504);
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
