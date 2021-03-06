{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 11 12:03:05 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-69.3649,0.350906,624.2841);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin49 = new TH1F("hM_bin49","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin49->SetBinContent(0,4272);
   hM_bin49->SetBinContent(14,2);
   hM_bin49->SetBinContent(15,13);
   hM_bin49->SetBinContent(16,10);
   hM_bin49->SetBinContent(17,30);
   hM_bin49->SetBinContent(18,14);
   hM_bin49->SetBinContent(19,12);
   hM_bin49->SetBinContent(20,12);
   hM_bin49->SetBinContent(21,15);
   hM_bin49->SetBinContent(22,10);
   hM_bin49->SetBinContent(23,13);
   hM_bin49->SetBinContent(24,9);
   hM_bin49->SetBinContent(25,13);
   hM_bin49->SetBinContent(26,19);
   hM_bin49->SetBinContent(27,12);
   hM_bin49->SetBinContent(28,13);
   hM_bin49->SetBinContent(29,16);
   hM_bin49->SetBinContent(30,15);
   hM_bin49->SetBinContent(31,19);
   hM_bin49->SetBinContent(32,18);
   hM_bin49->SetBinContent(33,21);
   hM_bin49->SetBinContent(34,22);
   hM_bin49->SetBinContent(35,26);
   hM_bin49->SetBinContent(36,26);
   hM_bin49->SetBinContent(37,27);
   hM_bin49->SetBinContent(38,23);
   hM_bin49->SetBinContent(39,48);
   hM_bin49->SetBinContent(40,55);
   hM_bin49->SetBinContent(41,76);
   hM_bin49->SetBinContent(42,96);
   hM_bin49->SetBinContent(43,108);
   hM_bin49->SetBinContent(44,124);
   hM_bin49->SetBinContent(45,168);
   hM_bin49->SetBinContent(46,218);
   hM_bin49->SetBinContent(47,277);
   hM_bin49->SetBinContent(48,311);
   hM_bin49->SetBinContent(49,399);
   hM_bin49->SetBinContent(50,417);
   hM_bin49->SetBinContent(51,488);
   hM_bin49->SetBinContent(52,475);
   hM_bin49->SetBinContent(53,506);
   hM_bin49->SetBinContent(54,434);
   hM_bin49->SetBinContent(55,424);
   hM_bin49->SetBinContent(56,368);
   hM_bin49->SetBinContent(57,322);
   hM_bin49->SetBinContent(58,299);
   hM_bin49->SetBinContent(59,257);
   hM_bin49->SetBinContent(60,224);
   hM_bin49->SetBinContent(61,222);
   hM_bin49->SetBinContent(62,171);
   hM_bin49->SetBinContent(63,156);
   hM_bin49->SetBinContent(64,138);
   hM_bin49->SetBinContent(65,142);
   hM_bin49->SetBinContent(66,119);
   hM_bin49->SetBinContent(67,133);
   hM_bin49->SetBinContent(68,100);
   hM_bin49->SetBinContent(69,117);
   hM_bin49->SetBinContent(70,104);
   hM_bin49->SetBinContent(71,122);
   hM_bin49->SetBinContent(72,115);
   hM_bin49->SetBinContent(73,128);
   hM_bin49->SetBinContent(74,134);
   hM_bin49->SetBinContent(75,119);
   hM_bin49->SetBinContent(76,135);
   hM_bin49->SetBinContent(77,138);
   hM_bin49->SetBinContent(78,131);
   hM_bin49->SetBinContent(79,141);
   hM_bin49->SetBinContent(80,132);
   hM_bin49->SetBinContent(81,141);
   hM_bin49->SetBinContent(82,155);
   hM_bin49->SetBinContent(83,146);
   hM_bin49->SetBinContent(84,132);
   hM_bin49->SetBinContent(85,153);
   hM_bin49->SetBinContent(86,155);
   hM_bin49->SetBinContent(87,164);
   hM_bin49->SetBinContent(88,132);
   hM_bin49->SetBinContent(89,145);
   hM_bin49->SetBinContent(90,154);
   hM_bin49->SetBinContent(91,179);
   hM_bin49->SetBinContent(92,154);
   hM_bin49->SetBinContent(93,164);
   hM_bin49->SetBinContent(94,176);
   hM_bin49->SetBinContent(95,171);
   hM_bin49->SetBinContent(96,165);
   hM_bin49->SetBinContent(97,189);
   hM_bin49->SetBinContent(98,161);
   hM_bin49->SetBinContent(99,168);
   hM_bin49->SetBinContent(100,182);
   hM_bin49->SetBinContent(101,41188);
   hM_bin49->SetEntries(57847);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08526044,0.2011939);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(59.01826);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-56.12415);
   fsig->SetParError(0,6.908687);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,806.4743);
   fsig->SetParError(1,55.67799);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-3.813875e-08);
   fsig->SetParError(2,589.262);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,386.7014);
   fsig->SetParError(3,7.550682);
   fsig->SetParLimits(3,0,1012);
   fsig->SetParameter(4,0.1425812);
   fsig->SetParError(4,0.0003796862);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,5.515333e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin49->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin49");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 57847  ");
   text = ptstats->AddText("Mean  = 0.1854");
   text = ptstats->AddText("RMS   = 0.06361");
   text = ptstats->AddText("#chi^{2} / ndf = 59.02 / 28");
   text = ptstats->AddText("p0       = -56.12 #pm 6.91 ");
   text = ptstats->AddText("p1       = 806.5 #pm 55.7 ");
   text = ptstats->AddText("p2       = -3.814e-08 #pm 5.893e+02 ");
   text = ptstats->AddText("p3       = 386.7 #pm 7.6 ");
   text = ptstats->AddText("p4       = 0.1426 #pm 0.0004 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00006 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin49->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin49);

   ci = TColor::GetColor("#0000ff");
   hM_bin49->SetMarkerColor(ci);
   hM_bin49->SetMarkerStyle(24);
   hM_bin49->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin49->GetXaxis()->SetLabelFont(42);
   hM_bin49->GetXaxis()->SetLabelSize(0.035);
   hM_bin49->GetXaxis()->SetTitleSize(0.035);
   hM_bin49->GetXaxis()->SetTitleFont(42);
   hM_bin49->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin49->GetYaxis()->SetLabelFont(42);
   hM_bin49->GetYaxis()->SetLabelSize(0.035);
   hM_bin49->GetYaxis()->SetTitleSize(0.035);
   hM_bin49->GetYaxis()->SetTitleFont(42);
   hM_bin49->GetZaxis()->SetLabelFont(42);
   hM_bin49->GetZaxis()->SetLabelSize(0.035);
   hM_bin49->GetZaxis()->SetTitleSize(0.035);
   hM_bin49->GetZaxis()->SetTitleFont(42);
   hM_bin49->Draw("e");
   
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
   fmb->SetParameter(0,-56.12415);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,806.4743);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-3.813875e-08);
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
   fpeak->SetParameter(0,386.7014);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1425812);
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
