{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:27:49 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-36.10602,0.350906,324.9542);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin45 = new TH1F("hM_bin45","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin45->SetBinContent(14,1);
   hM_bin45->SetBinContent(15,7);
   hM_bin45->SetBinContent(16,12);
   hM_bin45->SetBinContent(17,12);
   hM_bin45->SetBinContent(18,25);
   hM_bin45->SetBinContent(19,23);
   hM_bin45->SetBinContent(20,22);
   hM_bin45->SetBinContent(21,25);
   hM_bin45->SetBinContent(22,32);
   hM_bin45->SetBinContent(23,25);
   hM_bin45->SetBinContent(24,21);
   hM_bin45->SetBinContent(25,29);
   hM_bin45->SetBinContent(26,35);
   hM_bin45->SetBinContent(27,33);
   hM_bin45->SetBinContent(28,38);
   hM_bin45->SetBinContent(29,38);
   hM_bin45->SetBinContent(30,27);
   hM_bin45->SetBinContent(31,29);
   hM_bin45->SetBinContent(32,38);
   hM_bin45->SetBinContent(33,34);
   hM_bin45->SetBinContent(34,44);
   hM_bin45->SetBinContent(35,41);
   hM_bin45->SetBinContent(36,48);
   hM_bin45->SetBinContent(37,45);
   hM_bin45->SetBinContent(38,60);
   hM_bin45->SetBinContent(39,44);
   hM_bin45->SetBinContent(40,72);
   hM_bin45->SetBinContent(41,50);
   hM_bin45->SetBinContent(42,68);
   hM_bin45->SetBinContent(43,88);
   hM_bin45->SetBinContent(44,101);
   hM_bin45->SetBinContent(45,143);
   hM_bin45->SetBinContent(46,145);
   hM_bin45->SetBinContent(47,159);
   hM_bin45->SetBinContent(48,209);
   hM_bin45->SetBinContent(49,230);
   hM_bin45->SetBinContent(50,249);
   hM_bin45->SetBinContent(51,225);
   hM_bin45->SetBinContent(52,223);
   hM_bin45->SetBinContent(53,259);
   hM_bin45->SetBinContent(54,218);
   hM_bin45->SetBinContent(55,200);
   hM_bin45->SetBinContent(56,170);
   hM_bin45->SetBinContent(57,156);
   hM_bin45->SetBinContent(58,119);
   hM_bin45->SetBinContent(59,105);
   hM_bin45->SetBinContent(60,109);
   hM_bin45->SetBinContent(61,92);
   hM_bin45->SetBinContent(62,79);
   hM_bin45->SetBinContent(63,71);
   hM_bin45->SetBinContent(64,58);
   hM_bin45->SetBinContent(65,57);
   hM_bin45->SetBinContent(66,51);
   hM_bin45->SetBinContent(67,55);
   hM_bin45->SetBinContent(68,41);
   hM_bin45->SetBinContent(69,52);
   hM_bin45->SetBinContent(70,44);
   hM_bin45->SetBinContent(71,50);
   hM_bin45->SetBinContent(72,29);
   hM_bin45->SetBinContent(73,41);
   hM_bin45->SetBinContent(74,49);
   hM_bin45->SetBinContent(75,44);
   hM_bin45->SetBinContent(76,37);
   hM_bin45->SetBinContent(77,28);
   hM_bin45->SetBinContent(78,35);
   hM_bin45->SetBinContent(79,34);
   hM_bin45->SetBinContent(80,45);
   hM_bin45->SetBinContent(81,34);
   hM_bin45->SetBinContent(82,26);
   hM_bin45->SetBinContent(83,31);
   hM_bin45->SetBinContent(84,24);
   hM_bin45->SetBinContent(85,27);
   hM_bin45->SetBinContent(86,22);
   hM_bin45->SetBinContent(87,38);
   hM_bin45->SetBinContent(88,24);
   hM_bin45->SetBinContent(89,32);
   hM_bin45->SetBinContent(90,27);
   hM_bin45->SetBinContent(91,28);
   hM_bin45->SetBinContent(92,26);
   hM_bin45->SetBinContent(93,21);
   hM_bin45->SetBinContent(94,24);
   hM_bin45->SetBinContent(95,31);
   hM_bin45->SetBinContent(96,20);
   hM_bin45->SetBinContent(97,22);
   hM_bin45->SetBinContent(98,25);
   hM_bin45->SetBinContent(99,31);
   hM_bin45->SetBinContent(100,15);
   hM_bin45->SetBinContent(101,1342);
   hM_bin45->SetEntries(6948);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08116592,0.1970994);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(43.40873);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,31.53552);
   fsig->SetParError(0,6.630357);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,57.24584);
   fsig->SetParError(1,46.30908);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-3.583707e-05);
   fsig->SetParError(2,687.5879);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,189.4742);
   fsig->SetParError(3,5.602704);
   fsig->SetParLimits(3,0,518);
   fsig->SetParameter(4,0.1393889);
   fsig->SetParError(4,0.0005918137);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0001206293);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin45->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin45");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 6948   ");
   text = ptstats->AddText("Mean  = 0.1501");
   text = ptstats->AddText("RMS   = 0.05788");
   text = ptstats->AddText("#chi^{2} / ndf = 43.41 / 28");
   text = ptstats->AddText("p0       = 31.54 #pm 6.63 ");
   text = ptstats->AddText("p1       = 57.25 #pm 46.31 ");
   text = ptstats->AddText("p2       = -3.584e-05 #pm 6.876e+02 ");
   text = ptstats->AddText("p3       = 189.5 #pm 5.6 ");
   text = ptstats->AddText("p4       = 0.1394 #pm 0.0006 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00012 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin45->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin45);

   ci = TColor::GetColor("#0000ff");
   hM_bin45->SetMarkerColor(ci);
   hM_bin45->SetMarkerStyle(24);
   hM_bin45->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin45->GetXaxis()->SetLabelFont(42);
   hM_bin45->GetXaxis()->SetLabelSize(0.035);
   hM_bin45->GetXaxis()->SetTitleSize(0.035);
   hM_bin45->GetXaxis()->SetTitleFont(42);
   hM_bin45->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin45->GetYaxis()->SetLabelFont(42);
   hM_bin45->GetYaxis()->SetLabelSize(0.035);
   hM_bin45->GetYaxis()->SetTitleSize(0.035);
   hM_bin45->GetYaxis()->SetTitleFont(42);
   hM_bin45->GetZaxis()->SetLabelFont(42);
   hM_bin45->GetZaxis()->SetLabelSize(0.035);
   hM_bin45->GetZaxis()->SetTitleSize(0.035);
   hM_bin45->GetZaxis()->SetTitleFont(42);
   hM_bin45->Draw("e");
   
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
   fmb->SetParameter(0,31.53552);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,57.24584);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-3.583707e-05);
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
   fpeak->SetParameter(0,189.4742);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1393889);
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
