{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 18 12:10:25 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.1901558,-1.103183,0.8890623,88.63921);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin40 = new TH1F("hM_bin40","M_{#gamma #gamma}",100,0.2600464,0.8191716);
   hM_bin40->SetBinContent(0,1668);
   hM_bin40->SetBinContent(1,15);
   hM_bin40->SetBinContent(2,24);
   hM_bin40->SetBinContent(3,26);
   hM_bin40->SetBinContent(4,24);
   hM_bin40->SetBinContent(5,19);
   hM_bin40->SetBinContent(6,31);
   hM_bin40->SetBinContent(7,19);
   hM_bin40->SetBinContent(8,19);
   hM_bin40->SetBinContent(9,22);
   hM_bin40->SetBinContent(10,26);
   hM_bin40->SetBinContent(11,19);
   hM_bin40->SetBinContent(12,29);
   hM_bin40->SetBinContent(13,41);
   hM_bin40->SetBinContent(14,22);
   hM_bin40->SetBinContent(15,18);
   hM_bin40->SetBinContent(16,40);
   hM_bin40->SetBinContent(17,31);
   hM_bin40->SetBinContent(18,27);
   hM_bin40->SetBinContent(19,31);
   hM_bin40->SetBinContent(20,39);
   hM_bin40->SetBinContent(21,33);
   hM_bin40->SetBinContent(22,37);
   hM_bin40->SetBinContent(23,41);
   hM_bin40->SetBinContent(24,31);
   hM_bin40->SetBinContent(25,32);
   hM_bin40->SetBinContent(26,32);
   hM_bin40->SetBinContent(27,47);
   hM_bin40->SetBinContent(28,48);
   hM_bin40->SetBinContent(29,34);
   hM_bin40->SetBinContent(30,49);
   hM_bin40->SetBinContent(31,50);
   hM_bin40->SetBinContent(32,37);
   hM_bin40->SetBinContent(33,36);
   hM_bin40->SetBinContent(34,47);
   hM_bin40->SetBinContent(35,39);
   hM_bin40->SetBinContent(36,53);
   hM_bin40->SetBinContent(37,41);
   hM_bin40->SetBinContent(38,49);
   hM_bin40->SetBinContent(39,49);
   hM_bin40->SetBinContent(40,43);
   hM_bin40->SetBinContent(41,42);
   hM_bin40->SetBinContent(42,51);
   hM_bin40->SetBinContent(43,49);
   hM_bin40->SetBinContent(44,44);
   hM_bin40->SetBinContent(45,51);
   hM_bin40->SetBinContent(46,57);
   hM_bin40->SetBinContent(47,62);
   hM_bin40->SetBinContent(48,61);
   hM_bin40->SetBinContent(49,57);
   hM_bin40->SetBinContent(50,54);
   hM_bin40->SetBinContent(51,56);
   hM_bin40->SetBinContent(52,62);
   hM_bin40->SetBinContent(53,54);
   hM_bin40->SetBinContent(54,68);
   hM_bin40->SetBinContent(55,64);
   hM_bin40->SetBinContent(56,60);
   hM_bin40->SetBinContent(57,66);
   hM_bin40->SetBinContent(58,64);
   hM_bin40->SetBinContent(59,67);
   hM_bin40->SetBinContent(60,63);
   hM_bin40->SetBinContent(61,58);
   hM_bin40->SetBinContent(62,55);
   hM_bin40->SetBinContent(63,41);
   hM_bin40->SetBinContent(64,54);
   hM_bin40->SetBinContent(65,65);
   hM_bin40->SetBinContent(66,52);
   hM_bin40->SetBinContent(67,62);
   hM_bin40->SetBinContent(68,66);
   hM_bin40->SetBinContent(69,55);
   hM_bin40->SetBinContent(70,54);
   hM_bin40->SetBinContent(71,55);
   hM_bin40->SetBinContent(72,44);
   hM_bin40->SetBinContent(73,46);
   hM_bin40->SetBinContent(74,50);
   hM_bin40->SetBinContent(75,61);
   hM_bin40->SetBinContent(76,59);
   hM_bin40->SetBinContent(77,45);
   hM_bin40->SetBinContent(78,42);
   hM_bin40->SetBinContent(79,65);
   hM_bin40->SetBinContent(80,46);
   hM_bin40->SetBinContent(81,50);
   hM_bin40->SetBinContent(82,47);
   hM_bin40->SetBinContent(83,68);
   hM_bin40->SetBinContent(84,52);
   hM_bin40->SetBinContent(85,53);
   hM_bin40->SetBinContent(86,55);
   hM_bin40->SetBinContent(87,51);
   hM_bin40->SetBinContent(88,50);
   hM_bin40->SetBinContent(89,54);
   hM_bin40->SetBinContent(90,45);
   hM_bin40->SetBinContent(91,56);
   hM_bin40->SetBinContent(92,47);
   hM_bin40->SetBinContent(93,45);
   hM_bin40->SetBinContent(94,50);
   hM_bin40->SetBinContent(95,49);
   hM_bin40->SetBinContent(96,54);
   hM_bin40->SetBinContent(97,56);
   hM_bin40->SetBinContent(98,46);
   hM_bin40->SetBinContent(99,48);
   hM_bin40->SetBinContent(100,46);
   hM_bin40->SetBinContent(101,2338);
   hM_bin40->SetEntries(8605);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.3773479,0.747736);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(51.24694);
   fsig->SetNDF(60);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-2.849613);
   fsig->SetParError(0,39.70131);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,133.1615);
   fsig->SetParError(1,150.5719);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-79.36317);
   fsig->SetParError(2,133.9244);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,14.41827);
   fsig->SetParError(3,4.205883);
   fsig->SetParLimits(3,0,136);
   fsig->SetParameter(4,0.5606773);
   fsig->SetParError(4,0.009537394);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.04788336);
   fsig->SetParError(5,0.02055687);
   fsig->SetParLimits(5,0.04788336,0.07182504);
   hM_bin40->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin40");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 8605   ");
   text = ptstats->AddText("Mean  = 0.5714");
   text = ptstats->AddText("RMS   = 0.1464");
   text = ptstats->AddText("#chi^{2} / ndf = 51.25 / 60");
   text = ptstats->AddText("p0       = -2.85 #pm 39.70 ");
   text = ptstats->AddText("p1       = 133.2 #pm 150.6 ");
   text = ptstats->AddText("p2       = -79.36 #pm 133.92 ");
   text = ptstats->AddText("p3       = 14.42 #pm 4.21 ");
   text = ptstats->AddText("p4       = 0.5607 #pm 0.0095 ");
   text = ptstats->AddText("p5       = 0.04788 #pm 0.02056 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin40->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin40);

   ci = TColor::GetColor("#0000ff");
   hM_bin40->SetMarkerColor(ci);
   hM_bin40->SetMarkerStyle(24);
   hM_bin40->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin40->GetXaxis()->SetLabelFont(42);
   hM_bin40->GetXaxis()->SetLabelSize(0.035);
   hM_bin40->GetXaxis()->SetTitleSize(0.035);
   hM_bin40->GetXaxis()->SetTitleFont(42);
   hM_bin40->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin40->GetYaxis()->SetLabelFont(42);
   hM_bin40->GetYaxis()->SetLabelSize(0.035);
   hM_bin40->GetYaxis()->SetTitleSize(0.035);
   hM_bin40->GetYaxis()->SetTitleFont(42);
   hM_bin40->GetZaxis()->SetLabelFont(42);
   hM_bin40->GetZaxis()->SetLabelSize(0.035);
   hM_bin40->GetZaxis()->SetTitleSize(0.035);
   hM_bin40->GetZaxis()->SetTitleFont(42);
   hM_bin40->Draw("e");
   
   TF1 *fmb = new TF1("fmb","pol2",0.3600464,0.7191716);
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
   fmb->SetParameter(0,-2.849613);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,133.1615);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-79.36317);
   fmb->SetParError(2,0);
   fmb->SetParLimits(2,0,0);
   fmb->Draw("same");
   
   TF1 *fpeak = new TF1("fpeak","gaus",0.3600464,0.7191716);
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
   fpeak->SetParameter(0,14.41827);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.5606773);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.04788336);
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
