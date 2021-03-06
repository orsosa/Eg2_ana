{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue May  9 16:17:13 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-65.4728,0.350906,589.2551);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin5 = new TH1F("hM_bin5","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin5->SetBinContent(15,9);
   hM_bin5->SetBinContent(16,28);
   hM_bin5->SetBinContent(17,31);
   hM_bin5->SetBinContent(18,34);
   hM_bin5->SetBinContent(19,60);
   hM_bin5->SetBinContent(20,67);
   hM_bin5->SetBinContent(21,67);
   hM_bin5->SetBinContent(22,74);
   hM_bin5->SetBinContent(23,70);
   hM_bin5->SetBinContent(24,68);
   hM_bin5->SetBinContent(25,66);
   hM_bin5->SetBinContent(26,65);
   hM_bin5->SetBinContent(27,79);
   hM_bin5->SetBinContent(28,63);
   hM_bin5->SetBinContent(29,107);
   hM_bin5->SetBinContent(30,98);
   hM_bin5->SetBinContent(31,85);
   hM_bin5->SetBinContent(32,71);
   hM_bin5->SetBinContent(33,85);
   hM_bin5->SetBinContent(34,85);
   hM_bin5->SetBinContent(35,91);
   hM_bin5->SetBinContent(36,92);
   hM_bin5->SetBinContent(37,91);
   hM_bin5->SetBinContent(38,87);
   hM_bin5->SetBinContent(39,129);
   hM_bin5->SetBinContent(40,123);
   hM_bin5->SetBinContent(41,180);
   hM_bin5->SetBinContent(42,149);
   hM_bin5->SetBinContent(43,193);
   hM_bin5->SetBinContent(44,218);
   hM_bin5->SetBinContent(45,285);
   hM_bin5->SetBinContent(46,261);
   hM_bin5->SetBinContent(47,394);
   hM_bin5->SetBinContent(48,407);
   hM_bin5->SetBinContent(49,410);
   hM_bin5->SetBinContent(50,455);
   hM_bin5->SetBinContent(51,477);
   hM_bin5->SetBinContent(52,430);
   hM_bin5->SetBinContent(53,420);
   hM_bin5->SetBinContent(54,393);
   hM_bin5->SetBinContent(55,367);
   hM_bin5->SetBinContent(56,344);
   hM_bin5->SetBinContent(57,326);
   hM_bin5->SetBinContent(58,260);
   hM_bin5->SetBinContent(59,255);
   hM_bin5->SetBinContent(60,240);
   hM_bin5->SetBinContent(61,210);
   hM_bin5->SetBinContent(62,176);
   hM_bin5->SetBinContent(63,156);
   hM_bin5->SetBinContent(64,161);
   hM_bin5->SetBinContent(65,139);
   hM_bin5->SetBinContent(66,150);
   hM_bin5->SetBinContent(67,153);
   hM_bin5->SetBinContent(68,119);
   hM_bin5->SetBinContent(69,127);
   hM_bin5->SetBinContent(70,115);
   hM_bin5->SetBinContent(71,117);
   hM_bin5->SetBinContent(72,106);
   hM_bin5->SetBinContent(73,121);
   hM_bin5->SetBinContent(74,119);
   hM_bin5->SetBinContent(75,100);
   hM_bin5->SetBinContent(76,96);
   hM_bin5->SetBinContent(77,104);
   hM_bin5->SetBinContent(78,104);
   hM_bin5->SetBinContent(79,80);
   hM_bin5->SetBinContent(80,84);
   hM_bin5->SetBinContent(81,84);
   hM_bin5->SetBinContent(82,85);
   hM_bin5->SetBinContent(83,80);
   hM_bin5->SetBinContent(84,63);
   hM_bin5->SetBinContent(85,88);
   hM_bin5->SetBinContent(86,96);
   hM_bin5->SetBinContent(87,97);
   hM_bin5->SetBinContent(88,75);
   hM_bin5->SetBinContent(89,60);
   hM_bin5->SetBinContent(90,74);
   hM_bin5->SetBinContent(91,87);
   hM_bin5->SetBinContent(92,91);
   hM_bin5->SetBinContent(93,79);
   hM_bin5->SetBinContent(94,71);
   hM_bin5->SetBinContent(95,83);
   hM_bin5->SetBinContent(96,70);
   hM_bin5->SetBinContent(97,77);
   hM_bin5->SetBinContent(98,83);
   hM_bin5->SetBinContent(99,85);
   hM_bin5->SetBinContent(100,62);
   hM_bin5->SetBinContent(101,3620);
   hM_bin5->SetEntries(16136);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08087374,0.1968072);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(50.52725);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,38.64719);
   fsig->SetParError(0,9.885781);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,478.3293);
   fsig->SetParError(1,71.20793);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.001079966);
   fsig->SetParError(2,61.3415);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,336.8922);
   fsig->SetParError(3,8.003913);
   fsig->SetParLimits(3,0,954);
   fsig->SetParameter(4,0.1383344);
   fsig->SetParError(4,0.0005010992);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0003420065);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin5->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin5");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 16136  ");
   text = ptstats->AddText("Mean  = 0.1559");
   text = ptstats->AddText("RMS   = 0.06299");
   text = ptstats->AddText("#chi^{2} / ndf = 50.53 / 28");
   text = ptstats->AddText("p0       = 38.65 #pm 9.89 ");
   text = ptstats->AddText("p1       = 478.3 #pm 71.2 ");
   text = ptstats->AddText("p2       = -0.00108 #pm 61.34150 ");
   text = ptstats->AddText("p3       = 336.9 #pm 8.0 ");
   text = ptstats->AddText("p4       = 0.1383 #pm 0.0005 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00034 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin5->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin5);

   ci = TColor::GetColor("#0000ff");
   hM_bin5->SetMarkerColor(ci);
   hM_bin5->SetMarkerStyle(24);
   hM_bin5->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin5->GetXaxis()->SetLabelFont(42);
   hM_bin5->GetXaxis()->SetLabelSize(0.035);
   hM_bin5->GetXaxis()->SetTitleSize(0.035);
   hM_bin5->GetXaxis()->SetTitleFont(42);
   hM_bin5->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin5->GetYaxis()->SetLabelFont(42);
   hM_bin5->GetYaxis()->SetLabelSize(0.035);
   hM_bin5->GetYaxis()->SetTitleSize(0.035);
   hM_bin5->GetYaxis()->SetTitleFont(42);
   hM_bin5->GetZaxis()->SetLabelFont(42);
   hM_bin5->GetZaxis()->SetLabelSize(0.035);
   hM_bin5->GetZaxis()->SetTitleSize(0.035);
   hM_bin5->GetZaxis()->SetTitleFont(42);
   hM_bin5->Draw("e");
   
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
   fmb->SetParameter(0,38.64719);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,478.3293);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.001079966);
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
   fpeak->SetParameter(0,336.8922);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1383344);
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
