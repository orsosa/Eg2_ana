{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr  4 12:39:36 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-8.472166,0.350906,76.24949);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin17 = new TH1F("hM_bin17","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin17->SetBinContent(0,7413);
   hM_bin17->SetBinContent(16,1);
   hM_bin17->SetBinContent(18,3);
   hM_bin17->SetBinContent(19,3);
   hM_bin17->SetBinContent(21,2);
   hM_bin17->SetBinContent(22,3);
   hM_bin17->SetBinContent(23,2);
   hM_bin17->SetBinContent(24,1);
   hM_bin17->SetBinContent(25,1);
   hM_bin17->SetBinContent(26,7);
   hM_bin17->SetBinContent(27,1);
   hM_bin17->SetBinContent(28,3);
   hM_bin17->SetBinContent(29,2);
   hM_bin17->SetBinContent(30,6);
   hM_bin17->SetBinContent(31,3);
   hM_bin17->SetBinContent(32,1);
   hM_bin17->SetBinContent(33,9);
   hM_bin17->SetBinContent(34,5);
   hM_bin17->SetBinContent(35,3);
   hM_bin17->SetBinContent(36,4);
   hM_bin17->SetBinContent(37,12);
   hM_bin17->SetBinContent(38,6);
   hM_bin17->SetBinContent(39,7);
   hM_bin17->SetBinContent(40,8);
   hM_bin17->SetBinContent(41,20);
   hM_bin17->SetBinContent(42,10);
   hM_bin17->SetBinContent(43,12);
   hM_bin17->SetBinContent(44,22);
   hM_bin17->SetBinContent(45,30);
   hM_bin17->SetBinContent(46,33);
   hM_bin17->SetBinContent(47,37);
   hM_bin17->SetBinContent(48,36);
   hM_bin17->SetBinContent(49,50);
   hM_bin17->SetBinContent(50,49);
   hM_bin17->SetBinContent(51,42);
   hM_bin17->SetBinContent(52,57);
   hM_bin17->SetBinContent(53,31);
   hM_bin17->SetBinContent(54,48);
   hM_bin17->SetBinContent(55,44);
   hM_bin17->SetBinContent(56,40);
   hM_bin17->SetBinContent(57,34);
   hM_bin17->SetBinContent(58,40);
   hM_bin17->SetBinContent(59,25);
   hM_bin17->SetBinContent(60,24);
   hM_bin17->SetBinContent(61,23);
   hM_bin17->SetBinContent(62,12);
   hM_bin17->SetBinContent(63,9);
   hM_bin17->SetBinContent(64,8);
   hM_bin17->SetBinContent(65,10);
   hM_bin17->SetBinContent(66,7);
   hM_bin17->SetBinContent(67,7);
   hM_bin17->SetBinContent(68,3);
   hM_bin17->SetBinContent(69,7);
   hM_bin17->SetBinContent(70,5);
   hM_bin17->SetBinContent(71,8);
   hM_bin17->SetBinContent(72,5);
   hM_bin17->SetBinContent(73,3);
   hM_bin17->SetBinContent(74,6);
   hM_bin17->SetBinContent(75,2);
   hM_bin17->SetBinContent(76,4);
   hM_bin17->SetBinContent(77,4);
   hM_bin17->SetBinContent(78,8);
   hM_bin17->SetBinContent(79,6);
   hM_bin17->SetBinContent(80,2);
   hM_bin17->SetBinContent(81,9);
   hM_bin17->SetBinContent(82,12);
   hM_bin17->SetBinContent(83,6);
   hM_bin17->SetBinContent(84,8);
   hM_bin17->SetBinContent(85,5);
   hM_bin17->SetBinContent(86,5);
   hM_bin17->SetBinContent(87,6);
   hM_bin17->SetBinContent(88,10);
   hM_bin17->SetBinContent(89,8);
   hM_bin17->SetBinContent(90,10);
   hM_bin17->SetBinContent(91,10);
   hM_bin17->SetBinContent(92,4);
   hM_bin17->SetBinContent(93,6);
   hM_bin17->SetBinContent(94,8);
   hM_bin17->SetBinContent(95,12);
   hM_bin17->SetBinContent(96,6);
   hM_bin17->SetBinContent(97,10);
   hM_bin17->SetBinContent(98,12);
   hM_bin17->SetBinContent(99,11);
   hM_bin17->SetBinContent(100,6);
   hM_bin17->SetBinContent(101,46734);
   hM_bin17->SetEntries(55227);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07893316,0.2016437);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(34.28127);
   fsig->SetNDF(29);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,2.848068);
   fsig->SetParError(0,2.391055);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,3.336027);
   fsig->SetParError(1,16.1578);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-3.940288e-06);
   fsig->SetParError(2,7624.775);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,44.09645);
   fsig->SetParError(3,2.333285);
   fsig->SetParLimits(3,0,114);
   fsig->SetParameter(4,0.1407276);
   fsig->SetParError(4,0.001180908);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.02065453);
   fsig->SetParError(5,0.001249204);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin17->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin17");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 55227  ");
   text = ptstats->AddText("Mean  = 0.1606");
   text = ptstats->AddText("RMS   = 0.05888");
   text = ptstats->AddText("#chi^{2} / ndf = 34.28 / 29");
   text = ptstats->AddText("p0       = 2.848 #pm 2.391 ");
   text = ptstats->AddText("p1       = 3.336 #pm 16.158 ");
   text = ptstats->AddText("p2       = -3.94e-06 #pm 7.62e+03 ");
   text = ptstats->AddText("p3       =  44.1 #pm 2.3 ");
   text = ptstats->AddText("p4       = 0.1407 #pm 0.0012 ");
   text = ptstats->AddText("p5       = 0.02065 #pm 0.00125 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin17->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin17);

   ci = TColor::GetColor("#0000ff");
   hM_bin17->SetMarkerColor(ci);
   hM_bin17->SetMarkerStyle(24);
   hM_bin17->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin17->GetXaxis()->SetLabelFont(42);
   hM_bin17->GetXaxis()->SetLabelSize(0.035);
   hM_bin17->GetXaxis()->SetTitleSize(0.035);
   hM_bin17->GetXaxis()->SetTitleFont(42);
   hM_bin17->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin17->GetYaxis()->SetLabelFont(42);
   hM_bin17->GetYaxis()->SetLabelSize(0.035);
   hM_bin17->GetYaxis()->SetTitleSize(0.035);
   hM_bin17->GetYaxis()->SetTitleFont(42);
   hM_bin17->GetZaxis()->SetLabelFont(42);
   hM_bin17->GetZaxis()->SetLabelSize(0.035);
   hM_bin17->GetZaxis()->SetTitleSize(0.035);
   hM_bin17->GetZaxis()->SetTitleFont(42);
   hM_bin17->Draw("e");
   
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
   fmb->SetParameter(0,2.848068);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,3.336027);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-3.940288e-06);
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
   fpeak->SetParameter(0,44.09645);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1407276);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.02065453);
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
