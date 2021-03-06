{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:34:27 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-30.55039,0.350906,274.9534);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin39 = new TH1F("hM_bin39","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin39->SetBinContent(14,4);
   hM_bin39->SetBinContent(15,5);
   hM_bin39->SetBinContent(16,9);
   hM_bin39->SetBinContent(17,17);
   hM_bin39->SetBinContent(18,14);
   hM_bin39->SetBinContent(19,15);
   hM_bin39->SetBinContent(20,21);
   hM_bin39->SetBinContent(21,25);
   hM_bin39->SetBinContent(22,24);
   hM_bin39->SetBinContent(23,12);
   hM_bin39->SetBinContent(24,24);
   hM_bin39->SetBinContent(25,39);
   hM_bin39->SetBinContent(26,22);
   hM_bin39->SetBinContent(27,32);
   hM_bin39->SetBinContent(28,24);
   hM_bin39->SetBinContent(29,40);
   hM_bin39->SetBinContent(30,30);
   hM_bin39->SetBinContent(31,31);
   hM_bin39->SetBinContent(32,28);
   hM_bin39->SetBinContent(33,21);
   hM_bin39->SetBinContent(34,20);
   hM_bin39->SetBinContent(35,33);
   hM_bin39->SetBinContent(36,36);
   hM_bin39->SetBinContent(37,38);
   hM_bin39->SetBinContent(38,26);
   hM_bin39->SetBinContent(39,44);
   hM_bin39->SetBinContent(40,58);
   hM_bin39->SetBinContent(41,68);
   hM_bin39->SetBinContent(42,68);
   hM_bin39->SetBinContent(43,64);
   hM_bin39->SetBinContent(44,90);
   hM_bin39->SetBinContent(45,114);
   hM_bin39->SetBinContent(46,138);
   hM_bin39->SetBinContent(47,129);
   hM_bin39->SetBinContent(48,194);
   hM_bin39->SetBinContent(49,191);
   hM_bin39->SetBinContent(50,194);
   hM_bin39->SetBinContent(51,198);
   hM_bin39->SetBinContent(52,193);
   hM_bin39->SetBinContent(53,218);
   hM_bin39->SetBinContent(54,209);
   hM_bin39->SetBinContent(55,202);
   hM_bin39->SetBinContent(56,162);
   hM_bin39->SetBinContent(57,154);
   hM_bin39->SetBinContent(58,132);
   hM_bin39->SetBinContent(59,115);
   hM_bin39->SetBinContent(60,89);
   hM_bin39->SetBinContent(61,90);
   hM_bin39->SetBinContent(62,89);
   hM_bin39->SetBinContent(63,62);
   hM_bin39->SetBinContent(64,57);
   hM_bin39->SetBinContent(65,47);
   hM_bin39->SetBinContent(66,53);
   hM_bin39->SetBinContent(67,34);
   hM_bin39->SetBinContent(68,42);
   hM_bin39->SetBinContent(69,37);
   hM_bin39->SetBinContent(70,33);
   hM_bin39->SetBinContent(71,38);
   hM_bin39->SetBinContent(72,39);
   hM_bin39->SetBinContent(73,42);
   hM_bin39->SetBinContent(74,26);
   hM_bin39->SetBinContent(75,42);
   hM_bin39->SetBinContent(76,37);
   hM_bin39->SetBinContent(77,26);
   hM_bin39->SetBinContent(78,23);
   hM_bin39->SetBinContent(79,32);
   hM_bin39->SetBinContent(80,25);
   hM_bin39->SetBinContent(81,28);
   hM_bin39->SetBinContent(82,28);
   hM_bin39->SetBinContent(83,18);
   hM_bin39->SetBinContent(84,31);
   hM_bin39->SetBinContent(85,35);
   hM_bin39->SetBinContent(86,20);
   hM_bin39->SetBinContent(87,27);
   hM_bin39->SetBinContent(88,12);
   hM_bin39->SetBinContent(89,24);
   hM_bin39->SetBinContent(90,23);
   hM_bin39->SetBinContent(91,28);
   hM_bin39->SetBinContent(92,24);
   hM_bin39->SetBinContent(93,16);
   hM_bin39->SetBinContent(94,22);
   hM_bin39->SetBinContent(95,21);
   hM_bin39->SetBinContent(96,20);
   hM_bin39->SetBinContent(97,28);
   hM_bin39->SetBinContent(98,18);
   hM_bin39->SetBinContent(99,18);
   hM_bin39->SetBinContent(100,12);
   hM_bin39->SetBinContent(101,1018);
   hM_bin39->SetEntries(5959);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08140796,0.2003173);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(33.76708);
   fsig->SetNDF(29);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,25.12652);
   fsig->SetParError(0,1.190183);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,57.36366);
   fsig->SetParError(1,1.34141);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.03051008);
   fsig->SetParError(2,7119.15);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,175.6294);
   fsig->SetParError(3,5.052712);
   fsig->SetParLimits(3,0,436);
   fsig->SetParameter(4,0.1409624);
   fsig->SetParError(4,0.0005237038);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01940924);
   fsig->SetParError(5,0.0006500931);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin39->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin39");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 5959   ");
   text = ptstats->AddText("Mean  = 0.1505");
   text = ptstats->AddText("RMS   = 0.05663");
   text = ptstats->AddText("#chi^{2} / ndf = 33.77 / 29");
   text = ptstats->AddText("p0       = 25.13 #pm 1.19 ");
   text = ptstats->AddText("p1       = 57.36 #pm 1.34 ");
   text = ptstats->AddText("p2       = -0.03051 #pm 7119.15039 ");
   text = ptstats->AddText("p3       = 175.6 #pm 5.1 ");
   text = ptstats->AddText("p4       = 0.141 #pm 0.001 ");
   text = ptstats->AddText("p5       = 0.01941 #pm 0.00065 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin39->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin39);

   ci = TColor::GetColor("#0000ff");
   hM_bin39->SetMarkerColor(ci);
   hM_bin39->SetMarkerStyle(24);
   hM_bin39->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin39->GetXaxis()->SetLabelFont(42);
   hM_bin39->GetXaxis()->SetLabelSize(0.035);
   hM_bin39->GetXaxis()->SetTitleSize(0.035);
   hM_bin39->GetXaxis()->SetTitleFont(42);
   hM_bin39->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin39->GetYaxis()->SetLabelFont(42);
   hM_bin39->GetYaxis()->SetLabelSize(0.035);
   hM_bin39->GetYaxis()->SetTitleSize(0.035);
   hM_bin39->GetYaxis()->SetTitleFont(42);
   hM_bin39->GetZaxis()->SetLabelFont(42);
   hM_bin39->GetZaxis()->SetLabelSize(0.035);
   hM_bin39->GetZaxis()->SetTitleSize(0.035);
   hM_bin39->GetZaxis()->SetTitleFont(42);
   hM_bin39->Draw("e");
   
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
   fmb->SetParameter(0,25.12652);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,57.36366);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.03051008);
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
   fpeak->SetParameter(0,175.6294);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1409624);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.01940924);
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
