{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 15:02:32 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-23.7512,0.350906,213.7608);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin22 = new TH1F("hM_bin22","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin22->SetBinContent(0,3980);
   hM_bin22->SetBinContent(13,1);
   hM_bin22->SetBinContent(14,3);
   hM_bin22->SetBinContent(15,1);
   hM_bin22->SetBinContent(16,1);
   hM_bin22->SetBinContent(18,2);
   hM_bin22->SetBinContent(19,3);
   hM_bin22->SetBinContent(20,5);
   hM_bin22->SetBinContent(21,4);
   hM_bin22->SetBinContent(22,3);
   hM_bin22->SetBinContent(23,1);
   hM_bin22->SetBinContent(24,1);
   hM_bin22->SetBinContent(25,3);
   hM_bin22->SetBinContent(26,2);
   hM_bin22->SetBinContent(27,4);
   hM_bin22->SetBinContent(28,1);
   hM_bin22->SetBinContent(29,5);
   hM_bin22->SetBinContent(30,3);
   hM_bin22->SetBinContent(31,4);
   hM_bin22->SetBinContent(32,3);
   hM_bin22->SetBinContent(33,3);
   hM_bin22->SetBinContent(34,8);
   hM_bin22->SetBinContent(35,4);
   hM_bin22->SetBinContent(36,4);
   hM_bin22->SetBinContent(37,6);
   hM_bin22->SetBinContent(38,4);
   hM_bin22->SetBinContent(39,9);
   hM_bin22->SetBinContent(40,9);
   hM_bin22->SetBinContent(41,14);
   hM_bin22->SetBinContent(42,15);
   hM_bin22->SetBinContent(43,20);
   hM_bin22->SetBinContent(44,41);
   hM_bin22->SetBinContent(45,58);
   hM_bin22->SetBinContent(46,60);
   hM_bin22->SetBinContent(47,94);
   hM_bin22->SetBinContent(48,123);
   hM_bin22->SetBinContent(49,137);
   hM_bin22->SetBinContent(50,147);
   hM_bin22->SetBinContent(51,168);
   hM_bin22->SetBinContent(52,160);
   hM_bin22->SetBinContent(53,162);
   hM_bin22->SetBinContent(54,168);
   hM_bin22->SetBinContent(55,141);
   hM_bin22->SetBinContent(56,124);
   hM_bin22->SetBinContent(57,96);
   hM_bin22->SetBinContent(58,94);
   hM_bin22->SetBinContent(59,74);
   hM_bin22->SetBinContent(60,51);
   hM_bin22->SetBinContent(61,61);
   hM_bin22->SetBinContent(62,44);
   hM_bin22->SetBinContent(63,33);
   hM_bin22->SetBinContent(64,34);
   hM_bin22->SetBinContent(65,22);
   hM_bin22->SetBinContent(66,23);
   hM_bin22->SetBinContent(67,21);
   hM_bin22->SetBinContent(68,20);
   hM_bin22->SetBinContent(69,15);
   hM_bin22->SetBinContent(70,25);
   hM_bin22->SetBinContent(71,19);
   hM_bin22->SetBinContent(72,21);
   hM_bin22->SetBinContent(73,23);
   hM_bin22->SetBinContent(74,21);
   hM_bin22->SetBinContent(75,22);
   hM_bin22->SetBinContent(76,24);
   hM_bin22->SetBinContent(77,21);
   hM_bin22->SetBinContent(78,21);
   hM_bin22->SetBinContent(79,23);
   hM_bin22->SetBinContent(80,16);
   hM_bin22->SetBinContent(81,30);
   hM_bin22->SetBinContent(82,21);
   hM_bin22->SetBinContent(83,21);
   hM_bin22->SetBinContent(84,22);
   hM_bin22->SetBinContent(85,40);
   hM_bin22->SetBinContent(86,33);
   hM_bin22->SetBinContent(87,22);
   hM_bin22->SetBinContent(88,25);
   hM_bin22->SetBinContent(89,24);
   hM_bin22->SetBinContent(90,31);
   hM_bin22->SetBinContent(91,36);
   hM_bin22->SetBinContent(92,27);
   hM_bin22->SetBinContent(93,34);
   hM_bin22->SetBinContent(94,33);
   hM_bin22->SetBinContent(95,31);
   hM_bin22->SetBinContent(96,35);
   hM_bin22->SetBinContent(97,22);
   hM_bin22->SetBinContent(98,39);
   hM_bin22->SetBinContent(99,32);
   hM_bin22->SetBinContent(100,22);
   hM_bin22->SetBinContent(101,18431);
   hM_bin22->SetEntries(25544);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08561508,0.2015485);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(54.11344);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-14.11013);
   fsig->SetParError(0,3.401014);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,136.5353);
   fsig->SetParError(1,25.58872);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.495857e-06);
   fsig->SetParError(2,229.8041);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,143.6715);
   fsig->SetParError(3,4.090675);
   fsig->SetParLimits(3,0,336);
   fsig->SetParameter(4,0.1427296);
   fsig->SetParError(4,0.0005286367);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,6.159348e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin22->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin22");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 25544  ");
   text = ptstats->AddText("Mean  = 0.1725");
   text = ptstats->AddText("RMS   = 0.05773");
   text = ptstats->AddText("#chi^{2} / ndf = 54.11 / 27");
   text = ptstats->AddText("p0       = -14.11 #pm 3.40 ");
   text = ptstats->AddText("p1       = 136.5 #pm 25.6 ");
   text = ptstats->AddText("p2       = -1.496e-06 #pm 2.298e+02 ");
   text = ptstats->AddText("p3       = 143.7 #pm 4.1 ");
   text = ptstats->AddText("p4       = 0.1427 #pm 0.0005 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00006 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin22->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin22);

   ci = TColor::GetColor("#0000ff");
   hM_bin22->SetMarkerColor(ci);
   hM_bin22->SetMarkerStyle(24);
   hM_bin22->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin22->GetXaxis()->SetLabelFont(42);
   hM_bin22->GetXaxis()->SetLabelSize(0.035);
   hM_bin22->GetXaxis()->SetTitleSize(0.035);
   hM_bin22->GetXaxis()->SetTitleFont(42);
   hM_bin22->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin22->GetYaxis()->SetLabelFont(42);
   hM_bin22->GetYaxis()->SetLabelSize(0.035);
   hM_bin22->GetYaxis()->SetTitleSize(0.035);
   hM_bin22->GetYaxis()->SetTitleFont(42);
   hM_bin22->GetZaxis()->SetLabelFont(42);
   hM_bin22->GetZaxis()->SetLabelSize(0.035);
   hM_bin22->GetZaxis()->SetTitleSize(0.035);
   hM_bin22->GetZaxis()->SetTitleFont(42);
   hM_bin22->Draw("e");
   
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
   fmb->SetParameter(0,-14.11013);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,136.5353);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.495857e-06);
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
   fpeak->SetParameter(0,143.6715);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1427296);
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
