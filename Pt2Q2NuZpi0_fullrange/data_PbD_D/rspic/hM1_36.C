{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:30:53 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-312.9436,0.350906,2816.492);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin36 = new TH1F("hM_bin36","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin36->SetBinContent(13,4);
   hM_bin36->SetBinContent(14,31);
   hM_bin36->SetBinContent(15,61);
   hM_bin36->SetBinContent(16,114);
   hM_bin36->SetBinContent(17,111);
   hM_bin36->SetBinContent(18,198);
   hM_bin36->SetBinContent(19,262);
   hM_bin36->SetBinContent(20,328);
   hM_bin36->SetBinContent(21,268);
   hM_bin36->SetBinContent(22,337);
   hM_bin36->SetBinContent(23,296);
   hM_bin36->SetBinContent(24,350);
   hM_bin36->SetBinContent(25,419);
   hM_bin36->SetBinContent(26,386);
   hM_bin36->SetBinContent(27,424);
   hM_bin36->SetBinContent(28,416);
   hM_bin36->SetBinContent(29,420);
   hM_bin36->SetBinContent(30,452);
   hM_bin36->SetBinContent(31,436);
   hM_bin36->SetBinContent(32,433);
   hM_bin36->SetBinContent(33,456);
   hM_bin36->SetBinContent(34,516);
   hM_bin36->SetBinContent(35,528);
   hM_bin36->SetBinContent(36,546);
   hM_bin36->SetBinContent(37,611);
   hM_bin36->SetBinContent(38,706);
   hM_bin36->SetBinContent(39,715);
   hM_bin36->SetBinContent(40,790);
   hM_bin36->SetBinContent(41,961);
   hM_bin36->SetBinContent(42,1085);
   hM_bin36->SetBinContent(43,1228);
   hM_bin36->SetBinContent(44,1368);
   hM_bin36->SetBinContent(45,1618);
   hM_bin36->SetBinContent(46,1829);
   hM_bin36->SetBinContent(47,1960);
   hM_bin36->SetBinContent(48,2120);
   hM_bin36->SetBinContent(49,2106);
   hM_bin36->SetBinContent(50,2336);
   hM_bin36->SetBinContent(51,2131);
   hM_bin36->SetBinContent(52,2101);
   hM_bin36->SetBinContent(53,1941);
   hM_bin36->SetBinContent(54,1680);
   hM_bin36->SetBinContent(55,1610);
   hM_bin36->SetBinContent(56,1448);
   hM_bin36->SetBinContent(57,1235);
   hM_bin36->SetBinContent(58,1091);
   hM_bin36->SetBinContent(59,1002);
   hM_bin36->SetBinContent(60,963);
   hM_bin36->SetBinContent(61,843);
   hM_bin36->SetBinContent(62,745);
   hM_bin36->SetBinContent(63,797);
   hM_bin36->SetBinContent(64,683);
   hM_bin36->SetBinContent(65,738);
   hM_bin36->SetBinContent(66,612);
   hM_bin36->SetBinContent(67,682);
   hM_bin36->SetBinContent(68,570);
   hM_bin36->SetBinContent(69,638);
   hM_bin36->SetBinContent(70,579);
   hM_bin36->SetBinContent(71,579);
   hM_bin36->SetBinContent(72,518);
   hM_bin36->SetBinContent(73,509);
   hM_bin36->SetBinContent(74,539);
   hM_bin36->SetBinContent(75,474);
   hM_bin36->SetBinContent(76,562);
   hM_bin36->SetBinContent(77,572);
   hM_bin36->SetBinContent(78,534);
   hM_bin36->SetBinContent(79,504);
   hM_bin36->SetBinContent(80,492);
   hM_bin36->SetBinContent(81,501);
   hM_bin36->SetBinContent(82,509);
   hM_bin36->SetBinContent(83,517);
   hM_bin36->SetBinContent(84,463);
   hM_bin36->SetBinContent(85,534);
   hM_bin36->SetBinContent(86,413);
   hM_bin36->SetBinContent(87,429);
   hM_bin36->SetBinContent(88,433);
   hM_bin36->SetBinContent(89,455);
   hM_bin36->SetBinContent(90,514);
   hM_bin36->SetBinContent(91,464);
   hM_bin36->SetBinContent(92,422);
   hM_bin36->SetBinContent(93,420);
   hM_bin36->SetBinContent(94,415);
   hM_bin36->SetBinContent(95,446);
   hM_bin36->SetBinContent(96,463);
   hM_bin36->SetBinContent(97,428);
   hM_bin36->SetBinContent(98,462);
   hM_bin36->SetBinContent(99,423);
   hM_bin36->SetBinContent(100,379);
   hM_bin36->SetBinContent(101,26149);
   hM_bin36->SetEntries(89836);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07525963,0.1911931);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(68.18224);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,344.8488);
   fsig->SetParError(0,24.26111);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,1551.611);
   fsig->SetParError(1,176.9759);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.0002894842);
   fsig->SetParError(2,6332.52);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,1597.003);
   fsig->SetParError(3,18.22687);
   fsig->SetParLimits(3,0,4672);
   fsig->SetParameter(4,0.1330625);
   fsig->SetParError(4,0.0002396377);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,4.297516e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin36->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin36");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 89836  ");
   text = ptstats->AddText("Mean  = 0.1557");
   text = ptstats->AddText("RMS   = 0.06522");
   text = ptstats->AddText("#chi^{2} / ndf = 68.18 / 27");
   text = ptstats->AddText("p0       = 344.8 #pm 24.3 ");
   text = ptstats->AddText("p1       =  1552 #pm 177.0 ");
   text = ptstats->AddText("p2       = -0.0002895 #pm 6332.5200195 ");
   text = ptstats->AddText("p3       =  1597 #pm 18.2 ");
   text = ptstats->AddText("p4       = 0.1331 #pm 0.0002 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00004 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin36->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin36);

   ci = TColor::GetColor("#0000ff");
   hM_bin36->SetMarkerColor(ci);
   hM_bin36->SetMarkerStyle(24);
   hM_bin36->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin36->GetXaxis()->SetLabelFont(42);
   hM_bin36->GetXaxis()->SetLabelSize(0.035);
   hM_bin36->GetXaxis()->SetTitleSize(0.035);
   hM_bin36->GetXaxis()->SetTitleFont(42);
   hM_bin36->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin36->GetYaxis()->SetLabelFont(42);
   hM_bin36->GetYaxis()->SetLabelSize(0.035);
   hM_bin36->GetYaxis()->SetTitleSize(0.035);
   hM_bin36->GetYaxis()->SetTitleFont(42);
   hM_bin36->GetZaxis()->SetLabelFont(42);
   hM_bin36->GetZaxis()->SetLabelSize(0.035);
   hM_bin36->GetZaxis()->SetTitleSize(0.035);
   hM_bin36->GetZaxis()->SetTitleFont(42);
   hM_bin36->Draw("e");
   
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
   fmb->SetParameter(0,344.8488);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1551.611);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.0002894842);
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
   fpeak->SetParameter(0,1597.003);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1330625);
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
