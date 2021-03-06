{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 14:59:12 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-32.31358,0.350906,290.8222);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin21 = new TH1F("hM_bin21","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin21->SetBinContent(0,1632);
   hM_bin21->SetBinContent(13,1);
   hM_bin21->SetBinContent(14,1);
   hM_bin21->SetBinContent(15,5);
   hM_bin21->SetBinContent(16,5);
   hM_bin21->SetBinContent(17,3);
   hM_bin21->SetBinContent(18,5);
   hM_bin21->SetBinContent(19,5);
   hM_bin21->SetBinContent(20,4);
   hM_bin21->SetBinContent(21,1);
   hM_bin21->SetBinContent(22,4);
   hM_bin21->SetBinContent(23,3);
   hM_bin21->SetBinContent(24,2);
   hM_bin21->SetBinContent(25,6);
   hM_bin21->SetBinContent(26,5);
   hM_bin21->SetBinContent(27,4);
   hM_bin21->SetBinContent(28,3);
   hM_bin21->SetBinContent(29,3);
   hM_bin21->SetBinContent(30,3);
   hM_bin21->SetBinContent(31,4);
   hM_bin21->SetBinContent(32,5);
   hM_bin21->SetBinContent(33,10);
   hM_bin21->SetBinContent(34,8);
   hM_bin21->SetBinContent(35,8);
   hM_bin21->SetBinContent(36,7);
   hM_bin21->SetBinContent(37,9);
   hM_bin21->SetBinContent(38,16);
   hM_bin21->SetBinContent(39,13);
   hM_bin21->SetBinContent(40,24);
   hM_bin21->SetBinContent(41,36);
   hM_bin21->SetBinContent(42,46);
   hM_bin21->SetBinContent(43,62);
   hM_bin21->SetBinContent(44,84);
   hM_bin21->SetBinContent(45,107);
   hM_bin21->SetBinContent(46,139);
   hM_bin21->SetBinContent(47,172);
   hM_bin21->SetBinContent(48,196);
   hM_bin21->SetBinContent(49,229);
   hM_bin21->SetBinContent(50,212);
   hM_bin21->SetBinContent(51,203);
   hM_bin21->SetBinContent(52,231);
   hM_bin21->SetBinContent(53,211);
   hM_bin21->SetBinContent(54,186);
   hM_bin21->SetBinContent(55,163);
   hM_bin21->SetBinContent(56,129);
   hM_bin21->SetBinContent(57,95);
   hM_bin21->SetBinContent(58,79);
   hM_bin21->SetBinContent(59,92);
   hM_bin21->SetBinContent(60,54);
   hM_bin21->SetBinContent(61,57);
   hM_bin21->SetBinContent(62,48);
   hM_bin21->SetBinContent(63,52);
   hM_bin21->SetBinContent(64,48);
   hM_bin21->SetBinContent(65,39);
   hM_bin21->SetBinContent(66,38);
   hM_bin21->SetBinContent(67,37);
   hM_bin21->SetBinContent(68,41);
   hM_bin21->SetBinContent(69,23);
   hM_bin21->SetBinContent(70,31);
   hM_bin21->SetBinContent(71,31);
   hM_bin21->SetBinContent(72,39);
   hM_bin21->SetBinContent(73,31);
   hM_bin21->SetBinContent(74,30);
   hM_bin21->SetBinContent(75,35);
   hM_bin21->SetBinContent(76,28);
   hM_bin21->SetBinContent(77,40);
   hM_bin21->SetBinContent(78,35);
   hM_bin21->SetBinContent(79,34);
   hM_bin21->SetBinContent(80,43);
   hM_bin21->SetBinContent(81,31);
   hM_bin21->SetBinContent(82,46);
   hM_bin21->SetBinContent(83,43);
   hM_bin21->SetBinContent(84,32);
   hM_bin21->SetBinContent(85,37);
   hM_bin21->SetBinContent(86,41);
   hM_bin21->SetBinContent(87,32);
   hM_bin21->SetBinContent(88,26);
   hM_bin21->SetBinContent(89,32);
   hM_bin21->SetBinContent(90,40);
   hM_bin21->SetBinContent(91,44);
   hM_bin21->SetBinContent(92,38);
   hM_bin21->SetBinContent(93,27);
   hM_bin21->SetBinContent(94,46);
   hM_bin21->SetBinContent(95,45);
   hM_bin21->SetBinContent(96,41);
   hM_bin21->SetBinContent(97,30);
   hM_bin21->SetBinContent(98,41);
   hM_bin21->SetBinContent(99,40);
   hM_bin21->SetBinContent(100,41);
   hM_bin21->SetBinContent(101,10743);
   hM_bin21->SetEntries(16781);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07961458,0.195548);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(72.01218);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-24.61779);
   fsig->SetParError(0,4.103199);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,279.5962);
   fsig->SetParError(1,34.45028);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-7.253282e-06);
   fsig->SetParError(2,209.3318);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,185.5909);
   fsig->SetParError(3,4.916008);
   fsig->SetParLimits(3,0,462);
   fsig->SetParameter(4,0.1367126);
   fsig->SetParError(4,0.0004751844);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,3.518615e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin21->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin21");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 16781  ");
   text = ptstats->AddText("Mean  = 0.1688");
   text = ptstats->AddText("RMS   = 0.05844");
   text = ptstats->AddText("#chi^{2} / ndf = 72.01 / 27");
   text = ptstats->AddText("p0       = -24.62 #pm 4.10 ");
   text = ptstats->AddText("p1       = 279.6 #pm 34.5 ");
   text = ptstats->AddText("p2       = -7.253e-06 #pm 2.093e+02 ");
   text = ptstats->AddText("p3       = 185.6 #pm 4.9 ");
   text = ptstats->AddText("p4       = 0.1367 #pm 0.0005 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00004 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin21->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin21);

   ci = TColor::GetColor("#0000ff");
   hM_bin21->SetMarkerColor(ci);
   hM_bin21->SetMarkerStyle(24);
   hM_bin21->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin21->GetXaxis()->SetLabelFont(42);
   hM_bin21->GetXaxis()->SetLabelSize(0.035);
   hM_bin21->GetXaxis()->SetTitleSize(0.035);
   hM_bin21->GetXaxis()->SetTitleFont(42);
   hM_bin21->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin21->GetYaxis()->SetLabelFont(42);
   hM_bin21->GetYaxis()->SetLabelSize(0.035);
   hM_bin21->GetYaxis()->SetTitleSize(0.035);
   hM_bin21->GetYaxis()->SetTitleFont(42);
   hM_bin21->GetZaxis()->SetLabelFont(42);
   hM_bin21->GetZaxis()->SetLabelSize(0.035);
   hM_bin21->GetZaxis()->SetTitleSize(0.035);
   hM_bin21->GetZaxis()->SetTitleFont(42);
   hM_bin21->Draw("e");
   
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
   fmb->SetParameter(0,-24.61779);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,279.5962);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-7.253282e-06);
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
   fpeak->SetParameter(0,185.5909);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1367126);
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
