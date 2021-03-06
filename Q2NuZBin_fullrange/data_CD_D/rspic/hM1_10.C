{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr  4 12:33:29 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-10.84156,0.350906,97.574);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin10 = new TH1F("hM_bin10","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin10->SetBinContent(0,2612);
   hM_bin10->SetBinContent(15,1);
   hM_bin10->SetBinContent(16,4);
   hM_bin10->SetBinContent(17,3);
   hM_bin10->SetBinContent(18,1);
   hM_bin10->SetBinContent(19,2);
   hM_bin10->SetBinContent(21,2);
   hM_bin10->SetBinContent(23,2);
   hM_bin10->SetBinContent(24,1);
   hM_bin10->SetBinContent(25,1);
   hM_bin10->SetBinContent(26,2);
   hM_bin10->SetBinContent(27,1);
   hM_bin10->SetBinContent(28,3);
   hM_bin10->SetBinContent(29,3);
   hM_bin10->SetBinContent(30,1);
   hM_bin10->SetBinContent(31,5);
   hM_bin10->SetBinContent(32,5);
   hM_bin10->SetBinContent(33,3);
   hM_bin10->SetBinContent(34,4);
   hM_bin10->SetBinContent(35,4);
   hM_bin10->SetBinContent(36,2);
   hM_bin10->SetBinContent(37,2);
   hM_bin10->SetBinContent(38,4);
   hM_bin10->SetBinContent(39,5);
   hM_bin10->SetBinContent(40,3);
   hM_bin10->SetBinContent(41,9);
   hM_bin10->SetBinContent(42,11);
   hM_bin10->SetBinContent(43,16);
   hM_bin10->SetBinContent(44,16);
   hM_bin10->SetBinContent(45,34);
   hM_bin10->SetBinContent(46,27);
   hM_bin10->SetBinContent(47,41);
   hM_bin10->SetBinContent(48,42);
   hM_bin10->SetBinContent(49,66);
   hM_bin10->SetBinContent(50,67);
   hM_bin10->SetBinContent(51,66);
   hM_bin10->SetBinContent(52,74);
   hM_bin10->SetBinContent(53,72);
   hM_bin10->SetBinContent(54,66);
   hM_bin10->SetBinContent(55,74);
   hM_bin10->SetBinContent(56,54);
   hM_bin10->SetBinContent(57,51);
   hM_bin10->SetBinContent(58,40);
   hM_bin10->SetBinContent(59,51);
   hM_bin10->SetBinContent(60,42);
   hM_bin10->SetBinContent(61,21);
   hM_bin10->SetBinContent(62,23);
   hM_bin10->SetBinContent(63,16);
   hM_bin10->SetBinContent(64,15);
   hM_bin10->SetBinContent(65,13);
   hM_bin10->SetBinContent(66,12);
   hM_bin10->SetBinContent(67,15);
   hM_bin10->SetBinContent(68,8);
   hM_bin10->SetBinContent(69,11);
   hM_bin10->SetBinContent(70,4);
   hM_bin10->SetBinContent(71,9);
   hM_bin10->SetBinContent(72,11);
   hM_bin10->SetBinContent(73,9);
   hM_bin10->SetBinContent(74,13);
   hM_bin10->SetBinContent(75,13);
   hM_bin10->SetBinContent(76,10);
   hM_bin10->SetBinContent(77,10);
   hM_bin10->SetBinContent(78,9);
   hM_bin10->SetBinContent(79,9);
   hM_bin10->SetBinContent(80,10);
   hM_bin10->SetBinContent(81,5);
   hM_bin10->SetBinContent(82,12);
   hM_bin10->SetBinContent(83,6);
   hM_bin10->SetBinContent(84,8);
   hM_bin10->SetBinContent(85,11);
   hM_bin10->SetBinContent(86,16);
   hM_bin10->SetBinContent(87,14);
   hM_bin10->SetBinContent(88,11);
   hM_bin10->SetBinContent(89,19);
   hM_bin10->SetBinContent(90,11);
   hM_bin10->SetBinContent(91,12);
   hM_bin10->SetBinContent(92,22);
   hM_bin10->SetBinContent(93,15);
   hM_bin10->SetBinContent(94,13);
   hM_bin10->SetBinContent(95,19);
   hM_bin10->SetBinContent(96,12);
   hM_bin10->SetBinContent(97,15);
   hM_bin10->SetBinContent(98,17);
   hM_bin10->SetBinContent(99,11);
   hM_bin10->SetBinContent(100,19);
   hM_bin10->SetBinContent(101,18535);
   hM_bin10->SetEntries(22639);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08636051,0.2022939);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(24.38051);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-6.192844);
   fsig->SetParError(0,2.418571);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,71.64144);
   fsig->SetParError(1,18.69852);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.688487e-05);
   fsig->SetParError(2,448.8907);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,64.77391);
   fsig->SetParError(3,2.780986);
   fsig->SetParLimits(3,0,148);
   fsig->SetParameter(4,0.1432534);
   fsig->SetParError(4,0.0008440812);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0002881913);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin10->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin10");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 22639  ");
   text = ptstats->AddText("Mean  = 0.1717");
   text = ptstats->AddText("RMS   = 0.0592");
   text = ptstats->AddText("#chi^{2} / ndf = 24.38 / 27");
   text = ptstats->AddText("p0       = -6.193 #pm 2.419 ");
   text = ptstats->AddText("p1       = 71.64 #pm 18.70 ");
   text = ptstats->AddText("p2       = -1.688e-05 #pm 4.489e+02 ");
   text = ptstats->AddText("p3       = 64.77 #pm 2.78 ");
   text = ptstats->AddText("p4       = 0.1433 #pm 0.0008 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00029 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin10->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin10);

   ci = TColor::GetColor("#0000ff");
   hM_bin10->SetMarkerColor(ci);
   hM_bin10->SetMarkerStyle(24);
   hM_bin10->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin10->GetXaxis()->SetLabelFont(42);
   hM_bin10->GetXaxis()->SetLabelSize(0.035);
   hM_bin10->GetXaxis()->SetTitleSize(0.035);
   hM_bin10->GetXaxis()->SetTitleFont(42);
   hM_bin10->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin10->GetYaxis()->SetLabelFont(42);
   hM_bin10->GetYaxis()->SetLabelSize(0.035);
   hM_bin10->GetYaxis()->SetTitleSize(0.035);
   hM_bin10->GetYaxis()->SetTitleFont(42);
   hM_bin10->GetZaxis()->SetLabelFont(42);
   hM_bin10->GetZaxis()->SetLabelSize(0.035);
   hM_bin10->GetZaxis()->SetTitleSize(0.035);
   hM_bin10->GetZaxis()->SetTitleFont(42);
   hM_bin10->Draw("e");
   
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
   fmb->SetParameter(0,-6.192844);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,71.64144);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.688487e-05);
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
   fpeak->SetParameter(0,64.77391);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1432534);
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
