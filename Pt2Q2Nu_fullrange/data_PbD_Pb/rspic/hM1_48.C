{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 14:50:38 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-180.4135,0.350906,1623.721);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin48 = new TH1F("hM_bin48","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin48->SetBinContent(0,891);
   hM_bin48->SetBinContent(12,70);
   hM_bin48->SetBinContent(13,166);
   hM_bin48->SetBinContent(14,146);
   hM_bin48->SetBinContent(15,151);
   hM_bin48->SetBinContent(16,151);
   hM_bin48->SetBinContent(17,137);
   hM_bin48->SetBinContent(18,130);
   hM_bin48->SetBinContent(19,147);
   hM_bin48->SetBinContent(20,166);
   hM_bin48->SetBinContent(21,173);
   hM_bin48->SetBinContent(22,185);
   hM_bin48->SetBinContent(23,182);
   hM_bin48->SetBinContent(24,185);
   hM_bin48->SetBinContent(25,206);
   hM_bin48->SetBinContent(26,217);
   hM_bin48->SetBinContent(27,255);
   hM_bin48->SetBinContent(28,280);
   hM_bin48->SetBinContent(29,293);
   hM_bin48->SetBinContent(30,316);
   hM_bin48->SetBinContent(31,330);
   hM_bin48->SetBinContent(32,329);
   hM_bin48->SetBinContent(33,395);
   hM_bin48->SetBinContent(34,429);
   hM_bin48->SetBinContent(35,396);
   hM_bin48->SetBinContent(36,445);
   hM_bin48->SetBinContent(37,486);
   hM_bin48->SetBinContent(38,540);
   hM_bin48->SetBinContent(39,593);
   hM_bin48->SetBinContent(40,658);
   hM_bin48->SetBinContent(41,720);
   hM_bin48->SetBinContent(42,860);
   hM_bin48->SetBinContent(43,897);
   hM_bin48->SetBinContent(44,976);
   hM_bin48->SetBinContent(45,1176);
   hM_bin48->SetBinContent(46,1162);
   hM_bin48->SetBinContent(47,1266);
   hM_bin48->SetBinContent(48,1291);
   hM_bin48->SetBinContent(49,1329);
   hM_bin48->SetBinContent(50,1338);
   hM_bin48->SetBinContent(51,1305);
   hM_bin48->SetBinContent(52,1299);
   hM_bin48->SetBinContent(53,1160);
   hM_bin48->SetBinContent(54,1051);
   hM_bin48->SetBinContent(55,1001);
   hM_bin48->SetBinContent(56,842);
   hM_bin48->SetBinContent(57,807);
   hM_bin48->SetBinContent(58,841);
   hM_bin48->SetBinContent(59,749);
   hM_bin48->SetBinContent(60,645);
   hM_bin48->SetBinContent(61,659);
   hM_bin48->SetBinContent(62,579);
   hM_bin48->SetBinContent(63,549);
   hM_bin48->SetBinContent(64,608);
   hM_bin48->SetBinContent(65,567);
   hM_bin48->SetBinContent(66,563);
   hM_bin48->SetBinContent(67,542);
   hM_bin48->SetBinContent(68,545);
   hM_bin48->SetBinContent(69,529);
   hM_bin48->SetBinContent(70,543);
   hM_bin48->SetBinContent(71,510);
   hM_bin48->SetBinContent(72,505);
   hM_bin48->SetBinContent(73,493);
   hM_bin48->SetBinContent(74,502);
   hM_bin48->SetBinContent(75,518);
   hM_bin48->SetBinContent(76,461);
   hM_bin48->SetBinContent(77,477);
   hM_bin48->SetBinContent(78,437);
   hM_bin48->SetBinContent(79,489);
   hM_bin48->SetBinContent(80,469);
   hM_bin48->SetBinContent(81,455);
   hM_bin48->SetBinContent(82,462);
   hM_bin48->SetBinContent(83,436);
   hM_bin48->SetBinContent(84,437);
   hM_bin48->SetBinContent(85,471);
   hM_bin48->SetBinContent(86,429);
   hM_bin48->SetBinContent(87,442);
   hM_bin48->SetBinContent(88,413);
   hM_bin48->SetBinContent(89,436);
   hM_bin48->SetBinContent(90,383);
   hM_bin48->SetBinContent(91,402);
   hM_bin48->SetBinContent(92,384);
   hM_bin48->SetBinContent(93,415);
   hM_bin48->SetBinContent(94,380);
   hM_bin48->SetBinContent(95,376);
   hM_bin48->SetBinContent(96,403);
   hM_bin48->SetBinContent(97,382);
   hM_bin48->SetBinContent(98,352);
   hM_bin48->SetBinContent(99,363);
   hM_bin48->SetBinContent(100,351);
   hM_bin48->SetBinContent(101,29733);
   hM_bin48->SetEntries(78213);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.0707588,0.1899577);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(44.38166);
   fsig->SetNDF(29);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,90.86844);
   fsig->SetParError(0,18.6162);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,4351.792);
   fsig->SetParError(1,135.9812);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-10000);
   fsig->SetParError(2,8450.629);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,841.4342);
   fsig->SetParError(3,14.43008);
   fsig->SetParLimits(3,0,2676);
   fsig->SetParameter(4,0.1302204);
   fsig->SetParError(4,0.0003700187);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01935619);
   fsig->SetParError(5,0.001480763);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin48->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin48");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 78213  ");
   text = ptstats->AddText("Mean  = 0.1612");
   text = ptstats->AddText("RMS   = 0.06923");
   text = ptstats->AddText("#chi^{2} / ndf = 44.38 / 29");
   text = ptstats->AddText("p0       = 90.87 #pm 18.62 ");
   text = ptstats->AddText("p1       =  4352 #pm 136.0 ");
   text = ptstats->AddText("p2       = -1e+04 #pm 8.45e+03 ");
   text = ptstats->AddText("p3       = 841.4 #pm 14.4 ");
   text = ptstats->AddText("p4       = 0.1302 #pm 0.0004 ");
   text = ptstats->AddText("p5       = 0.01936 #pm 0.00148 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin48->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin48);

   ci = TColor::GetColor("#0000ff");
   hM_bin48->SetMarkerColor(ci);
   hM_bin48->SetMarkerStyle(24);
   hM_bin48->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin48->GetXaxis()->SetLabelFont(42);
   hM_bin48->GetXaxis()->SetLabelSize(0.035);
   hM_bin48->GetXaxis()->SetTitleSize(0.035);
   hM_bin48->GetXaxis()->SetTitleFont(42);
   hM_bin48->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin48->GetYaxis()->SetLabelFont(42);
   hM_bin48->GetYaxis()->SetLabelSize(0.035);
   hM_bin48->GetYaxis()->SetTitleSize(0.035);
   hM_bin48->GetYaxis()->SetTitleFont(42);
   hM_bin48->GetZaxis()->SetLabelFont(42);
   hM_bin48->GetZaxis()->SetLabelSize(0.035);
   hM_bin48->GetZaxis()->SetTitleSize(0.035);
   hM_bin48->GetZaxis()->SetTitleFont(42);
   hM_bin48->Draw("e");
   
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
   fmb->SetParameter(0,90.86844);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,4351.792);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-10000);
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
   fpeak->SetParameter(0,841.4342);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1302204);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.01935619);
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
