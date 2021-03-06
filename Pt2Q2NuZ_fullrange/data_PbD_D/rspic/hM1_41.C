{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 15:55:04 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-5.5125,0.350906,49.6125);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin41 = new TH1F("hM_bin41","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin41->SetBinContent(0,3975);
   hM_bin41->SetBinContent(17,2);
   hM_bin41->SetBinContent(19,2);
   hM_bin41->SetBinContent(20,1);
   hM_bin41->SetBinContent(21,1);
   hM_bin41->SetBinContent(26,2);
   hM_bin41->SetBinContent(27,2);
   hM_bin41->SetBinContent(28,1);
   hM_bin41->SetBinContent(30,1);
   hM_bin41->SetBinContent(34,1);
   hM_bin41->SetBinContent(35,3);
   hM_bin41->SetBinContent(36,1);
   hM_bin41->SetBinContent(37,1);
   hM_bin41->SetBinContent(38,1);
   hM_bin41->SetBinContent(39,2);
   hM_bin41->SetBinContent(40,1);
   hM_bin41->SetBinContent(41,1);
   hM_bin41->SetBinContent(42,1);
   hM_bin41->SetBinContent(43,3);
   hM_bin41->SetBinContent(44,2);
   hM_bin41->SetBinContent(45,6);
   hM_bin41->SetBinContent(46,10);
   hM_bin41->SetBinContent(47,12);
   hM_bin41->SetBinContent(48,6);
   hM_bin41->SetBinContent(49,15);
   hM_bin41->SetBinContent(50,16);
   hM_bin41->SetBinContent(51,25);
   hM_bin41->SetBinContent(52,20);
   hM_bin41->SetBinContent(53,36);
   hM_bin41->SetBinContent(54,36);
   hM_bin41->SetBinContent(55,32);
   hM_bin41->SetBinContent(56,30);
   hM_bin41->SetBinContent(57,30);
   hM_bin41->SetBinContent(58,34);
   hM_bin41->SetBinContent(59,14);
   hM_bin41->SetBinContent(60,26);
   hM_bin41->SetBinContent(61,15);
   hM_bin41->SetBinContent(62,8);
   hM_bin41->SetBinContent(63,10);
   hM_bin41->SetBinContent(64,16);
   hM_bin41->SetBinContent(65,9);
   hM_bin41->SetBinContent(66,3);
   hM_bin41->SetBinContent(67,12);
   hM_bin41->SetBinContent(68,8);
   hM_bin41->SetBinContent(69,7);
   hM_bin41->SetBinContent(70,2);
   hM_bin41->SetBinContent(71,4);
   hM_bin41->SetBinContent(72,5);
   hM_bin41->SetBinContent(73,5);
   hM_bin41->SetBinContent(74,4);
   hM_bin41->SetBinContent(75,5);
   hM_bin41->SetBinContent(76,3);
   hM_bin41->SetBinContent(77,6);
   hM_bin41->SetBinContent(78,2);
   hM_bin41->SetBinContent(79,8);
   hM_bin41->SetBinContent(80,2);
   hM_bin41->SetBinContent(81,5);
   hM_bin41->SetBinContent(82,7);
   hM_bin41->SetBinContent(83,4);
   hM_bin41->SetBinContent(84,7);
   hM_bin41->SetBinContent(85,5);
   hM_bin41->SetBinContent(86,9);
   hM_bin41->SetBinContent(87,4);
   hM_bin41->SetBinContent(88,7);
   hM_bin41->SetBinContent(89,7);
   hM_bin41->SetBinContent(90,3);
   hM_bin41->SetBinContent(91,5);
   hM_bin41->SetBinContent(92,11);
   hM_bin41->SetBinContent(93,10);
   hM_bin41->SetBinContent(94,8);
   hM_bin41->SetBinContent(95,6);
   hM_bin41->SetBinContent(96,6);
   hM_bin41->SetBinContent(97,13);
   hM_bin41->SetBinContent(98,12);
   hM_bin41->SetBinContent(99,10);
   hM_bin41->SetBinContent(100,14);
   hM_bin41->SetBinContent(101,5465);
   hM_bin41->SetEntries(10104);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.09456955,0.210503);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(49.98027);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-2.903031);
   fsig->SetParError(0,1.515371);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,27.76168);
   fsig->SetParError(1,10.80897);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.095569e-05);
   fsig->SetParError(2,186.149);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,25.82039);
   fsig->SetParError(3,1.747273);
   fsig->SetParLimits(3,0,72);
   fsig->SetParameter(4,0.1513059);
   fsig->SetParError(4,0.001237413);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0002898457);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin41->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin41");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 10104  ");
   text = ptstats->AddText("Mean  = 0.1842");
   text = ptstats->AddText("RMS   = 0.06023");
   text = ptstats->AddText("#chi^{2} / ndf = 49.98 / 28");
   text = ptstats->AddText("p0       = -2.903 #pm 1.515 ");
   text = ptstats->AddText("p1       = 27.76 #pm 10.81 ");
   text = ptstats->AddText("p2       = -1.096e-05 #pm 1.861e+02 ");
   text = ptstats->AddText("p3       = 25.82 #pm 1.75 ");
   text = ptstats->AddText("p4       = 0.1513 #pm 0.0012 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00029 ");
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
   fmb->SetParameter(0,-2.903031);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,27.76168);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.095569e-05);
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
   fpeak->SetParameter(0,25.82039);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1513059);
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
