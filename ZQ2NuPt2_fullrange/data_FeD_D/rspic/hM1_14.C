{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 11 12:08:49 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-36.91785,0.350906,332.2606);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin14 = new TH1F("hM_bin14","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin14->SetBinContent(0,3270);
   hM_bin14->SetBinContent(14,3);
   hM_bin14->SetBinContent(15,2);
   hM_bin14->SetBinContent(16,6);
   hM_bin14->SetBinContent(17,8);
   hM_bin14->SetBinContent(18,5);
   hM_bin14->SetBinContent(19,8);
   hM_bin14->SetBinContent(20,6);
   hM_bin14->SetBinContent(21,5);
   hM_bin14->SetBinContent(22,7);
   hM_bin14->SetBinContent(23,5);
   hM_bin14->SetBinContent(24,8);
   hM_bin14->SetBinContent(25,5);
   hM_bin14->SetBinContent(26,6);
   hM_bin14->SetBinContent(27,8);
   hM_bin14->SetBinContent(28,8);
   hM_bin14->SetBinContent(29,8);
   hM_bin14->SetBinContent(30,9);
   hM_bin14->SetBinContent(31,17);
   hM_bin14->SetBinContent(32,13);
   hM_bin14->SetBinContent(33,12);
   hM_bin14->SetBinContent(34,10);
   hM_bin14->SetBinContent(35,17);
   hM_bin14->SetBinContent(36,12);
   hM_bin14->SetBinContent(37,19);
   hM_bin14->SetBinContent(38,27);
   hM_bin14->SetBinContent(39,35);
   hM_bin14->SetBinContent(40,40);
   hM_bin14->SetBinContent(41,47);
   hM_bin14->SetBinContent(42,49);
   hM_bin14->SetBinContent(43,83);
   hM_bin14->SetBinContent(44,116);
   hM_bin14->SetBinContent(45,134);
   hM_bin14->SetBinContent(46,165);
   hM_bin14->SetBinContent(47,202);
   hM_bin14->SetBinContent(48,215);
   hM_bin14->SetBinContent(49,261);
   hM_bin14->SetBinContent(50,265);
   hM_bin14->SetBinContent(51,260);
   hM_bin14->SetBinContent(52,240);
   hM_bin14->SetBinContent(53,249);
   hM_bin14->SetBinContent(54,204);
   hM_bin14->SetBinContent(55,189);
   hM_bin14->SetBinContent(56,183);
   hM_bin14->SetBinContent(57,151);
   hM_bin14->SetBinContent(58,173);
   hM_bin14->SetBinContent(59,83);
   hM_bin14->SetBinContent(60,87);
   hM_bin14->SetBinContent(61,97);
   hM_bin14->SetBinContent(62,59);
   hM_bin14->SetBinContent(63,69);
   hM_bin14->SetBinContent(64,62);
   hM_bin14->SetBinContent(65,60);
   hM_bin14->SetBinContent(66,52);
   hM_bin14->SetBinContent(67,45);
   hM_bin14->SetBinContent(68,49);
   hM_bin14->SetBinContent(69,47);
   hM_bin14->SetBinContent(70,47);
   hM_bin14->SetBinContent(71,46);
   hM_bin14->SetBinContent(72,54);
   hM_bin14->SetBinContent(73,55);
   hM_bin14->SetBinContent(74,48);
   hM_bin14->SetBinContent(75,52);
   hM_bin14->SetBinContent(76,57);
   hM_bin14->SetBinContent(77,56);
   hM_bin14->SetBinContent(78,50);
   hM_bin14->SetBinContent(79,58);
   hM_bin14->SetBinContent(80,64);
   hM_bin14->SetBinContent(81,67);
   hM_bin14->SetBinContent(82,63);
   hM_bin14->SetBinContent(83,61);
   hM_bin14->SetBinContent(84,55);
   hM_bin14->SetBinContent(85,74);
   hM_bin14->SetBinContent(86,61);
   hM_bin14->SetBinContent(87,79);
   hM_bin14->SetBinContent(88,87);
   hM_bin14->SetBinContent(89,78);
   hM_bin14->SetBinContent(90,83);
   hM_bin14->SetBinContent(91,70);
   hM_bin14->SetBinContent(92,93);
   hM_bin14->SetBinContent(93,94);
   hM_bin14->SetBinContent(94,90);
   hM_bin14->SetBinContent(95,91);
   hM_bin14->SetBinContent(96,93);
   hM_bin14->SetBinContent(97,105);
   hM_bin14->SetBinContent(98,90);
   hM_bin14->SetBinContent(99,108);
   hM_bin14->SetBinContent(100,122);
   hM_bin14->SetBinContent(101,49685);
   hM_bin14->SetEntries(59411);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08008772,0.1960212);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(60.88435);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-20.78107);
   fsig->SetParError(0,4.85634);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,333.0014);
   fsig->SetParError(1,38.22525);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-9.539217e-07);
   fsig->SetParError(2,451.1989);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,219.4001);
   fsig->SetParError(3,5.321801);
   fsig->SetParLimits(3,0,530);
   fsig->SetParameter(4,0.1375441);
   fsig->SetParError(4,0.0004812295);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,7.112894e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin14->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin14");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 59411  ");
   text = ptstats->AddText("Mean  = 0.1816");
   text = ptstats->AddText("RMS   = 0.06606");
   text = ptstats->AddText("#chi^{2} / ndf = 60.88 / 28");
   text = ptstats->AddText("p0       = -20.78 #pm 4.86 ");
   text = ptstats->AddText("p1       =   333 #pm 38.2 ");
   text = ptstats->AddText("p2       = -9.539e-07 #pm 4.512e+02 ");
   text = ptstats->AddText("p3       = 219.4 #pm 5.3 ");
   text = ptstats->AddText("p4       = 0.1375 #pm 0.0005 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00007 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin14->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin14);

   ci = TColor::GetColor("#0000ff");
   hM_bin14->SetMarkerColor(ci);
   hM_bin14->SetMarkerStyle(24);
   hM_bin14->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin14->GetXaxis()->SetLabelFont(42);
   hM_bin14->GetXaxis()->SetLabelSize(0.035);
   hM_bin14->GetXaxis()->SetTitleSize(0.035);
   hM_bin14->GetXaxis()->SetTitleFont(42);
   hM_bin14->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin14->GetYaxis()->SetLabelFont(42);
   hM_bin14->GetYaxis()->SetLabelSize(0.035);
   hM_bin14->GetYaxis()->SetTitleSize(0.035);
   hM_bin14->GetYaxis()->SetTitleFont(42);
   hM_bin14->GetZaxis()->SetLabelFont(42);
   hM_bin14->GetZaxis()->SetLabelSize(0.035);
   hM_bin14->GetZaxis()->SetTitleSize(0.035);
   hM_bin14->GetZaxis()->SetTitleFont(42);
   hM_bin14->Draw("e");
   
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
   fmb->SetParameter(0,-20.78107);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,333.0014);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-9.539217e-07);
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
   fpeak->SetParameter(0,219.4001);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1375441);
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
