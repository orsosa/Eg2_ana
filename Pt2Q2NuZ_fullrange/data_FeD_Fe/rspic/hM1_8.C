{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 16:01:55 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-68.96239,0.350906,620.6614);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin8 = new TH1F("hM_bin8","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin8->SetBinContent(0,966);
   hM_bin8->SetBinContent(14,5);
   hM_bin8->SetBinContent(15,9);
   hM_bin8->SetBinContent(16,9);
   hM_bin8->SetBinContent(17,12);
   hM_bin8->SetBinContent(18,10);
   hM_bin8->SetBinContent(19,7);
   hM_bin8->SetBinContent(20,8);
   hM_bin8->SetBinContent(21,7);
   hM_bin8->SetBinContent(22,5);
   hM_bin8->SetBinContent(23,5);
   hM_bin8->SetBinContent(24,12);
   hM_bin8->SetBinContent(25,8);
   hM_bin8->SetBinContent(26,15);
   hM_bin8->SetBinContent(27,8);
   hM_bin8->SetBinContent(28,12);
   hM_bin8->SetBinContent(29,10);
   hM_bin8->SetBinContent(30,11);
   hM_bin8->SetBinContent(31,15);
   hM_bin8->SetBinContent(32,15);
   hM_bin8->SetBinContent(33,18);
   hM_bin8->SetBinContent(34,12);
   hM_bin8->SetBinContent(35,24);
   hM_bin8->SetBinContent(36,22);
   hM_bin8->SetBinContent(37,35);
   hM_bin8->SetBinContent(38,41);
   hM_bin8->SetBinContent(39,48);
   hM_bin8->SetBinContent(40,56);
   hM_bin8->SetBinContent(41,97);
   hM_bin8->SetBinContent(42,122);
   hM_bin8->SetBinContent(43,168);
   hM_bin8->SetBinContent(44,219);
   hM_bin8->SetBinContent(45,249);
   hM_bin8->SetBinContent(46,351);
   hM_bin8->SetBinContent(47,409);
   hM_bin8->SetBinContent(48,450);
   hM_bin8->SetBinContent(49,488);
   hM_bin8->SetBinContent(50,503);
   hM_bin8->SetBinContent(51,482);
   hM_bin8->SetBinContent(52,434);
   hM_bin8->SetBinContent(53,384);
   hM_bin8->SetBinContent(54,336);
   hM_bin8->SetBinContent(55,331);
   hM_bin8->SetBinContent(56,272);
   hM_bin8->SetBinContent(57,232);
   hM_bin8->SetBinContent(58,181);
   hM_bin8->SetBinContent(59,150);
   hM_bin8->SetBinContent(60,119);
   hM_bin8->SetBinContent(61,127);
   hM_bin8->SetBinContent(62,110);
   hM_bin8->SetBinContent(63,108);
   hM_bin8->SetBinContent(64,114);
   hM_bin8->SetBinContent(65,89);
   hM_bin8->SetBinContent(66,95);
   hM_bin8->SetBinContent(67,103);
   hM_bin8->SetBinContent(68,88);
   hM_bin8->SetBinContent(69,72);
   hM_bin8->SetBinContent(70,87);
   hM_bin8->SetBinContent(71,96);
   hM_bin8->SetBinContent(72,93);
   hM_bin8->SetBinContent(73,85);
   hM_bin8->SetBinContent(74,92);
   hM_bin8->SetBinContent(75,91);
   hM_bin8->SetBinContent(76,112);
   hM_bin8->SetBinContent(77,107);
   hM_bin8->SetBinContent(78,77);
   hM_bin8->SetBinContent(79,103);
   hM_bin8->SetBinContent(80,74);
   hM_bin8->SetBinContent(81,95);
   hM_bin8->SetBinContent(82,112);
   hM_bin8->SetBinContent(83,104);
   hM_bin8->SetBinContent(84,108);
   hM_bin8->SetBinContent(85,108);
   hM_bin8->SetBinContent(86,102);
   hM_bin8->SetBinContent(87,125);
   hM_bin8->SetBinContent(88,105);
   hM_bin8->SetBinContent(89,107);
   hM_bin8->SetBinContent(90,108);
   hM_bin8->SetBinContent(91,116);
   hM_bin8->SetBinContent(92,109);
   hM_bin8->SetBinContent(93,105);
   hM_bin8->SetBinContent(94,111);
   hM_bin8->SetBinContent(95,120);
   hM_bin8->SetBinContent(96,119);
   hM_bin8->SetBinContent(97,117);
   hM_bin8->SetBinContent(98,108);
   hM_bin8->SetBinContent(99,110);
   hM_bin8->SetBinContent(100,132);
   hM_bin8->SetBinContent(101,21331);
   hM_bin8->SetEntries(32857);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07746428,0.1933977);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(122.6991);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-51.49771);
   fsig->SetParError(0,5.623202);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,671.6429);
   fsig->SetParError(1,48.77584);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.107341e-06);
   fsig->SetParError(2,207.0918);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,392.5256);
   fsig->SetParError(3,7.195759);
   fsig->SetParLimits(3,0,1006);
   fsig->SetParameter(4,0.1348432);
   fsig->SetParError(4,0.0003344755);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,1.870243e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin8->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin8");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 32857  ");
   text = ptstats->AddText("Mean  = 0.1742");
   text = ptstats->AddText("RMS   = 0.06222");
   text = ptstats->AddText("#chi^{2} / ndf = 122.7 / 28");
   text = ptstats->AddText("p0       = -51.5 #pm 5.6 ");
   text = ptstats->AddText("p1       = 671.6 #pm 48.8 ");
   text = ptstats->AddText("p2       = -1.107e-06 #pm 2.071e+02 ");
   text = ptstats->AddText("p3       = 392.5 #pm 7.2 ");
   text = ptstats->AddText("p4       = 0.1348 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00002 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin8->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin8);

   ci = TColor::GetColor("#0000ff");
   hM_bin8->SetMarkerColor(ci);
   hM_bin8->SetMarkerStyle(24);
   hM_bin8->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin8->GetXaxis()->SetLabelFont(42);
   hM_bin8->GetXaxis()->SetLabelSize(0.035);
   hM_bin8->GetXaxis()->SetTitleSize(0.035);
   hM_bin8->GetXaxis()->SetTitleFont(42);
   hM_bin8->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin8->GetYaxis()->SetLabelFont(42);
   hM_bin8->GetYaxis()->SetLabelSize(0.035);
   hM_bin8->GetYaxis()->SetTitleSize(0.035);
   hM_bin8->GetYaxis()->SetTitleFont(42);
   hM_bin8->GetZaxis()->SetLabelFont(42);
   hM_bin8->GetZaxis()->SetLabelSize(0.035);
   hM_bin8->GetZaxis()->SetTitleSize(0.035);
   hM_bin8->GetZaxis()->SetTitleFont(42);
   hM_bin8->Draw("e");
   
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
   fmb->SetParameter(0,-51.49771);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,671.6429);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.107341e-06);
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
   fpeak->SetParameter(0,392.5256);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1348432);
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
