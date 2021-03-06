{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue May  9 16:14:04 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-50.27909,0.350906,452.5118);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin14 = new TH1F("hM_bin14","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin14->SetBinContent(14,2);
   hM_bin14->SetBinContent(15,7);
   hM_bin14->SetBinContent(16,14);
   hM_bin14->SetBinContent(17,23);
   hM_bin14->SetBinContent(18,18);
   hM_bin14->SetBinContent(19,25);
   hM_bin14->SetBinContent(20,19);
   hM_bin14->SetBinContent(21,33);
   hM_bin14->SetBinContent(22,36);
   hM_bin14->SetBinContent(23,28);
   hM_bin14->SetBinContent(24,34);
   hM_bin14->SetBinContent(25,40);
   hM_bin14->SetBinContent(26,30);
   hM_bin14->SetBinContent(27,47);
   hM_bin14->SetBinContent(28,52);
   hM_bin14->SetBinContent(29,51);
   hM_bin14->SetBinContent(30,49);
   hM_bin14->SetBinContent(31,47);
   hM_bin14->SetBinContent(32,69);
   hM_bin14->SetBinContent(33,41);
   hM_bin14->SetBinContent(34,50);
   hM_bin14->SetBinContent(35,52);
   hM_bin14->SetBinContent(36,74);
   hM_bin14->SetBinContent(37,74);
   hM_bin14->SetBinContent(38,72);
   hM_bin14->SetBinContent(39,67);
   hM_bin14->SetBinContent(40,90);
   hM_bin14->SetBinContent(41,95);
   hM_bin14->SetBinContent(42,105);
   hM_bin14->SetBinContent(43,137);
   hM_bin14->SetBinContent(44,162);
   hM_bin14->SetBinContent(45,194);
   hM_bin14->SetBinContent(46,264);
   hM_bin14->SetBinContent(47,245);
   hM_bin14->SetBinContent(48,321);
   hM_bin14->SetBinContent(49,293);
   hM_bin14->SetBinContent(50,364);
   hM_bin14->SetBinContent(51,336);
   hM_bin14->SetBinContent(52,292);
   hM_bin14->SetBinContent(53,339);
   hM_bin14->SetBinContent(54,290);
   hM_bin14->SetBinContent(55,275);
   hM_bin14->SetBinContent(56,236);
   hM_bin14->SetBinContent(57,217);
   hM_bin14->SetBinContent(58,180);
   hM_bin14->SetBinContent(59,168);
   hM_bin14->SetBinContent(60,147);
   hM_bin14->SetBinContent(61,126);
   hM_bin14->SetBinContent(62,115);
   hM_bin14->SetBinContent(63,127);
   hM_bin14->SetBinContent(64,115);
   hM_bin14->SetBinContent(65,117);
   hM_bin14->SetBinContent(66,93);
   hM_bin14->SetBinContent(67,89);
   hM_bin14->SetBinContent(68,109);
   hM_bin14->SetBinContent(69,83);
   hM_bin14->SetBinContent(70,62);
   hM_bin14->SetBinContent(71,79);
   hM_bin14->SetBinContent(72,84);
   hM_bin14->SetBinContent(73,63);
   hM_bin14->SetBinContent(74,67);
   hM_bin14->SetBinContent(75,76);
   hM_bin14->SetBinContent(76,84);
   hM_bin14->SetBinContent(77,86);
   hM_bin14->SetBinContent(78,69);
   hM_bin14->SetBinContent(79,70);
   hM_bin14->SetBinContent(80,57);
   hM_bin14->SetBinContent(81,59);
   hM_bin14->SetBinContent(82,70);
   hM_bin14->SetBinContent(83,62);
   hM_bin14->SetBinContent(84,59);
   hM_bin14->SetBinContent(85,77);
   hM_bin14->SetBinContent(86,80);
   hM_bin14->SetBinContent(87,59);
   hM_bin14->SetBinContent(88,59);
   hM_bin14->SetBinContent(89,51);
   hM_bin14->SetBinContent(90,64);
   hM_bin14->SetBinContent(91,55);
   hM_bin14->SetBinContent(92,63);
   hM_bin14->SetBinContent(93,61);
   hM_bin14->SetBinContent(94,66);
   hM_bin14->SetBinContent(95,74);
   hM_bin14->SetBinContent(96,61);
   hM_bin14->SetBinContent(97,45);
   hM_bin14->SetBinContent(98,63);
   hM_bin14->SetBinContent(99,61);
   hM_bin14->SetBinContent(100,67);
   hM_bin14->SetBinContent(101,3306);
   hM_bin14->SetEntries(12137);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07992025,0.1958537);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(49.07825);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,14.93634);
   fsig->SetParError(0,8.387492);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,403.8705);
   fsig->SetParError(1,59.94041);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.003152276);
   fsig->SetParError(2,696.7227);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,251.1047);
   fsig->SetParError(3,6.823499);
   fsig->SetParLimits(3,0,728);
   fsig->SetParameter(4,0.1372534);
   fsig->SetParError(4,0.0005481722);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,9.89724e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin14->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin14");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 12137  ");
   text = ptstats->AddText("Mean  = 0.1599");
   text = ptstats->AddText("RMS   = 0.06233");
   text = ptstats->AddText("#chi^{2} / ndf = 49.08 / 28");
   text = ptstats->AddText("p0       = 14.94 #pm 8.39 ");
   text = ptstats->AddText("p1       = 403.9 #pm 59.9 ");
   text = ptstats->AddText("p2       = -0.003152 #pm 696.722656 ");
   text = ptstats->AddText("p3       = 251.1 #pm 6.8 ");
   text = ptstats->AddText("p4       = 0.1373 #pm 0.0005 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00010 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin14->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin14);

   ci = TColor::GetColor("#0000ff");
   hM_bin14->SetMarkerColor(ci);
   hM_bin14->SetMarkerStyle(24);
   hM_bin14->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin14->GetXaxis()->SetLabelFont(42);
   hM_bin14->GetXaxis()->SetLabelSize(0.035);
   hM_bin14->GetXaxis()->SetTitleSize(0.035);
   hM_bin14->GetXaxis()->SetTitleFont(42);
   hM_bin14->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin14->GetYaxis()->SetLabelFont(42);
   hM_bin14->GetYaxis()->SetLabelSize(0.035);
   hM_bin14->GetYaxis()->SetTitleSize(0.035);
   hM_bin14->GetYaxis()->SetTitleFont(42);
   hM_bin14->GetZaxis()->SetLabelFont(42);
   hM_bin14->GetZaxis()->SetLabelSize(0.035);
   hM_bin14->GetZaxis()->SetTitleSize(0.035);
   hM_bin14->GetZaxis()->SetTitleFont(42);
   hM_bin14->Draw("e");
   
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
   fmb->SetParameter(0,14.93634);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,403.8705);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.003152276);
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
   fpeak->SetParameter(0,251.1047);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1372534);
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
