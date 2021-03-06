{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 18 12:02:45 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.1901558,0.8274134,0.8890623,95.70438);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin21 = new TH1F("hM_bin21","M_{#gamma #gamma}",100,0.2600464,0.8191716);
   hM_bin21->SetBinContent(0,1990);
   hM_bin21->SetBinContent(1,35);
   hM_bin21->SetBinContent(2,35);
   hM_bin21->SetBinContent(3,18);
   hM_bin21->SetBinContent(4,37);
   hM_bin21->SetBinContent(5,31);
   hM_bin21->SetBinContent(6,31);
   hM_bin21->SetBinContent(7,36);
   hM_bin21->SetBinContent(8,20);
   hM_bin21->SetBinContent(9,37);
   hM_bin21->SetBinContent(10,34);
   hM_bin21->SetBinContent(11,42);
   hM_bin21->SetBinContent(12,35);
   hM_bin21->SetBinContent(13,35);
   hM_bin21->SetBinContent(14,43);
   hM_bin21->SetBinContent(15,35);
   hM_bin21->SetBinContent(16,34);
   hM_bin21->SetBinContent(17,38);
   hM_bin21->SetBinContent(18,53);
   hM_bin21->SetBinContent(19,47);
   hM_bin21->SetBinContent(20,46);
   hM_bin21->SetBinContent(21,56);
   hM_bin21->SetBinContent(22,37);
   hM_bin21->SetBinContent(23,47);
   hM_bin21->SetBinContent(24,42);
   hM_bin21->SetBinContent(25,57);
   hM_bin21->SetBinContent(26,43);
   hM_bin21->SetBinContent(27,55);
   hM_bin21->SetBinContent(28,51);
   hM_bin21->SetBinContent(29,63);
   hM_bin21->SetBinContent(30,60);
   hM_bin21->SetBinContent(31,43);
   hM_bin21->SetBinContent(32,45);
   hM_bin21->SetBinContent(33,53);
   hM_bin21->SetBinContent(34,49);
   hM_bin21->SetBinContent(35,58);
   hM_bin21->SetBinContent(36,44);
   hM_bin21->SetBinContent(37,47);
   hM_bin21->SetBinContent(38,66);
   hM_bin21->SetBinContent(39,48);
   hM_bin21->SetBinContent(40,71);
   hM_bin21->SetBinContent(41,58);
   hM_bin21->SetBinContent(42,68);
   hM_bin21->SetBinContent(43,60);
   hM_bin21->SetBinContent(44,61);
   hM_bin21->SetBinContent(45,55);
   hM_bin21->SetBinContent(46,64);
   hM_bin21->SetBinContent(47,49);
   hM_bin21->SetBinContent(48,59);
   hM_bin21->SetBinContent(49,59);
   hM_bin21->SetBinContent(50,70);
   hM_bin21->SetBinContent(51,57);
   hM_bin21->SetBinContent(52,52);
   hM_bin21->SetBinContent(53,62);
   hM_bin21->SetBinContent(54,73);
   hM_bin21->SetBinContent(55,68);
   hM_bin21->SetBinContent(56,64);
   hM_bin21->SetBinContent(57,50);
   hM_bin21->SetBinContent(58,63);
   hM_bin21->SetBinContent(59,74);
   hM_bin21->SetBinContent(60,62);
   hM_bin21->SetBinContent(61,42);
   hM_bin21->SetBinContent(62,55);
   hM_bin21->SetBinContent(63,58);
   hM_bin21->SetBinContent(64,60);
   hM_bin21->SetBinContent(65,57);
   hM_bin21->SetBinContent(66,47);
   hM_bin21->SetBinContent(67,52);
   hM_bin21->SetBinContent(68,46);
   hM_bin21->SetBinContent(69,58);
   hM_bin21->SetBinContent(70,58);
   hM_bin21->SetBinContent(71,64);
   hM_bin21->SetBinContent(72,48);
   hM_bin21->SetBinContent(73,53);
   hM_bin21->SetBinContent(74,57);
   hM_bin21->SetBinContent(75,50);
   hM_bin21->SetBinContent(76,55);
   hM_bin21->SetBinContent(77,45);
   hM_bin21->SetBinContent(78,60);
   hM_bin21->SetBinContent(79,39);
   hM_bin21->SetBinContent(80,40);
   hM_bin21->SetBinContent(81,45);
   hM_bin21->SetBinContent(82,46);
   hM_bin21->SetBinContent(83,48);
   hM_bin21->SetBinContent(84,46);
   hM_bin21->SetBinContent(85,28);
   hM_bin21->SetBinContent(86,48);
   hM_bin21->SetBinContent(87,43);
   hM_bin21->SetBinContent(88,44);
   hM_bin21->SetBinContent(89,43);
   hM_bin21->SetBinContent(90,54);
   hM_bin21->SetBinContent(91,44);
   hM_bin21->SetBinContent(92,39);
   hM_bin21->SetBinContent(93,41);
   hM_bin21->SetBinContent(94,33);
   hM_bin21->SetBinContent(95,26);
   hM_bin21->SetBinContent(96,25);
   hM_bin21->SetBinContent(97,29);
   hM_bin21->SetBinContent(98,31);
   hM_bin21->SetBinContent(99,24);
   hM_bin21->SetBinContent(100,31);
   hM_bin21->SetBinContent(101,986);
   hM_bin21->SetEntries(7773);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.3324697,0.7634199);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(79.77159);
   fsig->SetNDF(71);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-28.76344);
   fsig->SetParError(0,36.69155);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,293.4073);
   fsig->SetParError(1,149.305);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-265.7852);
   fsig->SetParError(2,136.3944);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,8.232416);
   fsig->SetParError(3,5.60313);
   fsig->SetParLimits(3,0,148);
   fsig->SetParameter(4,0.5409681);
   fsig->SetParError(4,0.0236502);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.07182504);
   fsig->SetParError(5,0.01605033);
   fsig->SetParLimits(5,0.04788336,0.07182504);
   hM_bin21->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin21");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 7773   ");
   text = ptstats->AddText("Mean  = 0.5422");
   text = ptstats->AddText("RMS   = 0.1455");
   text = ptstats->AddText("#chi^{2} / ndf = 79.77 / 71");
   text = ptstats->AddText("p0       = -28.76 #pm 36.69 ");
   text = ptstats->AddText("p1       = 293.4 #pm 149.3 ");
   text = ptstats->AddText("p2       = -265.8 #pm 136.4 ");
   text = ptstats->AddText("p3       = 8.232 #pm 5.603 ");
   text = ptstats->AddText("p4       = 0.541 #pm 0.024 ");
   text = ptstats->AddText("p5       = 0.07183 #pm 0.01605 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin21->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin21);

   ci = TColor::GetColor("#0000ff");
   hM_bin21->SetMarkerColor(ci);
   hM_bin21->SetMarkerStyle(24);
   hM_bin21->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin21->GetXaxis()->SetLabelFont(42);
   hM_bin21->GetXaxis()->SetLabelSize(0.035);
   hM_bin21->GetXaxis()->SetTitleSize(0.035);
   hM_bin21->GetXaxis()->SetTitleFont(42);
   hM_bin21->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin21->GetYaxis()->SetLabelFont(42);
   hM_bin21->GetYaxis()->SetLabelSize(0.035);
   hM_bin21->GetYaxis()->SetTitleSize(0.035);
   hM_bin21->GetYaxis()->SetTitleFont(42);
   hM_bin21->GetZaxis()->SetLabelFont(42);
   hM_bin21->GetZaxis()->SetLabelSize(0.035);
   hM_bin21->GetZaxis()->SetTitleSize(0.035);
   hM_bin21->GetZaxis()->SetTitleFont(42);
   hM_bin21->Draw("e");
   
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
   fmb->SetParameter(0,-28.76344);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,293.4073);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-265.7852);
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
   fpeak->SetParameter(0,8.232416);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.5409681);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.07182504);
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
