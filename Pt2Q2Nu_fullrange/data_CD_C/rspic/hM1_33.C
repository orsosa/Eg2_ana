{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 14:54:47 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-25.38591,0.350906,228.4731);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin33 = new TH1F("hM_bin33","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin33->SetBinContent(0,1874);
   hM_bin33->SetBinContent(13,1);
   hM_bin33->SetBinContent(14,1);
   hM_bin33->SetBinContent(15,5);
   hM_bin33->SetBinContent(16,2);
   hM_bin33->SetBinContent(17,6);
   hM_bin33->SetBinContent(18,4);
   hM_bin33->SetBinContent(19,3);
   hM_bin33->SetBinContent(20,4);
   hM_bin33->SetBinContent(21,7);
   hM_bin33->SetBinContent(22,2);
   hM_bin33->SetBinContent(23,2);
   hM_bin33->SetBinContent(24,2);
   hM_bin33->SetBinContent(25,2);
   hM_bin33->SetBinContent(26,4);
   hM_bin33->SetBinContent(27,4);
   hM_bin33->SetBinContent(28,6);
   hM_bin33->SetBinContent(29,6);
   hM_bin33->SetBinContent(30,1);
   hM_bin33->SetBinContent(31,10);
   hM_bin33->SetBinContent(32,7);
   hM_bin33->SetBinContent(33,3);
   hM_bin33->SetBinContent(34,9);
   hM_bin33->SetBinContent(35,7);
   hM_bin33->SetBinContent(36,12);
   hM_bin33->SetBinContent(37,10);
   hM_bin33->SetBinContent(38,15);
   hM_bin33->SetBinContent(39,15);
   hM_bin33->SetBinContent(40,16);
   hM_bin33->SetBinContent(41,18);
   hM_bin33->SetBinContent(42,32);
   hM_bin33->SetBinContent(43,37);
   hM_bin33->SetBinContent(44,43);
   hM_bin33->SetBinContent(45,55);
   hM_bin33->SetBinContent(46,67);
   hM_bin33->SetBinContent(47,94);
   hM_bin33->SetBinContent(48,125);
   hM_bin33->SetBinContent(49,138);
   hM_bin33->SetBinContent(50,149);
   hM_bin33->SetBinContent(51,147);
   hM_bin33->SetBinContent(52,158);
   hM_bin33->SetBinContent(53,180);
   hM_bin33->SetBinContent(54,147);
   hM_bin33->SetBinContent(55,156);
   hM_bin33->SetBinContent(56,129);
   hM_bin33->SetBinContent(57,130);
   hM_bin33->SetBinContent(58,119);
   hM_bin33->SetBinContent(59,100);
   hM_bin33->SetBinContent(60,80);
   hM_bin33->SetBinContent(61,68);
   hM_bin33->SetBinContent(62,72);
   hM_bin33->SetBinContent(63,54);
   hM_bin33->SetBinContent(64,52);
   hM_bin33->SetBinContent(65,35);
   hM_bin33->SetBinContent(66,41);
   hM_bin33->SetBinContent(67,35);
   hM_bin33->SetBinContent(68,38);
   hM_bin33->SetBinContent(69,19);
   hM_bin33->SetBinContent(70,30);
   hM_bin33->SetBinContent(71,42);
   hM_bin33->SetBinContent(72,31);
   hM_bin33->SetBinContent(73,33);
   hM_bin33->SetBinContent(74,38);
   hM_bin33->SetBinContent(75,30);
   hM_bin33->SetBinContent(76,31);
   hM_bin33->SetBinContent(77,34);
   hM_bin33->SetBinContent(78,23);
   hM_bin33->SetBinContent(79,30);
   hM_bin33->SetBinContent(80,26);
   hM_bin33->SetBinContent(81,37);
   hM_bin33->SetBinContent(82,31);
   hM_bin33->SetBinContent(83,39);
   hM_bin33->SetBinContent(84,47);
   hM_bin33->SetBinContent(85,24);
   hM_bin33->SetBinContent(86,41);
   hM_bin33->SetBinContent(87,50);
   hM_bin33->SetBinContent(88,34);
   hM_bin33->SetBinContent(89,41);
   hM_bin33->SetBinContent(90,47);
   hM_bin33->SetBinContent(91,46);
   hM_bin33->SetBinContent(92,35);
   hM_bin33->SetBinContent(93,26);
   hM_bin33->SetBinContent(94,39);
   hM_bin33->SetBinContent(95,45);
   hM_bin33->SetBinContent(96,25);
   hM_bin33->SetBinContent(97,56);
   hM_bin33->SetBinContent(98,46);
   hM_bin33->SetBinContent(99,35);
   hM_bin33->SetBinContent(100,39);
   hM_bin33->SetBinContent(101,14553);
   hM_bin33->SetEntries(20242);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08628905,0.2022225);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(27.96657);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-8.038743);
   fsig->SetParError(0,4.581213);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,167.1465);
   fsig->SetParError(1,33.72073);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.068731e-05);
   fsig->SetParError(2,6150.145);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,144.1178);
   fsig->SetParError(3,4.454398);
   fsig->SetParLimits(3,0,360);
   fsig->SetParameter(4,0.1443888);
   fsig->SetParError(4,0.0006366465);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0004563445);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin33->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin33");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 20242  ");
   text = ptstats->AddText("Mean  = 0.1767");
   text = ptstats->AddText("RMS   = 0.05987");
   text = ptstats->AddText("#chi^{2} / ndf = 27.97 / 27");
   text = ptstats->AddText("p0       = -8.039 #pm 4.581 ");
   text = ptstats->AddText("p1       = 167.1 #pm 33.7 ");
   text = ptstats->AddText("p2       = -1.069e-05 #pm 6.150e+03 ");
   text = ptstats->AddText("p3       = 144.1 #pm 4.5 ");
   text = ptstats->AddText("p4       = 0.1444 #pm 0.0006 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00046 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin33->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin33);

   ci = TColor::GetColor("#0000ff");
   hM_bin33->SetMarkerColor(ci);
   hM_bin33->SetMarkerStyle(24);
   hM_bin33->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin33->GetXaxis()->SetLabelFont(42);
   hM_bin33->GetXaxis()->SetLabelSize(0.035);
   hM_bin33->GetXaxis()->SetTitleSize(0.035);
   hM_bin33->GetXaxis()->SetTitleFont(42);
   hM_bin33->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin33->GetYaxis()->SetLabelFont(42);
   hM_bin33->GetYaxis()->SetLabelSize(0.035);
   hM_bin33->GetYaxis()->SetTitleSize(0.035);
   hM_bin33->GetYaxis()->SetTitleFont(42);
   hM_bin33->GetZaxis()->SetLabelFont(42);
   hM_bin33->GetZaxis()->SetLabelSize(0.035);
   hM_bin33->GetZaxis()->SetTitleSize(0.035);
   hM_bin33->GetZaxis()->SetTitleFont(42);
   hM_bin33->Draw("e");
   
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
   fmb->SetParameter(0,-8.038743);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,167.1465);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.068731e-05);
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
   fpeak->SetParameter(0,144.1178);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1443888);
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
