{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:34:02 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-99.49237,0.350906,895.4312);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin32 = new TH1F("hM_bin32","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin32->SetBinContent(13,1);
   hM_bin32->SetBinContent(14,4);
   hM_bin32->SetBinContent(15,13);
   hM_bin32->SetBinContent(16,27);
   hM_bin32->SetBinContent(17,37);
   hM_bin32->SetBinContent(18,63);
   hM_bin32->SetBinContent(19,53);
   hM_bin32->SetBinContent(20,77);
   hM_bin32->SetBinContent(21,78);
   hM_bin32->SetBinContent(22,86);
   hM_bin32->SetBinContent(23,107);
   hM_bin32->SetBinContent(24,105);
   hM_bin32->SetBinContent(25,97);
   hM_bin32->SetBinContent(26,96);
   hM_bin32->SetBinContent(27,108);
   hM_bin32->SetBinContent(28,110);
   hM_bin32->SetBinContent(29,134);
   hM_bin32->SetBinContent(30,136);
   hM_bin32->SetBinContent(31,129);
   hM_bin32->SetBinContent(32,123);
   hM_bin32->SetBinContent(33,125);
   hM_bin32->SetBinContent(34,143);
   hM_bin32->SetBinContent(35,153);
   hM_bin32->SetBinContent(36,170);
   hM_bin32->SetBinContent(37,167);
   hM_bin32->SetBinContent(38,150);
   hM_bin32->SetBinContent(39,172);
   hM_bin32->SetBinContent(40,217);
   hM_bin32->SetBinContent(41,256);
   hM_bin32->SetBinContent(42,260);
   hM_bin32->SetBinContent(43,298);
   hM_bin32->SetBinContent(44,371);
   hM_bin32->SetBinContent(45,398);
   hM_bin32->SetBinContent(46,518);
   hM_bin32->SetBinContent(47,551);
   hM_bin32->SetBinContent(48,657);
   hM_bin32->SetBinContent(49,665);
   hM_bin32->SetBinContent(50,691);
   hM_bin32->SetBinContent(51,678);
   hM_bin32->SetBinContent(52,731);
   hM_bin32->SetBinContent(53,688);
   hM_bin32->SetBinContent(54,633);
   hM_bin32->SetBinContent(55,592);
   hM_bin32->SetBinContent(56,553);
   hM_bin32->SetBinContent(57,496);
   hM_bin32->SetBinContent(58,437);
   hM_bin32->SetBinContent(59,346);
   hM_bin32->SetBinContent(60,344);
   hM_bin32->SetBinContent(61,289);
   hM_bin32->SetBinContent(62,265);
   hM_bin32->SetBinContent(63,242);
   hM_bin32->SetBinContent(64,215);
   hM_bin32->SetBinContent(65,195);
   hM_bin32->SetBinContent(66,203);
   hM_bin32->SetBinContent(67,175);
   hM_bin32->SetBinContent(68,182);
   hM_bin32->SetBinContent(69,179);
   hM_bin32->SetBinContent(70,167);
   hM_bin32->SetBinContent(71,132);
   hM_bin32->SetBinContent(72,172);
   hM_bin32->SetBinContent(73,145);
   hM_bin32->SetBinContent(74,134);
   hM_bin32->SetBinContent(75,142);
   hM_bin32->SetBinContent(76,147);
   hM_bin32->SetBinContent(77,148);
   hM_bin32->SetBinContent(78,158);
   hM_bin32->SetBinContent(79,123);
   hM_bin32->SetBinContent(80,137);
   hM_bin32->SetBinContent(81,138);
   hM_bin32->SetBinContent(82,126);
   hM_bin32->SetBinContent(83,122);
   hM_bin32->SetBinContent(84,145);
   hM_bin32->SetBinContent(85,119);
   hM_bin32->SetBinContent(86,132);
   hM_bin32->SetBinContent(87,113);
   hM_bin32->SetBinContent(88,138);
   hM_bin32->SetBinContent(89,129);
   hM_bin32->SetBinContent(90,113);
   hM_bin32->SetBinContent(91,93);
   hM_bin32->SetBinContent(92,104);
   hM_bin32->SetBinContent(93,102);
   hM_bin32->SetBinContent(94,112);
   hM_bin32->SetBinContent(95,117);
   hM_bin32->SetBinContent(96,104);
   hM_bin32->SetBinContent(97,115);
   hM_bin32->SetBinContent(98,80);
   hM_bin32->SetBinContent(99,110);
   hM_bin32->SetBinContent(100,106);
   hM_bin32->SetBinContent(101,6954);
   hM_bin32->SetEntries(25866);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08067971,0.1966132);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(29.62506);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,109.3526);
   fsig->SetParError(0,12.67392);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,326.521);
   fsig->SetParError(1,88.59538);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.007328553);
   fsig->SetParError(2,1802.482);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,547.4909);
   fsig->SetParError(3,10.00779);
   fsig->SetParLimits(3,0,1462);
   fsig->SetParameter(4,0.1384873);
   fsig->SetParError(4,0.0003851658);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0001413363);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin32->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin32");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 25866  ");
   text = ptstats->AddText("Mean  = 0.1546");
   text = ptstats->AddText("RMS   = 0.06141");
   text = ptstats->AddText("#chi^{2} / ndf = 29.63 / 28");
   text = ptstats->AddText("p0       = 109.4 #pm 12.7 ");
   text = ptstats->AddText("p1       = 326.5 #pm 88.6 ");
   text = ptstats->AddText("p2       = -0.007329 #pm 1802.481689 ");
   text = ptstats->AddText("p3       = 547.5 #pm 10.0 ");
   text = ptstats->AddText("p4       = 0.1385 #pm 0.0004 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00014 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin32->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin32);

   ci = TColor::GetColor("#0000ff");
   hM_bin32->SetMarkerColor(ci);
   hM_bin32->SetMarkerStyle(24);
   hM_bin32->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin32->GetXaxis()->SetLabelFont(42);
   hM_bin32->GetXaxis()->SetLabelSize(0.035);
   hM_bin32->GetXaxis()->SetTitleSize(0.035);
   hM_bin32->GetXaxis()->SetTitleFont(42);
   hM_bin32->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin32->GetYaxis()->SetLabelFont(42);
   hM_bin32->GetYaxis()->SetLabelSize(0.035);
   hM_bin32->GetYaxis()->SetTitleSize(0.035);
   hM_bin32->GetYaxis()->SetTitleFont(42);
   hM_bin32->GetZaxis()->SetLabelFont(42);
   hM_bin32->GetZaxis()->SetLabelSize(0.035);
   hM_bin32->GetZaxis()->SetTitleSize(0.035);
   hM_bin32->GetZaxis()->SetTitleFont(42);
   hM_bin32->Draw("e");
   
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
   fmb->SetParameter(0,109.3526);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,326.521);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.007328553);
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
   fpeak->SetParameter(0,547.4909);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1384873);
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
