{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue May  9 16:31:10 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-28.64963,0.350906,257.8466);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin40 = new TH1F("hM_bin40","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin40->SetBinContent(14,1);
   hM_bin40->SetBinContent(15,3);
   hM_bin40->SetBinContent(16,3);
   hM_bin40->SetBinContent(17,9);
   hM_bin40->SetBinContent(18,9);
   hM_bin40->SetBinContent(19,15);
   hM_bin40->SetBinContent(20,11);
   hM_bin40->SetBinContent(21,14);
   hM_bin40->SetBinContent(22,26);
   hM_bin40->SetBinContent(23,19);
   hM_bin40->SetBinContent(24,22);
   hM_bin40->SetBinContent(25,24);
   hM_bin40->SetBinContent(26,26);
   hM_bin40->SetBinContent(27,23);
   hM_bin40->SetBinContent(28,29);
   hM_bin40->SetBinContent(29,23);
   hM_bin40->SetBinContent(30,34);
   hM_bin40->SetBinContent(31,26);
   hM_bin40->SetBinContent(32,45);
   hM_bin40->SetBinContent(33,40);
   hM_bin40->SetBinContent(34,32);
   hM_bin40->SetBinContent(35,36);
   hM_bin40->SetBinContent(36,36);
   hM_bin40->SetBinContent(37,28);
   hM_bin40->SetBinContent(38,41);
   hM_bin40->SetBinContent(39,36);
   hM_bin40->SetBinContent(40,63);
   hM_bin40->SetBinContent(41,59);
   hM_bin40->SetBinContent(42,68);
   hM_bin40->SetBinContent(43,77);
   hM_bin40->SetBinContent(44,93);
   hM_bin40->SetBinContent(45,124);
   hM_bin40->SetBinContent(46,138);
   hM_bin40->SetBinContent(47,159);
   hM_bin40->SetBinContent(48,152);
   hM_bin40->SetBinContent(49,174);
   hM_bin40->SetBinContent(50,182);
   hM_bin40->SetBinContent(51,158);
   hM_bin40->SetBinContent(52,178);
   hM_bin40->SetBinContent(53,204);
   hM_bin40->SetBinContent(54,142);
   hM_bin40->SetBinContent(55,166);
   hM_bin40->SetBinContent(56,95);
   hM_bin40->SetBinContent(57,118);
   hM_bin40->SetBinContent(58,96);
   hM_bin40->SetBinContent(59,91);
   hM_bin40->SetBinContent(60,79);
   hM_bin40->SetBinContent(61,62);
   hM_bin40->SetBinContent(62,52);
   hM_bin40->SetBinContent(63,44);
   hM_bin40->SetBinContent(64,29);
   hM_bin40->SetBinContent(65,45);
   hM_bin40->SetBinContent(66,32);
   hM_bin40->SetBinContent(67,30);
   hM_bin40->SetBinContent(68,41);
   hM_bin40->SetBinContent(69,23);
   hM_bin40->SetBinContent(70,23);
   hM_bin40->SetBinContent(71,18);
   hM_bin40->SetBinContent(72,33);
   hM_bin40->SetBinContent(73,20);
   hM_bin40->SetBinContent(74,25);
   hM_bin40->SetBinContent(75,23);
   hM_bin40->SetBinContent(76,35);
   hM_bin40->SetBinContent(77,28);
   hM_bin40->SetBinContent(78,24);
   hM_bin40->SetBinContent(79,28);
   hM_bin40->SetBinContent(80,28);
   hM_bin40->SetBinContent(81,23);
   hM_bin40->SetBinContent(82,14);
   hM_bin40->SetBinContent(83,29);
   hM_bin40->SetBinContent(84,20);
   hM_bin40->SetBinContent(85,15);
   hM_bin40->SetBinContent(86,15);
   hM_bin40->SetBinContent(87,28);
   hM_bin40->SetBinContent(88,24);
   hM_bin40->SetBinContent(89,20);
   hM_bin40->SetBinContent(90,21);
   hM_bin40->SetBinContent(91,25);
   hM_bin40->SetBinContent(92,18);
   hM_bin40->SetBinContent(93,17);
   hM_bin40->SetBinContent(94,14);
   hM_bin40->SetBinContent(95,29);
   hM_bin40->SetBinContent(96,14);
   hM_bin40->SetBinContent(97,16);
   hM_bin40->SetBinContent(98,12);
   hM_bin40->SetBinContent(99,23);
   hM_bin40->SetBinContent(100,18);
   hM_bin40->SetBinContent(101,886);
   hM_bin40->SetEntries(5151);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07941502,0.1953485);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(44.21219);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,27.1916);
   fsig->SetParError(0,6.694685);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,6.866309);
   fsig->SetParError(1,43.28558);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.0004719588);
   fsig->SetParError(2,7803.078);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,150.3883);
   fsig->SetParError(3,4.944257);
   fsig->SetParLimits(3,0,408);
   fsig->SetParameter(4,0.1367608);
   fsig->SetParError(4,0.0007099753);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01941105);
   fsig->SetParError(5,0.001829439);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin40->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin40");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 5151   ");
   text = ptstats->AddText("Mean  = 0.1477");
   text = ptstats->AddText("RMS   = 0.05725");
   text = ptstats->AddText("#chi^{2} / ndf = 44.21 / 27");
   text = ptstats->AddText("p0       = 27.19 #pm 6.69 ");
   text = ptstats->AddText("p1       = 6.866 #pm 43.286 ");
   text = ptstats->AddText("p2       = -0.000472 #pm 7803.078613 ");
   text = ptstats->AddText("p3       = 150.4 #pm 4.9 ");
   text = ptstats->AddText("p4       = 0.1368 #pm 0.0007 ");
   text = ptstats->AddText("p5       = 0.01941 #pm 0.00183 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin40->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin40);

   ci = TColor::GetColor("#0000ff");
   hM_bin40->SetMarkerColor(ci);
   hM_bin40->SetMarkerStyle(24);
   hM_bin40->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin40->GetXaxis()->SetLabelFont(42);
   hM_bin40->GetXaxis()->SetLabelSize(0.035);
   hM_bin40->GetXaxis()->SetTitleSize(0.035);
   hM_bin40->GetXaxis()->SetTitleFont(42);
   hM_bin40->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin40->GetYaxis()->SetLabelFont(42);
   hM_bin40->GetYaxis()->SetLabelSize(0.035);
   hM_bin40->GetYaxis()->SetTitleSize(0.035);
   hM_bin40->GetYaxis()->SetTitleFont(42);
   hM_bin40->GetZaxis()->SetLabelFont(42);
   hM_bin40->GetZaxis()->SetLabelSize(0.035);
   hM_bin40->GetZaxis()->SetTitleSize(0.035);
   hM_bin40->GetZaxis()->SetTitleFont(42);
   hM_bin40->Draw("e");
   
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
   fmb->SetParameter(0,27.1916);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,6.866309);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.0004719588);
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
   fpeak->SetParameter(0,150.3883);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1367608);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.01941105);
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
