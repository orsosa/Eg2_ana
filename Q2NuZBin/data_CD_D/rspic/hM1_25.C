{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Jan 31 05:38:34 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-54.58685,0.350906,491.2816);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin25 = new TH1F("hM_bin25","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin25->SetBinContent(0,6046);
   hM_bin25->SetBinContent(14,1);
   hM_bin25->SetBinContent(15,8);
   hM_bin25->SetBinContent(16,8);
   hM_bin25->SetBinContent(17,16);
   hM_bin25->SetBinContent(18,11);
   hM_bin25->SetBinContent(19,7);
   hM_bin25->SetBinContent(20,13);
   hM_bin25->SetBinContent(21,14);
   hM_bin25->SetBinContent(22,12);
   hM_bin25->SetBinContent(23,10);
   hM_bin25->SetBinContent(24,4);
   hM_bin25->SetBinContent(25,7);
   hM_bin25->SetBinContent(26,12);
   hM_bin25->SetBinContent(27,13);
   hM_bin25->SetBinContent(28,15);
   hM_bin25->SetBinContent(29,7);
   hM_bin25->SetBinContent(30,4);
   hM_bin25->SetBinContent(31,16);
   hM_bin25->SetBinContent(32,12);
   hM_bin25->SetBinContent(33,8);
   hM_bin25->SetBinContent(34,15);
   hM_bin25->SetBinContent(35,11);
   hM_bin25->SetBinContent(36,25);
   hM_bin25->SetBinContent(37,22);
   hM_bin25->SetBinContent(38,24);
   hM_bin25->SetBinContent(39,30);
   hM_bin25->SetBinContent(40,37);
   hM_bin25->SetBinContent(41,46);
   hM_bin25->SetBinContent(42,67);
   hM_bin25->SetBinContent(43,88);
   hM_bin25->SetBinContent(44,130);
   hM_bin25->SetBinContent(45,148);
   hM_bin25->SetBinContent(46,191);
   hM_bin25->SetBinContent(47,231);
   hM_bin25->SetBinContent(48,292);
   hM_bin25->SetBinContent(49,339);
   hM_bin25->SetBinContent(50,366);
   hM_bin25->SetBinContent(51,351);
   hM_bin25->SetBinContent(52,396);
   hM_bin25->SetBinContent(53,387);
   hM_bin25->SetBinContent(54,355);
   hM_bin25->SetBinContent(55,343);
   hM_bin25->SetBinContent(56,318);
   hM_bin25->SetBinContent(57,276);
   hM_bin25->SetBinContent(58,248);
   hM_bin25->SetBinContent(59,210);
   hM_bin25->SetBinContent(60,178);
   hM_bin25->SetBinContent(61,160);
   hM_bin25->SetBinContent(62,144);
   hM_bin25->SetBinContent(63,124);
   hM_bin25->SetBinContent(64,118);
   hM_bin25->SetBinContent(65,96);
   hM_bin25->SetBinContent(66,87);
   hM_bin25->SetBinContent(67,91);
   hM_bin25->SetBinContent(68,80);
   hM_bin25->SetBinContent(69,66);
   hM_bin25->SetBinContent(70,93);
   hM_bin25->SetBinContent(71,75);
   hM_bin25->SetBinContent(72,87);
   hM_bin25->SetBinContent(73,92);
   hM_bin25->SetBinContent(74,95);
   hM_bin25->SetBinContent(75,74);
   hM_bin25->SetBinContent(76,93);
   hM_bin25->SetBinContent(77,86);
   hM_bin25->SetBinContent(78,91);
   hM_bin25->SetBinContent(79,95);
   hM_bin25->SetBinContent(80,104);
   hM_bin25->SetBinContent(81,89);
   hM_bin25->SetBinContent(82,88);
   hM_bin25->SetBinContent(83,114);
   hM_bin25->SetBinContent(84,95);
   hM_bin25->SetBinContent(85,103);
   hM_bin25->SetBinContent(86,107);
   hM_bin25->SetBinContent(87,105);
   hM_bin25->SetBinContent(88,96);
   hM_bin25->SetBinContent(89,113);
   hM_bin25->SetBinContent(90,108);
   hM_bin25->SetBinContent(91,114);
   hM_bin25->SetBinContent(92,103);
   hM_bin25->SetBinContent(93,108);
   hM_bin25->SetBinContent(94,117);
   hM_bin25->SetBinContent(95,120);
   hM_bin25->SetBinContent(96,117);
   hM_bin25->SetBinContent(97,106);
   hM_bin25->SetBinContent(98,111);
   hM_bin25->SetBinContent(99,118);
   hM_bin25->SetBinContent(100,142);
   hM_bin25->SetBinContent(101,34299);
   hM_bin25->SetEntries(49792);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08485283,0.2007863);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(34.04622);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-37.12125);
   fsig->SetParError(0,6.172882);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,545.1479);
   fsig->SetParError(1,48.5779);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-9.479273e-05);
   fsig->SetParError(2,594.9439);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,332.3511);
   fsig->SetParError(3,6.689814);
   fsig->SetParLimits(3,0,792);
   fsig->SetParameter(4,0.1424893);
   fsig->SetParError(4,0.0004009916);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,6.793382e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin25->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin25");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 49792  ");
   text = ptstats->AddText("Mean  =  0.181");
   text = ptstats->AddText("RMS   = 0.06206");
   text = ptstats->AddText("#chi^{2} / ndf = 34.05 / 28");
   text = ptstats->AddText("p0       = -37.12 #pm 6.17 ");
   text = ptstats->AddText("p1       = 545.1 #pm 48.6 ");
   text = ptstats->AddText("p2       = -9.479e-05 #pm 5.949e+02 ");
   text = ptstats->AddText("p3       = 332.4 #pm 6.7 ");
   text = ptstats->AddText("p4       = 0.1425 #pm 0.0004 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00007 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin25->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin25);

   ci = TColor::GetColor("#0000ff");
   hM_bin25->SetMarkerColor(ci);
   hM_bin25->SetMarkerStyle(24);
   hM_bin25->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin25->GetXaxis()->SetLabelFont(42);
   hM_bin25->GetXaxis()->SetLabelSize(0.035);
   hM_bin25->GetXaxis()->SetTitleSize(0.035);
   hM_bin25->GetXaxis()->SetTitleFont(42);
   hM_bin25->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin25->GetYaxis()->SetLabelFont(42);
   hM_bin25->GetYaxis()->SetLabelSize(0.035);
   hM_bin25->GetYaxis()->SetTitleSize(0.035);
   hM_bin25->GetYaxis()->SetTitleFont(42);
   hM_bin25->GetZaxis()->SetLabelFont(42);
   hM_bin25->GetZaxis()->SetLabelSize(0.035);
   hM_bin25->GetZaxis()->SetTitleSize(0.035);
   hM_bin25->GetZaxis()->SetTitleFont(42);
   hM_bin25->Draw("e");
   
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
   fmb->SetParameter(0,-37.12125);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,545.1479);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-9.479273e-05);
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
   fpeak->SetParameter(0,332.3511);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1424893);
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
