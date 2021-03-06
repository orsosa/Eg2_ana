{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 18 12:11:25 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.1901558,3.057805,0.8890623,391.5355);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin2 = new TH1F("hM_bin2","M_{#gamma #gamma}",100,0.2600464,0.8191716);
   hM_bin2->SetBinContent(0,10823);
   hM_bin2->SetBinContent(1,166);
   hM_bin2->SetBinContent(2,191);
   hM_bin2->SetBinContent(3,198);
   hM_bin2->SetBinContent(4,200);
   hM_bin2->SetBinContent(5,226);
   hM_bin2->SetBinContent(6,209);
   hM_bin2->SetBinContent(7,233);
   hM_bin2->SetBinContent(8,243);
   hM_bin2->SetBinContent(9,225);
   hM_bin2->SetBinContent(10,226);
   hM_bin2->SetBinContent(11,218);
   hM_bin2->SetBinContent(12,237);
   hM_bin2->SetBinContent(13,228);
   hM_bin2->SetBinContent(14,252);
   hM_bin2->SetBinContent(15,245);
   hM_bin2->SetBinContent(16,252);
   hM_bin2->SetBinContent(17,259);
   hM_bin2->SetBinContent(18,250);
   hM_bin2->SetBinContent(19,276);
   hM_bin2->SetBinContent(20,258);
   hM_bin2->SetBinContent(21,306);
   hM_bin2->SetBinContent(22,274);
   hM_bin2->SetBinContent(23,238);
   hM_bin2->SetBinContent(24,279);
   hM_bin2->SetBinContent(25,260);
   hM_bin2->SetBinContent(26,260);
   hM_bin2->SetBinContent(27,280);
   hM_bin2->SetBinContent(28,295);
   hM_bin2->SetBinContent(29,299);
   hM_bin2->SetBinContent(30,290);
   hM_bin2->SetBinContent(31,294);
   hM_bin2->SetBinContent(32,274);
   hM_bin2->SetBinContent(33,276);
   hM_bin2->SetBinContent(34,264);
   hM_bin2->SetBinContent(35,304);
   hM_bin2->SetBinContent(36,297);
   hM_bin2->SetBinContent(37,283);
   hM_bin2->SetBinContent(38,274);
   hM_bin2->SetBinContent(39,286);
   hM_bin2->SetBinContent(40,284);
   hM_bin2->SetBinContent(41,307);
   hM_bin2->SetBinContent(42,301);
   hM_bin2->SetBinContent(43,268);
   hM_bin2->SetBinContent(44,262);
   hM_bin2->SetBinContent(45,306);
   hM_bin2->SetBinContent(46,320);
   hM_bin2->SetBinContent(47,305);
   hM_bin2->SetBinContent(48,288);
   hM_bin2->SetBinContent(49,294);
   hM_bin2->SetBinContent(50,276);
   hM_bin2->SetBinContent(51,282);
   hM_bin2->SetBinContent(52,290);
   hM_bin2->SetBinContent(53,313);
   hM_bin2->SetBinContent(54,291);
   hM_bin2->SetBinContent(55,282);
   hM_bin2->SetBinContent(56,264);
   hM_bin2->SetBinContent(57,242);
   hM_bin2->SetBinContent(58,254);
   hM_bin2->SetBinContent(59,257);
   hM_bin2->SetBinContent(60,285);
   hM_bin2->SetBinContent(61,234);
   hM_bin2->SetBinContent(62,239);
   hM_bin2->SetBinContent(63,246);
   hM_bin2->SetBinContent(64,237);
   hM_bin2->SetBinContent(65,252);
   hM_bin2->SetBinContent(66,207);
   hM_bin2->SetBinContent(67,201);
   hM_bin2->SetBinContent(68,198);
   hM_bin2->SetBinContent(69,210);
   hM_bin2->SetBinContent(70,200);
   hM_bin2->SetBinContent(71,189);
   hM_bin2->SetBinContent(72,202);
   hM_bin2->SetBinContent(73,209);
   hM_bin2->SetBinContent(74,184);
   hM_bin2->SetBinContent(75,154);
   hM_bin2->SetBinContent(76,167);
   hM_bin2->SetBinContent(77,153);
   hM_bin2->SetBinContent(78,166);
   hM_bin2->SetBinContent(79,141);
   hM_bin2->SetBinContent(80,145);
   hM_bin2->SetBinContent(81,156);
   hM_bin2->SetBinContent(82,137);
   hM_bin2->SetBinContent(83,148);
   hM_bin2->SetBinContent(84,135);
   hM_bin2->SetBinContent(85,137);
   hM_bin2->SetBinContent(86,120);
   hM_bin2->SetBinContent(87,122);
   hM_bin2->SetBinContent(88,109);
   hM_bin2->SetBinContent(89,107);
   hM_bin2->SetBinContent(90,92);
   hM_bin2->SetBinContent(91,100);
   hM_bin2->SetBinContent(92,103);
   hM_bin2->SetBinContent(93,99);
   hM_bin2->SetBinContent(94,98);
   hM_bin2->SetBinContent(95,79);
   hM_bin2->SetBinContent(96,89);
   hM_bin2->SetBinContent(97,86);
   hM_bin2->SetBinContent(98,87);
   hM_bin2->SetBinContent(99,93);
   hM_bin2->SetBinContent(100,64);
   hM_bin2->SetBinContent(101,1661);
   hM_bin2->SetEntries(34475);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.3271995,0.758149);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(66.18208);
   fsig->SetNDF(71);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,12.97523);
   fsig->SetParError(0,68.83295);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,1177.021);
   fsig->SetParError(1,278.7345);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1396.4);
   fsig->SetParError(2,254.318);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,46.71042);
   fsig->SetParError(3,10.39332);
   fsig->SetParLimits(3,0,640);
   fsig->SetParameter(4,0.5294128);
   fsig->SetParError(4,0.009312672);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.07182503);
   fsig->SetParError(5,0.02390088);
   fsig->SetParLimits(5,0.04788336,0.07182504);
   hM_bin2->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin2");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 34475  ");
   text = ptstats->AddText("Mean  = 0.5053");
   text = ptstats->AddText("RMS   = 0.1408");
   text = ptstats->AddText("#chi^{2} / ndf = 66.18 / 71");
   text = ptstats->AddText("p0       = 12.98 #pm 68.83 ");
   text = ptstats->AddText("p1       =  1177 #pm 278.7 ");
   text = ptstats->AddText("p2       = -1396 #pm 254.3 ");
   text = ptstats->AddText("p3       = 46.71 #pm 10.39 ");
   text = ptstats->AddText("p4       = 0.5294 #pm 0.0093 ");
   text = ptstats->AddText("p5       = 0.07183 #pm 0.02390 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin2);

   ci = TColor::GetColor("#0000ff");
   hM_bin2->SetMarkerColor(ci);
   hM_bin2->SetMarkerStyle(24);
   hM_bin2->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin2->GetXaxis()->SetLabelFont(42);
   hM_bin2->GetXaxis()->SetLabelSize(0.035);
   hM_bin2->GetXaxis()->SetTitleSize(0.035);
   hM_bin2->GetXaxis()->SetTitleFont(42);
   hM_bin2->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin2->GetYaxis()->SetLabelFont(42);
   hM_bin2->GetYaxis()->SetLabelSize(0.035);
   hM_bin2->GetYaxis()->SetTitleSize(0.035);
   hM_bin2->GetYaxis()->SetTitleFont(42);
   hM_bin2->GetZaxis()->SetLabelFont(42);
   hM_bin2->GetZaxis()->SetLabelSize(0.035);
   hM_bin2->GetZaxis()->SetTitleSize(0.035);
   hM_bin2->GetZaxis()->SetTitleFont(42);
   hM_bin2->Draw("e");
   
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
   fmb->SetParameter(0,12.97523);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1177.021);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1396.4);
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
   fpeak->SetParameter(0,46.71042);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.5294128);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.07182503);
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
