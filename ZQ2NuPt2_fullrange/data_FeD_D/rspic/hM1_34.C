{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 11 12:10:21 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-11.39667,0.350906,102.57);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin34 = new TH1F("hM_bin34","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin34->SetBinContent(0,1598);
   hM_bin34->SetBinContent(15,1);
   hM_bin34->SetBinContent(16,1);
   hM_bin34->SetBinContent(17,1);
   hM_bin34->SetBinContent(18,2);
   hM_bin34->SetBinContent(19,4);
   hM_bin34->SetBinContent(20,3);
   hM_bin34->SetBinContent(22,2);
   hM_bin34->SetBinContent(23,1);
   hM_bin34->SetBinContent(24,4);
   hM_bin34->SetBinContent(25,3);
   hM_bin34->SetBinContent(27,1);
   hM_bin34->SetBinContent(28,2);
   hM_bin34->SetBinContent(29,2);
   hM_bin34->SetBinContent(30,4);
   hM_bin34->SetBinContent(31,4);
   hM_bin34->SetBinContent(32,4);
   hM_bin34->SetBinContent(33,7);
   hM_bin34->SetBinContent(34,1);
   hM_bin34->SetBinContent(35,5);
   hM_bin34->SetBinContent(36,4);
   hM_bin34->SetBinContent(37,8);
   hM_bin34->SetBinContent(38,6);
   hM_bin34->SetBinContent(39,10);
   hM_bin34->SetBinContent(40,7);
   hM_bin34->SetBinContent(41,9);
   hM_bin34->SetBinContent(42,23);
   hM_bin34->SetBinContent(43,25);
   hM_bin34->SetBinContent(44,24);
   hM_bin34->SetBinContent(45,31);
   hM_bin34->SetBinContent(46,43);
   hM_bin34->SetBinContent(47,33);
   hM_bin34->SetBinContent(48,64);
   hM_bin34->SetBinContent(49,63);
   hM_bin34->SetBinContent(50,69);
   hM_bin34->SetBinContent(51,45);
   hM_bin34->SetBinContent(52,78);
   hM_bin34->SetBinContent(53,64);
   hM_bin34->SetBinContent(54,57);
   hM_bin34->SetBinContent(55,71);
   hM_bin34->SetBinContent(56,48);
   hM_bin34->SetBinContent(57,37);
   hM_bin34->SetBinContent(58,42);
   hM_bin34->SetBinContent(59,37);
   hM_bin34->SetBinContent(60,29);
   hM_bin34->SetBinContent(61,21);
   hM_bin34->SetBinContent(62,18);
   hM_bin34->SetBinContent(63,13);
   hM_bin34->SetBinContent(64,15);
   hM_bin34->SetBinContent(65,10);
   hM_bin34->SetBinContent(66,12);
   hM_bin34->SetBinContent(67,7);
   hM_bin34->SetBinContent(68,13);
   hM_bin34->SetBinContent(69,8);
   hM_bin34->SetBinContent(70,7);
   hM_bin34->SetBinContent(71,8);
   hM_bin34->SetBinContent(72,8);
   hM_bin34->SetBinContent(73,12);
   hM_bin34->SetBinContent(74,7);
   hM_bin34->SetBinContent(75,6);
   hM_bin34->SetBinContent(76,12);
   hM_bin34->SetBinContent(77,7);
   hM_bin34->SetBinContent(78,11);
   hM_bin34->SetBinContent(79,7);
   hM_bin34->SetBinContent(80,10);
   hM_bin34->SetBinContent(81,8);
   hM_bin34->SetBinContent(82,14);
   hM_bin34->SetBinContent(83,11);
   hM_bin34->SetBinContent(84,14);
   hM_bin34->SetBinContent(85,17);
   hM_bin34->SetBinContent(86,7);
   hM_bin34->SetBinContent(87,11);
   hM_bin34->SetBinContent(88,8);
   hM_bin34->SetBinContent(89,15);
   hM_bin34->SetBinContent(90,8);
   hM_bin34->SetBinContent(91,15);
   hM_bin34->SetBinContent(92,9);
   hM_bin34->SetBinContent(93,18);
   hM_bin34->SetBinContent(94,14);
   hM_bin34->SetBinContent(95,17);
   hM_bin34->SetBinContent(96,16);
   hM_bin34->SetBinContent(97,10);
   hM_bin34->SetBinContent(98,10);
   hM_bin34->SetBinContent(99,12);
   hM_bin34->SetBinContent(100,10);
   hM_bin34->SetBinContent(101,29927);
   hM_bin34->SetEntries(32960);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08241393,0.1983474);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(35.55271);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-0.1718798);
   fsig->SetParError(0,2.885887);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,40.85933);
   fsig->SetParError(1,20.93885);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.00170248);
   fsig->SetParError(2,1219.022);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,58.34385);
   fsig->SetParError(3,2.786108);
   fsig->SetParLimits(3,0,156);
   fsig->SetParameter(4,0.1402733);
   fsig->SetParError(4,0.001004743);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.00136013);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin34->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin34");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 32960  ");
   text = ptstats->AddText("Mean  = 0.1665");
   text = ptstats->AddText("RMS   = 0.05921");
   text = ptstats->AddText("#chi^{2} / ndf = 35.55 / 27");
   text = ptstats->AddText("p0       = -0.1719 #pm 2.8859 ");
   text = ptstats->AddText("p1       = 40.86 #pm 20.94 ");
   text = ptstats->AddText("p2       = -0.001702 #pm 1219.022217 ");
   text = ptstats->AddText("p3       = 58.34 #pm 2.79 ");
   text = ptstats->AddText("p4       = 0.1403 #pm 0.0010 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00136 ");
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
   fmb->SetParameter(0,-0.1718798);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,40.85933);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.00170248);
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
   fpeak->SetParameter(0,58.34385);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1402733);
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
