{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr  4 12:31:33 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-28.51378,0.350906,256.624);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin21 = new TH1F("hM_bin21","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin21->SetBinContent(0,2068);
   hM_bin21->SetBinContent(15,5);
   hM_bin21->SetBinContent(16,4);
   hM_bin21->SetBinContent(17,4);
   hM_bin21->SetBinContent(18,1);
   hM_bin21->SetBinContent(19,7);
   hM_bin21->SetBinContent(20,3);
   hM_bin21->SetBinContent(21,4);
   hM_bin21->SetBinContent(22,5);
   hM_bin21->SetBinContent(23,6);
   hM_bin21->SetBinContent(24,7);
   hM_bin21->SetBinContent(25,3);
   hM_bin21->SetBinContent(26,4);
   hM_bin21->SetBinContent(27,7);
   hM_bin21->SetBinContent(28,4);
   hM_bin21->SetBinContent(29,3);
   hM_bin21->SetBinContent(30,4);
   hM_bin21->SetBinContent(31,9);
   hM_bin21->SetBinContent(32,7);
   hM_bin21->SetBinContent(33,6);
   hM_bin21->SetBinContent(34,3);
   hM_bin21->SetBinContent(35,5);
   hM_bin21->SetBinContent(36,4);
   hM_bin21->SetBinContent(37,9);
   hM_bin21->SetBinContent(38,14);
   hM_bin21->SetBinContent(39,15);
   hM_bin21->SetBinContent(40,11);
   hM_bin21->SetBinContent(41,26);
   hM_bin21->SetBinContent(42,20);
   hM_bin21->SetBinContent(43,42);
   hM_bin21->SetBinContent(44,61);
   hM_bin21->SetBinContent(45,87);
   hM_bin21->SetBinContent(46,91);
   hM_bin21->SetBinContent(47,94);
   hM_bin21->SetBinContent(48,150);
   hM_bin21->SetBinContent(49,145);
   hM_bin21->SetBinContent(50,173);
   hM_bin21->SetBinContent(51,203);
   hM_bin21->SetBinContent(52,172);
   hM_bin21->SetBinContent(53,173);
   hM_bin21->SetBinContent(54,194);
   hM_bin21->SetBinContent(55,163);
   hM_bin21->SetBinContent(56,142);
   hM_bin21->SetBinContent(57,125);
   hM_bin21->SetBinContent(58,114);
   hM_bin21->SetBinContent(59,91);
   hM_bin21->SetBinContent(60,95);
   hM_bin21->SetBinContent(61,67);
   hM_bin21->SetBinContent(62,68);
   hM_bin21->SetBinContent(63,60);
   hM_bin21->SetBinContent(64,41);
   hM_bin21->SetBinContent(65,29);
   hM_bin21->SetBinContent(66,44);
   hM_bin21->SetBinContent(67,25);
   hM_bin21->SetBinContent(68,33);
   hM_bin21->SetBinContent(69,38);
   hM_bin21->SetBinContent(70,33);
   hM_bin21->SetBinContent(71,27);
   hM_bin21->SetBinContent(72,23);
   hM_bin21->SetBinContent(73,25);
   hM_bin21->SetBinContent(74,42);
   hM_bin21->SetBinContent(75,41);
   hM_bin21->SetBinContent(76,32);
   hM_bin21->SetBinContent(77,54);
   hM_bin21->SetBinContent(78,40);
   hM_bin21->SetBinContent(79,35);
   hM_bin21->SetBinContent(80,37);
   hM_bin21->SetBinContent(81,32);
   hM_bin21->SetBinContent(82,35);
   hM_bin21->SetBinContent(83,36);
   hM_bin21->SetBinContent(84,36);
   hM_bin21->SetBinContent(85,40);
   hM_bin21->SetBinContent(86,40);
   hM_bin21->SetBinContent(87,30);
   hM_bin21->SetBinContent(88,25);
   hM_bin21->SetBinContent(89,43);
   hM_bin21->SetBinContent(90,42);
   hM_bin21->SetBinContent(91,43);
   hM_bin21->SetBinContent(92,29);
   hM_bin21->SetBinContent(93,47);
   hM_bin21->SetBinContent(94,52);
   hM_bin21->SetBinContent(95,43);
   hM_bin21->SetBinContent(96,38);
   hM_bin21->SetBinContent(97,53);
   hM_bin21->SetBinContent(98,51);
   hM_bin21->SetBinContent(99,51);
   hM_bin21->SetBinContent(100,48);
   hM_bin21->SetBinContent(101,13266);
   hM_bin21->SetEntries(19457);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.0850706,0.201004);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(50.58293);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-17.57571);
   fsig->SetParError(0,3.606405);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,223.1243);
   fsig->SetParError(1,29.41053);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-2.768857e-06);
   fsig->SetParError(2,395.3653);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,163.2539);
   fsig->SetParError(3,4.543407);
   fsig->SetParLimits(3,0,406);
   fsig->SetParameter(4,0.1423769);
   fsig->SetParError(4,0.0005420283);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0001239496);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin21->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin21");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 19457  ");
   text = ptstats->AddText("Mean  =  0.176");
   text = ptstats->AddText("RMS   = 0.0603");
   text = ptstats->AddText("#chi^{2} / ndf = 50.58 / 28");
   text = ptstats->AddText("p0       = -17.58 #pm 3.61 ");
   text = ptstats->AddText("p1       = 223.1 #pm 29.4 ");
   text = ptstats->AddText("p2       = -2.769e-06 #pm 3.954e+02 ");
   text = ptstats->AddText("p3       = 163.3 #pm 4.5 ");
   text = ptstats->AddText("p4       = 0.1424 #pm 0.0005 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00012 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin21->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin21);

   ci = TColor::GetColor("#0000ff");
   hM_bin21->SetMarkerColor(ci);
   hM_bin21->SetMarkerStyle(24);
   hM_bin21->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin21->GetXaxis()->SetLabelFont(42);
   hM_bin21->GetXaxis()->SetLabelSize(0.035);
   hM_bin21->GetXaxis()->SetTitleSize(0.035);
   hM_bin21->GetXaxis()->SetTitleFont(42);
   hM_bin21->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin21->GetYaxis()->SetLabelFont(42);
   hM_bin21->GetYaxis()->SetLabelSize(0.035);
   hM_bin21->GetYaxis()->SetTitleSize(0.035);
   hM_bin21->GetYaxis()->SetTitleFont(42);
   hM_bin21->GetZaxis()->SetLabelFont(42);
   hM_bin21->GetZaxis()->SetLabelSize(0.035);
   hM_bin21->GetZaxis()->SetTitleSize(0.035);
   hM_bin21->GetZaxis()->SetTitleFont(42);
   hM_bin21->Draw("e");
   
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
   fmb->SetParameter(0,-17.57571);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,223.1243);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-2.768857e-06);
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
   fpeak->SetParameter(0,163.2539);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1423769);
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
