{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Jan 31 05:35:27 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-14.5753,0.350906,131.1777);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin44 = new TH1F("hM_bin44","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin44->SetBinContent(0,6048);
   hM_bin44->SetBinContent(17,1);
   hM_bin44->SetBinContent(18,3);
   hM_bin44->SetBinContent(19,4);
   hM_bin44->SetBinContent(20,2);
   hM_bin44->SetBinContent(21,8);
   hM_bin44->SetBinContent(22,6);
   hM_bin44->SetBinContent(24,3);
   hM_bin44->SetBinContent(25,4);
   hM_bin44->SetBinContent(26,4);
   hM_bin44->SetBinContent(27,5);
   hM_bin44->SetBinContent(29,5);
   hM_bin44->SetBinContent(30,4);
   hM_bin44->SetBinContent(31,7);
   hM_bin44->SetBinContent(32,5);
   hM_bin44->SetBinContent(33,7);
   hM_bin44->SetBinContent(34,6);
   hM_bin44->SetBinContent(35,4);
   hM_bin44->SetBinContent(36,7);
   hM_bin44->SetBinContent(37,9);
   hM_bin44->SetBinContent(38,11);
   hM_bin44->SetBinContent(39,19);
   hM_bin44->SetBinContent(40,13);
   hM_bin44->SetBinContent(41,14);
   hM_bin44->SetBinContent(42,16);
   hM_bin44->SetBinContent(43,19);
   hM_bin44->SetBinContent(44,37);
   hM_bin44->SetBinContent(45,37);
   hM_bin44->SetBinContent(46,53);
   hM_bin44->SetBinContent(47,54);
   hM_bin44->SetBinContent(48,55);
   hM_bin44->SetBinContent(49,81);
   hM_bin44->SetBinContent(50,78);
   hM_bin44->SetBinContent(51,101);
   hM_bin44->SetBinContent(52,72);
   hM_bin44->SetBinContent(53,88);
   hM_bin44->SetBinContent(54,82);
   hM_bin44->SetBinContent(55,79);
   hM_bin44->SetBinContent(56,83);
   hM_bin44->SetBinContent(57,57);
   hM_bin44->SetBinContent(58,59);
   hM_bin44->SetBinContent(59,44);
   hM_bin44->SetBinContent(60,36);
   hM_bin44->SetBinContent(61,44);
   hM_bin44->SetBinContent(62,33);
   hM_bin44->SetBinContent(63,27);
   hM_bin44->SetBinContent(64,14);
   hM_bin44->SetBinContent(65,15);
   hM_bin44->SetBinContent(66,18);
   hM_bin44->SetBinContent(67,14);
   hM_bin44->SetBinContent(68,13);
   hM_bin44->SetBinContent(69,21);
   hM_bin44->SetBinContent(70,9);
   hM_bin44->SetBinContent(71,7);
   hM_bin44->SetBinContent(72,15);
   hM_bin44->SetBinContent(73,14);
   hM_bin44->SetBinContent(74,15);
   hM_bin44->SetBinContent(75,7);
   hM_bin44->SetBinContent(76,15);
   hM_bin44->SetBinContent(77,10);
   hM_bin44->SetBinContent(78,15);
   hM_bin44->SetBinContent(79,19);
   hM_bin44->SetBinContent(80,18);
   hM_bin44->SetBinContent(81,11);
   hM_bin44->SetBinContent(82,11);
   hM_bin44->SetBinContent(83,18);
   hM_bin44->SetBinContent(84,11);
   hM_bin44->SetBinContent(85,19);
   hM_bin44->SetBinContent(86,14);
   hM_bin44->SetBinContent(87,16);
   hM_bin44->SetBinContent(88,15);
   hM_bin44->SetBinContent(89,16);
   hM_bin44->SetBinContent(90,16);
   hM_bin44->SetBinContent(91,17);
   hM_bin44->SetBinContent(92,18);
   hM_bin44->SetBinContent(93,16);
   hM_bin44->SetBinContent(94,23);
   hM_bin44->SetBinContent(95,24);
   hM_bin44->SetBinContent(96,11);
   hM_bin44->SetBinContent(97,26);
   hM_bin44->SetBinContent(98,27);
   hM_bin44->SetBinContent(99,15);
   hM_bin44->SetBinContent(100,22);
   hM_bin44->SetBinContent(101,36203);
   hM_bin44->SetEntries(44222);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.0846714,0.2006048);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(31.12845);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,2.167559);
   fsig->SetParError(0,3.381463);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,50.30309);
   fsig->SetParError(1,24.04535);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-4.834146e-08);
   fsig->SetParError(2,585.7269);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,75.30394);
   fsig->SetParError(3,3.238385);
   fsig->SetParLimits(3,0,202);
   fsig->SetParameter(4,0.142279);
   fsig->SetParError(4,0.0008771745);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0003870975);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin44->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin44");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 44222  ");
   text = ptstats->AddText("Mean  = 0.1692");
   text = ptstats->AddText("RMS   = 0.06078");
   text = ptstats->AddText("#chi^{2} / ndf = 31.13 / 28");
   text = ptstats->AddText("p0       = 2.168 #pm 3.381 ");
   text = ptstats->AddText("p1       =  50.3 #pm 24.0 ");
   text = ptstats->AddText("p2       = -4.834e-08 #pm 5.857e+02 ");
   text = ptstats->AddText("p3       =  75.3 #pm 3.2 ");
   text = ptstats->AddText("p4       = 0.1423 #pm 0.0009 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00039 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin44->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin44);

   ci = TColor::GetColor("#0000ff");
   hM_bin44->SetMarkerColor(ci);
   hM_bin44->SetMarkerStyle(24);
   hM_bin44->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin44->GetXaxis()->SetLabelFont(42);
   hM_bin44->GetXaxis()->SetLabelSize(0.035);
   hM_bin44->GetXaxis()->SetTitleSize(0.035);
   hM_bin44->GetXaxis()->SetTitleFont(42);
   hM_bin44->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin44->GetYaxis()->SetLabelFont(42);
   hM_bin44->GetYaxis()->SetLabelSize(0.035);
   hM_bin44->GetYaxis()->SetTitleSize(0.035);
   hM_bin44->GetYaxis()->SetTitleFont(42);
   hM_bin44->GetZaxis()->SetLabelFont(42);
   hM_bin44->GetZaxis()->SetLabelSize(0.035);
   hM_bin44->GetZaxis()->SetTitleSize(0.035);
   hM_bin44->GetZaxis()->SetTitleFont(42);
   hM_bin44->Draw("e");
   
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
   fmb->SetParameter(0,2.167559);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,50.30309);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-4.834146e-08);
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
   fpeak->SetParameter(0,75.30394);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.142279);
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
