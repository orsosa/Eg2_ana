{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr  4 12:27:38 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-53.91405,0.350906,485.2265);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin48 = new TH1F("hM_bin48","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin48->SetBinContent(0,3044);
   hM_bin48->SetBinContent(13,1);
   hM_bin48->SetBinContent(14,5);
   hM_bin48->SetBinContent(15,14);
   hM_bin48->SetBinContent(16,13);
   hM_bin48->SetBinContent(17,17);
   hM_bin48->SetBinContent(18,9);
   hM_bin48->SetBinContent(19,12);
   hM_bin48->SetBinContent(20,7);
   hM_bin48->SetBinContent(21,10);
   hM_bin48->SetBinContent(22,13);
   hM_bin48->SetBinContent(23,11);
   hM_bin48->SetBinContent(24,11);
   hM_bin48->SetBinContent(25,4);
   hM_bin48->SetBinContent(26,10);
   hM_bin48->SetBinContent(27,18);
   hM_bin48->SetBinContent(28,9);
   hM_bin48->SetBinContent(29,23);
   hM_bin48->SetBinContent(30,15);
   hM_bin48->SetBinContent(31,13);
   hM_bin48->SetBinContent(32,18);
   hM_bin48->SetBinContent(33,9);
   hM_bin48->SetBinContent(34,15);
   hM_bin48->SetBinContent(35,25);
   hM_bin48->SetBinContent(36,19);
   hM_bin48->SetBinContent(37,20);
   hM_bin48->SetBinContent(38,30);
   hM_bin48->SetBinContent(39,56);
   hM_bin48->SetBinContent(40,48);
   hM_bin48->SetBinContent(41,59);
   hM_bin48->SetBinContent(42,92);
   hM_bin48->SetBinContent(43,106);
   hM_bin48->SetBinContent(44,148);
   hM_bin48->SetBinContent(45,172);
   hM_bin48->SetBinContent(46,231);
   hM_bin48->SetBinContent(47,269);
   hM_bin48->SetBinContent(48,335);
   hM_bin48->SetBinContent(49,343);
   hM_bin48->SetBinContent(50,357);
   hM_bin48->SetBinContent(51,379);
   hM_bin48->SetBinContent(52,391);
   hM_bin48->SetBinContent(53,343);
   hM_bin48->SetBinContent(54,307);
   hM_bin48->SetBinContent(55,302);
   hM_bin48->SetBinContent(56,250);
   hM_bin48->SetBinContent(57,220);
   hM_bin48->SetBinContent(58,184);
   hM_bin48->SetBinContent(59,170);
   hM_bin48->SetBinContent(60,128);
   hM_bin48->SetBinContent(61,144);
   hM_bin48->SetBinContent(62,120);
   hM_bin48->SetBinContent(63,95);
   hM_bin48->SetBinContent(64,118);
   hM_bin48->SetBinContent(65,89);
   hM_bin48->SetBinContent(66,91);
   hM_bin48->SetBinContent(67,84);
   hM_bin48->SetBinContent(68,90);
   hM_bin48->SetBinContent(69,87);
   hM_bin48->SetBinContent(70,86);
   hM_bin48->SetBinContent(71,105);
   hM_bin48->SetBinContent(72,93);
   hM_bin48->SetBinContent(73,101);
   hM_bin48->SetBinContent(74,99);
   hM_bin48->SetBinContent(75,112);
   hM_bin48->SetBinContent(76,84);
   hM_bin48->SetBinContent(77,92);
   hM_bin48->SetBinContent(78,97);
   hM_bin48->SetBinContent(79,102);
   hM_bin48->SetBinContent(80,106);
   hM_bin48->SetBinContent(81,122);
   hM_bin48->SetBinContent(82,110);
   hM_bin48->SetBinContent(83,99);
   hM_bin48->SetBinContent(84,119);
   hM_bin48->SetBinContent(85,116);
   hM_bin48->SetBinContent(86,115);
   hM_bin48->SetBinContent(87,123);
   hM_bin48->SetBinContent(88,113);
   hM_bin48->SetBinContent(89,108);
   hM_bin48->SetBinContent(90,101);
   hM_bin48->SetBinContent(91,108);
   hM_bin48->SetBinContent(92,87);
   hM_bin48->SetBinContent(93,117);
   hM_bin48->SetBinContent(94,105);
   hM_bin48->SetBinContent(95,112);
   hM_bin48->SetBinContent(96,127);
   hM_bin48->SetBinContent(97,127);
   hM_bin48->SetBinContent(98,133);
   hM_bin48->SetBinContent(99,125);
   hM_bin48->SetBinContent(100,138);
   hM_bin48->SetBinContent(101,14851);
   hM_bin48->SetEntries(27436);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08064024,0.1965737);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(61.22002);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-44.53477);
   fsig->SetParError(0,6.030128);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,633.9773);
   fsig->SetParError(1,48.95418);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.0001114369);
   fsig->SetParError(2,380.2305);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,305.2764);
   fsig->SetParError(3,6.582024);
   fsig->SetParLimits(3,0,782);
   fsig->SetParameter(4,0.1381012);
   fsig->SetParError(4,0.0004142496);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,3.842674e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin48->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin48");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 27436  ");
   text = ptstats->AddText("Mean  =  0.181");
   text = ptstats->AddText("RMS   = 0.06421");
   text = ptstats->AddText("#chi^{2} / ndf = 61.22 / 28");
   text = ptstats->AddText("p0       = -44.53 #pm 6.03 ");
   text = ptstats->AddText("p1       =   634 #pm 49.0 ");
   text = ptstats->AddText("p2       = -0.0001114 #pm 380.2304993 ");
   text = ptstats->AddText("p3       = 305.3 #pm 6.6 ");
   text = ptstats->AddText("p4       = 0.1381 #pm 0.0004 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00004 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin48->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin48);

   ci = TColor::GetColor("#0000ff");
   hM_bin48->SetMarkerColor(ci);
   hM_bin48->SetMarkerStyle(24);
   hM_bin48->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin48->GetXaxis()->SetLabelFont(42);
   hM_bin48->GetXaxis()->SetLabelSize(0.035);
   hM_bin48->GetXaxis()->SetTitleSize(0.035);
   hM_bin48->GetXaxis()->SetTitleFont(42);
   hM_bin48->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin48->GetYaxis()->SetLabelFont(42);
   hM_bin48->GetYaxis()->SetLabelSize(0.035);
   hM_bin48->GetYaxis()->SetTitleSize(0.035);
   hM_bin48->GetYaxis()->SetTitleFont(42);
   hM_bin48->GetZaxis()->SetLabelFont(42);
   hM_bin48->GetZaxis()->SetLabelSize(0.035);
   hM_bin48->GetZaxis()->SetTitleSize(0.035);
   hM_bin48->GetZaxis()->SetTitleFont(42);
   hM_bin48->Draw("e");
   
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
   fmb->SetParameter(0,-44.53477);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,633.9773);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.0001114369);
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
   fpeak->SetParameter(0,305.2764);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1381012);
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
