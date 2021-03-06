{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 16:00:52 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-10.1465,0.350906,91.31845);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin47 = new TH1F("hM_bin47","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin47->SetBinContent(0,6018);
   hM_bin47->SetBinContent(15,1);
   hM_bin47->SetBinContent(16,3);
   hM_bin47->SetBinContent(17,2);
   hM_bin47->SetBinContent(19,2);
   hM_bin47->SetBinContent(20,2);
   hM_bin47->SetBinContent(21,1);
   hM_bin47->SetBinContent(22,3);
   hM_bin47->SetBinContent(23,3);
   hM_bin47->SetBinContent(25,2);
   hM_bin47->SetBinContent(27,1);
   hM_bin47->SetBinContent(28,2);
   hM_bin47->SetBinContent(30,1);
   hM_bin47->SetBinContent(31,6);
   hM_bin47->SetBinContent(32,1);
   hM_bin47->SetBinContent(33,2);
   hM_bin47->SetBinContent(34,6);
   hM_bin47->SetBinContent(35,1);
   hM_bin47->SetBinContent(36,1);
   hM_bin47->SetBinContent(37,3);
   hM_bin47->SetBinContent(38,3);
   hM_bin47->SetBinContent(39,4);
   hM_bin47->SetBinContent(40,2);
   hM_bin47->SetBinContent(41,3);
   hM_bin47->SetBinContent(42,7);
   hM_bin47->SetBinContent(43,6);
   hM_bin47->SetBinContent(44,8);
   hM_bin47->SetBinContent(45,8);
   hM_bin47->SetBinContent(46,21);
   hM_bin47->SetBinContent(47,17);
   hM_bin47->SetBinContent(48,31);
   hM_bin47->SetBinContent(49,28);
   hM_bin47->SetBinContent(50,50);
   hM_bin47->SetBinContent(51,46);
   hM_bin47->SetBinContent(52,45);
   hM_bin47->SetBinContent(53,69);
   hM_bin47->SetBinContent(54,62);
   hM_bin47->SetBinContent(55,54);
   hM_bin47->SetBinContent(56,62);
   hM_bin47->SetBinContent(57,63);
   hM_bin47->SetBinContent(58,65);
   hM_bin47->SetBinContent(59,35);
   hM_bin47->SetBinContent(60,42);
   hM_bin47->SetBinContent(61,35);
   hM_bin47->SetBinContent(62,32);
   hM_bin47->SetBinContent(63,24);
   hM_bin47->SetBinContent(64,37);
   hM_bin47->SetBinContent(65,15);
   hM_bin47->SetBinContent(66,20);
   hM_bin47->SetBinContent(67,14);
   hM_bin47->SetBinContent(68,14);
   hM_bin47->SetBinContent(69,16);
   hM_bin47->SetBinContent(70,17);
   hM_bin47->SetBinContent(71,15);
   hM_bin47->SetBinContent(72,12);
   hM_bin47->SetBinContent(73,12);
   hM_bin47->SetBinContent(74,19);
   hM_bin47->SetBinContent(75,12);
   hM_bin47->SetBinContent(76,11);
   hM_bin47->SetBinContent(77,22);
   hM_bin47->SetBinContent(78,8);
   hM_bin47->SetBinContent(79,16);
   hM_bin47->SetBinContent(80,8);
   hM_bin47->SetBinContent(81,12);
   hM_bin47->SetBinContent(82,17);
   hM_bin47->SetBinContent(83,19);
   hM_bin47->SetBinContent(84,9);
   hM_bin47->SetBinContent(85,14);
   hM_bin47->SetBinContent(86,15);
   hM_bin47->SetBinContent(87,17);
   hM_bin47->SetBinContent(88,17);
   hM_bin47->SetBinContent(89,12);
   hM_bin47->SetBinContent(90,16);
   hM_bin47->SetBinContent(91,20);
   hM_bin47->SetBinContent(92,23);
   hM_bin47->SetBinContent(93,15);
   hM_bin47->SetBinContent(94,19);
   hM_bin47->SetBinContent(95,15);
   hM_bin47->SetBinContent(96,10);
   hM_bin47->SetBinContent(97,10);
   hM_bin47->SetBinContent(98,16);
   hM_bin47->SetBinContent(99,13);
   hM_bin47->SetBinContent(100,23);
   hM_bin47->SetBinContent(101,12670);
   hM_bin47->SetEntries(20133);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.09427685,0.2102103);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(34.76974);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-9.762704);
   fsig->SetParError(0,2.551896);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,106.2456);
   fsig->SetParError(1,18.85649);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-2.375351e-06);
   fsig->SetParError(2,358.1284);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,51.75699);
   fsig->SetParError(3,2.6411);
   fsig->SetParLimits(3,0,138);
   fsig->SetParameter(4,0.1509777);
   fsig->SetParError(4,0.001002488);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0002248299);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin47->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin47");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 20133  ");
   text = ptstats->AddText("Mean  = 0.1832");
   text = ptstats->AddText("RMS   = 0.05824");
   text = ptstats->AddText("#chi^{2} / ndf = 34.77 / 28");
   text = ptstats->AddText("p0       = -9.763 #pm 2.552 ");
   text = ptstats->AddText("p1       = 106.2 #pm 18.9 ");
   text = ptstats->AddText("p2       = -2.375e-06 #pm 3.581e+02 ");
   text = ptstats->AddText("p3       = 51.76 #pm 2.64 ");
   text = ptstats->AddText("p4       = 0.151 #pm 0.001 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00022 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin47->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin47);

   ci = TColor::GetColor("#0000ff");
   hM_bin47->SetMarkerColor(ci);
   hM_bin47->SetMarkerStyle(24);
   hM_bin47->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin47->GetXaxis()->SetLabelFont(42);
   hM_bin47->GetXaxis()->SetLabelSize(0.035);
   hM_bin47->GetXaxis()->SetTitleSize(0.035);
   hM_bin47->GetXaxis()->SetTitleFont(42);
   hM_bin47->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin47->GetYaxis()->SetLabelFont(42);
   hM_bin47->GetYaxis()->SetLabelSize(0.035);
   hM_bin47->GetYaxis()->SetTitleSize(0.035);
   hM_bin47->GetYaxis()->SetTitleFont(42);
   hM_bin47->GetZaxis()->SetLabelFont(42);
   hM_bin47->GetZaxis()->SetLabelSize(0.035);
   hM_bin47->GetZaxis()->SetTitleSize(0.035);
   hM_bin47->GetZaxis()->SetTitleFont(42);
   hM_bin47->Draw("e");
   
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
   fmb->SetParameter(0,-9.762704);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,106.2456);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-2.375351e-06);
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
   fpeak->SetParameter(0,51.75699);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1509777);
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
