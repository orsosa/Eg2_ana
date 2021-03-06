{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 18 12:11:53 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.1901558,-21.15836,0.8890623,190.4252);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin11 = new TH1F("hM_bin11","M_{#gamma #gamma}",100,0.2600464,0.8191716);
   hM_bin11->SetBinContent(0,2248);
   hM_bin11->SetBinContent(1,14);
   hM_bin11->SetBinContent(2,10);
   hM_bin11->SetBinContent(3,18);
   hM_bin11->SetBinContent(4,16);
   hM_bin11->SetBinContent(5,15);
   hM_bin11->SetBinContent(6,10);
   hM_bin11->SetBinContent(7,15);
   hM_bin11->SetBinContent(8,14);
   hM_bin11->SetBinContent(9,17);
   hM_bin11->SetBinContent(10,24);
   hM_bin11->SetBinContent(11,15);
   hM_bin11->SetBinContent(12,17);
   hM_bin11->SetBinContent(13,14);
   hM_bin11->SetBinContent(14,24);
   hM_bin11->SetBinContent(15,30);
   hM_bin11->SetBinContent(16,27);
   hM_bin11->SetBinContent(17,32);
   hM_bin11->SetBinContent(18,27);
   hM_bin11->SetBinContent(19,40);
   hM_bin11->SetBinContent(20,29);
   hM_bin11->SetBinContent(21,31);
   hM_bin11->SetBinContent(22,37);
   hM_bin11->SetBinContent(23,45);
   hM_bin11->SetBinContent(24,40);
   hM_bin11->SetBinContent(25,31);
   hM_bin11->SetBinContent(26,30);
   hM_bin11->SetBinContent(27,52);
   hM_bin11->SetBinContent(28,44);
   hM_bin11->SetBinContent(29,44);
   hM_bin11->SetBinContent(30,49);
   hM_bin11->SetBinContent(31,56);
   hM_bin11->SetBinContent(32,57);
   hM_bin11->SetBinContent(33,45);
   hM_bin11->SetBinContent(34,47);
   hM_bin11->SetBinContent(35,52);
   hM_bin11->SetBinContent(36,39);
   hM_bin11->SetBinContent(37,53);
   hM_bin11->SetBinContent(38,68);
   hM_bin11->SetBinContent(39,45);
   hM_bin11->SetBinContent(40,54);
   hM_bin11->SetBinContent(41,79);
   hM_bin11->SetBinContent(42,62);
   hM_bin11->SetBinContent(43,82);
   hM_bin11->SetBinContent(44,93);
   hM_bin11->SetBinContent(45,72);
   hM_bin11->SetBinContent(46,70);
   hM_bin11->SetBinContent(47,70);
   hM_bin11->SetBinContent(48,78);
   hM_bin11->SetBinContent(49,81);
   hM_bin11->SetBinContent(50,83);
   hM_bin11->SetBinContent(51,92);
   hM_bin11->SetBinContent(52,89);
   hM_bin11->SetBinContent(53,90);
   hM_bin11->SetBinContent(54,87);
   hM_bin11->SetBinContent(55,103);
   hM_bin11->SetBinContent(56,99);
   hM_bin11->SetBinContent(57,90);
   hM_bin11->SetBinContent(58,92);
   hM_bin11->SetBinContent(59,104);
   hM_bin11->SetBinContent(60,104);
   hM_bin11->SetBinContent(61,104);
   hM_bin11->SetBinContent(62,95);
   hM_bin11->SetBinContent(63,88);
   hM_bin11->SetBinContent(64,102);
   hM_bin11->SetBinContent(65,99);
   hM_bin11->SetBinContent(66,90);
   hM_bin11->SetBinContent(67,93);
   hM_bin11->SetBinContent(68,87);
   hM_bin11->SetBinContent(69,118);
   hM_bin11->SetBinContent(70,108);
   hM_bin11->SetBinContent(71,103);
   hM_bin11->SetBinContent(72,106);
   hM_bin11->SetBinContent(73,98);
   hM_bin11->SetBinContent(74,111);
   hM_bin11->SetBinContent(75,96);
   hM_bin11->SetBinContent(76,114);
   hM_bin11->SetBinContent(77,109);
   hM_bin11->SetBinContent(78,102);
   hM_bin11->SetBinContent(79,111);
   hM_bin11->SetBinContent(80,120);
   hM_bin11->SetBinContent(81,118);
   hM_bin11->SetBinContent(82,97);
   hM_bin11->SetBinContent(83,100);
   hM_bin11->SetBinContent(84,127);
   hM_bin11->SetBinContent(85,116);
   hM_bin11->SetBinContent(86,125);
   hM_bin11->SetBinContent(87,125);
   hM_bin11->SetBinContent(88,119);
   hM_bin11->SetBinContent(89,149);
   hM_bin11->SetBinContent(90,129);
   hM_bin11->SetBinContent(91,120);
   hM_bin11->SetBinContent(92,113);
   hM_bin11->SetBinContent(93,109);
   hM_bin11->SetBinContent(94,127);
   hM_bin11->SetBinContent(95,111);
   hM_bin11->SetBinContent(96,128);
   hM_bin11->SetBinContent(97,114);
   hM_bin11->SetBinContent(98,142);
   hM_bin11->SetBinContent(99,129);
   hM_bin11->SetBinContent(100,129);
   hM_bin11->SetBinContent(101,18082);
   hM_bin11->SetEntries(27858);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.4214858,0.708786);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(44.42964);
   fsig->SetNDF(45);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-58.72346);
   fsig->SetParError(0,10.23746);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,241.1341);
   fsig->SetParError(1,18.76503);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-3.778629e-06);
   fsig->SetParError(2,176.2346);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,16.07305);
   fsig->SetParError(3,3.716033);
   fsig->SetParLimits(3,0,298);
   fsig->SetParameter(4,0.5611644);
   fsig->SetParError(4,0.01161135);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.04788336);
   fsig->SetParError(5,0.01668548);
   fsig->SetParLimits(5,0.04788336,0.07182504);
   hM_bin11->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin11");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 27858  ");
   text = ptstats->AddText("Mean  = 0.6192");
   text = ptstats->AddText("RMS   = 0.1356");
   text = ptstats->AddText("#chi^{2} / ndf = 44.43 / 45");
   text = ptstats->AddText("p0       = -58.72 #pm 10.24 ");
   text = ptstats->AddText("p1       = 241.1 #pm 18.8 ");
   text = ptstats->AddText("p2       = -3.779e-06 #pm 1.762e+02 ");
   text = ptstats->AddText("p3       = 16.07 #pm 3.72 ");
   text = ptstats->AddText("p4       = 0.5612 #pm 0.0116 ");
   text = ptstats->AddText("p5       = 0.04788 #pm 0.01669 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin11->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin11);

   ci = TColor::GetColor("#0000ff");
   hM_bin11->SetMarkerColor(ci);
   hM_bin11->SetMarkerStyle(24);
   hM_bin11->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin11->GetXaxis()->SetLabelFont(42);
   hM_bin11->GetXaxis()->SetLabelSize(0.035);
   hM_bin11->GetXaxis()->SetTitleSize(0.035);
   hM_bin11->GetXaxis()->SetTitleFont(42);
   hM_bin11->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin11->GetYaxis()->SetLabelFont(42);
   hM_bin11->GetYaxis()->SetLabelSize(0.035);
   hM_bin11->GetYaxis()->SetTitleSize(0.035);
   hM_bin11->GetYaxis()->SetTitleFont(42);
   hM_bin11->GetZaxis()->SetLabelFont(42);
   hM_bin11->GetZaxis()->SetLabelSize(0.035);
   hM_bin11->GetZaxis()->SetTitleSize(0.035);
   hM_bin11->GetZaxis()->SetTitleFont(42);
   hM_bin11->Draw("e");
   
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
   fmb->SetParameter(0,-58.72346);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,241.1341);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-3.778629e-06);
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
   fpeak->SetParameter(0,16.07305);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.5611644);
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
