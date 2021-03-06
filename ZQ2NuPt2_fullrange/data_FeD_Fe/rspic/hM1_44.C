{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 11 12:06:51 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-58.48704,0.350906,526.3833);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin44 = new TH1F("hM_bin44","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin44->SetBinContent(0,2563);
   hM_bin44->SetBinContent(14,2);
   hM_bin44->SetBinContent(15,8);
   hM_bin44->SetBinContent(16,7);
   hM_bin44->SetBinContent(17,9);
   hM_bin44->SetBinContent(18,12);
   hM_bin44->SetBinContent(19,6);
   hM_bin44->SetBinContent(20,5);
   hM_bin44->SetBinContent(21,6);
   hM_bin44->SetBinContent(22,6);
   hM_bin44->SetBinContent(23,8);
   hM_bin44->SetBinContent(24,6);
   hM_bin44->SetBinContent(25,11);
   hM_bin44->SetBinContent(26,9);
   hM_bin44->SetBinContent(27,16);
   hM_bin44->SetBinContent(28,13);
   hM_bin44->SetBinContent(29,12);
   hM_bin44->SetBinContent(30,12);
   hM_bin44->SetBinContent(31,12);
   hM_bin44->SetBinContent(32,11);
   hM_bin44->SetBinContent(33,20);
   hM_bin44->SetBinContent(34,18);
   hM_bin44->SetBinContent(35,19);
   hM_bin44->SetBinContent(36,21);
   hM_bin44->SetBinContent(37,20);
   hM_bin44->SetBinContent(38,30);
   hM_bin44->SetBinContent(39,30);
   hM_bin44->SetBinContent(40,56);
   hM_bin44->SetBinContent(41,72);
   hM_bin44->SetBinContent(42,92);
   hM_bin44->SetBinContent(43,132);
   hM_bin44->SetBinContent(44,135);
   hM_bin44->SetBinContent(45,199);
   hM_bin44->SetBinContent(46,242);
   hM_bin44->SetBinContent(47,305);
   hM_bin44->SetBinContent(48,358);
   hM_bin44->SetBinContent(49,353);
   hM_bin44->SetBinContent(50,425);
   hM_bin44->SetBinContent(51,406);
   hM_bin44->SetBinContent(52,377);
   hM_bin44->SetBinContent(53,341);
   hM_bin44->SetBinContent(54,330);
   hM_bin44->SetBinContent(55,301);
   hM_bin44->SetBinContent(56,262);
   hM_bin44->SetBinContent(57,201);
   hM_bin44->SetBinContent(58,194);
   hM_bin44->SetBinContent(59,141);
   hM_bin44->SetBinContent(60,128);
   hM_bin44->SetBinContent(61,99);
   hM_bin44->SetBinContent(62,87);
   hM_bin44->SetBinContent(63,77);
   hM_bin44->SetBinContent(64,72);
   hM_bin44->SetBinContent(65,67);
   hM_bin44->SetBinContent(66,74);
   hM_bin44->SetBinContent(67,68);
   hM_bin44->SetBinContent(68,57);
   hM_bin44->SetBinContent(69,68);
   hM_bin44->SetBinContent(70,69);
   hM_bin44->SetBinContent(71,83);
   hM_bin44->SetBinContent(72,76);
   hM_bin44->SetBinContent(73,75);
   hM_bin44->SetBinContent(74,66);
   hM_bin44->SetBinContent(75,74);
   hM_bin44->SetBinContent(76,73);
   hM_bin44->SetBinContent(77,85);
   hM_bin44->SetBinContent(78,65);
   hM_bin44->SetBinContent(79,93);
   hM_bin44->SetBinContent(80,81);
   hM_bin44->SetBinContent(81,89);
   hM_bin44->SetBinContent(82,83);
   hM_bin44->SetBinContent(83,98);
   hM_bin44->SetBinContent(84,75);
   hM_bin44->SetBinContent(85,86);
   hM_bin44->SetBinContent(86,100);
   hM_bin44->SetBinContent(87,90);
   hM_bin44->SetBinContent(88,110);
   hM_bin44->SetBinContent(89,79);
   hM_bin44->SetBinContent(90,94);
   hM_bin44->SetBinContent(91,106);
   hM_bin44->SetBinContent(92,121);
   hM_bin44->SetBinContent(93,115);
   hM_bin44->SetBinContent(94,86);
   hM_bin44->SetBinContent(95,109);
   hM_bin44->SetBinContent(96,115);
   hM_bin44->SetBinContent(97,109);
   hM_bin44->SetBinContent(98,120);
   hM_bin44->SetBinContent(99,125);
   hM_bin44->SetBinContent(100,105);
   hM_bin44->SetBinContent(101,30205);
   hM_bin44->SetEntries(41671);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07969913,0.1956326);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(63.45825);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-30.8255);
   fsig->SetParError(0,5.938696);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,422.0829);
   fsig->SetParError(1,48.68537);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-6.39325e-05);
   fsig->SetParError(2,345.8114);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,339.9751);
   fsig->SetParError(3,6.713274);
   fsig->SetParLimits(3,0,850);
   fsig->SetParameter(4,0.1372741);
   fsig->SetParError(4,0.0003771152);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,2.902217e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin44->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin44");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 41671  ");
   text = ptstats->AddText("Mean  = 0.1768");
   text = ptstats->AddText("RMS   = 0.0635");
   text = ptstats->AddText("#chi^{2} / ndf = 63.46 / 27");
   text = ptstats->AddText("p0       = -30.83 #pm 5.94 ");
   text = ptstats->AddText("p1       = 422.1 #pm 48.7 ");
   text = ptstats->AddText("p2       = -6.393e-05 #pm 3.458e+02 ");
   text = ptstats->AddText("p3       =   340 #pm 6.7 ");
   text = ptstats->AddText("p4       = 0.1373 #pm 0.0004 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00003 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin44->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin44);

   ci = TColor::GetColor("#0000ff");
   hM_bin44->SetMarkerColor(ci);
   hM_bin44->SetMarkerStyle(24);
   hM_bin44->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin44->GetXaxis()->SetLabelFont(42);
   hM_bin44->GetXaxis()->SetLabelSize(0.035);
   hM_bin44->GetXaxis()->SetTitleSize(0.035);
   hM_bin44->GetXaxis()->SetTitleFont(42);
   hM_bin44->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin44->GetYaxis()->SetLabelFont(42);
   hM_bin44->GetYaxis()->SetLabelSize(0.035);
   hM_bin44->GetYaxis()->SetTitleSize(0.035);
   hM_bin44->GetYaxis()->SetTitleFont(42);
   hM_bin44->GetZaxis()->SetLabelFont(42);
   hM_bin44->GetZaxis()->SetLabelSize(0.035);
   hM_bin44->GetZaxis()->SetTitleSize(0.035);
   hM_bin44->GetZaxis()->SetTitleFont(42);
   hM_bin44->Draw("e");
   
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
   fmb->SetParameter(0,-30.8255);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,422.0829);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-6.39325e-05);
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
   fpeak->SetParameter(0,339.9751);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1372741);
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
