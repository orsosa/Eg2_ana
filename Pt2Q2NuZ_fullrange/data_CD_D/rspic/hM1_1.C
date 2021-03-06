{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 15:58:40 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-154.0565,0.350906,1386.509);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin1 = new TH1F("hM_bin1","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin1->SetBinContent(0,1368);
   hM_bin1->SetBinContent(13,4);
   hM_bin1->SetBinContent(14,25);
   hM_bin1->SetBinContent(15,22);
   hM_bin1->SetBinContent(16,33);
   hM_bin1->SetBinContent(17,28);
   hM_bin1->SetBinContent(18,25);
   hM_bin1->SetBinContent(19,28);
   hM_bin1->SetBinContent(20,21);
   hM_bin1->SetBinContent(21,27);
   hM_bin1->SetBinContent(22,26);
   hM_bin1->SetBinContent(23,22);
   hM_bin1->SetBinContent(24,31);
   hM_bin1->SetBinContent(25,26);
   hM_bin1->SetBinContent(26,31);
   hM_bin1->SetBinContent(27,40);
   hM_bin1->SetBinContent(28,45);
   hM_bin1->SetBinContent(29,43);
   hM_bin1->SetBinContent(30,41);
   hM_bin1->SetBinContent(31,41);
   hM_bin1->SetBinContent(32,51);
   hM_bin1->SetBinContent(33,68);
   hM_bin1->SetBinContent(34,73);
   hM_bin1->SetBinContent(35,80);
   hM_bin1->SetBinContent(36,75);
   hM_bin1->SetBinContent(37,105);
   hM_bin1->SetBinContent(38,127);
   hM_bin1->SetBinContent(39,136);
   hM_bin1->SetBinContent(40,198);
   hM_bin1->SetBinContent(41,236);
   hM_bin1->SetBinContent(42,336);
   hM_bin1->SetBinContent(43,438);
   hM_bin1->SetBinContent(44,543);
   hM_bin1->SetBinContent(45,648);
   hM_bin1->SetBinContent(46,741);
   hM_bin1->SetBinContent(47,894);
   hM_bin1->SetBinContent(48,944);
   hM_bin1->SetBinContent(49,1072);
   hM_bin1->SetBinContent(50,1140);
   hM_bin1->SetBinContent(51,1119);
   hM_bin1->SetBinContent(52,1027);
   hM_bin1->SetBinContent(53,985);
   hM_bin1->SetBinContent(54,853);
   hM_bin1->SetBinContent(55,819);
   hM_bin1->SetBinContent(56,717);
   hM_bin1->SetBinContent(57,667);
   hM_bin1->SetBinContent(58,570);
   hM_bin1->SetBinContent(59,476);
   hM_bin1->SetBinContent(60,406);
   hM_bin1->SetBinContent(61,363);
   hM_bin1->SetBinContent(62,350);
   hM_bin1->SetBinContent(63,326);
   hM_bin1->SetBinContent(64,267);
   hM_bin1->SetBinContent(65,263);
   hM_bin1->SetBinContent(66,262);
   hM_bin1->SetBinContent(67,265);
   hM_bin1->SetBinContent(68,258);
   hM_bin1->SetBinContent(69,248);
   hM_bin1->SetBinContent(70,233);
   hM_bin1->SetBinContent(71,238);
   hM_bin1->SetBinContent(72,235);
   hM_bin1->SetBinContent(73,243);
   hM_bin1->SetBinContent(74,275);
   hM_bin1->SetBinContent(75,253);
   hM_bin1->SetBinContent(76,267);
   hM_bin1->SetBinContent(77,257);
   hM_bin1->SetBinContent(78,246);
   hM_bin1->SetBinContent(79,273);
   hM_bin1->SetBinContent(80,272);
   hM_bin1->SetBinContent(81,248);
   hM_bin1->SetBinContent(82,275);
   hM_bin1->SetBinContent(83,269);
   hM_bin1->SetBinContent(84,299);
   hM_bin1->SetBinContent(85,255);
   hM_bin1->SetBinContent(86,313);
   hM_bin1->SetBinContent(87,282);
   hM_bin1->SetBinContent(88,273);
   hM_bin1->SetBinContent(89,300);
   hM_bin1->SetBinContent(90,276);
   hM_bin1->SetBinContent(91,270);
   hM_bin1->SetBinContent(92,265);
   hM_bin1->SetBinContent(93,271);
   hM_bin1->SetBinContent(94,329);
   hM_bin1->SetBinContent(95,311);
   hM_bin1->SetBinContent(96,308);
   hM_bin1->SetBinContent(97,287);
   hM_bin1->SetBinContent(98,304);
   hM_bin1->SetBinContent(99,312);
   hM_bin1->SetBinContent(100,274);
   hM_bin1->SetBinContent(101,35754);
   hM_bin1->SetEntries(64340);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07857945,0.1945129);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(62.50016);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-113.6389);
   fsig->SetParError(0,11.92359);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,1842.121);
   fsig->SetParError(1,93.91716);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-2.21485e-05);
   fsig->SetParError(2,747.4134);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,914.7733);
   fsig->SetParError(3,11.57467);
   fsig->SetParLimits(3,0,2280);
   fsig->SetParameter(4,0.1359911);
   fsig->SetParError(4,0.0002619839);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,2.396249e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin1->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin1");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 64340  ");
   text = ptstats->AddText("Mean  = 0.1751");
   text = ptstats->AddText("RMS   = 0.0628");
   text = ptstats->AddText("#chi^{2} / ndf =  62.5 / 27");
   text = ptstats->AddText("p0       = -113.6 #pm 11.9 ");
   text = ptstats->AddText("p1       =  1842 #pm 93.9 ");
   text = ptstats->AddText("p2       = -2.215e-05 #pm 7.474e+02 ");
   text = ptstats->AddText("p3       = 914.8 #pm 11.6 ");
   text = ptstats->AddText("p4       = 0.136 #pm 0.000 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00002 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin1);

   ci = TColor::GetColor("#0000ff");
   hM_bin1->SetMarkerColor(ci);
   hM_bin1->SetMarkerStyle(24);
   hM_bin1->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin1->GetXaxis()->SetLabelFont(42);
   hM_bin1->GetXaxis()->SetLabelSize(0.035);
   hM_bin1->GetXaxis()->SetTitleSize(0.035);
   hM_bin1->GetXaxis()->SetTitleFont(42);
   hM_bin1->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin1->GetYaxis()->SetLabelFont(42);
   hM_bin1->GetYaxis()->SetLabelSize(0.035);
   hM_bin1->GetYaxis()->SetTitleSize(0.035);
   hM_bin1->GetYaxis()->SetTitleFont(42);
   hM_bin1->GetZaxis()->SetLabelFont(42);
   hM_bin1->GetZaxis()->SetLabelSize(0.035);
   hM_bin1->GetZaxis()->SetTitleSize(0.035);
   hM_bin1->GetZaxis()->SetTitleFont(42);
   hM_bin1->Draw("e");
   
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
   fmb->SetParameter(0,-113.6389);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1842.121);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-2.21485e-05);
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
   fpeak->SetParameter(0,914.7733);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1359911);
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
