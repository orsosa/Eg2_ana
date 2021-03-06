{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:42:42 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-191.8529,0.350906,1726.676);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin44 = new TH1F("hM_bin44","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin44->SetBinContent(14,5);
   hM_bin44->SetBinContent(15,14);
   hM_bin44->SetBinContent(16,55);
   hM_bin44->SetBinContent(17,64);
   hM_bin44->SetBinContent(18,71);
   hM_bin44->SetBinContent(19,102);
   hM_bin44->SetBinContent(20,110);
   hM_bin44->SetBinContent(21,154);
   hM_bin44->SetBinContent(22,124);
   hM_bin44->SetBinContent(23,158);
   hM_bin44->SetBinContent(24,133);
   hM_bin44->SetBinContent(25,149);
   hM_bin44->SetBinContent(26,174);
   hM_bin44->SetBinContent(27,168);
   hM_bin44->SetBinContent(28,190);
   hM_bin44->SetBinContent(29,193);
   hM_bin44->SetBinContent(30,174);
   hM_bin44->SetBinContent(31,212);
   hM_bin44->SetBinContent(32,210);
   hM_bin44->SetBinContent(33,228);
   hM_bin44->SetBinContent(34,255);
   hM_bin44->SetBinContent(35,239);
   hM_bin44->SetBinContent(36,288);
   hM_bin44->SetBinContent(37,262);
   hM_bin44->SetBinContent(38,316);
   hM_bin44->SetBinContent(39,358);
   hM_bin44->SetBinContent(40,442);
   hM_bin44->SetBinContent(41,465);
   hM_bin44->SetBinContent(42,590);
   hM_bin44->SetBinContent(43,770);
   hM_bin44->SetBinContent(44,903);
   hM_bin44->SetBinContent(45,1025);
   hM_bin44->SetBinContent(46,1124);
   hM_bin44->SetBinContent(47,1242);
   hM_bin44->SetBinContent(48,1412);
   hM_bin44->SetBinContent(49,1396);
   hM_bin44->SetBinContent(50,1424);
   hM_bin44->SetBinContent(51,1391);
   hM_bin44->SetBinContent(52,1238);
   hM_bin44->SetBinContent(53,1134);
   hM_bin44->SetBinContent(54,989);
   hM_bin44->SetBinContent(55,828);
   hM_bin44->SetBinContent(56,849);
   hM_bin44->SetBinContent(57,650);
   hM_bin44->SetBinContent(58,572);
   hM_bin44->SetBinContent(59,473);
   hM_bin44->SetBinContent(60,380);
   hM_bin44->SetBinContent(61,355);
   hM_bin44->SetBinContent(62,296);
   hM_bin44->SetBinContent(63,298);
   hM_bin44->SetBinContent(64,302);
   hM_bin44->SetBinContent(65,242);
   hM_bin44->SetBinContent(66,236);
   hM_bin44->SetBinContent(67,230);
   hM_bin44->SetBinContent(68,222);
   hM_bin44->SetBinContent(69,213);
   hM_bin44->SetBinContent(70,197);
   hM_bin44->SetBinContent(71,195);
   hM_bin44->SetBinContent(72,200);
   hM_bin44->SetBinContent(73,203);
   hM_bin44->SetBinContent(74,187);
   hM_bin44->SetBinContent(75,171);
   hM_bin44->SetBinContent(76,215);
   hM_bin44->SetBinContent(77,196);
   hM_bin44->SetBinContent(78,203);
   hM_bin44->SetBinContent(79,175);
   hM_bin44->SetBinContent(80,191);
   hM_bin44->SetBinContent(81,166);
   hM_bin44->SetBinContent(82,195);
   hM_bin44->SetBinContent(83,153);
   hM_bin44->SetBinContent(84,170);
   hM_bin44->SetBinContent(85,143);
   hM_bin44->SetBinContent(86,177);
   hM_bin44->SetBinContent(87,184);
   hM_bin44->SetBinContent(88,166);
   hM_bin44->SetBinContent(89,168);
   hM_bin44->SetBinContent(90,158);
   hM_bin44->SetBinContent(91,114);
   hM_bin44->SetBinContent(92,171);
   hM_bin44->SetBinContent(93,138);
   hM_bin44->SetBinContent(94,145);
   hM_bin44->SetBinContent(95,138);
   hM_bin44->SetBinContent(96,137);
   hM_bin44->SetBinContent(97,159);
   hM_bin44->SetBinContent(98,112);
   hM_bin44->SetBinContent(99,124);
   hM_bin44->SetBinContent(100,140);
   hM_bin44->SetBinContent(101,8445);
   hM_bin44->SetEntries(39733);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07437292,0.1903064);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(93.5678);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,180.2813);
   fsig->SetParError(0,14.76538);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,179.7837);
   fsig->SetParError(1,107.4589);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.0004863081);
   fsig->SetParError(2,663.3817);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,1138.058);
   fsig->SetParError(3,13.35351);
   fsig->SetParLimits(3,0,2848);
   fsig->SetParameter(4,0.1322713);
   fsig->SetParError(4,0.0002371819);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,2.220455e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin44->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin44");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 39733  ");
   text = ptstats->AddText("Mean  = 0.1468");
   text = ptstats->AddText("RMS   = 0.05781");
   text = ptstats->AddText("#chi^{2} / ndf = 93.57 / 28");
   text = ptstats->AddText("p0       = 180.3 #pm 14.8 ");
   text = ptstats->AddText("p1       = 179.8 #pm 107.5 ");
   text = ptstats->AddText("p2       = -0.0004863 #pm 663.3817749 ");
   text = ptstats->AddText("p3       =  1138 #pm 13.4 ");
   text = ptstats->AddText("p4       = 0.1323 #pm 0.0002 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00002 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin44->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin44);

   ci = TColor::GetColor("#0000ff");
   hM_bin44->SetMarkerColor(ci);
   hM_bin44->SetMarkerStyle(24);
   hM_bin44->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin44->GetXaxis()->SetLabelFont(42);
   hM_bin44->GetXaxis()->SetLabelSize(0.035);
   hM_bin44->GetXaxis()->SetTitleSize(0.035);
   hM_bin44->GetXaxis()->SetTitleFont(42);
   hM_bin44->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin44->GetYaxis()->SetLabelFont(42);
   hM_bin44->GetYaxis()->SetLabelSize(0.035);
   hM_bin44->GetYaxis()->SetTitleSize(0.035);
   hM_bin44->GetYaxis()->SetTitleFont(42);
   hM_bin44->GetZaxis()->SetLabelFont(42);
   hM_bin44->GetZaxis()->SetLabelSize(0.035);
   hM_bin44->GetZaxis()->SetTitleSize(0.035);
   hM_bin44->GetZaxis()->SetTitleFont(42);
   hM_bin44->Draw("e");
   
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
   fmb->SetParameter(0,180.2813);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,179.7837);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.0004863081);
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
   fpeak->SetParameter(0,1138.058);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1322713);
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
