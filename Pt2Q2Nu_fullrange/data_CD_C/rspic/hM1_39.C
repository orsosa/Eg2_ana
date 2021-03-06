{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 14:55:01 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-14.16181,0.350906,127.4563);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin39 = new TH1F("hM_bin39","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin39->SetBinContent(0,956);
   hM_bin39->SetBinContent(15,1);
   hM_bin39->SetBinContent(16,1);
   hM_bin39->SetBinContent(17,3);
   hM_bin39->SetBinContent(18,4);
   hM_bin39->SetBinContent(19,4);
   hM_bin39->SetBinContent(20,6);
   hM_bin39->SetBinContent(21,1);
   hM_bin39->SetBinContent(23,1);
   hM_bin39->SetBinContent(24,2);
   hM_bin39->SetBinContent(25,1);
   hM_bin39->SetBinContent(27,4);
   hM_bin39->SetBinContent(28,4);
   hM_bin39->SetBinContent(29,1);
   hM_bin39->SetBinContent(31,2);
   hM_bin39->SetBinContent(32,2);
   hM_bin39->SetBinContent(33,2);
   hM_bin39->SetBinContent(34,3);
   hM_bin39->SetBinContent(35,4);
   hM_bin39->SetBinContent(36,4);
   hM_bin39->SetBinContent(37,7);
   hM_bin39->SetBinContent(38,4);
   hM_bin39->SetBinContent(39,6);
   hM_bin39->SetBinContent(40,2);
   hM_bin39->SetBinContent(41,4);
   hM_bin39->SetBinContent(42,13);
   hM_bin39->SetBinContent(43,21);
   hM_bin39->SetBinContent(44,37);
   hM_bin39->SetBinContent(45,37);
   hM_bin39->SetBinContent(46,43);
   hM_bin39->SetBinContent(47,42);
   hM_bin39->SetBinContent(48,74);
   hM_bin39->SetBinContent(49,70);
   hM_bin39->SetBinContent(50,75);
   hM_bin39->SetBinContent(51,90);
   hM_bin39->SetBinContent(52,98);
   hM_bin39->SetBinContent(53,96);
   hM_bin39->SetBinContent(54,91);
   hM_bin39->SetBinContent(55,95);
   hM_bin39->SetBinContent(56,67);
   hM_bin39->SetBinContent(57,69);
   hM_bin39->SetBinContent(58,66);
   hM_bin39->SetBinContent(59,52);
   hM_bin39->SetBinContent(60,39);
   hM_bin39->SetBinContent(61,49);
   hM_bin39->SetBinContent(62,45);
   hM_bin39->SetBinContent(63,23);
   hM_bin39->SetBinContent(64,24);
   hM_bin39->SetBinContent(65,26);
   hM_bin39->SetBinContent(66,20);
   hM_bin39->SetBinContent(67,26);
   hM_bin39->SetBinContent(68,20);
   hM_bin39->SetBinContent(69,20);
   hM_bin39->SetBinContent(70,15);
   hM_bin39->SetBinContent(71,20);
   hM_bin39->SetBinContent(72,14);
   hM_bin39->SetBinContent(73,17);
   hM_bin39->SetBinContent(74,19);
   hM_bin39->SetBinContent(75,16);
   hM_bin39->SetBinContent(76,19);
   hM_bin39->SetBinContent(77,16);
   hM_bin39->SetBinContent(78,19);
   hM_bin39->SetBinContent(79,14);
   hM_bin39->SetBinContent(80,12);
   hM_bin39->SetBinContent(81,10);
   hM_bin39->SetBinContent(82,14);
   hM_bin39->SetBinContent(83,15);
   hM_bin39->SetBinContent(84,28);
   hM_bin39->SetBinContent(85,15);
   hM_bin39->SetBinContent(86,15);
   hM_bin39->SetBinContent(87,14);
   hM_bin39->SetBinContent(88,14);
   hM_bin39->SetBinContent(89,18);
   hM_bin39->SetBinContent(90,20);
   hM_bin39->SetBinContent(91,16);
   hM_bin39->SetBinContent(92,12);
   hM_bin39->SetBinContent(93,23);
   hM_bin39->SetBinContent(94,11);
   hM_bin39->SetBinContent(95,19);
   hM_bin39->SetBinContent(96,24);
   hM_bin39->SetBinContent(97,18);
   hM_bin39->SetBinContent(98,24);
   hM_bin39->SetBinContent(99,15);
   hM_bin39->SetBinContent(100,15);
   hM_bin39->SetBinContent(101,5544);
   hM_bin39->SetEntries(8522);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08741399,0.2033474);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(50.31103);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-16.88465);
   fsig->SetParError(0,2.919269);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,168.1417);
   fsig->SetParError(1,22.39003);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-8.505915e-06);
   fsig->SetParError(2,267.3268);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,82.5974);
   fsig->SetParError(3,3.234255);
   fsig->SetParLimits(3,0,196);
   fsig->SetParameter(4,0.1436853);
   fsig->SetParError(4,0.0007839213);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0002080447);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin39->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin39");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 8522   ");
   text = ptstats->AddText("Mean  = 0.1729");
   text = ptstats->AddText("RMS   = 0.05671");
   text = ptstats->AddText("#chi^{2} / ndf = 50.31 / 28");
   text = ptstats->AddText("p0       = -16.88 #pm 2.92 ");
   text = ptstats->AddText("p1       = 168.1 #pm 22.4 ");
   text = ptstats->AddText("p2       = -8.506e-06 #pm 2.673e+02 ");
   text = ptstats->AddText("p3       =  82.6 #pm 3.2 ");
   text = ptstats->AddText("p4       = 0.1437 #pm 0.0008 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00021 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin39->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin39);

   ci = TColor::GetColor("#0000ff");
   hM_bin39->SetMarkerColor(ci);
   hM_bin39->SetMarkerStyle(24);
   hM_bin39->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin39->GetXaxis()->SetLabelFont(42);
   hM_bin39->GetXaxis()->SetLabelSize(0.035);
   hM_bin39->GetXaxis()->SetTitleSize(0.035);
   hM_bin39->GetXaxis()->SetTitleFont(42);
   hM_bin39->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin39->GetYaxis()->SetLabelFont(42);
   hM_bin39->GetYaxis()->SetLabelSize(0.035);
   hM_bin39->GetYaxis()->SetTitleSize(0.035);
   hM_bin39->GetYaxis()->SetTitleFont(42);
   hM_bin39->GetZaxis()->SetLabelFont(42);
   hM_bin39->GetZaxis()->SetLabelSize(0.035);
   hM_bin39->GetZaxis()->SetTitleSize(0.035);
   hM_bin39->GetZaxis()->SetTitleFont(42);
   hM_bin39->Draw("e");
   
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
   fmb->SetParameter(0,-16.88465);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,168.1417);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-8.505915e-06);
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
   fpeak->SetParameter(0,82.5974);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1436853);
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
