{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:42:24 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-29.32871,0.350906,263.9584);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin41 = new TH1F("hM_bin41","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin41->SetBinContent(14,1);
   hM_bin41->SetBinContent(15,4);
   hM_bin41->SetBinContent(16,7);
   hM_bin41->SetBinContent(17,16);
   hM_bin41->SetBinContent(18,19);
   hM_bin41->SetBinContent(19,19);
   hM_bin41->SetBinContent(20,29);
   hM_bin41->SetBinContent(21,22);
   hM_bin41->SetBinContent(22,28);
   hM_bin41->SetBinContent(23,38);
   hM_bin41->SetBinContent(24,36);
   hM_bin41->SetBinContent(25,28);
   hM_bin41->SetBinContent(26,37);
   hM_bin41->SetBinContent(27,37);
   hM_bin41->SetBinContent(28,33);
   hM_bin41->SetBinContent(29,47);
   hM_bin41->SetBinContent(30,39);
   hM_bin41->SetBinContent(31,33);
   hM_bin41->SetBinContent(32,49);
   hM_bin41->SetBinContent(33,38);
   hM_bin41->SetBinContent(34,53);
   hM_bin41->SetBinContent(35,33);
   hM_bin41->SetBinContent(36,47);
   hM_bin41->SetBinContent(37,57);
   hM_bin41->SetBinContent(38,66);
   hM_bin41->SetBinContent(39,52);
   hM_bin41->SetBinContent(40,76);
   hM_bin41->SetBinContent(41,77);
   hM_bin41->SetBinContent(42,117);
   hM_bin41->SetBinContent(43,126);
   hM_bin41->SetBinContent(44,115);
   hM_bin41->SetBinContent(45,132);
   hM_bin41->SetBinContent(46,158);
   hM_bin41->SetBinContent(47,189);
   hM_bin41->SetBinContent(48,197);
   hM_bin41->SetBinContent(49,169);
   hM_bin41->SetBinContent(50,198);
   hM_bin41->SetBinContent(51,209);
   hM_bin41->SetBinContent(52,179);
   hM_bin41->SetBinContent(53,166);
   hM_bin41->SetBinContent(54,136);
   hM_bin41->SetBinContent(55,136);
   hM_bin41->SetBinContent(56,115);
   hM_bin41->SetBinContent(57,129);
   hM_bin41->SetBinContent(58,98);
   hM_bin41->SetBinContent(59,69);
   hM_bin41->SetBinContent(60,60);
   hM_bin41->SetBinContent(61,52);
   hM_bin41->SetBinContent(62,64);
   hM_bin41->SetBinContent(63,43);
   hM_bin41->SetBinContent(64,46);
   hM_bin41->SetBinContent(65,35);
   hM_bin41->SetBinContent(66,43);
   hM_bin41->SetBinContent(67,41);
   hM_bin41->SetBinContent(68,35);
   hM_bin41->SetBinContent(69,36);
   hM_bin41->SetBinContent(70,37);
   hM_bin41->SetBinContent(71,22);
   hM_bin41->SetBinContent(72,36);
   hM_bin41->SetBinContent(73,36);
   hM_bin41->SetBinContent(74,34);
   hM_bin41->SetBinContent(75,41);
   hM_bin41->SetBinContent(76,31);
   hM_bin41->SetBinContent(77,32);
   hM_bin41->SetBinContent(78,35);
   hM_bin41->SetBinContent(79,46);
   hM_bin41->SetBinContent(80,19);
   hM_bin41->SetBinContent(81,31);
   hM_bin41->SetBinContent(82,29);
   hM_bin41->SetBinContent(83,21);
   hM_bin41->SetBinContent(84,22);
   hM_bin41->SetBinContent(85,35);
   hM_bin41->SetBinContent(86,30);
   hM_bin41->SetBinContent(87,34);
   hM_bin41->SetBinContent(88,29);
   hM_bin41->SetBinContent(89,18);
   hM_bin41->SetBinContent(90,25);
   hM_bin41->SetBinContent(91,31);
   hM_bin41->SetBinContent(92,18);
   hM_bin41->SetBinContent(93,33);
   hM_bin41->SetBinContent(94,20);
   hM_bin41->SetBinContent(95,23);
   hM_bin41->SetBinContent(96,30);
   hM_bin41->SetBinContent(97,25);
   hM_bin41->SetBinContent(98,23);
   hM_bin41->SetBinContent(99,24);
   hM_bin41->SetBinContent(100,26);
   hM_bin41->SetBinContent(101,990);
   hM_bin41->SetEntries(6000);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07491199,0.1908454);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(40.61232);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,39.58642);
   fsig->SetParError(0,6.530419);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,-17.28304);
   fsig->SetParError(1,45.34451);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.09911954);
   fsig->SetParError(2,8252.66);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,154.1124);
   fsig->SetParError(3,5.166043);
   fsig->SetParLimits(3,0,418);
   fsig->SetParameter(4,0.1327137);
   fsig->SetParError(4,0.0007185738);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01943309);
   fsig->SetParError(5,0.001594645);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin41->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin41");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 6000   ");
   text = ptstats->AddText("Mean  =  0.146");
   text = ptstats->AddText("RMS   = 0.06154");
   text = ptstats->AddText("#chi^{2} / ndf = 40.61 / 28");
   text = ptstats->AddText("p0       = 39.59 #pm 6.53 ");
   text = ptstats->AddText("p1       = -17.28 #pm 45.34 ");
   text = ptstats->AddText("p2       = -0.09912 #pm 8252.66016 ");
   text = ptstats->AddText("p3       = 154.1 #pm 5.2 ");
   text = ptstats->AddText("p4       = 0.1327 #pm 0.0007 ");
   text = ptstats->AddText("p5       = 0.01943 #pm 0.00159 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin41->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin41);

   ci = TColor::GetColor("#0000ff");
   hM_bin41->SetMarkerColor(ci);
   hM_bin41->SetMarkerStyle(24);
   hM_bin41->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin41->GetXaxis()->SetLabelFont(42);
   hM_bin41->GetXaxis()->SetLabelSize(0.035);
   hM_bin41->GetXaxis()->SetTitleSize(0.035);
   hM_bin41->GetXaxis()->SetTitleFont(42);
   hM_bin41->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin41->GetYaxis()->SetLabelFont(42);
   hM_bin41->GetYaxis()->SetLabelSize(0.035);
   hM_bin41->GetYaxis()->SetTitleSize(0.035);
   hM_bin41->GetYaxis()->SetTitleFont(42);
   hM_bin41->GetZaxis()->SetLabelFont(42);
   hM_bin41->GetZaxis()->SetLabelSize(0.035);
   hM_bin41->GetZaxis()->SetTitleSize(0.035);
   hM_bin41->GetZaxis()->SetTitleFont(42);
   hM_bin41->Draw("e");
   
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
   fmb->SetParameter(0,39.58642);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,-17.28304);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.09911954);
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
   fpeak->SetParameter(0,154.1124);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1327137);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.01943309);
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
