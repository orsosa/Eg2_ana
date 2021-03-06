{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:29:03 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-128.4661,0.350906,1156.195);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin9 = new TH1F("hM_bin9","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin9->SetBinContent(14,14);
   hM_bin9->SetBinContent(15,20);
   hM_bin9->SetBinContent(16,46);
   hM_bin9->SetBinContent(17,67);
   hM_bin9->SetBinContent(18,81);
   hM_bin9->SetBinContent(19,116);
   hM_bin9->SetBinContent(20,79);
   hM_bin9->SetBinContent(21,95);
   hM_bin9->SetBinContent(22,134);
   hM_bin9->SetBinContent(23,112);
   hM_bin9->SetBinContent(24,104);
   hM_bin9->SetBinContent(25,118);
   hM_bin9->SetBinContent(26,141);
   hM_bin9->SetBinContent(27,150);
   hM_bin9->SetBinContent(28,161);
   hM_bin9->SetBinContent(29,127);
   hM_bin9->SetBinContent(30,161);
   hM_bin9->SetBinContent(31,144);
   hM_bin9->SetBinContent(32,168);
   hM_bin9->SetBinContent(33,160);
   hM_bin9->SetBinContent(34,183);
   hM_bin9->SetBinContent(35,158);
   hM_bin9->SetBinContent(36,162);
   hM_bin9->SetBinContent(37,213);
   hM_bin9->SetBinContent(38,199);
   hM_bin9->SetBinContent(39,210);
   hM_bin9->SetBinContent(40,259);
   hM_bin9->SetBinContent(41,307);
   hM_bin9->SetBinContent(42,344);
   hM_bin9->SetBinContent(43,349);
   hM_bin9->SetBinContent(44,445);
   hM_bin9->SetBinContent(45,482);
   hM_bin9->SetBinContent(46,667);
   hM_bin9->SetBinContent(47,651);
   hM_bin9->SetBinContent(48,854);
   hM_bin9->SetBinContent(49,855);
   hM_bin9->SetBinContent(50,930);
   hM_bin9->SetBinContent(51,928);
   hM_bin9->SetBinContent(52,948);
   hM_bin9->SetBinContent(53,878);
   hM_bin9->SetBinContent(54,868);
   hM_bin9->SetBinContent(55,703);
   hM_bin9->SetBinContent(56,682);
   hM_bin9->SetBinContent(57,590);
   hM_bin9->SetBinContent(58,496);
   hM_bin9->SetBinContent(59,433);
   hM_bin9->SetBinContent(60,379);
   hM_bin9->SetBinContent(61,388);
   hM_bin9->SetBinContent(62,328);
   hM_bin9->SetBinContent(63,256);
   hM_bin9->SetBinContent(64,252);
   hM_bin9->SetBinContent(65,231);
   hM_bin9->SetBinContent(66,219);
   hM_bin9->SetBinContent(67,210);
   hM_bin9->SetBinContent(68,180);
   hM_bin9->SetBinContent(69,202);
   hM_bin9->SetBinContent(70,191);
   hM_bin9->SetBinContent(71,169);
   hM_bin9->SetBinContent(72,171);
   hM_bin9->SetBinContent(73,160);
   hM_bin9->SetBinContent(74,147);
   hM_bin9->SetBinContent(75,178);
   hM_bin9->SetBinContent(76,157);
   hM_bin9->SetBinContent(77,158);
   hM_bin9->SetBinContent(78,144);
   hM_bin9->SetBinContent(79,148);
   hM_bin9->SetBinContent(80,143);
   hM_bin9->SetBinContent(81,169);
   hM_bin9->SetBinContent(82,154);
   hM_bin9->SetBinContent(83,136);
   hM_bin9->SetBinContent(84,130);
   hM_bin9->SetBinContent(85,157);
   hM_bin9->SetBinContent(86,128);
   hM_bin9->SetBinContent(87,118);
   hM_bin9->SetBinContent(88,133);
   hM_bin9->SetBinContent(89,147);
   hM_bin9->SetBinContent(90,139);
   hM_bin9->SetBinContent(91,101);
   hM_bin9->SetBinContent(92,122);
   hM_bin9->SetBinContent(93,124);
   hM_bin9->SetBinContent(94,127);
   hM_bin9->SetBinContent(95,137);
   hM_bin9->SetBinContent(96,123);
   hM_bin9->SetBinContent(97,109);
   hM_bin9->SetBinContent(98,106);
   hM_bin9->SetBinContent(99,124);
   hM_bin9->SetBinContent(100,93);
   hM_bin9->SetBinContent(101,6274);
   hM_bin9->SetEntries(29254);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08045334,0.1963868);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(72.07673);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,121.7869);
   fsig->SetParError(0,13.42818);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,342.1875);
   fsig->SetParError(1,93.38875);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-3.154475e-05);
   fsig->SetParError(2,6325.057);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,730.0103);
   fsig->SetParError(3,11.11502);
   fsig->SetParLimits(3,0,1896);
   fsig->SetParameter(4,0.1382214);
   fsig->SetParError(4,0.0003138362);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,6.803158e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin9->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin9");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 29254  ");
   text = ptstats->AddText("Mean  = 0.1517");
   text = ptstats->AddText("RMS   = 0.06041");
   text = ptstats->AddText("#chi^{2} / ndf = 72.08 / 28");
   text = ptstats->AddText("p0       = 121.8 #pm 13.4 ");
   text = ptstats->AddText("p1       = 342.2 #pm 93.4 ");
   text = ptstats->AddText("p2       = -3.154e-05 #pm 6.325e+03 ");
   text = ptstats->AddText("p3       =   730 #pm 11.1 ");
   text = ptstats->AddText("p4       = 0.1382 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00007 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin9->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin9);

   ci = TColor::GetColor("#0000ff");
   hM_bin9->SetMarkerColor(ci);
   hM_bin9->SetMarkerStyle(24);
   hM_bin9->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin9->GetXaxis()->SetLabelFont(42);
   hM_bin9->GetXaxis()->SetLabelSize(0.035);
   hM_bin9->GetXaxis()->SetTitleSize(0.035);
   hM_bin9->GetXaxis()->SetTitleFont(42);
   hM_bin9->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin9->GetYaxis()->SetLabelFont(42);
   hM_bin9->GetYaxis()->SetLabelSize(0.035);
   hM_bin9->GetYaxis()->SetTitleSize(0.035);
   hM_bin9->GetYaxis()->SetTitleFont(42);
   hM_bin9->GetZaxis()->SetLabelFont(42);
   hM_bin9->GetZaxis()->SetLabelSize(0.035);
   hM_bin9->GetZaxis()->SetTitleSize(0.035);
   hM_bin9->GetZaxis()->SetTitleFont(42);
   hM_bin9->Draw("e");
   
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
   fmb->SetParameter(0,121.7869);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,342.1875);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-3.154475e-05);
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
   fpeak->SetParameter(0,730.0103);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1382214);
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
