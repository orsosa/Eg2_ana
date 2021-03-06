{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 15:54:31 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-104.8382,0.350906,943.5434);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin31 = new TH1F("hM_bin31","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin31->SetBinContent(0,2572);
   hM_bin31->SetBinContent(14,9);
   hM_bin31->SetBinContent(15,18);
   hM_bin31->SetBinContent(16,18);
   hM_bin31->SetBinContent(17,19);
   hM_bin31->SetBinContent(18,21);
   hM_bin31->SetBinContent(19,17);
   hM_bin31->SetBinContent(20,22);
   hM_bin31->SetBinContent(21,22);
   hM_bin31->SetBinContent(22,22);
   hM_bin31->SetBinContent(23,23);
   hM_bin31->SetBinContent(24,20);
   hM_bin31->SetBinContent(25,23);
   hM_bin31->SetBinContent(26,19);
   hM_bin31->SetBinContent(27,30);
   hM_bin31->SetBinContent(28,27);
   hM_bin31->SetBinContent(29,31);
   hM_bin31->SetBinContent(30,38);
   hM_bin31->SetBinContent(31,24);
   hM_bin31->SetBinContent(32,54);
   hM_bin31->SetBinContent(33,36);
   hM_bin31->SetBinContent(34,53);
   hM_bin31->SetBinContent(35,37);
   hM_bin31->SetBinContent(36,49);
   hM_bin31->SetBinContent(37,58);
   hM_bin31->SetBinContent(38,77);
   hM_bin31->SetBinContent(39,86);
   hM_bin31->SetBinContent(40,93);
   hM_bin31->SetBinContent(41,140);
   hM_bin31->SetBinContent(42,196);
   hM_bin31->SetBinContent(43,230);
   hM_bin31->SetBinContent(44,262);
   hM_bin31->SetBinContent(45,411);
   hM_bin31->SetBinContent(46,441);
   hM_bin31->SetBinContent(47,506);
   hM_bin31->SetBinContent(48,618);
   hM_bin31->SetBinContent(49,679);
   hM_bin31->SetBinContent(50,749);
   hM_bin31->SetBinContent(51,771);
   hM_bin31->SetBinContent(52,746);
   hM_bin31->SetBinContent(53,742);
   hM_bin31->SetBinContent(54,654);
   hM_bin31->SetBinContent(55,661);
   hM_bin31->SetBinContent(56,516);
   hM_bin31->SetBinContent(57,485);
   hM_bin31->SetBinContent(58,416);
   hM_bin31->SetBinContent(59,322);
   hM_bin31->SetBinContent(60,318);
   hM_bin31->SetBinContent(61,290);
   hM_bin31->SetBinContent(62,226);
   hM_bin31->SetBinContent(63,245);
   hM_bin31->SetBinContent(64,191);
   hM_bin31->SetBinContent(65,244);
   hM_bin31->SetBinContent(66,200);
   hM_bin31->SetBinContent(67,223);
   hM_bin31->SetBinContent(68,205);
   hM_bin31->SetBinContent(69,197);
   hM_bin31->SetBinContent(70,200);
   hM_bin31->SetBinContent(71,219);
   hM_bin31->SetBinContent(72,225);
   hM_bin31->SetBinContent(73,207);
   hM_bin31->SetBinContent(74,202);
   hM_bin31->SetBinContent(75,227);
   hM_bin31->SetBinContent(76,217);
   hM_bin31->SetBinContent(77,219);
   hM_bin31->SetBinContent(78,239);
   hM_bin31->SetBinContent(79,262);
   hM_bin31->SetBinContent(80,251);
   hM_bin31->SetBinContent(81,210);
   hM_bin31->SetBinContent(82,233);
   hM_bin31->SetBinContent(83,234);
   hM_bin31->SetBinContent(84,263);
   hM_bin31->SetBinContent(85,243);
   hM_bin31->SetBinContent(86,260);
   hM_bin31->SetBinContent(87,252);
   hM_bin31->SetBinContent(88,274);
   hM_bin31->SetBinContent(89,286);
   hM_bin31->SetBinContent(90,274);
   hM_bin31->SetBinContent(91,261);
   hM_bin31->SetBinContent(92,281);
   hM_bin31->SetBinContent(93,283);
   hM_bin31->SetBinContent(94,284);
   hM_bin31->SetBinContent(95,284);
   hM_bin31->SetBinContent(96,272);
   hM_bin31->SetBinContent(97,331);
   hM_bin31->SetBinContent(98,279);
   hM_bin31->SetBinContent(99,313);
   hM_bin31->SetBinContent(100,260);
   hM_bin31->SetBinContent(101,73853);
   hM_bin31->SetEntries(97100);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08122506,0.1971585);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(94.89119);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-96.12898);
   fsig->SetParError(0,8.674912);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,1427.031);
   fsig->SetParError(1,71.68259);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-3.361102e-05);
   fsig->SetParError(2,375.0462);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,608.6858);
   fsig->SetParError(3,9.349886);
   fsig->SetParLimits(3,0,1542);
   fsig->SetParameter(4,0.1385825);
   fsig->SetParError(4,0.000297667);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,1.913384e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin31->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin31");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 97100  ");
   text = ptstats->AddText("Mean  = 0.1849");
   text = ptstats->AddText("RMS   = 0.06474");
   text = ptstats->AddText("#chi^{2} / ndf = 94.89 / 28");
   text = ptstats->AddText("p0       = -96.13 #pm 8.67 ");
   text = ptstats->AddText("p1       =  1427 #pm 71.7 ");
   text = ptstats->AddText("p2       = -3.361e-05 #pm 3.750e+02 ");
   text = ptstats->AddText("p3       = 608.7 #pm 9.3 ");
   text = ptstats->AddText("p4       = 0.1386 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00002 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin31->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin31);

   ci = TColor::GetColor("#0000ff");
   hM_bin31->SetMarkerColor(ci);
   hM_bin31->SetMarkerStyle(24);
   hM_bin31->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin31->GetXaxis()->SetLabelFont(42);
   hM_bin31->GetXaxis()->SetLabelSize(0.035);
   hM_bin31->GetXaxis()->SetTitleSize(0.035);
   hM_bin31->GetXaxis()->SetTitleFont(42);
   hM_bin31->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin31->GetYaxis()->SetLabelFont(42);
   hM_bin31->GetYaxis()->SetLabelSize(0.035);
   hM_bin31->GetYaxis()->SetTitleSize(0.035);
   hM_bin31->GetYaxis()->SetTitleFont(42);
   hM_bin31->GetZaxis()->SetLabelFont(42);
   hM_bin31->GetZaxis()->SetLabelSize(0.035);
   hM_bin31->GetZaxis()->SetTitleSize(0.035);
   hM_bin31->GetZaxis()->SetTitleFont(42);
   hM_bin31->Draw("e");
   
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
   fmb->SetParameter(0,-96.12898);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1427.031);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-3.361102e-05);
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
   fpeak->SetParameter(0,608.6858);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1385825);
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
