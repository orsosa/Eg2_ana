{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 18 12:13:15 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.1901558,-38.94624,0.8890623,350.5161);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin37 = new TH1F("hM_bin37","M_{#gamma #gamma}",100,0.2600464,0.8191716);
   hM_bin37->SetBinContent(0,11903);
   hM_bin37->SetBinContent(1,262);
   hM_bin37->SetBinContent(2,190);
   hM_bin37->SetBinContent(3,231);
   hM_bin37->SetBinContent(4,219);
   hM_bin37->SetBinContent(5,234);
   hM_bin37->SetBinContent(6,270);
   hM_bin37->SetBinContent(7,223);
   hM_bin37->SetBinContent(8,238);
   hM_bin37->SetBinContent(9,219);
   hM_bin37->SetBinContent(10,239);
   hM_bin37->SetBinContent(11,247);
   hM_bin37->SetBinContent(12,244);
   hM_bin37->SetBinContent(13,247);
   hM_bin37->SetBinContent(14,236);
   hM_bin37->SetBinContent(15,255);
   hM_bin37->SetBinContent(16,243);
   hM_bin37->SetBinContent(17,239);
   hM_bin37->SetBinContent(18,265);
   hM_bin37->SetBinContent(19,263);
   hM_bin37->SetBinContent(20,270);
   hM_bin37->SetBinContent(21,267);
   hM_bin37->SetBinContent(22,266);
   hM_bin37->SetBinContent(23,257);
   hM_bin37->SetBinContent(24,252);
   hM_bin37->SetBinContent(25,280);
   hM_bin37->SetBinContent(26,252);
   hM_bin37->SetBinContent(27,246);
   hM_bin37->SetBinContent(28,218);
   hM_bin37->SetBinContent(29,271);
   hM_bin37->SetBinContent(30,243);
   hM_bin37->SetBinContent(31,250);
   hM_bin37->SetBinContent(32,227);
   hM_bin37->SetBinContent(33,254);
   hM_bin37->SetBinContent(34,251);
   hM_bin37->SetBinContent(35,239);
   hM_bin37->SetBinContent(36,247);
   hM_bin37->SetBinContent(37,237);
   hM_bin37->SetBinContent(38,251);
   hM_bin37->SetBinContent(39,237);
   hM_bin37->SetBinContent(40,259);
   hM_bin37->SetBinContent(41,211);
   hM_bin37->SetBinContent(42,226);
   hM_bin37->SetBinContent(43,237);
   hM_bin37->SetBinContent(44,231);
   hM_bin37->SetBinContent(45,213);
   hM_bin37->SetBinContent(46,228);
   hM_bin37->SetBinContent(47,198);
   hM_bin37->SetBinContent(48,235);
   hM_bin37->SetBinContent(49,232);
   hM_bin37->SetBinContent(50,204);
   hM_bin37->SetBinContent(51,226);
   hM_bin37->SetBinContent(52,236);
   hM_bin37->SetBinContent(53,180);
   hM_bin37->SetBinContent(54,188);
   hM_bin37->SetBinContent(55,188);
   hM_bin37->SetBinContent(56,187);
   hM_bin37->SetBinContent(57,157);
   hM_bin37->SetBinContent(58,183);
   hM_bin37->SetBinContent(59,142);
   hM_bin37->SetBinContent(60,164);
   hM_bin37->SetBinContent(61,154);
   hM_bin37->SetBinContent(62,154);
   hM_bin37->SetBinContent(63,129);
   hM_bin37->SetBinContent(64,132);
   hM_bin37->SetBinContent(65,113);
   hM_bin37->SetBinContent(66,151);
   hM_bin37->SetBinContent(67,110);
   hM_bin37->SetBinContent(68,123);
   hM_bin37->SetBinContent(69,108);
   hM_bin37->SetBinContent(70,98);
   hM_bin37->SetBinContent(71,95);
   hM_bin37->SetBinContent(72,101);
   hM_bin37->SetBinContent(73,89);
   hM_bin37->SetBinContent(74,110);
   hM_bin37->SetBinContent(75,93);
   hM_bin37->SetBinContent(76,66);
   hM_bin37->SetBinContent(77,78);
   hM_bin37->SetBinContent(78,67);
   hM_bin37->SetBinContent(79,80);
   hM_bin37->SetBinContent(80,62);
   hM_bin37->SetBinContent(81,56);
   hM_bin37->SetBinContent(82,65);
   hM_bin37->SetBinContent(83,63);
   hM_bin37->SetBinContent(84,42);
   hM_bin37->SetBinContent(85,48);
   hM_bin37->SetBinContent(86,54);
   hM_bin37->SetBinContent(87,41);
   hM_bin37->SetBinContent(88,34);
   hM_bin37->SetBinContent(89,44);
   hM_bin37->SetBinContent(90,31);
   hM_bin37->SetBinContent(91,34);
   hM_bin37->SetBinContent(92,39);
   hM_bin37->SetBinContent(93,36);
   hM_bin37->SetBinContent(94,34);
   hM_bin37->SetBinContent(95,19);
   hM_bin37->SetBinContent(96,25);
   hM_bin37->SetBinContent(97,18);
   hM_bin37->SetBinContent(98,20);
   hM_bin37->SetBinContent(99,23);
   hM_bin37->SetBinContent(100,28);
   hM_bin37->SetBinContent(101,561);
   hM_bin37->SetEntries(29235);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.3372864,0.705766);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(67.67084);
   fsig->SetNDF(60);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,367.4619);
   fsig->SetParError(0,116.8147);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,-204.4952);
   fsig->SetParError(1,482.9338);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-323.3999);
   fsig->SetParError(2,451.5148);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,48.12453);
   fsig->SetParError(3,13.9216);
   fsig->SetParLimits(3,0,560);
   fsig->SetParameter(4,0.5076289);
   fsig->SetParError(4,0.0103681);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.07182503);
   fsig->SetParError(5,0.01197457);
   fsig->SetParLimits(5,0.04788336,0.07182504);
   hM_bin37->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin37");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 29235  ");
   text = ptstats->AddText("Mean  = 0.4638");
   text = ptstats->AddText("RMS   = 0.1293");
   text = ptstats->AddText("#chi^{2} / ndf = 67.67 / 60");
   text = ptstats->AddText("p0       = 367.5 #pm 116.8 ");
   text = ptstats->AddText("p1       = -204.5 #pm 482.9 ");
   text = ptstats->AddText("p2       = -323.4 #pm 451.5 ");
   text = ptstats->AddText("p3       = 48.12 #pm 13.92 ");
   text = ptstats->AddText("p4       = 0.5076 #pm 0.0104 ");
   text = ptstats->AddText("p5       = 0.07183 #pm 0.01197 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin37->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin37);

   ci = TColor::GetColor("#0000ff");
   hM_bin37->SetMarkerColor(ci);
   hM_bin37->SetMarkerStyle(24);
   hM_bin37->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin37->GetXaxis()->SetLabelFont(42);
   hM_bin37->GetXaxis()->SetLabelSize(0.035);
   hM_bin37->GetXaxis()->SetTitleSize(0.035);
   hM_bin37->GetXaxis()->SetTitleFont(42);
   hM_bin37->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin37->GetYaxis()->SetLabelFont(42);
   hM_bin37->GetYaxis()->SetLabelSize(0.035);
   hM_bin37->GetYaxis()->SetTitleSize(0.035);
   hM_bin37->GetYaxis()->SetTitleFont(42);
   hM_bin37->GetZaxis()->SetLabelFont(42);
   hM_bin37->GetZaxis()->SetLabelSize(0.035);
   hM_bin37->GetZaxis()->SetTitleSize(0.035);
   hM_bin37->GetZaxis()->SetTitleFont(42);
   hM_bin37->Draw("e");
   
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
   fmb->SetParameter(0,367.4619);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,-204.4952);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-323.3999);
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
   fpeak->SetParameter(0,48.12453);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.5076289);
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
