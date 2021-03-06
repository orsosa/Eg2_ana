{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue May  9 16:24:38 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-83.83975,0.350906,754.5577);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin9 = new TH1F("hM_bin9","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin9->SetBinContent(15,10);
   hM_bin9->SetBinContent(16,19);
   hM_bin9->SetBinContent(17,25);
   hM_bin9->SetBinContent(18,33);
   hM_bin9->SetBinContent(19,33);
   hM_bin9->SetBinContent(20,45);
   hM_bin9->SetBinContent(21,55);
   hM_bin9->SetBinContent(22,55);
   hM_bin9->SetBinContent(23,57);
   hM_bin9->SetBinContent(24,58);
   hM_bin9->SetBinContent(25,78);
   hM_bin9->SetBinContent(26,77);
   hM_bin9->SetBinContent(27,72);
   hM_bin9->SetBinContent(28,62);
   hM_bin9->SetBinContent(29,95);
   hM_bin9->SetBinContent(30,81);
   hM_bin9->SetBinContent(31,79);
   hM_bin9->SetBinContent(32,92);
   hM_bin9->SetBinContent(33,72);
   hM_bin9->SetBinContent(34,88);
   hM_bin9->SetBinContent(35,97);
   hM_bin9->SetBinContent(36,116);
   hM_bin9->SetBinContent(37,94);
   hM_bin9->SetBinContent(38,117);
   hM_bin9->SetBinContent(39,125);
   hM_bin9->SetBinContent(40,151);
   hM_bin9->SetBinContent(41,150);
   hM_bin9->SetBinContent(42,204);
   hM_bin9->SetBinContent(43,231);
   hM_bin9->SetBinContent(44,277);
   hM_bin9->SetBinContent(45,281);
   hM_bin9->SetBinContent(46,419);
   hM_bin9->SetBinContent(47,463);
   hM_bin9->SetBinContent(48,532);
   hM_bin9->SetBinContent(49,558);
   hM_bin9->SetBinContent(50,515);
   hM_bin9->SetBinContent(51,596);
   hM_bin9->SetBinContent(52,614);
   hM_bin9->SetBinContent(53,561);
   hM_bin9->SetBinContent(54,545);
   hM_bin9->SetBinContent(55,459);
   hM_bin9->SetBinContent(56,436);
   hM_bin9->SetBinContent(57,305);
   hM_bin9->SetBinContent(58,319);
   hM_bin9->SetBinContent(59,306);
   hM_bin9->SetBinContent(60,296);
   hM_bin9->SetBinContent(61,223);
   hM_bin9->SetBinContent(62,200);
   hM_bin9->SetBinContent(63,176);
   hM_bin9->SetBinContent(64,174);
   hM_bin9->SetBinContent(65,118);
   hM_bin9->SetBinContent(66,136);
   hM_bin9->SetBinContent(67,130);
   hM_bin9->SetBinContent(68,134);
   hM_bin9->SetBinContent(69,145);
   hM_bin9->SetBinContent(70,130);
   hM_bin9->SetBinContent(71,113);
   hM_bin9->SetBinContent(72,113);
   hM_bin9->SetBinContent(73,105);
   hM_bin9->SetBinContent(74,99);
   hM_bin9->SetBinContent(75,134);
   hM_bin9->SetBinContent(76,115);
   hM_bin9->SetBinContent(77,98);
   hM_bin9->SetBinContent(78,127);
   hM_bin9->SetBinContent(79,97);
   hM_bin9->SetBinContent(80,97);
   hM_bin9->SetBinContent(81,74);
   hM_bin9->SetBinContent(82,96);
   hM_bin9->SetBinContent(83,95);
   hM_bin9->SetBinContent(84,67);
   hM_bin9->SetBinContent(85,85);
   hM_bin9->SetBinContent(86,89);
   hM_bin9->SetBinContent(87,94);
   hM_bin9->SetBinContent(88,68);
   hM_bin9->SetBinContent(89,82);
   hM_bin9->SetBinContent(90,70);
   hM_bin9->SetBinContent(91,92);
   hM_bin9->SetBinContent(92,81);
   hM_bin9->SetBinContent(93,76);
   hM_bin9->SetBinContent(94,69);
   hM_bin9->SetBinContent(95,70);
   hM_bin9->SetBinContent(96,69);
   hM_bin9->SetBinContent(97,68);
   hM_bin9->SetBinContent(98,87);
   hM_bin9->SetBinContent(99,58);
   hM_bin9->SetBinContent(100,65);
   hM_bin9->SetBinContent(101,4324);
   hM_bin9->SetEntries(18496);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08038983,0.1963233);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(81.5012);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,55.17135);
   fsig->SetParError(0,10.43858);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,338.2476);
   fsig->SetParError(1,73.48554);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-2.348681e-06);
   fsig->SetParError(2,1188.086);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,464.3269);
   fsig->SetParError(3,8.783687);
   fsig->SetParLimits(3,0,1228);
   fsig->SetParameter(4,0.1383451);
   fsig->SetParError(4,0.0003904224);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,9.259631e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin9->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin9");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 18496  ");
   text = ptstats->AddText("Mean  = 0.1546");
   text = ptstats->AddText("RMS   = 0.05856");
   text = ptstats->AddText("#chi^{2} / ndf =  81.5 / 28");
   text = ptstats->AddText("p0       = 55.17 #pm 10.44 ");
   text = ptstats->AddText("p1       = 338.2 #pm 73.5 ");
   text = ptstats->AddText("p2       = -2.349e-06 #pm 1.188e+03 ");
   text = ptstats->AddText("p3       = 464.3 #pm 8.8 ");
   text = ptstats->AddText("p4       = 0.1383 #pm 0.0004 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00009 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin9->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin9);

   ci = TColor::GetColor("#0000ff");
   hM_bin9->SetMarkerColor(ci);
   hM_bin9->SetMarkerStyle(24);
   hM_bin9->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin9->GetXaxis()->SetLabelFont(42);
   hM_bin9->GetXaxis()->SetLabelSize(0.035);
   hM_bin9->GetXaxis()->SetTitleSize(0.035);
   hM_bin9->GetXaxis()->SetTitleFont(42);
   hM_bin9->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin9->GetYaxis()->SetLabelFont(42);
   hM_bin9->GetYaxis()->SetLabelSize(0.035);
   hM_bin9->GetYaxis()->SetTitleSize(0.035);
   hM_bin9->GetYaxis()->SetTitleFont(42);
   hM_bin9->GetZaxis()->SetLabelFont(42);
   hM_bin9->GetZaxis()->SetLabelSize(0.035);
   hM_bin9->GetZaxis()->SetTitleSize(0.035);
   hM_bin9->GetZaxis()->SetTitleFont(42);
   hM_bin9->Draw("e");
   
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
   fmb->SetParameter(0,55.17135);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,338.2476);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-2.348681e-06);
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
   fpeak->SetParameter(0,464.3269);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1383451);
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
