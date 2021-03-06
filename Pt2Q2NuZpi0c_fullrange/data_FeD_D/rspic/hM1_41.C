{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue May  9 16:36:14 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-45.83164,0.350906,412.4847);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin41 = new TH1F("hM_bin41","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin41->SetBinContent(16,10);
   hM_bin41->SetBinContent(17,14);
   hM_bin41->SetBinContent(18,25);
   hM_bin41->SetBinContent(19,40);
   hM_bin41->SetBinContent(20,28);
   hM_bin41->SetBinContent(21,44);
   hM_bin41->SetBinContent(22,45);
   hM_bin41->SetBinContent(23,50);
   hM_bin41->SetBinContent(24,47);
   hM_bin41->SetBinContent(25,60);
   hM_bin41->SetBinContent(26,51);
   hM_bin41->SetBinContent(27,49);
   hM_bin41->SetBinContent(28,50);
   hM_bin41->SetBinContent(29,60);
   hM_bin41->SetBinContent(30,58);
   hM_bin41->SetBinContent(31,47);
   hM_bin41->SetBinContent(32,61);
   hM_bin41->SetBinContent(33,48);
   hM_bin41->SetBinContent(34,85);
   hM_bin41->SetBinContent(35,63);
   hM_bin41->SetBinContent(36,67);
   hM_bin41->SetBinContent(37,88);
   hM_bin41->SetBinContent(38,77);
   hM_bin41->SetBinContent(39,96);
   hM_bin41->SetBinContent(40,82);
   hM_bin41->SetBinContent(41,96);
   hM_bin41->SetBinContent(42,158);
   hM_bin41->SetBinContent(43,142);
   hM_bin41->SetBinContent(44,199);
   hM_bin41->SetBinContent(45,238);
   hM_bin41->SetBinContent(46,232);
   hM_bin41->SetBinContent(47,302);
   hM_bin41->SetBinContent(48,321);
   hM_bin41->SetBinContent(49,273);
   hM_bin41->SetBinContent(50,331);
   hM_bin41->SetBinContent(51,295);
   hM_bin41->SetBinContent(52,287);
   hM_bin41->SetBinContent(53,285);
   hM_bin41->SetBinContent(54,247);
   hM_bin41->SetBinContent(55,182);
   hM_bin41->SetBinContent(56,223);
   hM_bin41->SetBinContent(57,166);
   hM_bin41->SetBinContent(58,148);
   hM_bin41->SetBinContent(59,138);
   hM_bin41->SetBinContent(60,109);
   hM_bin41->SetBinContent(61,123);
   hM_bin41->SetBinContent(62,84);
   hM_bin41->SetBinContent(63,85);
   hM_bin41->SetBinContent(64,76);
   hM_bin41->SetBinContent(65,91);
   hM_bin41->SetBinContent(66,79);
   hM_bin41->SetBinContent(67,49);
   hM_bin41->SetBinContent(68,82);
   hM_bin41->SetBinContent(69,82);
   hM_bin41->SetBinContent(70,72);
   hM_bin41->SetBinContent(71,64);
   hM_bin41->SetBinContent(72,58);
   hM_bin41->SetBinContent(73,75);
   hM_bin41->SetBinContent(74,60);
   hM_bin41->SetBinContent(75,58);
   hM_bin41->SetBinContent(76,58);
   hM_bin41->SetBinContent(77,67);
   hM_bin41->SetBinContent(78,63);
   hM_bin41->SetBinContent(79,47);
   hM_bin41->SetBinContent(80,61);
   hM_bin41->SetBinContent(81,58);
   hM_bin41->SetBinContent(82,55);
   hM_bin41->SetBinContent(83,58);
   hM_bin41->SetBinContent(84,70);
   hM_bin41->SetBinContent(85,55);
   hM_bin41->SetBinContent(86,66);
   hM_bin41->SetBinContent(87,49);
   hM_bin41->SetBinContent(88,48);
   hM_bin41->SetBinContent(89,50);
   hM_bin41->SetBinContent(90,44);
   hM_bin41->SetBinContent(91,41);
   hM_bin41->SetBinContent(92,44);
   hM_bin41->SetBinContent(93,37);
   hM_bin41->SetBinContent(94,53);
   hM_bin41->SetBinContent(95,46);
   hM_bin41->SetBinContent(96,40);
   hM_bin41->SetBinContent(97,33);
   hM_bin41->SetBinContent(98,30);
   hM_bin41->SetBinContent(99,42);
   hM_bin41->SetBinContent(100,32);
   hM_bin41->SetBinContent(101,1905);
   hM_bin41->SetEntries(10007);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07593865,0.1918721);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(68.43985);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,47.6946);
   fsig->SetParError(0,8.645004);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,120.9353);
   fsig->SetParError(1,62.79343);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.437147e-07);
   fsig->SetParError(2,640.4643);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,235.215);
   fsig->SetParError(3,6.703292);
   fsig->SetParLimits(3,0,662);
   fsig->SetParameter(4,0.1339046);
   fsig->SetParError(4,0.0005803987);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0001102705);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin41->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin41");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 10007  ");
   text = ptstats->AddText("Mean  =  0.151");
   text = ptstats->AddText("RMS   = 0.06148");
   text = ptstats->AddText("#chi^{2} / ndf = 68.44 / 27");
   text = ptstats->AddText("p0       = 47.69 #pm 8.65 ");
   text = ptstats->AddText("p1       = 120.9 #pm 62.8 ");
   text = ptstats->AddText("p2       = -1.437e-07 #pm 6.405e+02 ");
   text = ptstats->AddText("p3       = 235.2 #pm 6.7 ");
   text = ptstats->AddText("p4       = 0.1339 #pm 0.0006 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00011 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin41->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin41);

   ci = TColor::GetColor("#0000ff");
   hM_bin41->SetMarkerColor(ci);
   hM_bin41->SetMarkerStyle(24);
   hM_bin41->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin41->GetXaxis()->SetLabelFont(42);
   hM_bin41->GetXaxis()->SetLabelSize(0.035);
   hM_bin41->GetXaxis()->SetTitleSize(0.035);
   hM_bin41->GetXaxis()->SetTitleFont(42);
   hM_bin41->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin41->GetYaxis()->SetLabelFont(42);
   hM_bin41->GetYaxis()->SetLabelSize(0.035);
   hM_bin41->GetYaxis()->SetTitleSize(0.035);
   hM_bin41->GetYaxis()->SetTitleFont(42);
   hM_bin41->GetZaxis()->SetLabelFont(42);
   hM_bin41->GetZaxis()->SetLabelSize(0.035);
   hM_bin41->GetZaxis()->SetTitleSize(0.035);
   hM_bin41->GetZaxis()->SetTitleFont(42);
   hM_bin41->Draw("e");
   
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
   fmb->SetParameter(0,47.6946);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,120.9353);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.437147e-07);
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
   fpeak->SetParameter(0,235.215);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1339046);
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
