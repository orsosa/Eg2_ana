{
//=========Macro generated from canvas: c/The canvas
//=========  (Wed Dec 14 17:13:23 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.06625,-3.648203,0.20375,32.83383);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin23 = new TH1F("hM_bin23","M_{#gamma #gamma}",75,0.08,0.19);
   hM_bin23->SetBinContent(0,1);
   hM_bin23->SetBinContent(1,2);
   hM_bin23->SetBinContent(3,2);
   hM_bin23->SetBinContent(4,2);
   hM_bin23->SetBinContent(5,1);
   hM_bin23->SetBinContent(6,1);
   hM_bin23->SetBinContent(9,1);
   hM_bin23->SetBinContent(10,1);
   hM_bin23->SetBinContent(11,3);
   hM_bin23->SetBinContent(12,1);
   hM_bin23->SetBinContent(13,2);
   hM_bin23->SetBinContent(14,1);
   hM_bin23->SetBinContent(15,3);
   hM_bin23->SetBinContent(16,1);
   hM_bin23->SetBinContent(17,2);
   hM_bin23->SetBinContent(18,2);
   hM_bin23->SetBinContent(19,1);
   hM_bin23->SetBinContent(20,4);
   hM_bin23->SetBinContent(21,3);
   hM_bin23->SetBinContent(22,6);
   hM_bin23->SetBinContent(23,5);
   hM_bin23->SetBinContent(24,5);
   hM_bin23->SetBinContent(25,8);
   hM_bin23->SetBinContent(26,8);
   hM_bin23->SetBinContent(27,11);
   hM_bin23->SetBinContent(28,12);
   hM_bin23->SetBinContent(29,11);
   hM_bin23->SetBinContent(30,12);
   hM_bin23->SetBinContent(31,14);
   hM_bin23->SetBinContent(32,15);
   hM_bin23->SetBinContent(33,15);
   hM_bin23->SetBinContent(34,13);
   hM_bin23->SetBinContent(35,18);
   hM_bin23->SetBinContent(36,23);
   hM_bin23->SetBinContent(37,13);
   hM_bin23->SetBinContent(38,17);
   hM_bin23->SetBinContent(39,23);
   hM_bin23->SetBinContent(40,22);
   hM_bin23->SetBinContent(41,18);
   hM_bin23->SetBinContent(42,15);
   hM_bin23->SetBinContent(43,17);
   hM_bin23->SetBinContent(44,14);
   hM_bin23->SetBinContent(45,18);
   hM_bin23->SetBinContent(46,9);
   hM_bin23->SetBinContent(47,5);
   hM_bin23->SetBinContent(48,7);
   hM_bin23->SetBinContent(49,8);
   hM_bin23->SetBinContent(50,7);
   hM_bin23->SetBinContent(51,6);
   hM_bin23->SetBinContent(52,13);
   hM_bin23->SetBinContent(53,8);
   hM_bin23->SetBinContent(54,7);
   hM_bin23->SetBinContent(55,4);
   hM_bin23->SetBinContent(56,3);
   hM_bin23->SetBinContent(57,8);
   hM_bin23->SetBinContent(58,4);
   hM_bin23->SetBinContent(59,4);
   hM_bin23->SetBinContent(60,3);
   hM_bin23->SetBinContent(61,3);
   hM_bin23->SetBinContent(62,2);
   hM_bin23->SetBinContent(63,2);
   hM_bin23->SetBinContent(64,6);
   hM_bin23->SetBinContent(65,2);
   hM_bin23->SetBinContent(66,2);
   hM_bin23->SetBinContent(67,2);
   hM_bin23->SetBinContent(68,1);
   hM_bin23->SetBinContent(69,3);
   hM_bin23->SetBinContent(70,1);
   hM_bin23->SetBinContent(71,3);
   hM_bin23->SetBinContent(72,2);
   hM_bin23->SetBinContent(73,7);
   hM_bin23->SetBinContent(74,1);
   hM_bin23->SetBinContent(75,1);
   hM_bin23->SetBinContent(76,2);
   hM_bin23->SetEntries(503);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08,0.19);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(56.54111);
   fsig->SetNDF(66);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-0.1250275);
   fsig->SetParError(0,0.8021184);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,7.919183);
   fsig->SetParError(1,5.684765);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.683075e-07);
   fsig->SetParError(2,87.64429);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,14.13351);
   fsig->SetParError(3,0.9191746);
   fsig->SetParLimits(3,0,0);
   fsig->SetParameter(4,0.1355261);
   fsig->SetParError(4,0.0009298948);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01552272);
   fsig->SetParError(5,0.0001861356);
   fsig->SetParLimits(5,0.01552272,0.02328408);
   hM_bin23->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin23");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 503    ");
   text = ptstats->AddText("Mean  = 0.1374");
   text = ptstats->AddText("RMS   = 0.01977");
   text = ptstats->AddText("#chi^{2} / ndf = 56.54 / 66");
   text = ptstats->AddText("p0       = -0.125 #pm 0.802 ");
   text = ptstats->AddText("p1       = 7.919 #pm 5.685 ");
   text = ptstats->AddText("p2       = -1.683e-07 #pm 8.764e+01 ");
   text = ptstats->AddText("p3       = 14.13 #pm 0.92 ");
   text = ptstats->AddText("p4       = 0.1355 #pm 0.0009 ");
   text = ptstats->AddText("p5       = 0.01552 #pm 0.00019 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin23->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin23);

   ci = TColor::GetColor("#0000ff");
   hM_bin23->SetMarkerColor(ci);
   hM_bin23->SetMarkerStyle(24);
   hM_bin23->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin23->GetXaxis()->SetLabelFont(42);
   hM_bin23->GetXaxis()->SetLabelSize(0.035);
   hM_bin23->GetXaxis()->SetTitleSize(0.035);
   hM_bin23->GetXaxis()->SetTitleFont(42);
   hM_bin23->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin23->GetYaxis()->SetLabelFont(42);
   hM_bin23->GetYaxis()->SetLabelSize(0.035);
   hM_bin23->GetYaxis()->SetTitleSize(0.035);
   hM_bin23->GetYaxis()->SetTitleFont(42);
   hM_bin23->GetZaxis()->SetLabelFont(42);
   hM_bin23->GetZaxis()->SetLabelSize(0.035);
   hM_bin23->GetZaxis()->SetTitleSize(0.035);
   hM_bin23->GetZaxis()->SetTitleFont(42);
   hM_bin23->Draw("e");
   
   TF1 *fmb = new TF1("fmb","pol2",0.08,0.19);
   fmb->SetFillColor(19);
   fmb->SetFillStyle(0);

   ci = TColor::GetColor("#00ff00");
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
   fmb->SetParameter(0,-0.1250275);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,7.919183);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.683075e-07);
   fmb->SetParError(2,0);
   fmb->SetParLimits(2,0,0);
   fmb->Draw("same");
   
   TF1 *fpeak = new TF1("fpeak","gaus",0.08,0.19);
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
   fpeak->SetParameter(0,14.13351);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1355261);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.01552272);
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
