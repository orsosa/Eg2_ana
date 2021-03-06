{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 18 12:09:40 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.1901558,50.98755,0.8890623,260.6898);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin26 = new TH1F("hM_bin26","M_{#gamma #gamma}",100,0.2600464,0.8191716);
   hM_bin26->SetBinContent(0,5440);
   hM_bin26->SetBinContent(1,112);
   hM_bin26->SetBinContent(2,89);
   hM_bin26->SetBinContent(3,91);
   hM_bin26->SetBinContent(4,97);
   hM_bin26->SetBinContent(5,93);
   hM_bin26->SetBinContent(6,101);
   hM_bin26->SetBinContent(7,95);
   hM_bin26->SetBinContent(8,105);
   hM_bin26->SetBinContent(9,101);
   hM_bin26->SetBinContent(10,105);
   hM_bin26->SetBinContent(11,110);
   hM_bin26->SetBinContent(12,120);
   hM_bin26->SetBinContent(13,120);
   hM_bin26->SetBinContent(14,146);
   hM_bin26->SetBinContent(15,131);
   hM_bin26->SetBinContent(16,123);
   hM_bin26->SetBinContent(17,124);
   hM_bin26->SetBinContent(18,116);
   hM_bin26->SetBinContent(19,146);
   hM_bin26->SetBinContent(20,138);
   hM_bin26->SetBinContent(21,156);
   hM_bin26->SetBinContent(22,123);
   hM_bin26->SetBinContent(23,150);
   hM_bin26->SetBinContent(24,161);
   hM_bin26->SetBinContent(25,150);
   hM_bin26->SetBinContent(26,139);
   hM_bin26->SetBinContent(27,162);
   hM_bin26->SetBinContent(28,169);
   hM_bin26->SetBinContent(29,173);
   hM_bin26->SetBinContent(30,152);
   hM_bin26->SetBinContent(31,158);
   hM_bin26->SetBinContent(32,152);
   hM_bin26->SetBinContent(33,150);
   hM_bin26->SetBinContent(34,174);
   hM_bin26->SetBinContent(35,174);
   hM_bin26->SetBinContent(36,151);
   hM_bin26->SetBinContent(37,145);
   hM_bin26->SetBinContent(38,175);
   hM_bin26->SetBinContent(39,186);
   hM_bin26->SetBinContent(40,176);
   hM_bin26->SetBinContent(41,202);
   hM_bin26->SetBinContent(42,167);
   hM_bin26->SetBinContent(43,174);
   hM_bin26->SetBinContent(44,184);
   hM_bin26->SetBinContent(45,174);
   hM_bin26->SetBinContent(46,204);
   hM_bin26->SetBinContent(47,203);
   hM_bin26->SetBinContent(48,167);
   hM_bin26->SetBinContent(49,207);
   hM_bin26->SetBinContent(50,193);
   hM_bin26->SetBinContent(51,185);
   hM_bin26->SetBinContent(52,198);
   hM_bin26->SetBinContent(53,217);
   hM_bin26->SetBinContent(54,196);
   hM_bin26->SetBinContent(55,200);
   hM_bin26->SetBinContent(56,205);
   hM_bin26->SetBinContent(57,191);
   hM_bin26->SetBinContent(58,178);
   hM_bin26->SetBinContent(59,199);
   hM_bin26->SetBinContent(60,196);
   hM_bin26->SetBinContent(61,209);
   hM_bin26->SetBinContent(62,202);
   hM_bin26->SetBinContent(63,178);
   hM_bin26->SetBinContent(64,193);
   hM_bin26->SetBinContent(65,188);
   hM_bin26->SetBinContent(66,186);
   hM_bin26->SetBinContent(67,211);
   hM_bin26->SetBinContent(68,188);
   hM_bin26->SetBinContent(69,185);
   hM_bin26->SetBinContent(70,153);
   hM_bin26->SetBinContent(71,198);
   hM_bin26->SetBinContent(72,180);
   hM_bin26->SetBinContent(73,164);
   hM_bin26->SetBinContent(74,186);
   hM_bin26->SetBinContent(75,181);
   hM_bin26->SetBinContent(76,177);
   hM_bin26->SetBinContent(77,169);
   hM_bin26->SetBinContent(78,161);
   hM_bin26->SetBinContent(79,159);
   hM_bin26->SetBinContent(80,149);
   hM_bin26->SetBinContent(81,192);
   hM_bin26->SetBinContent(82,185);
   hM_bin26->SetBinContent(83,153);
   hM_bin26->SetBinContent(84,151);
   hM_bin26->SetBinContent(85,158);
   hM_bin26->SetBinContent(86,133);
   hM_bin26->SetBinContent(87,158);
   hM_bin26->SetBinContent(88,153);
   hM_bin26->SetBinContent(89,160);
   hM_bin26->SetBinContent(90,148);
   hM_bin26->SetBinContent(91,139);
   hM_bin26->SetBinContent(92,120);
   hM_bin26->SetBinContent(93,164);
   hM_bin26->SetBinContent(94,123);
   hM_bin26->SetBinContent(95,148);
   hM_bin26->SetBinContent(96,117);
   hM_bin26->SetBinContent(97,126);
   hM_bin26->SetBinContent(98,128);
   hM_bin26->SetBinContent(99,106);
   hM_bin26->SetBinContent(100,135);
   hM_bin26->SetBinContent(101,4189);
   hM_bin26->SetEntries(25422);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.3442326,0.7751827);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(73.83279);
   fsig->SetNDF(71);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-195.9756);
   fsig->SetParError(0,44.88277);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,1323.747);
   fsig->SetParError(1,172.5695);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1154.569);
   fsig->SetParError(2,153.5878);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,14.94703);
   fsig->SetParError(3,6.638991);
   fsig->SetParLimits(3,0,434);
   fsig->SetParameter(4,0.5739741);
   fsig->SetParError(4,0.01714544);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.04788337);
   fsig->SetParError(5,0.01288827);
   fsig->SetParLimits(5,0.04788336,0.07182504);
   hM_bin26->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin26");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 25422  ");
   text = ptstats->AddText("Mean  = 0.5516");
   text = ptstats->AddText("RMS   = 0.1479");
   text = ptstats->AddText("#chi^{2} / ndf = 73.83 / 71");
   text = ptstats->AddText("p0       =  -196 #pm 44.9 ");
   text = ptstats->AddText("p1       =  1324 #pm 172.6 ");
   text = ptstats->AddText("p2       = -1155 #pm 153.6 ");
   text = ptstats->AddText("p3       = 14.95 #pm 6.64 ");
   text = ptstats->AddText("p4       = 0.574 #pm 0.017 ");
   text = ptstats->AddText("p5       = 0.04788 #pm 0.01289 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin26->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin26);

   ci = TColor::GetColor("#0000ff");
   hM_bin26->SetMarkerColor(ci);
   hM_bin26->SetMarkerStyle(24);
   hM_bin26->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin26->GetXaxis()->SetLabelFont(42);
   hM_bin26->GetXaxis()->SetLabelSize(0.035);
   hM_bin26->GetXaxis()->SetTitleSize(0.035);
   hM_bin26->GetXaxis()->SetTitleFont(42);
   hM_bin26->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin26->GetYaxis()->SetLabelFont(42);
   hM_bin26->GetYaxis()->SetLabelSize(0.035);
   hM_bin26->GetYaxis()->SetTitleSize(0.035);
   hM_bin26->GetYaxis()->SetTitleFont(42);
   hM_bin26->GetZaxis()->SetLabelFont(42);
   hM_bin26->GetZaxis()->SetLabelSize(0.035);
   hM_bin26->GetZaxis()->SetTitleSize(0.035);
   hM_bin26->GetZaxis()->SetTitleFont(42);
   hM_bin26->Draw("e");
   
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
   fmb->SetParameter(0,-195.9756);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1323.747);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1154.569);
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
   fpeak->SetParameter(0,14.94703);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.5739741);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.04788337);
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
