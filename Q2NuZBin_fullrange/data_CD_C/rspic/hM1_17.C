{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr  4 12:31:23 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-3.9375,0.350906,35.4375);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin17 = new TH1F("hM_bin17","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin17->SetBinContent(0,3177);
   hM_bin17->SetBinContent(18,2);
   hM_bin17->SetBinContent(19,1);
   hM_bin17->SetBinContent(20,3);
   hM_bin17->SetBinContent(21,1);
   hM_bin17->SetBinContent(22,1);
   hM_bin17->SetBinContent(23,2);
   hM_bin17->SetBinContent(24,1);
   hM_bin17->SetBinContent(25,1);
   hM_bin17->SetBinContent(27,2);
   hM_bin17->SetBinContent(28,1);
   hM_bin17->SetBinContent(29,3);
   hM_bin17->SetBinContent(30,2);
   hM_bin17->SetBinContent(32,4);
   hM_bin17->SetBinContent(33,2);
   hM_bin17->SetBinContent(34,2);
   hM_bin17->SetBinContent(35,1);
   hM_bin17->SetBinContent(36,1);
   hM_bin17->SetBinContent(37,2);
   hM_bin17->SetBinContent(38,2);
   hM_bin17->SetBinContent(39,4);
   hM_bin17->SetBinContent(40,4);
   hM_bin17->SetBinContent(41,4);
   hM_bin17->SetBinContent(42,7);
   hM_bin17->SetBinContent(43,10);
   hM_bin17->SetBinContent(44,4);
   hM_bin17->SetBinContent(45,9);
   hM_bin17->SetBinContent(46,9);
   hM_bin17->SetBinContent(47,11);
   hM_bin17->SetBinContent(48,8);
   hM_bin17->SetBinContent(49,14);
   hM_bin17->SetBinContent(50,25);
   hM_bin17->SetBinContent(51,18);
   hM_bin17->SetBinContent(52,21);
   hM_bin17->SetBinContent(53,15);
   hM_bin17->SetBinContent(54,16);
   hM_bin17->SetBinContent(55,15);
   hM_bin17->SetBinContent(56,18);
   hM_bin17->SetBinContent(57,15);
   hM_bin17->SetBinContent(58,16);
   hM_bin17->SetBinContent(59,11);
   hM_bin17->SetBinContent(60,7);
   hM_bin17->SetBinContent(61,10);
   hM_bin17->SetBinContent(62,6);
   hM_bin17->SetBinContent(63,9);
   hM_bin17->SetBinContent(64,12);
   hM_bin17->SetBinContent(65,5);
   hM_bin17->SetBinContent(66,6);
   hM_bin17->SetBinContent(67,2);
   hM_bin17->SetBinContent(68,5);
   hM_bin17->SetBinContent(70,3);
   hM_bin17->SetBinContent(71,3);
   hM_bin17->SetBinContent(72,2);
   hM_bin17->SetBinContent(74,3);
   hM_bin17->SetBinContent(75,3);
   hM_bin17->SetBinContent(76,1);
   hM_bin17->SetBinContent(77,3);
   hM_bin17->SetBinContent(78,2);
   hM_bin17->SetBinContent(79,3);
   hM_bin17->SetBinContent(80,4);
   hM_bin17->SetBinContent(81,6);
   hM_bin17->SetBinContent(82,4);
   hM_bin17->SetBinContent(83,3);
   hM_bin17->SetBinContent(84,4);
   hM_bin17->SetBinContent(85,5);
   hM_bin17->SetBinContent(86,2);
   hM_bin17->SetBinContent(88,1);
   hM_bin17->SetBinContent(89,2);
   hM_bin17->SetBinContent(90,2);
   hM_bin17->SetBinContent(91,2);
   hM_bin17->SetBinContent(92,1);
   hM_bin17->SetBinContent(93,7);
   hM_bin17->SetBinContent(94,7);
   hM_bin17->SetBinContent(95,4);
   hM_bin17->SetBinContent(96,4);
   hM_bin17->SetBinContent(97,6);
   hM_bin17->SetBinContent(98,4);
   hM_bin17->SetBinContent(99,3);
   hM_bin17->SetBinContent(100,5);
   hM_bin17->SetBinContent(101,18854);
   hM_bin17->SetEntries(22480);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08218075,0.2071478);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(22.89477);
   fsig->SetNDF(29);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-13.06484);
   fsig->SetParError(0,11.63162);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,233.4805);
   fsig->SetParError(1,186.487);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-767.6155);
   fsig->SetParError(2,642.7107);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,12.4875);
   fsig->SetParError(3,2.816193);
   fsig->SetParLimits(3,0,50);
   fsig->SetParameter(4,0.1443224);
   fsig->SetParError(4,0.002393657);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.006575881);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin17->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin17");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 22480  ");
   text = ptstats->AddText("Mean  = 0.1644");
   text = ptstats->AddText("RMS   = 0.0613");
   text = ptstats->AddText("#chi^{2} / ndf = 22.89 / 29");
   text = ptstats->AddText("p0       = -13.06 #pm 11.63 ");
   text = ptstats->AddText("p1       = 233.5 #pm 186.5 ");
   text = ptstats->AddText("p2       = -767.6 #pm 642.7 ");
   text = ptstats->AddText("p3       = 12.49 #pm 2.82 ");
   text = ptstats->AddText("p4       = 0.1443 #pm 0.0024 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00658 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin17->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin17);

   ci = TColor::GetColor("#0000ff");
   hM_bin17->SetMarkerColor(ci);
   hM_bin17->SetMarkerStyle(24);
   hM_bin17->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin17->GetXaxis()->SetLabelFont(42);
   hM_bin17->GetXaxis()->SetLabelSize(0.035);
   hM_bin17->GetXaxis()->SetTitleSize(0.035);
   hM_bin17->GetXaxis()->SetTitleFont(42);
   hM_bin17->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin17->GetYaxis()->SetLabelFont(42);
   hM_bin17->GetYaxis()->SetLabelSize(0.035);
   hM_bin17->GetYaxis()->SetTitleSize(0.035);
   hM_bin17->GetYaxis()->SetTitleFont(42);
   hM_bin17->GetZaxis()->SetLabelFont(42);
   hM_bin17->GetZaxis()->SetLabelSize(0.035);
   hM_bin17->GetZaxis()->SetTitleSize(0.035);
   hM_bin17->GetZaxis()->SetTitleFont(42);
   hM_bin17->Draw("e");
   
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
   fmb->SetParameter(0,-13.06484);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,233.4805);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-767.6155);
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
   fpeak->SetParameter(0,12.4875);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1443224);
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
