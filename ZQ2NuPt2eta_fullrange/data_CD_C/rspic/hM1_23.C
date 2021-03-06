{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 18 12:09:30 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.1901558,-10.26752,0.8890623,179.0131);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin23 = new TH1F("hM_bin23","M_{#gamma #gamma}",100,0.2600464,0.8191716);
   hM_bin23->SetBinContent(0,2829);
   hM_bin23->SetBinContent(1,27);
   hM_bin23->SetBinContent(2,22);
   hM_bin23->SetBinContent(3,32);
   hM_bin23->SetBinContent(4,20);
   hM_bin23->SetBinContent(5,29);
   hM_bin23->SetBinContent(6,28);
   hM_bin23->SetBinContent(7,32);
   hM_bin23->SetBinContent(8,35);
   hM_bin23->SetBinContent(9,33);
   hM_bin23->SetBinContent(10,31);
   hM_bin23->SetBinContent(11,38);
   hM_bin23->SetBinContent(12,47);
   hM_bin23->SetBinContent(13,35);
   hM_bin23->SetBinContent(14,42);
   hM_bin23->SetBinContent(15,44);
   hM_bin23->SetBinContent(16,57);
   hM_bin23->SetBinContent(17,53);
   hM_bin23->SetBinContent(18,59);
   hM_bin23->SetBinContent(19,58);
   hM_bin23->SetBinContent(20,46);
   hM_bin23->SetBinContent(21,50);
   hM_bin23->SetBinContent(22,53);
   hM_bin23->SetBinContent(23,54);
   hM_bin23->SetBinContent(24,46);
   hM_bin23->SetBinContent(25,45);
   hM_bin23->SetBinContent(26,60);
   hM_bin23->SetBinContent(27,67);
   hM_bin23->SetBinContent(28,58);
   hM_bin23->SetBinContent(29,60);
   hM_bin23->SetBinContent(30,60);
   hM_bin23->SetBinContent(31,66);
   hM_bin23->SetBinContent(32,66);
   hM_bin23->SetBinContent(33,74);
   hM_bin23->SetBinContent(34,84);
   hM_bin23->SetBinContent(35,73);
   hM_bin23->SetBinContent(36,68);
   hM_bin23->SetBinContent(37,69);
   hM_bin23->SetBinContent(38,77);
   hM_bin23->SetBinContent(39,67);
   hM_bin23->SetBinContent(40,88);
   hM_bin23->SetBinContent(41,83);
   hM_bin23->SetBinContent(42,68);
   hM_bin23->SetBinContent(43,81);
   hM_bin23->SetBinContent(44,86);
   hM_bin23->SetBinContent(45,104);
   hM_bin23->SetBinContent(46,91);
   hM_bin23->SetBinContent(47,104);
   hM_bin23->SetBinContent(48,108);
   hM_bin23->SetBinContent(49,80);
   hM_bin23->SetBinContent(50,106);
   hM_bin23->SetBinContent(51,101);
   hM_bin23->SetBinContent(52,112);
   hM_bin23->SetBinContent(53,102);
   hM_bin23->SetBinContent(54,103);
   hM_bin23->SetBinContent(55,121);
   hM_bin23->SetBinContent(56,116);
   hM_bin23->SetBinContent(57,90);
   hM_bin23->SetBinContent(58,115);
   hM_bin23->SetBinContent(59,122);
   hM_bin23->SetBinContent(60,105);
   hM_bin23->SetBinContent(61,118);
   hM_bin23->SetBinContent(62,126);
   hM_bin23->SetBinContent(63,118);
   hM_bin23->SetBinContent(64,117);
   hM_bin23->SetBinContent(65,141);
   hM_bin23->SetBinContent(66,108);
   hM_bin23->SetBinContent(67,85);
   hM_bin23->SetBinContent(68,129);
   hM_bin23->SetBinContent(69,106);
   hM_bin23->SetBinContent(70,112);
   hM_bin23->SetBinContent(71,100);
   hM_bin23->SetBinContent(72,111);
   hM_bin23->SetBinContent(73,111);
   hM_bin23->SetBinContent(74,111);
   hM_bin23->SetBinContent(75,124);
   hM_bin23->SetBinContent(76,113);
   hM_bin23->SetBinContent(77,103);
   hM_bin23->SetBinContent(78,102);
   hM_bin23->SetBinContent(79,121);
   hM_bin23->SetBinContent(80,109);
   hM_bin23->SetBinContent(81,94);
   hM_bin23->SetBinContent(82,106);
   hM_bin23->SetBinContent(83,91);
   hM_bin23->SetBinContent(84,117);
   hM_bin23->SetBinContent(85,104);
   hM_bin23->SetBinContent(86,117);
   hM_bin23->SetBinContent(87,97);
   hM_bin23->SetBinContent(88,99);
   hM_bin23->SetBinContent(89,101);
   hM_bin23->SetBinContent(90,105);
   hM_bin23->SetBinContent(91,103);
   hM_bin23->SetBinContent(92,95);
   hM_bin23->SetBinContent(93,106);
   hM_bin23->SetBinContent(94,115);
   hM_bin23->SetBinContent(95,125);
   hM_bin23->SetBinContent(96,90);
   hM_bin23->SetBinContent(97,99);
   hM_bin23->SetBinContent(98,121);
   hM_bin23->SetBinContent(99,126);
   hM_bin23->SetBinContent(100,101);
   hM_bin23->SetBinContent(101,8065);
   hM_bin23->SetEntries(19322);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.3636,0.7945502);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(72.67857);
   fsig->SetNDF(71);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-78.69763);
   fsig->SetParError(0,1.144526);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,437.5137);
   fsig->SetParError(1,1.219589);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-262.242);
   fsig->SetParError(2,5.427724);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,24.77455);
   fsig->SetParError(3,3.102505);
   fsig->SetParLimits(3,0,282);
   fsig->SetParameter(4,0.5861715);
   fsig->SetParError(4,0.008975174);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.07182502);
   fsig->SetParError(5,0.01701453);
   fsig->SetParLimits(5,0.04788336,0.07182504);
   hM_bin23->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin23");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 19322  ");
   text = ptstats->AddText("Mean  = 0.5906");
   text = ptstats->AddText("RMS   = 0.1426");
   text = ptstats->AddText("#chi^{2} / ndf = 72.68 / 71");
   text = ptstats->AddText("p0       = -78.7 #pm 1.1 ");
   text = ptstats->AddText("p1       = 437.5 #pm 1.2 ");
   text = ptstats->AddText("p2       = -262.2 #pm 5.4 ");
   text = ptstats->AddText("p3       = 24.77 #pm 3.10 ");
   text = ptstats->AddText("p4       = 0.5862 #pm 0.0090 ");
   text = ptstats->AddText("p5       = 0.07183 #pm 0.01701 ");
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
   fmb->SetParameter(0,-78.69763);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,437.5137);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-262.242);
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
   fpeak->SetParameter(0,24.77455);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.5861715);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.07182502);
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
