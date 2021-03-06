{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr  4 12:41:08 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-32.04243,0.350906,288.3818);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin46 = new TH1F("hM_bin46","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin46->SetBinContent(0,6393);
   hM_bin46->SetBinContent(16,5);
   hM_bin46->SetBinContent(17,4);
   hM_bin46->SetBinContent(18,8);
   hM_bin46->SetBinContent(19,4);
   hM_bin46->SetBinContent(20,4);
   hM_bin46->SetBinContent(21,3);
   hM_bin46->SetBinContent(22,4);
   hM_bin46->SetBinContent(23,4);
   hM_bin46->SetBinContent(24,1);
   hM_bin46->SetBinContent(25,5);
   hM_bin46->SetBinContent(26,5);
   hM_bin46->SetBinContent(27,5);
   hM_bin46->SetBinContent(28,1);
   hM_bin46->SetBinContent(29,8);
   hM_bin46->SetBinContent(30,5);
   hM_bin46->SetBinContent(31,5);
   hM_bin46->SetBinContent(32,12);
   hM_bin46->SetBinContent(33,7);
   hM_bin46->SetBinContent(34,8);
   hM_bin46->SetBinContent(35,12);
   hM_bin46->SetBinContent(36,12);
   hM_bin46->SetBinContent(37,13);
   hM_bin46->SetBinContent(38,33);
   hM_bin46->SetBinContent(39,29);
   hM_bin46->SetBinContent(40,35);
   hM_bin46->SetBinContent(41,40);
   hM_bin46->SetBinContent(42,53);
   hM_bin46->SetBinContent(43,84);
   hM_bin46->SetBinContent(44,76);
   hM_bin46->SetBinContent(45,97);
   hM_bin46->SetBinContent(46,132);
   hM_bin46->SetBinContent(47,151);
   hM_bin46->SetBinContent(48,166);
   hM_bin46->SetBinContent(49,183);
   hM_bin46->SetBinContent(50,229);
   hM_bin46->SetBinContent(51,197);
   hM_bin46->SetBinContent(52,218);
   hM_bin46->SetBinContent(53,212);
   hM_bin46->SetBinContent(54,209);
   hM_bin46->SetBinContent(55,149);
   hM_bin46->SetBinContent(56,167);
   hM_bin46->SetBinContent(57,130);
   hM_bin46->SetBinContent(58,109);
   hM_bin46->SetBinContent(59,76);
   hM_bin46->SetBinContent(60,78);
   hM_bin46->SetBinContent(61,56);
   hM_bin46->SetBinContent(62,62);
   hM_bin46->SetBinContent(63,49);
   hM_bin46->SetBinContent(64,29);
   hM_bin46->SetBinContent(65,30);
   hM_bin46->SetBinContent(66,28);
   hM_bin46->SetBinContent(67,27);
   hM_bin46->SetBinContent(68,26);
   hM_bin46->SetBinContent(69,28);
   hM_bin46->SetBinContent(70,34);
   hM_bin46->SetBinContent(71,17);
   hM_bin46->SetBinContent(72,24);
   hM_bin46->SetBinContent(73,31);
   hM_bin46->SetBinContent(74,32);
   hM_bin46->SetBinContent(75,25);
   hM_bin46->SetBinContent(76,19);
   hM_bin46->SetBinContent(77,32);
   hM_bin46->SetBinContent(78,25);
   hM_bin46->SetBinContent(79,33);
   hM_bin46->SetBinContent(80,32);
   hM_bin46->SetBinContent(81,32);
   hM_bin46->SetBinContent(82,33);
   hM_bin46->SetBinContent(83,37);
   hM_bin46->SetBinContent(84,38);
   hM_bin46->SetBinContent(85,29);
   hM_bin46->SetBinContent(86,38);
   hM_bin46->SetBinContent(87,35);
   hM_bin46->SetBinContent(88,41);
   hM_bin46->SetBinContent(89,37);
   hM_bin46->SetBinContent(90,27);
   hM_bin46->SetBinContent(91,42);
   hM_bin46->SetBinContent(92,43);
   hM_bin46->SetBinContent(93,31);
   hM_bin46->SetBinContent(94,50);
   hM_bin46->SetBinContent(95,45);
   hM_bin46->SetBinContent(96,52);
   hM_bin46->SetBinContent(97,31);
   hM_bin46->SetBinContent(98,42);
   hM_bin46->SetBinContent(99,53);
   hM_bin46->SetBinContent(100,58);
   hM_bin46->SetBinContent(101,39544);
   hM_bin46->SetEntries(50358);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08054642,0.1964799);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(36.43391);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-0.8403848);
   fsig->SetParError(0,4.245321);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,114.1464);
   fsig->SetParError(1,31.56576);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-8.569176e-05);
   fsig->SetParError(2,1117.222);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,189.2036);
   fsig->SetParError(3,4.820601);
   fsig->SetParLimits(3,0,458);
   fsig->SetParameter(4,0.1385953);
   fsig->SetParError(4,0.0005149934);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0001778883);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin46->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin46");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 50358  ");
   text = ptstats->AddText("Mean  = 0.1684");
   text = ptstats->AddText("RMS   = 0.06003");
   text = ptstats->AddText("#chi^{2} / ndf = 36.43 / 28");
   text = ptstats->AddText("p0       = -0.8404 #pm 4.2453 ");
   text = ptstats->AddText("p1       = 114.1 #pm 31.6 ");
   text = ptstats->AddText("p2       = -8.569e-05 #pm 1.117e+03 ");
   text = ptstats->AddText("p3       = 189.2 #pm 4.8 ");
   text = ptstats->AddText("p4       = 0.1386 #pm 0.0005 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00018 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin46->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin46);

   ci = TColor::GetColor("#0000ff");
   hM_bin46->SetMarkerColor(ci);
   hM_bin46->SetMarkerStyle(24);
   hM_bin46->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin46->GetXaxis()->SetLabelFont(42);
   hM_bin46->GetXaxis()->SetLabelSize(0.035);
   hM_bin46->GetXaxis()->SetTitleSize(0.035);
   hM_bin46->GetXaxis()->SetTitleFont(42);
   hM_bin46->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin46->GetYaxis()->SetLabelFont(42);
   hM_bin46->GetYaxis()->SetLabelSize(0.035);
   hM_bin46->GetYaxis()->SetTitleSize(0.035);
   hM_bin46->GetYaxis()->SetTitleFont(42);
   hM_bin46->GetZaxis()->SetLabelFont(42);
   hM_bin46->GetZaxis()->SetLabelSize(0.035);
   hM_bin46->GetZaxis()->SetTitleSize(0.035);
   hM_bin46->GetZaxis()->SetTitleFont(42);
   hM_bin46->Draw("e");
   
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
   fmb->SetParameter(0,-0.8403848);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,114.1464);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-8.569176e-05);
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
   fpeak->SetParameter(0,189.2036);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1385953);
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
