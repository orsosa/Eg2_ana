{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 11 12:08:26 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-32.72024,0.350906,294.4822);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin9 = new TH1F("hM_bin9","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin9->SetBinContent(0,2137);
   hM_bin9->SetBinContent(15,3);
   hM_bin9->SetBinContent(16,1);
   hM_bin9->SetBinContent(17,3);
   hM_bin9->SetBinContent(18,4);
   hM_bin9->SetBinContent(19,6);
   hM_bin9->SetBinContent(20,3);
   hM_bin9->SetBinContent(21,3);
   hM_bin9->SetBinContent(22,1);
   hM_bin9->SetBinContent(23,2);
   hM_bin9->SetBinContent(24,4);
   hM_bin9->SetBinContent(25,6);
   hM_bin9->SetBinContent(26,2);
   hM_bin9->SetBinContent(27,4);
   hM_bin9->SetBinContent(28,5);
   hM_bin9->SetBinContent(29,5);
   hM_bin9->SetBinContent(30,4);
   hM_bin9->SetBinContent(31,9);
   hM_bin9->SetBinContent(32,7);
   hM_bin9->SetBinContent(33,10);
   hM_bin9->SetBinContent(34,11);
   hM_bin9->SetBinContent(35,5);
   hM_bin9->SetBinContent(36,7);
   hM_bin9->SetBinContent(37,13);
   hM_bin9->SetBinContent(38,11);
   hM_bin9->SetBinContent(39,30);
   hM_bin9->SetBinContent(40,20);
   hM_bin9->SetBinContent(41,40);
   hM_bin9->SetBinContent(42,45);
   hM_bin9->SetBinContent(43,54);
   hM_bin9->SetBinContent(44,78);
   hM_bin9->SetBinContent(45,108);
   hM_bin9->SetBinContent(46,118);
   hM_bin9->SetBinContent(47,177);
   hM_bin9->SetBinContent(48,176);
   hM_bin9->SetBinContent(49,205);
   hM_bin9->SetBinContent(50,234);
   hM_bin9->SetBinContent(51,227);
   hM_bin9->SetBinContent(52,227);
   hM_bin9->SetBinContent(53,198);
   hM_bin9->SetBinContent(54,220);
   hM_bin9->SetBinContent(55,167);
   hM_bin9->SetBinContent(56,146);
   hM_bin9->SetBinContent(57,134);
   hM_bin9->SetBinContent(58,120);
   hM_bin9->SetBinContent(59,97);
   hM_bin9->SetBinContent(60,77);
   hM_bin9->SetBinContent(61,62);
   hM_bin9->SetBinContent(62,66);
   hM_bin9->SetBinContent(63,50);
   hM_bin9->SetBinContent(64,49);
   hM_bin9->SetBinContent(65,36);
   hM_bin9->SetBinContent(66,42);
   hM_bin9->SetBinContent(67,39);
   hM_bin9->SetBinContent(68,48);
   hM_bin9->SetBinContent(69,34);
   hM_bin9->SetBinContent(70,41);
   hM_bin9->SetBinContent(71,35);
   hM_bin9->SetBinContent(72,31);
   hM_bin9->SetBinContent(73,33);
   hM_bin9->SetBinContent(74,35);
   hM_bin9->SetBinContent(75,44);
   hM_bin9->SetBinContent(76,40);
   hM_bin9->SetBinContent(77,38);
   hM_bin9->SetBinContent(78,35);
   hM_bin9->SetBinContent(79,47);
   hM_bin9->SetBinContent(80,36);
   hM_bin9->SetBinContent(81,40);
   hM_bin9->SetBinContent(82,45);
   hM_bin9->SetBinContent(83,44);
   hM_bin9->SetBinContent(84,41);
   hM_bin9->SetBinContent(85,44);
   hM_bin9->SetBinContent(86,47);
   hM_bin9->SetBinContent(87,57);
   hM_bin9->SetBinContent(88,58);
   hM_bin9->SetBinContent(89,56);
   hM_bin9->SetBinContent(90,48);
   hM_bin9->SetBinContent(91,54);
   hM_bin9->SetBinContent(92,52);
   hM_bin9->SetBinContent(93,59);
   hM_bin9->SetBinContent(94,54);
   hM_bin9->SetBinContent(95,62);
   hM_bin9->SetBinContent(96,59);
   hM_bin9->SetBinContent(97,61);
   hM_bin9->SetBinContent(98,78);
   hM_bin9->SetBinContent(99,55);
   hM_bin9->SetBinContent(100,77);
   hM_bin9->SetBinContent(101,37722);
   hM_bin9->SetEntries(44818);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08154323,0.1974767);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(45.10368);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-22.59677);
   fsig->SetParError(0,3.753831);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,285.7379);
   fsig->SetParError(1,32.39476);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.182416e-07);
   fsig->SetParError(2,307.5891);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,192.801);
   fsig->SetParError(3,5.030585);
   fsig->SetParLimits(3,0,468);
   fsig->SetParameter(4,0.1388206);
   fsig->SetParError(4,0.0004819117);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,5.341272e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin9->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin9");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 44818  ");
   text = ptstats->AddText("Mean  =  0.177");
   text = ptstats->AddText("RMS   = 0.06213");
   text = ptstats->AddText("#chi^{2} / ndf =  45.1 / 28");
   text = ptstats->AddText("p0       = -22.6 #pm 3.8 ");
   text = ptstats->AddText("p1       = 285.7 #pm 32.4 ");
   text = ptstats->AddText("p2       = -1.182e-07 #pm 3.076e+02 ");
   text = ptstats->AddText("p3       = 192.8 #pm 5.0 ");
   text = ptstats->AddText("p4       = 0.1388 #pm 0.0005 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00005 ");
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
   fmb->SetParameter(0,-22.59677);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,285.7379);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.182416e-07);
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
   fpeak->SetParameter(0,192.801);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1388206);
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
