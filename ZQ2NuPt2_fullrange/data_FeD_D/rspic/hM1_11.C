{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 11 12:08:35 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-14.98849,0.350906,134.8964);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin11 = new TH1F("hM_bin11","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin11->SetBinContent(0,1746);
   hM_bin11->SetBinContent(15,1);
   hM_bin11->SetBinContent(16,3);
   hM_bin11->SetBinContent(17,4);
   hM_bin11->SetBinContent(18,5);
   hM_bin11->SetBinContent(19,2);
   hM_bin11->SetBinContent(20,2);
   hM_bin11->SetBinContent(21,3);
   hM_bin11->SetBinContent(22,1);
   hM_bin11->SetBinContent(23,1);
   hM_bin11->SetBinContent(24,1);
   hM_bin11->SetBinContent(25,1);
   hM_bin11->SetBinContent(26,1);
   hM_bin11->SetBinContent(27,2);
   hM_bin11->SetBinContent(29,8);
   hM_bin11->SetBinContent(30,1);
   hM_bin11->SetBinContent(31,4);
   hM_bin11->SetBinContent(33,8);
   hM_bin11->SetBinContent(34,1);
   hM_bin11->SetBinContent(35,3);
   hM_bin11->SetBinContent(36,8);
   hM_bin11->SetBinContent(37,9);
   hM_bin11->SetBinContent(38,6);
   hM_bin11->SetBinContent(39,11);
   hM_bin11->SetBinContent(40,13);
   hM_bin11->SetBinContent(41,25);
   hM_bin11->SetBinContent(42,32);
   hM_bin11->SetBinContent(43,34);
   hM_bin11->SetBinContent(44,42);
   hM_bin11->SetBinContent(45,50);
   hM_bin11->SetBinContent(46,72);
   hM_bin11->SetBinContent(47,57);
   hM_bin11->SetBinContent(48,81);
   hM_bin11->SetBinContent(49,90);
   hM_bin11->SetBinContent(50,100);
   hM_bin11->SetBinContent(51,98);
   hM_bin11->SetBinContent(52,102);
   hM_bin11->SetBinContent(53,104);
   hM_bin11->SetBinContent(54,75);
   hM_bin11->SetBinContent(55,70);
   hM_bin11->SetBinContent(56,65);
   hM_bin11->SetBinContent(57,62);
   hM_bin11->SetBinContent(58,52);
   hM_bin11->SetBinContent(59,32);
   hM_bin11->SetBinContent(60,43);
   hM_bin11->SetBinContent(61,35);
   hM_bin11->SetBinContent(62,22);
   hM_bin11->SetBinContent(63,28);
   hM_bin11->SetBinContent(64,18);
   hM_bin11->SetBinContent(65,16);
   hM_bin11->SetBinContent(66,16);
   hM_bin11->SetBinContent(67,11);
   hM_bin11->SetBinContent(68,16);
   hM_bin11->SetBinContent(69,8);
   hM_bin11->SetBinContent(70,6);
   hM_bin11->SetBinContent(71,12);
   hM_bin11->SetBinContent(72,6);
   hM_bin11->SetBinContent(73,14);
   hM_bin11->SetBinContent(74,3);
   hM_bin11->SetBinContent(75,11);
   hM_bin11->SetBinContent(76,14);
   hM_bin11->SetBinContent(77,9);
   hM_bin11->SetBinContent(78,13);
   hM_bin11->SetBinContent(79,5);
   hM_bin11->SetBinContent(80,10);
   hM_bin11->SetBinContent(81,10);
   hM_bin11->SetBinContent(82,13);
   hM_bin11->SetBinContent(83,6);
   hM_bin11->SetBinContent(84,12);
   hM_bin11->SetBinContent(85,12);
   hM_bin11->SetBinContent(86,8);
   hM_bin11->SetBinContent(87,14);
   hM_bin11->SetBinContent(88,12);
   hM_bin11->SetBinContent(89,20);
   hM_bin11->SetBinContent(90,10);
   hM_bin11->SetBinContent(91,17);
   hM_bin11->SetBinContent(92,13);
   hM_bin11->SetBinContent(93,14);
   hM_bin11->SetBinContent(94,18);
   hM_bin11->SetBinContent(95,17);
   hM_bin11->SetBinContent(96,19);
   hM_bin11->SetBinContent(97,23);
   hM_bin11->SetBinContent(98,16);
   hM_bin11->SetBinContent(99,21);
   hM_bin11->SetBinContent(100,20);
   hM_bin11->SetBinContent(101,42006);
   hM_bin11->SetEntries(45705);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07861564,0.1978578);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(25.80608);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-5.633444);
   fsig->SetParError(0,2.751322);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,95.95633);
   fsig->SetParError(1,21.42851);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.04038154);
   fsig->SetParError(2,15.86899);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,86.44852);
   fsig->SetParError(3,3.265626);
   fsig->SetParLimits(3,0,208);
   fsig->SetParameter(4,0.1375912);
   fsig->SetParError(4,0.0007790781);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.001160796);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin11->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin11");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 45705  ");
   text = ptstats->AddText("Mean  = 0.1632");
   text = ptstats->AddText("RMS   = 0.05809");
   text = ptstats->AddText("#chi^{2} / ndf = 25.81 / 28");
   text = ptstats->AddText("p0       = -5.633 #pm 2.751 ");
   text = ptstats->AddText("p1       = 95.96 #pm 21.43 ");
   text = ptstats->AddText("p2       = -0.04038 #pm 15.86899 ");
   text = ptstats->AddText("p3       = 86.45 #pm 3.27 ");
   text = ptstats->AddText("p4       = 0.1376 #pm 0.0008 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00116 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin11->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin11);

   ci = TColor::GetColor("#0000ff");
   hM_bin11->SetMarkerColor(ci);
   hM_bin11->SetMarkerStyle(24);
   hM_bin11->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin11->GetXaxis()->SetLabelFont(42);
   hM_bin11->GetXaxis()->SetLabelSize(0.035);
   hM_bin11->GetXaxis()->SetTitleSize(0.035);
   hM_bin11->GetXaxis()->SetTitleFont(42);
   hM_bin11->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin11->GetYaxis()->SetLabelFont(42);
   hM_bin11->GetYaxis()->SetLabelSize(0.035);
   hM_bin11->GetYaxis()->SetTitleSize(0.035);
   hM_bin11->GetYaxis()->SetTitleFont(42);
   hM_bin11->GetZaxis()->SetLabelFont(42);
   hM_bin11->GetZaxis()->SetLabelSize(0.035);
   hM_bin11->GetZaxis()->SetTitleSize(0.035);
   hM_bin11->GetZaxis()->SetTitleFont(42);
   hM_bin11->Draw("e");
   
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
   fmb->SetParameter(0,-5.633444);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,95.95633);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.04038154);
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
   fpeak->SetParameter(0,86.44852);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1375912);
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
