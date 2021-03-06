{
//=========Macro generated from canvas: c/The canvas
//=========  (Wed Oct  4 11:57:42 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.605,-1.108996,0.955,9.98096);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin8 = new TH1F("hM_bin8","M_{#gamma #gamma}",100,0.64,0.92);
   hM_bin8->SetBinContent(0,10);
   hM_bin8->SetBinContent(4,1);
   hM_bin8->SetBinContent(7,1);
   hM_bin8->SetBinContent(9,1);
   hM_bin8->SetBinContent(11,1);
   hM_bin8->SetBinContent(15,1);
   hM_bin8->SetBinContent(16,2);
   hM_bin8->SetBinContent(17,1);
   hM_bin8->SetBinContent(24,2);
   hM_bin8->SetBinContent(26,1);
   hM_bin8->SetBinContent(27,1);
   hM_bin8->SetBinContent(28,1);
   hM_bin8->SetBinContent(29,1);
   hM_bin8->SetBinContent(30,1);
   hM_bin8->SetBinContent(31,1);
   hM_bin8->SetBinContent(32,2);
   hM_bin8->SetBinContent(33,1);
   hM_bin8->SetBinContent(34,1);
   hM_bin8->SetBinContent(36,1);
   hM_bin8->SetBinContent(38,1);
   hM_bin8->SetBinContent(39,1);
   hM_bin8->SetBinContent(40,2);
   hM_bin8->SetBinContent(41,3);
   hM_bin8->SetBinContent(43,1);
   hM_bin8->SetBinContent(44,2);
   hM_bin8->SetBinContent(45,2);
   hM_bin8->SetBinContent(46,3);
   hM_bin8->SetBinContent(47,2);
   hM_bin8->SetBinContent(48,5);
   hM_bin8->SetBinContent(49,6);
   hM_bin8->SetBinContent(51,3);
   hM_bin8->SetBinContent(52,5);
   hM_bin8->SetBinContent(53,4);
   hM_bin8->SetBinContent(54,3);
   hM_bin8->SetBinContent(55,2);
   hM_bin8->SetBinContent(56,3);
   hM_bin8->SetBinContent(57,1);
   hM_bin8->SetBinContent(58,2);
   hM_bin8->SetBinContent(59,3);
   hM_bin8->SetBinContent(60,3);
   hM_bin8->SetBinContent(61,3);
   hM_bin8->SetBinContent(62,1);
   hM_bin8->SetBinContent(64,2);
   hM_bin8->SetBinContent(65,1);
   hM_bin8->SetBinContent(67,2);
   hM_bin8->SetBinContent(68,2);
   hM_bin8->SetBinContent(69,1);
   hM_bin8->SetBinContent(73,1);
   hM_bin8->SetBinContent(74,4);
   hM_bin8->SetBinContent(75,2);
   hM_bin8->SetBinContent(76,2);
   hM_bin8->SetBinContent(79,3);
   hM_bin8->SetBinContent(80,1);
   hM_bin8->SetBinContent(82,1);
   hM_bin8->SetBinContent(83,2);
   hM_bin8->SetBinContent(86,1);
   hM_bin8->SetBinContent(87,1);
   hM_bin8->SetBinContent(88,2);
   hM_bin8->SetBinContent(89,1);
   hM_bin8->SetBinContent(91,2);
   hM_bin8->SetBinContent(93,2);
   hM_bin8->SetBinContent(94,1);
   hM_bin8->SetBinContent(95,1);
   hM_bin8->SetBinContent(98,1);
   hM_bin8->SetBinContent(101,509);
   hM_bin8->SetEntries(637);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.74,0.82);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(14.24837);
   fsig->SetNDF(18);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-24.44107);
   fsig->SetParError(0,18.201);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,59.51267);
   fsig->SetParError(1,43.62936);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-32.80598);
   fsig->SetParError(2,28.60513);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,4.8);
   fsig->SetParError(3,8.396993);
   fsig->SetParLimits(3,0,12);
   fsig->SetParameter(4,0.135333);
   fsig->SetParError(4,1.414214);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.0241528);
   fsig->SetParError(5,0.007216291);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin8->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin8");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 637    ");
   text = ptstats->AddText("Mean  = 0.7917");
   text = ptstats->AddText("RMS   = 0.05868");
   text = ptstats->AddText("#chi^{2} / ndf = 14.25 / 18");
   text = ptstats->AddText("p0       = -24.44 #pm 18.20 ");
   text = ptstats->AddText("p1       = 59.51 #pm 43.63 ");
   text = ptstats->AddText("p2       = -32.81 #pm 28.61 ");
   text = ptstats->AddText("p3       =   4.8 #pm 8.4 ");
   text = ptstats->AddText("p4       = 0.1353 #pm 1.4142 ");
   text = ptstats->AddText("p5       = 0.02415 #pm 0.00722 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin8->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin8);

   ci = TColor::GetColor("#0000ff");
   hM_bin8->SetMarkerColor(ci);
   hM_bin8->SetMarkerStyle(24);
   hM_bin8->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin8->GetXaxis()->SetLabelFont(42);
   hM_bin8->GetXaxis()->SetLabelSize(0.035);
   hM_bin8->GetXaxis()->SetTitleSize(0.035);
   hM_bin8->GetXaxis()->SetTitleFont(42);
   hM_bin8->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin8->GetYaxis()->SetLabelFont(42);
   hM_bin8->GetYaxis()->SetLabelSize(0.035);
   hM_bin8->GetYaxis()->SetTitleSize(0.035);
   hM_bin8->GetYaxis()->SetTitleFont(42);
   hM_bin8->GetZaxis()->SetLabelFont(42);
   hM_bin8->GetZaxis()->SetLabelSize(0.035);
   hM_bin8->GetZaxis()->SetTitleSize(0.035);
   hM_bin8->GetZaxis()->SetTitleFont(42);
   hM_bin8->Draw("e");
   
   TF1 *fmb = new TF1("fmb","pol2",0.74,0.82);
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
   fmb->SetParameter(0,-24.44107);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,59.51267);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-32.80598);
   fmb->SetParError(2,0);
   fmb->SetParLimits(2,0,0);
   fmb->Draw("same");
   
   TF1 *fpeak = new TF1("fpeak","gaus",0.74,0.82);
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
   fpeak->SetParameter(0,4.8);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.135333);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.0241528);
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
