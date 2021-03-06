{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:47:50 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-602.8675,0.350906,5425.807);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin43 = new TH1F("hM_bin43","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin43->SetBinContent(13,3);
   hM_bin43->SetBinContent(14,21);
   hM_bin43->SetBinContent(15,107);
   hM_bin43->SetBinContent(16,145);
   hM_bin43->SetBinContent(17,191);
   hM_bin43->SetBinContent(18,267);
   hM_bin43->SetBinContent(19,311);
   hM_bin43->SetBinContent(20,420);
   hM_bin43->SetBinContent(21,422);
   hM_bin43->SetBinContent(22,496);
   hM_bin43->SetBinContent(23,533);
   hM_bin43->SetBinContent(24,521);
   hM_bin43->SetBinContent(25,552);
   hM_bin43->SetBinContent(26,627);
   hM_bin43->SetBinContent(27,629);
   hM_bin43->SetBinContent(28,657);
   hM_bin43->SetBinContent(29,657);
   hM_bin43->SetBinContent(30,728);
   hM_bin43->SetBinContent(31,730);
   hM_bin43->SetBinContent(32,770);
   hM_bin43->SetBinContent(33,800);
   hM_bin43->SetBinContent(34,767);
   hM_bin43->SetBinContent(35,909);
   hM_bin43->SetBinContent(36,927);
   hM_bin43->SetBinContent(37,1106);
   hM_bin43->SetBinContent(38,1198);
   hM_bin43->SetBinContent(39,1385);
   hM_bin43->SetBinContent(40,1586);
   hM_bin43->SetBinContent(41,1941);
   hM_bin43->SetBinContent(42,2213);
   hM_bin43->SetBinContent(43,2798);
   hM_bin43->SetBinContent(44,3031);
   hM_bin43->SetBinContent(45,3397);
   hM_bin43->SetBinContent(46,3878);
   hM_bin43->SetBinContent(47,4222);
   hM_bin43->SetBinContent(48,4526);
   hM_bin43->SetBinContent(49,4454);
   hM_bin43->SetBinContent(50,4357);
   hM_bin43->SetBinContent(51,4200);
   hM_bin43->SetBinContent(52,3946);
   hM_bin43->SetBinContent(53,3483);
   hM_bin43->SetBinContent(54,2946);
   hM_bin43->SetBinContent(55,2700);
   hM_bin43->SetBinContent(56,2312);
   hM_bin43->SetBinContent(57,1911);
   hM_bin43->SetBinContent(58,1726);
   hM_bin43->SetBinContent(59,1519);
   hM_bin43->SetBinContent(60,1403);
   hM_bin43->SetBinContent(61,1228);
   hM_bin43->SetBinContent(62,1126);
   hM_bin43->SetBinContent(63,1015);
   hM_bin43->SetBinContent(64,1009);
   hM_bin43->SetBinContent(65,930);
   hM_bin43->SetBinContent(66,888);
   hM_bin43->SetBinContent(67,922);
   hM_bin43->SetBinContent(68,851);
   hM_bin43->SetBinContent(69,879);
   hM_bin43->SetBinContent(70,857);
   hM_bin43->SetBinContent(71,808);
   hM_bin43->SetBinContent(72,830);
   hM_bin43->SetBinContent(73,841);
   hM_bin43->SetBinContent(74,833);
   hM_bin43->SetBinContent(75,824);
   hM_bin43->SetBinContent(76,746);
   hM_bin43->SetBinContent(77,830);
   hM_bin43->SetBinContent(78,754);
   hM_bin43->SetBinContent(79,731);
   hM_bin43->SetBinContent(80,711);
   hM_bin43->SetBinContent(81,728);
   hM_bin43->SetBinContent(82,738);
   hM_bin43->SetBinContent(83,670);
   hM_bin43->SetBinContent(84,677);
   hM_bin43->SetBinContent(85,680);
   hM_bin43->SetBinContent(86,673);
   hM_bin43->SetBinContent(87,713);
   hM_bin43->SetBinContent(88,656);
   hM_bin43->SetBinContent(89,681);
   hM_bin43->SetBinContent(90,658);
   hM_bin43->SetBinContent(91,636);
   hM_bin43->SetBinContent(92,636);
   hM_bin43->SetBinContent(93,616);
   hM_bin43->SetBinContent(94,610);
   hM_bin43->SetBinContent(95,641);
   hM_bin43->SetBinContent(96,566);
   hM_bin43->SetBinContent(97,605);
   hM_bin43->SetBinContent(98,566);
   hM_bin43->SetBinContent(99,573);
   hM_bin43->SetBinContent(100,525);
   hM_bin43->SetBinContent(101,38394);
   hM_bin43->SetEntries(147283);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07219017,0.1881236);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(126.4882);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,537.9266);
   fsig->SetParError(0,29.46889);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,1796.069);
   fsig->SetParError(1,219.6045);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.001743654);
   fsig->SetParError(2,1304.362);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,3526.115);
   fsig->SetParError(3,24.69555);
   fsig->SetParLimits(3,0,9052);
   fsig->SetParameter(4,0.1299598);
   fsig->SetParError(4,0.0001444803);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,1.14e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin43->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin43");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 147283 ");
   text = ptstats->AddText("Mean  = 0.1501");
   text = ptstats->AddText("RMS   = 0.0613");
   text = ptstats->AddText("#chi^{2} / ndf = 126.5 / 27");
   text = ptstats->AddText("p0       = 537.9 #pm 29.5 ");
   text = ptstats->AddText("p1       =  1796 #pm 219.6 ");
   text = ptstats->AddText("p2       = -0.001744 #pm 1304.362183 ");
   text = ptstats->AddText("p3       =  3526 #pm 24.7 ");
   text = ptstats->AddText("p4       =  0.13 #pm 0.00 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00001 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin43->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin43);

   ci = TColor::GetColor("#0000ff");
   hM_bin43->SetMarkerColor(ci);
   hM_bin43->SetMarkerStyle(24);
   hM_bin43->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin43->GetXaxis()->SetLabelFont(42);
   hM_bin43->GetXaxis()->SetLabelSize(0.035);
   hM_bin43->GetXaxis()->SetTitleSize(0.035);
   hM_bin43->GetXaxis()->SetTitleFont(42);
   hM_bin43->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin43->GetYaxis()->SetLabelFont(42);
   hM_bin43->GetYaxis()->SetLabelSize(0.035);
   hM_bin43->GetYaxis()->SetTitleSize(0.035);
   hM_bin43->GetYaxis()->SetTitleFont(42);
   hM_bin43->GetZaxis()->SetLabelFont(42);
   hM_bin43->GetZaxis()->SetLabelSize(0.035);
   hM_bin43->GetZaxis()->SetTitleSize(0.035);
   hM_bin43->GetZaxis()->SetTitleFont(42);
   hM_bin43->Draw("e");
   
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
   fmb->SetParameter(0,537.9266);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1796.069);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.001743654);
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
   fpeak->SetParameter(0,3526.115);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1299598);
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
