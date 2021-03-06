{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 18 12:04:57 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.1901558,33.96503,0.8890623,452.1085);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin3 = new TH1F("hM_bin3","M_{#gamma #gamma}",100,0.2600464,0.8191716);
   hM_bin3->SetBinContent(0,9599);
   hM_bin3->SetBinContent(1,101);
   hM_bin3->SetBinContent(2,165);
   hM_bin3->SetBinContent(3,168);
   hM_bin3->SetBinContent(4,161);
   hM_bin3->SetBinContent(5,179);
   hM_bin3->SetBinContent(6,172);
   hM_bin3->SetBinContent(7,164);
   hM_bin3->SetBinContent(8,185);
   hM_bin3->SetBinContent(9,193);
   hM_bin3->SetBinContent(10,182);
   hM_bin3->SetBinContent(11,189);
   hM_bin3->SetBinContent(12,194);
   hM_bin3->SetBinContent(13,222);
   hM_bin3->SetBinContent(14,198);
   hM_bin3->SetBinContent(15,202);
   hM_bin3->SetBinContent(16,220);
   hM_bin3->SetBinContent(17,240);
   hM_bin3->SetBinContent(18,226);
   hM_bin3->SetBinContent(19,227);
   hM_bin3->SetBinContent(20,239);
   hM_bin3->SetBinContent(21,247);
   hM_bin3->SetBinContent(22,268);
   hM_bin3->SetBinContent(23,262);
   hM_bin3->SetBinContent(24,246);
   hM_bin3->SetBinContent(25,287);
   hM_bin3->SetBinContent(26,275);
   hM_bin3->SetBinContent(27,275);
   hM_bin3->SetBinContent(28,294);
   hM_bin3->SetBinContent(29,263);
   hM_bin3->SetBinContent(30,282);
   hM_bin3->SetBinContent(31,268);
   hM_bin3->SetBinContent(32,289);
   hM_bin3->SetBinContent(33,313);
   hM_bin3->SetBinContent(34,279);
   hM_bin3->SetBinContent(35,284);
   hM_bin3->SetBinContent(36,275);
   hM_bin3->SetBinContent(37,291);
   hM_bin3->SetBinContent(38,288);
   hM_bin3->SetBinContent(39,322);
   hM_bin3->SetBinContent(40,294);
   hM_bin3->SetBinContent(41,310);
   hM_bin3->SetBinContent(42,329);
   hM_bin3->SetBinContent(43,314);
   hM_bin3->SetBinContent(44,325);
   hM_bin3->SetBinContent(45,343);
   hM_bin3->SetBinContent(46,375);
   hM_bin3->SetBinContent(47,343);
   hM_bin3->SetBinContent(48,366);
   hM_bin3->SetBinContent(49,344);
   hM_bin3->SetBinContent(50,348);
   hM_bin3->SetBinContent(51,351);
   hM_bin3->SetBinContent(52,349);
   hM_bin3->SetBinContent(53,344);
   hM_bin3->SetBinContent(54,341);
   hM_bin3->SetBinContent(55,320);
   hM_bin3->SetBinContent(56,324);
   hM_bin3->SetBinContent(57,348);
   hM_bin3->SetBinContent(58,331);
   hM_bin3->SetBinContent(59,339);
   hM_bin3->SetBinContent(60,325);
   hM_bin3->SetBinContent(61,311);
   hM_bin3->SetBinContent(62,350);
   hM_bin3->SetBinContent(63,352);
   hM_bin3->SetBinContent(64,311);
   hM_bin3->SetBinContent(65,284);
   hM_bin3->SetBinContent(66,307);
   hM_bin3->SetBinContent(67,284);
   hM_bin3->SetBinContent(68,314);
   hM_bin3->SetBinContent(69,286);
   hM_bin3->SetBinContent(70,294);
   hM_bin3->SetBinContent(71,278);
   hM_bin3->SetBinContent(72,274);
   hM_bin3->SetBinContent(73,324);
   hM_bin3->SetBinContent(74,276);
   hM_bin3->SetBinContent(75,296);
   hM_bin3->SetBinContent(76,305);
   hM_bin3->SetBinContent(77,264);
   hM_bin3->SetBinContent(78,295);
   hM_bin3->SetBinContent(79,258);
   hM_bin3->SetBinContent(80,265);
   hM_bin3->SetBinContent(81,252);
   hM_bin3->SetBinContent(82,242);
   hM_bin3->SetBinContent(83,249);
   hM_bin3->SetBinContent(84,239);
   hM_bin3->SetBinContent(85,241);
   hM_bin3->SetBinContent(86,217);
   hM_bin3->SetBinContent(87,256);
   hM_bin3->SetBinContent(88,235);
   hM_bin3->SetBinContent(89,246);
   hM_bin3->SetBinContent(90,251);
   hM_bin3->SetBinContent(91,266);
   hM_bin3->SetBinContent(92,196);
   hM_bin3->SetBinContent(93,219);
   hM_bin3->SetBinContent(94,218);
   hM_bin3->SetBinContent(95,218);
   hM_bin3->SetBinContent(96,209);
   hM_bin3->SetBinContent(97,190);
   hM_bin3->SetBinContent(98,191);
   hM_bin3->SetBinContent(99,176);
   hM_bin3->SetBinContent(100,148);
   hM_bin3->SetBinContent(101,5579);
   hM_bin3->SetEntries(41763);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.3301136,0.7610638);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(63.82893);
   fsig->SetNDF(71);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-289.4098);
   fsig->SetParError(0,57.02339);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,2145.169);
   fsig->SetParError(1,225.9679);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1928.321);
   fsig->SetParError(2,206.3311);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,40.27602);
   fsig->SetParError(3,8.95107);
   fsig->SetParLimits(3,0,750);
   fsig->SetParameter(4,0.5428826);
   fsig->SetParError(4,0.007659263);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.04788336);
   fsig->SetParError(5,0.004880602);
   fsig->SetParLimits(5,0.04788336,0.07182504);
   hM_bin3->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin3");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 41763  ");
   text = ptstats->AddText("Mean  = 0.5464");
   text = ptstats->AddText("RMS   = 0.1458");
   text = ptstats->AddText("#chi^{2} / ndf = 63.83 / 71");
   text = ptstats->AddText("p0       = -289.4 #pm 57.0 ");
   text = ptstats->AddText("p1       =  2145 #pm 226.0 ");
   text = ptstats->AddText("p2       = -1928 #pm 206.3 ");
   text = ptstats->AddText("p3       = 40.28 #pm 8.95 ");
   text = ptstats->AddText("p4       = 0.5429 #pm 0.0077 ");
   text = ptstats->AddText("p5       = 0.04788 #pm 0.00488 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin3->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin3);

   ci = TColor::GetColor("#0000ff");
   hM_bin3->SetMarkerColor(ci);
   hM_bin3->SetMarkerStyle(24);
   hM_bin3->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin3->GetXaxis()->SetLabelFont(42);
   hM_bin3->GetXaxis()->SetLabelSize(0.035);
   hM_bin3->GetXaxis()->SetTitleSize(0.035);
   hM_bin3->GetXaxis()->SetTitleFont(42);
   hM_bin3->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin3->GetYaxis()->SetLabelFont(42);
   hM_bin3->GetYaxis()->SetLabelSize(0.035);
   hM_bin3->GetYaxis()->SetTitleSize(0.035);
   hM_bin3->GetYaxis()->SetTitleFont(42);
   hM_bin3->GetZaxis()->SetLabelFont(42);
   hM_bin3->GetZaxis()->SetLabelSize(0.035);
   hM_bin3->GetZaxis()->SetTitleSize(0.035);
   hM_bin3->GetZaxis()->SetTitleFont(42);
   hM_bin3->Draw("e");
   
   TF1 *fmb = new TF1("fmb","pol2",0.3600464,0.7191716);
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
   fmb->SetParameter(0,-289.4098);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,2145.169);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1928.321);
   fmb->SetParError(2,0);
   fmb->SetParLimits(2,0,0);
   fmb->Draw("same");
   
   TF1 *fpeak = new TF1("fpeak","gaus",0.3600464,0.7191716);
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
   fpeak->SetParameter(0,40.27602);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.5428826);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.04788336);
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
