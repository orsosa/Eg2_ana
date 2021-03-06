{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 18 12:06:36 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.1901558,198.9294,0.8890623,784.9675);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin31 = new TH1F("hM_bin31","M_{#gamma #gamma}",100,0.2600464,0.8191716);
   hM_bin31->SetBinContent(0,16314);
   hM_bin31->SetBinContent(1,296);
   hM_bin31->SetBinContent(2,321);
   hM_bin31->SetBinContent(3,321);
   hM_bin31->SetBinContent(4,300);
   hM_bin31->SetBinContent(5,342);
   hM_bin31->SetBinContent(6,345);
   hM_bin31->SetBinContent(7,356);
   hM_bin31->SetBinContent(8,333);
   hM_bin31->SetBinContent(9,361);
   hM_bin31->SetBinContent(10,389);
   hM_bin31->SetBinContent(11,388);
   hM_bin31->SetBinContent(12,383);
   hM_bin31->SetBinContent(13,401);
   hM_bin31->SetBinContent(14,382);
   hM_bin31->SetBinContent(15,441);
   hM_bin31->SetBinContent(16,411);
   hM_bin31->SetBinContent(17,429);
   hM_bin31->SetBinContent(18,445);
   hM_bin31->SetBinContent(19,424);
   hM_bin31->SetBinContent(20,474);
   hM_bin31->SetBinContent(21,430);
   hM_bin31->SetBinContent(22,483);
   hM_bin31->SetBinContent(23,451);
   hM_bin31->SetBinContent(24,456);
   hM_bin31->SetBinContent(25,534);
   hM_bin31->SetBinContent(26,482);
   hM_bin31->SetBinContent(27,467);
   hM_bin31->SetBinContent(28,513);
   hM_bin31->SetBinContent(29,504);
   hM_bin31->SetBinContent(30,556);
   hM_bin31->SetBinContent(31,496);
   hM_bin31->SetBinContent(32,572);
   hM_bin31->SetBinContent(33,507);
   hM_bin31->SetBinContent(34,593);
   hM_bin31->SetBinContent(35,508);
   hM_bin31->SetBinContent(36,575);
   hM_bin31->SetBinContent(37,559);
   hM_bin31->SetBinContent(38,545);
   hM_bin31->SetBinContent(39,591);
   hM_bin31->SetBinContent(40,585);
   hM_bin31->SetBinContent(41,555);
   hM_bin31->SetBinContent(42,554);
   hM_bin31->SetBinContent(43,621);
   hM_bin31->SetBinContent(44,608);
   hM_bin31->SetBinContent(45,602);
   hM_bin31->SetBinContent(46,592);
   hM_bin31->SetBinContent(47,596);
   hM_bin31->SetBinContent(48,577);
   hM_bin31->SetBinContent(49,610);
   hM_bin31->SetBinContent(50,590);
   hM_bin31->SetBinContent(51,620);
   hM_bin31->SetBinContent(52,594);
   hM_bin31->SetBinContent(53,678);
   hM_bin31->SetBinContent(54,553);
   hM_bin31->SetBinContent(55,600);
   hM_bin31->SetBinContent(56,568);
   hM_bin31->SetBinContent(57,611);
   hM_bin31->SetBinContent(58,661);
   hM_bin31->SetBinContent(59,601);
   hM_bin31->SetBinContent(60,596);
   hM_bin31->SetBinContent(61,595);
   hM_bin31->SetBinContent(62,585);
   hM_bin31->SetBinContent(63,563);
   hM_bin31->SetBinContent(64,574);
   hM_bin31->SetBinContent(65,613);
   hM_bin31->SetBinContent(66,591);
   hM_bin31->SetBinContent(67,608);
   hM_bin31->SetBinContent(68,543);
   hM_bin31->SetBinContent(69,593);
   hM_bin31->SetBinContent(70,552);
   hM_bin31->SetBinContent(71,546);
   hM_bin31->SetBinContent(72,565);
   hM_bin31->SetBinContent(73,572);
   hM_bin31->SetBinContent(74,487);
   hM_bin31->SetBinContent(75,516);
   hM_bin31->SetBinContent(76,464);
   hM_bin31->SetBinContent(77,524);
   hM_bin31->SetBinContent(78,497);
   hM_bin31->SetBinContent(79,510);
   hM_bin31->SetBinContent(80,455);
   hM_bin31->SetBinContent(81,456);
   hM_bin31->SetBinContent(82,460);
   hM_bin31->SetBinContent(83,468);
   hM_bin31->SetBinContent(84,425);
   hM_bin31->SetBinContent(85,423);
   hM_bin31->SetBinContent(86,456);
   hM_bin31->SetBinContent(87,437);
   hM_bin31->SetBinContent(88,399);
   hM_bin31->SetBinContent(89,428);
   hM_bin31->SetBinContent(90,411);
   hM_bin31->SetBinContent(91,395);
   hM_bin31->SetBinContent(92,391);
   hM_bin31->SetBinContent(93,400);
   hM_bin31->SetBinContent(94,366);
   hM_bin31->SetBinContent(95,373);
   hM_bin31->SetBinContent(96,344);
   hM_bin31->SetBinContent(97,335);
   hM_bin31->SetBinContent(98,332);
   hM_bin31->SetBinContent(99,304);
   hM_bin31->SetBinContent(100,331);
   hM_bin31->SetBinContent(101,8615);
   hM_bin31->SetEntries(73752);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.4023964,0.833001);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(82.91856);
   fsig->SetNDF(69);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-1139.717);
   fsig->SetParError(0,136.1933);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,6330.541);
   fsig->SetParError(1,506.5636);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-5736.6);
   fsig->SetParError(2,462.0702);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,103.0279);
   fsig->SetParError(3,41.6224);
   fsig->SetParLimits(3,0,1356);
   fsig->SetParameter(4,0.825041);
   fsig->SetParError(4,0.02941206);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.05116043);
   fsig->SetParError(5,0.01604263);
   fsig->SetParLimits(5,0.04788336,0.07182504);
   hM_bin31->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin31");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 73752  ");
   text = ptstats->AddText("Mean  = 0.5428");
   text = ptstats->AddText("RMS   = 0.1469");
   text = ptstats->AddText("#chi^{2} / ndf = 82.92 / 69");
   text = ptstats->AddText("p0       = -1140 #pm 136.2 ");
   text = ptstats->AddText("p1       =  6331 #pm 506.6 ");
   text = ptstats->AddText("p2       = -5737 #pm 462.1 ");
   text = ptstats->AddText("p3       =   103 #pm 41.6 ");
   text = ptstats->AddText("p4       = 0.825 #pm 0.029 ");
   text = ptstats->AddText("p5       = 0.05116 #pm 0.01604 ");
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
   fmb->SetParameter(0,-1139.717);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,6330.541);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-5736.6);
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
   fpeak->SetParameter(0,103.0279);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.825041);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.05116043);
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
