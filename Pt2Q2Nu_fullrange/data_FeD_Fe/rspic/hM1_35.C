{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 15:00:00 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-15.95156,0.350906,143.564);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin35 = new TH1F("hM_bin35","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin35->SetBinContent(0,9920);
   hM_bin35->SetBinContent(15,4);
   hM_bin35->SetBinContent(16,2);
   hM_bin35->SetBinContent(17,1);
   hM_bin35->SetBinContent(18,6);
   hM_bin35->SetBinContent(19,2);
   hM_bin35->SetBinContent(20,2);
   hM_bin35->SetBinContent(21,1);
   hM_bin35->SetBinContent(22,2);
   hM_bin35->SetBinContent(24,1);
   hM_bin35->SetBinContent(25,2);
   hM_bin35->SetBinContent(26,3);
   hM_bin35->SetBinContent(27,1);
   hM_bin35->SetBinContent(28,1);
   hM_bin35->SetBinContent(29,1);
   hM_bin35->SetBinContent(31,1);
   hM_bin35->SetBinContent(32,2);
   hM_bin35->SetBinContent(33,5);
   hM_bin35->SetBinContent(34,4);
   hM_bin35->SetBinContent(35,6);
   hM_bin35->SetBinContent(36,3);
   hM_bin35->SetBinContent(37,6);
   hM_bin35->SetBinContent(38,5);
   hM_bin35->SetBinContent(39,5);
   hM_bin35->SetBinContent(40,9);
   hM_bin35->SetBinContent(41,9);
   hM_bin35->SetBinContent(42,14);
   hM_bin35->SetBinContent(43,21);
   hM_bin35->SetBinContent(44,23);
   hM_bin35->SetBinContent(45,53);
   hM_bin35->SetBinContent(46,43);
   hM_bin35->SetBinContent(47,60);
   hM_bin35->SetBinContent(48,62);
   hM_bin35->SetBinContent(49,87);
   hM_bin35->SetBinContent(50,97);
   hM_bin35->SetBinContent(51,105);
   hM_bin35->SetBinContent(52,81);
   hM_bin35->SetBinContent(53,82);
   hM_bin35->SetBinContent(54,111);
   hM_bin35->SetBinContent(55,93);
   hM_bin35->SetBinContent(56,85);
   hM_bin35->SetBinContent(57,71);
   hM_bin35->SetBinContent(58,57);
   hM_bin35->SetBinContent(59,39);
   hM_bin35->SetBinContent(60,38);
   hM_bin35->SetBinContent(61,25);
   hM_bin35->SetBinContent(62,27);
   hM_bin35->SetBinContent(63,34);
   hM_bin35->SetBinContent(64,18);
   hM_bin35->SetBinContent(65,27);
   hM_bin35->SetBinContent(66,20);
   hM_bin35->SetBinContent(67,15);
   hM_bin35->SetBinContent(68,18);
   hM_bin35->SetBinContent(69,14);
   hM_bin35->SetBinContent(70,9);
   hM_bin35->SetBinContent(71,8);
   hM_bin35->SetBinContent(72,11);
   hM_bin35->SetBinContent(73,17);
   hM_bin35->SetBinContent(74,10);
   hM_bin35->SetBinContent(75,19);
   hM_bin35->SetBinContent(76,10);
   hM_bin35->SetBinContent(77,14);
   hM_bin35->SetBinContent(78,17);
   hM_bin35->SetBinContent(79,11);
   hM_bin35->SetBinContent(80,15);
   hM_bin35->SetBinContent(81,11);
   hM_bin35->SetBinContent(82,16);
   hM_bin35->SetBinContent(83,16);
   hM_bin35->SetBinContent(84,14);
   hM_bin35->SetBinContent(85,17);
   hM_bin35->SetBinContent(86,21);
   hM_bin35->SetBinContent(87,22);
   hM_bin35->SetBinContent(88,26);
   hM_bin35->SetBinContent(89,17);
   hM_bin35->SetBinContent(90,17);
   hM_bin35->SetBinContent(91,30);
   hM_bin35->SetBinContent(92,17);
   hM_bin35->SetBinContent(93,16);
   hM_bin35->SetBinContent(94,11);
   hM_bin35->SetBinContent(95,23);
   hM_bin35->SetBinContent(96,27);
   hM_bin35->SetBinContent(97,24);
   hM_bin35->SetBinContent(98,21);
   hM_bin35->SetBinContent(99,28);
   hM_bin35->SetBinContent(100,31);
   hM_bin35->SetBinContent(101,26705);
   hM_bin35->SetEntries(38675);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08463348,0.2005669);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(45.57707);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-9.186278);
   fsig->SetParError(0,2.700639);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,113.0367);
   fsig->SetParError(1,21.42743);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-2.57387e-07);
   fsig->SetParError(2,257.3954);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,84.02833);
   fsig->SetParError(3,3.273152);
   fsig->SetParLimits(3,0,222);
   fsig->SetParameter(4,0.1417792);
   fsig->SetParError(4,0.0007271684);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0001260641);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin35->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin35");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 38675  ");
   text = ptstats->AddText("Mean  = 0.1741");
   text = ptstats->AddText("RMS   = 0.06023");
   text = ptstats->AddText("#chi^{2} / ndf = 45.58 / 28");
   text = ptstats->AddText("p0       = -9.186 #pm 2.701 ");
   text = ptstats->AddText("p1       =   113 #pm 21.4 ");
   text = ptstats->AddText("p2       = -2.574e-07 #pm 2.574e+02 ");
   text = ptstats->AddText("p3       = 84.03 #pm 3.27 ");
   text = ptstats->AddText("p4       = 0.1418 #pm 0.0007 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00013 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin35->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin35);

   ci = TColor::GetColor("#0000ff");
   hM_bin35->SetMarkerColor(ci);
   hM_bin35->SetMarkerStyle(24);
   hM_bin35->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin35->GetXaxis()->SetLabelFont(42);
   hM_bin35->GetXaxis()->SetLabelSize(0.035);
   hM_bin35->GetXaxis()->SetTitleSize(0.035);
   hM_bin35->GetXaxis()->SetTitleFont(42);
   hM_bin35->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin35->GetYaxis()->SetLabelFont(42);
   hM_bin35->GetYaxis()->SetLabelSize(0.035);
   hM_bin35->GetYaxis()->SetTitleSize(0.035);
   hM_bin35->GetYaxis()->SetTitleFont(42);
   hM_bin35->GetZaxis()->SetLabelFont(42);
   hM_bin35->GetZaxis()->SetLabelSize(0.035);
   hM_bin35->GetZaxis()->SetTitleSize(0.035);
   hM_bin35->GetZaxis()->SetTitleFont(42);
   hM_bin35->Draw("e");
   
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
   fmb->SetParameter(0,-9.186278);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,113.0367);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-2.57387e-07);
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
   fpeak->SetParameter(0,84.02833);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1417792);
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
