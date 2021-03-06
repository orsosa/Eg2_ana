{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr  4 12:36:23 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-12.91946,0.350906,116.2751);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin15 = new TH1F("hM_bin15","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin15->SetBinContent(0,3448);
   hM_bin15->SetBinContent(16,1);
   hM_bin15->SetBinContent(17,2);
   hM_bin15->SetBinContent(19,4);
   hM_bin15->SetBinContent(20,1);
   hM_bin15->SetBinContent(21,5);
   hM_bin15->SetBinContent(22,1);
   hM_bin15->SetBinContent(23,1);
   hM_bin15->SetBinContent(24,3);
   hM_bin15->SetBinContent(25,2);
   hM_bin15->SetBinContent(26,2);
   hM_bin15->SetBinContent(27,4);
   hM_bin15->SetBinContent(28,1);
   hM_bin15->SetBinContent(29,3);
   hM_bin15->SetBinContent(30,4);
   hM_bin15->SetBinContent(31,3);
   hM_bin15->SetBinContent(32,4);
   hM_bin15->SetBinContent(33,5);
   hM_bin15->SetBinContent(34,6);
   hM_bin15->SetBinContent(35,4);
   hM_bin15->SetBinContent(37,4);
   hM_bin15->SetBinContent(38,11);
   hM_bin15->SetBinContent(39,11);
   hM_bin15->SetBinContent(40,7);
   hM_bin15->SetBinContent(41,19);
   hM_bin15->SetBinContent(42,26);
   hM_bin15->SetBinContent(43,24);
   hM_bin15->SetBinContent(44,16);
   hM_bin15->SetBinContent(45,46);
   hM_bin15->SetBinContent(46,55);
   hM_bin15->SetBinContent(47,72);
   hM_bin15->SetBinContent(48,68);
   hM_bin15->SetBinContent(49,68);
   hM_bin15->SetBinContent(50,82);
   hM_bin15->SetBinContent(51,89);
   hM_bin15->SetBinContent(52,65);
   hM_bin15->SetBinContent(53,79);
   hM_bin15->SetBinContent(54,55);
   hM_bin15->SetBinContent(55,63);
   hM_bin15->SetBinContent(56,65);
   hM_bin15->SetBinContent(57,49);
   hM_bin15->SetBinContent(58,41);
   hM_bin15->SetBinContent(59,32);
   hM_bin15->SetBinContent(60,25);
   hM_bin15->SetBinContent(61,20);
   hM_bin15->SetBinContent(62,19);
   hM_bin15->SetBinContent(63,20);
   hM_bin15->SetBinContent(64,19);
   hM_bin15->SetBinContent(65,16);
   hM_bin15->SetBinContent(66,7);
   hM_bin15->SetBinContent(67,16);
   hM_bin15->SetBinContent(68,11);
   hM_bin15->SetBinContent(69,13);
   hM_bin15->SetBinContent(70,8);
   hM_bin15->SetBinContent(71,7);
   hM_bin15->SetBinContent(72,13);
   hM_bin15->SetBinContent(73,12);
   hM_bin15->SetBinContent(74,10);
   hM_bin15->SetBinContent(75,13);
   hM_bin15->SetBinContent(76,15);
   hM_bin15->SetBinContent(77,15);
   hM_bin15->SetBinContent(78,7);
   hM_bin15->SetBinContent(79,8);
   hM_bin15->SetBinContent(80,17);
   hM_bin15->SetBinContent(81,11);
   hM_bin15->SetBinContent(82,15);
   hM_bin15->SetBinContent(83,20);
   hM_bin15->SetBinContent(84,19);
   hM_bin15->SetBinContent(85,17);
   hM_bin15->SetBinContent(86,16);
   hM_bin15->SetBinContent(87,17);
   hM_bin15->SetBinContent(88,13);
   hM_bin15->SetBinContent(89,12);
   hM_bin15->SetBinContent(90,17);
   hM_bin15->SetBinContent(91,10);
   hM_bin15->SetBinContent(92,24);
   hM_bin15->SetBinContent(93,15);
   hM_bin15->SetBinContent(94,21);
   hM_bin15->SetBinContent(95,18);
   hM_bin15->SetBinContent(96,19);
   hM_bin15->SetBinContent(97,33);
   hM_bin15->SetBinContent(98,30);
   hM_bin15->SetBinContent(99,24);
   hM_bin15->SetBinContent(100,32);
   hM_bin15->SetBinContent(101,22154);
   hM_bin15->SetEntries(27379);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08117246,0.1971059);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(50.43356);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-3.520816);
   fsig->SetParError(0,2.808009);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,66.32342);
   fsig->SetParError(1,20.70681);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-2.316119e-07);
   fsig->SetParError(2,515.0202);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,68.81474);
   fsig->SetParError(3,2.951792);
   fsig->SetParLimits(3,0,178);
   fsig->SetParameter(4,0.1385421);
   fsig->SetParError(4,0.0008400175);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0002527293);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin15->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin15");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 27379  ");
   text = ptstats->AddText("Mean  = 0.1737");
   text = ptstats->AddText("RMS   = 0.06399");
   text = ptstats->AddText("#chi^{2} / ndf = 50.43 / 27");
   text = ptstats->AddText("p0       = -3.521 #pm 2.808 ");
   text = ptstats->AddText("p1       = 66.32 #pm 20.71 ");
   text = ptstats->AddText("p2       = -2.316e-07 #pm 5.150e+02 ");
   text = ptstats->AddText("p3       = 68.81 #pm 2.95 ");
   text = ptstats->AddText("p4       = 0.1385 #pm 0.0008 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00025 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin15->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin15);

   ci = TColor::GetColor("#0000ff");
   hM_bin15->SetMarkerColor(ci);
   hM_bin15->SetMarkerStyle(24);
   hM_bin15->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin15->GetXaxis()->SetLabelFont(42);
   hM_bin15->GetXaxis()->SetLabelSize(0.035);
   hM_bin15->GetXaxis()->SetTitleSize(0.035);
   hM_bin15->GetXaxis()->SetTitleFont(42);
   hM_bin15->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin15->GetYaxis()->SetLabelFont(42);
   hM_bin15->GetYaxis()->SetLabelSize(0.035);
   hM_bin15->GetYaxis()->SetTitleSize(0.035);
   hM_bin15->GetYaxis()->SetTitleFont(42);
   hM_bin15->GetZaxis()->SetLabelFont(42);
   hM_bin15->GetZaxis()->SetLabelSize(0.035);
   hM_bin15->GetZaxis()->SetTitleSize(0.035);
   hM_bin15->GetZaxis()->SetTitleFont(42);
   hM_bin15->Draw("e");
   
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
   fmb->SetParameter(0,-3.520816);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,66.32342);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-2.316119e-07);
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
   fpeak->SetParameter(0,68.81474);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1385421);
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
