{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 11 11:57:09 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-23.8875,0.350906,214.9875);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin51 = new TH1F("hM_bin51","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin51->SetBinContent(0,3253);
   hM_bin51->SetBinContent(15,1);
   hM_bin51->SetBinContent(16,3);
   hM_bin51->SetBinContent(17,6);
   hM_bin51->SetBinContent(18,5);
   hM_bin51->SetBinContent(19,9);
   hM_bin51->SetBinContent(20,4);
   hM_bin51->SetBinContent(21,3);
   hM_bin51->SetBinContent(22,9);
   hM_bin51->SetBinContent(23,5);
   hM_bin51->SetBinContent(24,5);
   hM_bin51->SetBinContent(25,7);
   hM_bin51->SetBinContent(26,4);
   hM_bin51->SetBinContent(27,6);
   hM_bin51->SetBinContent(28,3);
   hM_bin51->SetBinContent(29,10);
   hM_bin51->SetBinContent(30,2);
   hM_bin51->SetBinContent(31,9);
   hM_bin51->SetBinContent(32,8);
   hM_bin51->SetBinContent(33,14);
   hM_bin51->SetBinContent(34,5);
   hM_bin51->SetBinContent(35,8);
   hM_bin51->SetBinContent(36,15);
   hM_bin51->SetBinContent(37,17);
   hM_bin51->SetBinContent(38,13);
   hM_bin51->SetBinContent(39,17);
   hM_bin51->SetBinContent(40,25);
   hM_bin51->SetBinContent(41,30);
   hM_bin51->SetBinContent(42,29);
   hM_bin51->SetBinContent(43,46);
   hM_bin51->SetBinContent(44,54);
   hM_bin51->SetBinContent(45,53);
   hM_bin51->SetBinContent(46,117);
   hM_bin51->SetBinContent(47,106);
   hM_bin51->SetBinContent(48,106);
   hM_bin51->SetBinContent(49,129);
   hM_bin51->SetBinContent(50,158);
   hM_bin51->SetBinContent(51,153);
   hM_bin51->SetBinContent(52,143);
   hM_bin51->SetBinContent(53,157);
   hM_bin51->SetBinContent(54,164);
   hM_bin51->SetBinContent(55,169);
   hM_bin51->SetBinContent(56,159);
   hM_bin51->SetBinContent(57,110);
   hM_bin51->SetBinContent(58,122);
   hM_bin51->SetBinContent(59,105);
   hM_bin51->SetBinContent(60,76);
   hM_bin51->SetBinContent(61,86);
   hM_bin51->SetBinContent(62,65);
   hM_bin51->SetBinContent(63,63);
   hM_bin51->SetBinContent(64,48);
   hM_bin51->SetBinContent(65,42);
   hM_bin51->SetBinContent(66,43);
   hM_bin51->SetBinContent(67,37);
   hM_bin51->SetBinContent(68,31);
   hM_bin51->SetBinContent(69,29);
   hM_bin51->SetBinContent(70,28);
   hM_bin51->SetBinContent(71,20);
   hM_bin51->SetBinContent(72,23);
   hM_bin51->SetBinContent(73,29);
   hM_bin51->SetBinContent(74,28);
   hM_bin51->SetBinContent(75,40);
   hM_bin51->SetBinContent(76,28);
   hM_bin51->SetBinContent(77,28);
   hM_bin51->SetBinContent(78,27);
   hM_bin51->SetBinContent(79,32);
   hM_bin51->SetBinContent(80,29);
   hM_bin51->SetBinContent(81,22);
   hM_bin51->SetBinContent(82,40);
   hM_bin51->SetBinContent(83,44);
   hM_bin51->SetBinContent(84,37);
   hM_bin51->SetBinContent(85,43);
   hM_bin51->SetBinContent(86,37);
   hM_bin51->SetBinContent(87,35);
   hM_bin51->SetBinContent(88,46);
   hM_bin51->SetBinContent(89,56);
   hM_bin51->SetBinContent(90,50);
   hM_bin51->SetBinContent(91,39);
   hM_bin51->SetBinContent(92,35);
   hM_bin51->SetBinContent(93,40);
   hM_bin51->SetBinContent(94,47);
   hM_bin51->SetBinContent(95,50);
   hM_bin51->SetBinContent(96,38);
   hM_bin51->SetBinContent(97,46);
   hM_bin51->SetBinContent(98,58);
   hM_bin51->SetBinContent(99,42);
   hM_bin51->SetBinContent(100,48);
   hM_bin51->SetBinContent(101,43426);
   hM_bin51->SetEntries(50687);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08578229,0.202622);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(35.7555);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-28.58291);
   fsig->SetParError(0,2.945141);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,554.9699);
   fsig->SetParError(1,7.5398);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1339.59);
   fsig->SetParError(2,109.6159);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,138.2131);
   fsig->SetParError(3,4.387621);
   fsig->SetParLimits(3,0,338);
   fsig->SetParameter(4,0.1438172);
   fsig->SetParError(4,0.0006876737);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.007223499);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin51->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin51");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 50687  ");
   text = ptstats->AddText("Mean  = 0.1761");
   text = ptstats->AddText("RMS   = 0.0619");
   text = ptstats->AddText("#chi^{2} / ndf = 35.76 / 28");
   text = ptstats->AddText("p0       = -28.58 #pm 2.95 ");
   text = ptstats->AddText("p1       =   555 #pm 7.5 ");
   text = ptstats->AddText("p2       = -1340 #pm 109.6 ");
   text = ptstats->AddText("p3       = 138.2 #pm 4.4 ");
   text = ptstats->AddText("p4       = 0.1438 #pm 0.0007 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00722 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin51->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin51);

   ci = TColor::GetColor("#0000ff");
   hM_bin51->SetMarkerColor(ci);
   hM_bin51->SetMarkerStyle(24);
   hM_bin51->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin51->GetXaxis()->SetLabelFont(42);
   hM_bin51->GetXaxis()->SetLabelSize(0.035);
   hM_bin51->GetXaxis()->SetTitleSize(0.035);
   hM_bin51->GetXaxis()->SetTitleFont(42);
   hM_bin51->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin51->GetYaxis()->SetLabelFont(42);
   hM_bin51->GetYaxis()->SetLabelSize(0.035);
   hM_bin51->GetYaxis()->SetTitleSize(0.035);
   hM_bin51->GetYaxis()->SetTitleFont(42);
   hM_bin51->GetZaxis()->SetLabelFont(42);
   hM_bin51->GetZaxis()->SetLabelSize(0.035);
   hM_bin51->GetZaxis()->SetTitleSize(0.035);
   hM_bin51->GetZaxis()->SetTitleFont(42);
   hM_bin51->Draw("e");
   
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
   fmb->SetParameter(0,-28.58291);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,554.9699);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1339.59);
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
   fpeak->SetParameter(0,138.2131);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1438172);
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
