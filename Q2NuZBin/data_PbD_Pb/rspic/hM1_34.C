{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Jan 31 05:32:47 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-9.589422,0.350906,86.30479);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin34 = new TH1F("hM_bin34","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin34->SetBinContent(0,1396);
   hM_bin34->SetBinContent(16,2);
   hM_bin34->SetBinContent(17,4);
   hM_bin34->SetBinContent(18,1);
   hM_bin34->SetBinContent(19,2);
   hM_bin34->SetBinContent(20,4);
   hM_bin34->SetBinContent(21,1);
   hM_bin34->SetBinContent(23,2);
   hM_bin34->SetBinContent(24,4);
   hM_bin34->SetBinContent(25,5);
   hM_bin34->SetBinContent(26,2);
   hM_bin34->SetBinContent(28,1);
   hM_bin34->SetBinContent(29,2);
   hM_bin34->SetBinContent(30,2);
   hM_bin34->SetBinContent(31,1);
   hM_bin34->SetBinContent(33,3);
   hM_bin34->SetBinContent(34,3);
   hM_bin34->SetBinContent(35,5);
   hM_bin34->SetBinContent(36,6);
   hM_bin34->SetBinContent(37,2);
   hM_bin34->SetBinContent(38,7);
   hM_bin34->SetBinContent(39,10);
   hM_bin34->SetBinContent(40,3);
   hM_bin34->SetBinContent(41,7);
   hM_bin34->SetBinContent(42,13);
   hM_bin34->SetBinContent(43,19);
   hM_bin34->SetBinContent(44,19);
   hM_bin34->SetBinContent(45,24);
   hM_bin34->SetBinContent(46,28);
   hM_bin34->SetBinContent(47,30);
   hM_bin34->SetBinContent(48,56);
   hM_bin34->SetBinContent(49,49);
   hM_bin34->SetBinContent(50,58);
   hM_bin34->SetBinContent(51,65);
   hM_bin34->SetBinContent(52,61);
   hM_bin34->SetBinContent(53,65);
   hM_bin34->SetBinContent(54,62);
   hM_bin34->SetBinContent(55,55);
   hM_bin34->SetBinContent(56,48);
   hM_bin34->SetBinContent(57,47);
   hM_bin34->SetBinContent(58,30);
   hM_bin34->SetBinContent(59,22);
   hM_bin34->SetBinContent(60,31);
   hM_bin34->SetBinContent(61,19);
   hM_bin34->SetBinContent(62,19);
   hM_bin34->SetBinContent(63,16);
   hM_bin34->SetBinContent(64,17);
   hM_bin34->SetBinContent(65,13);
   hM_bin34->SetBinContent(66,17);
   hM_bin34->SetBinContent(67,13);
   hM_bin34->SetBinContent(68,11);
   hM_bin34->SetBinContent(69,12);
   hM_bin34->SetBinContent(70,9);
   hM_bin34->SetBinContent(71,9);
   hM_bin34->SetBinContent(72,8);
   hM_bin34->SetBinContent(73,8);
   hM_bin34->SetBinContent(74,10);
   hM_bin34->SetBinContent(75,9);
   hM_bin34->SetBinContent(76,15);
   hM_bin34->SetBinContent(77,15);
   hM_bin34->SetBinContent(78,13);
   hM_bin34->SetBinContent(79,11);
   hM_bin34->SetBinContent(80,9);
   hM_bin34->SetBinContent(81,14);
   hM_bin34->SetBinContent(82,15);
   hM_bin34->SetBinContent(83,8);
   hM_bin34->SetBinContent(84,11);
   hM_bin34->SetBinContent(85,8);
   hM_bin34->SetBinContent(86,11);
   hM_bin34->SetBinContent(87,12);
   hM_bin34->SetBinContent(88,12);
   hM_bin34->SetBinContent(89,17);
   hM_bin34->SetBinContent(90,18);
   hM_bin34->SetBinContent(91,12);
   hM_bin34->SetBinContent(92,16);
   hM_bin34->SetBinContent(93,16);
   hM_bin34->SetBinContent(94,14);
   hM_bin34->SetBinContent(95,19);
   hM_bin34->SetBinContent(96,13);
   hM_bin34->SetBinContent(97,14);
   hM_bin34->SetBinContent(98,20);
   hM_bin34->SetBinContent(99,13);
   hM_bin34->SetBinContent(100,20);
   hM_bin34->SetBinContent(101,7938);
   hM_bin34->SetEntries(10731);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08393994,0.1998734);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(33.7256);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-6.495723);
   fsig->SetParError(0,2.441083);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,85.60152);
   fsig->SetParError(1,18.69625);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-6.211874e-05);
   fsig->SetParError(2,271.9584);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,51.91023);
   fsig->SetParError(3,2.692076);
   fsig->SetParLimits(3,0,130);
   fsig->SetParameter(4,0.1411498);
   fsig->SetParError(4,0.0009445678);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0001772218);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin34->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin34");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 10731  ");
   text = ptstats->AddText("Mean  = 0.1746");
   text = ptstats->AddText("RMS   =  0.062");
   text = ptstats->AddText("#chi^{2} / ndf = 33.73 / 28");
   text = ptstats->AddText("p0       = -6.496 #pm 2.441 ");
   text = ptstats->AddText("p1       =  85.6 #pm 18.7 ");
   text = ptstats->AddText("p2       = -6.212e-05 #pm 2.720e+02 ");
   text = ptstats->AddText("p3       = 51.91 #pm 2.69 ");
   text = ptstats->AddText("p4       = 0.1411 #pm 0.0009 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00018 ");
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
   fmb->SetParameter(0,-6.495723);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,85.60152);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-6.211874e-05);
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
   fpeak->SetParameter(0,51.91023);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1411498);
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
