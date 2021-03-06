{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 15:54:41 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-27.69843,0.350906,249.2859);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin34 = new TH1F("hM_bin34","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin34->SetBinContent(0,2706);
   hM_bin34->SetBinContent(14,1);
   hM_bin34->SetBinContent(15,3);
   hM_bin34->SetBinContent(16,1);
   hM_bin34->SetBinContent(17,3);
   hM_bin34->SetBinContent(18,7);
   hM_bin34->SetBinContent(19,3);
   hM_bin34->SetBinContent(20,1);
   hM_bin34->SetBinContent(21,3);
   hM_bin34->SetBinContent(22,1);
   hM_bin34->SetBinContent(23,5);
   hM_bin34->SetBinContent(24,3);
   hM_bin34->SetBinContent(25,7);
   hM_bin34->SetBinContent(26,3);
   hM_bin34->SetBinContent(27,2);
   hM_bin34->SetBinContent(28,5);
   hM_bin34->SetBinContent(29,3);
   hM_bin34->SetBinContent(30,4);
   hM_bin34->SetBinContent(31,8);
   hM_bin34->SetBinContent(32,6);
   hM_bin34->SetBinContent(33,3);
   hM_bin34->SetBinContent(34,10);
   hM_bin34->SetBinContent(35,6);
   hM_bin34->SetBinContent(36,6);
   hM_bin34->SetBinContent(37,10);
   hM_bin34->SetBinContent(38,9);
   hM_bin34->SetBinContent(39,14);
   hM_bin34->SetBinContent(40,10);
   hM_bin34->SetBinContent(41,10);
   hM_bin34->SetBinContent(42,26);
   hM_bin34->SetBinContent(43,26);
   hM_bin34->SetBinContent(44,41);
   hM_bin34->SetBinContent(45,66);
   hM_bin34->SetBinContent(46,68);
   hM_bin34->SetBinContent(47,94);
   hM_bin34->SetBinContent(48,96);
   hM_bin34->SetBinContent(49,138);
   hM_bin34->SetBinContent(50,152);
   hM_bin34->SetBinContent(51,168);
   hM_bin34->SetBinContent(52,174);
   hM_bin34->SetBinContent(53,197);
   hM_bin34->SetBinContent(54,155);
   hM_bin34->SetBinContent(55,165);
   hM_bin34->SetBinContent(56,144);
   hM_bin34->SetBinContent(57,168);
   hM_bin34->SetBinContent(58,149);
   hM_bin34->SetBinContent(59,105);
   hM_bin34->SetBinContent(60,86);
   hM_bin34->SetBinContent(61,69);
   hM_bin34->SetBinContent(62,71);
   hM_bin34->SetBinContent(63,37);
   hM_bin34->SetBinContent(64,50);
   hM_bin34->SetBinContent(65,38);
   hM_bin34->SetBinContent(66,47);
   hM_bin34->SetBinContent(67,30);
   hM_bin34->SetBinContent(68,32);
   hM_bin34->SetBinContent(69,29);
   hM_bin34->SetBinContent(70,34);
   hM_bin34->SetBinContent(71,24);
   hM_bin34->SetBinContent(72,29);
   hM_bin34->SetBinContent(73,24);
   hM_bin34->SetBinContent(74,26);
   hM_bin34->SetBinContent(75,23);
   hM_bin34->SetBinContent(76,31);
   hM_bin34->SetBinContent(77,28);
   hM_bin34->SetBinContent(78,40);
   hM_bin34->SetBinContent(79,23);
   hM_bin34->SetBinContent(80,37);
   hM_bin34->SetBinContent(81,38);
   hM_bin34->SetBinContent(82,35);
   hM_bin34->SetBinContent(83,29);
   hM_bin34->SetBinContent(84,32);
   hM_bin34->SetBinContent(85,38);
   hM_bin34->SetBinContent(86,38);
   hM_bin34->SetBinContent(87,33);
   hM_bin34->SetBinContent(88,33);
   hM_bin34->SetBinContent(89,33);
   hM_bin34->SetBinContent(90,40);
   hM_bin34->SetBinContent(91,44);
   hM_bin34->SetBinContent(92,44);
   hM_bin34->SetBinContent(93,41);
   hM_bin34->SetBinContent(94,52);
   hM_bin34->SetBinContent(95,48);
   hM_bin34->SetBinContent(96,42);
   hM_bin34->SetBinContent(97,33);
   hM_bin34->SetBinContent(98,47);
   hM_bin34->SetBinContent(99,48);
   hM_bin34->SetBinContent(100,39);
   hM_bin34->SetBinContent(101,19601);
   hM_bin34->SetEntries(26181);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08801793,0.2039514);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(55.25582);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-16.56067);
   fsig->SetParError(0,4.044769);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,206.1638);
   fsig->SetParError(1,30.63748);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-4.219874e-07);
   fsig->SetParError(2,254.4056);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,156.6637);
   fsig->SetParError(3,4.485485);
   fsig->SetParLimits(3,0,394);
   fsig->SetParameter(4,0.1452166);
   fsig->SetParError(4,0.0005522323);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,7.231503e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin34->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin34");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 26181  ");
   text = ptstats->AddText("Mean  = 0.1773");
   text = ptstats->AddText("RMS   = 0.05905");
   text = ptstats->AddText("#chi^{2} / ndf = 55.26 / 28");
   text = ptstats->AddText("p0       = -16.56 #pm 4.04 ");
   text = ptstats->AddText("p1       = 206.2 #pm 30.6 ");
   text = ptstats->AddText("p2       = -4.22e-07 #pm 2.54e+02 ");
   text = ptstats->AddText("p3       = 156.7 #pm 4.5 ");
   text = ptstats->AddText("p4       = 0.1452 #pm 0.0006 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00007 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin34->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin34);

   ci = TColor::GetColor("#0000ff");
   hM_bin34->SetMarkerColor(ci);
   hM_bin34->SetMarkerStyle(24);
   hM_bin34->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin34->GetXaxis()->SetLabelFont(42);
   hM_bin34->GetXaxis()->SetLabelSize(0.035);
   hM_bin34->GetXaxis()->SetTitleSize(0.035);
   hM_bin34->GetXaxis()->SetTitleFont(42);
   hM_bin34->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin34->GetYaxis()->SetLabelFont(42);
   hM_bin34->GetYaxis()->SetLabelSize(0.035);
   hM_bin34->GetYaxis()->SetTitleSize(0.035);
   hM_bin34->GetYaxis()->SetTitleFont(42);
   hM_bin34->GetZaxis()->SetLabelFont(42);
   hM_bin34->GetZaxis()->SetLabelSize(0.035);
   hM_bin34->GetZaxis()->SetTitleSize(0.035);
   hM_bin34->GetZaxis()->SetTitleFont(42);
   hM_bin34->Draw("e");
   
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
   fmb->SetParameter(0,-16.56067);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,206.1638);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-4.219874e-07);
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
   fpeak->SetParameter(0,156.6637);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1452166);
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
