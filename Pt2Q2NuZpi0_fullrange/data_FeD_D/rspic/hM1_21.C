{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:45:45 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-116.1901,0.350906,1045.71);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin21 = new TH1F("hM_bin21","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin21->SetBinContent(13,1);
   hM_bin21->SetBinContent(14,15);
   hM_bin21->SetBinContent(15,28);
   hM_bin21->SetBinContent(16,30);
   hM_bin21->SetBinContent(17,35);
   hM_bin21->SetBinContent(18,40);
   hM_bin21->SetBinContent(19,57);
   hM_bin21->SetBinContent(20,71);
   hM_bin21->SetBinContent(21,75);
   hM_bin21->SetBinContent(22,102);
   hM_bin21->SetBinContent(23,104);
   hM_bin21->SetBinContent(24,94);
   hM_bin21->SetBinContent(25,99);
   hM_bin21->SetBinContent(26,99);
   hM_bin21->SetBinContent(27,98);
   hM_bin21->SetBinContent(28,119);
   hM_bin21->SetBinContent(29,127);
   hM_bin21->SetBinContent(30,112);
   hM_bin21->SetBinContent(31,99);
   hM_bin21->SetBinContent(32,104);
   hM_bin21->SetBinContent(33,144);
   hM_bin21->SetBinContent(34,122);
   hM_bin21->SetBinContent(35,157);
   hM_bin21->SetBinContent(36,167);
   hM_bin21->SetBinContent(37,160);
   hM_bin21->SetBinContent(38,189);
   hM_bin21->SetBinContent(39,196);
   hM_bin21->SetBinContent(40,255);
   hM_bin21->SetBinContent(41,293);
   hM_bin21->SetBinContent(42,352);
   hM_bin21->SetBinContent(43,409);
   hM_bin21->SetBinContent(44,465);
   hM_bin21->SetBinContent(45,599);
   hM_bin21->SetBinContent(46,638);
   hM_bin21->SetBinContent(47,684);
   hM_bin21->SetBinContent(48,763);
   hM_bin21->SetBinContent(49,856);
   hM_bin21->SetBinContent(50,828);
   hM_bin21->SetBinContent(51,854);
   hM_bin21->SetBinContent(52,740);
   hM_bin21->SetBinContent(53,727);
   hM_bin21->SetBinContent(54,654);
   hM_bin21->SetBinContent(55,561);
   hM_bin21->SetBinContent(56,478);
   hM_bin21->SetBinContent(57,385);
   hM_bin21->SetBinContent(58,377);
   hM_bin21->SetBinContent(59,290);
   hM_bin21->SetBinContent(60,236);
   hM_bin21->SetBinContent(61,211);
   hM_bin21->SetBinContent(62,168);
   hM_bin21->SetBinContent(63,189);
   hM_bin21->SetBinContent(64,198);
   hM_bin21->SetBinContent(65,142);
   hM_bin21->SetBinContent(66,129);
   hM_bin21->SetBinContent(67,127);
   hM_bin21->SetBinContent(68,148);
   hM_bin21->SetBinContent(69,126);
   hM_bin21->SetBinContent(70,133);
   hM_bin21->SetBinContent(71,113);
   hM_bin21->SetBinContent(72,116);
   hM_bin21->SetBinContent(73,116);
   hM_bin21->SetBinContent(74,102);
   hM_bin21->SetBinContent(75,97);
   hM_bin21->SetBinContent(76,96);
   hM_bin21->SetBinContent(77,108);
   hM_bin21->SetBinContent(78,103);
   hM_bin21->SetBinContent(79,99);
   hM_bin21->SetBinContent(80,93);
   hM_bin21->SetBinContent(81,91);
   hM_bin21->SetBinContent(82,96);
   hM_bin21->SetBinContent(83,102);
   hM_bin21->SetBinContent(84,90);
   hM_bin21->SetBinContent(85,81);
   hM_bin21->SetBinContent(86,92);
   hM_bin21->SetBinContent(87,89);
   hM_bin21->SetBinContent(88,84);
   hM_bin21->SetBinContent(89,81);
   hM_bin21->SetBinContent(90,78);
   hM_bin21->SetBinContent(91,73);
   hM_bin21->SetBinContent(92,84);
   hM_bin21->SetBinContent(93,85);
   hM_bin21->SetBinContent(94,88);
   hM_bin21->SetBinContent(95,80);
   hM_bin21->SetBinContent(96,71);
   hM_bin21->SetBinContent(97,69);
   hM_bin21->SetBinContent(98,78);
   hM_bin21->SetBinContent(99,80);
   hM_bin21->SetBinContent(100,69);
   hM_bin21->SetBinContent(101,3911);
   hM_bin21->SetEntries(22274);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07542907,0.1913625);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(54.54627);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,111.5708);
   fsig->SetParError(0,12.50435);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,56.06769);
   fsig->SetParError(1,89.41959);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.0002533583);
   fsig->SetParError(2,866.3761);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,677.8684);
   fsig->SetParError(3,10.35203);
   fsig->SetParLimits(3,0,1712);
   fsig->SetParameter(4,0.133504);
   fsig->SetParError(4,0.0003103847);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,4.856887e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin21->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin21");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 22274  ");
   text = ptstats->AddText("Mean  = 0.1455");
   text = ptstats->AddText("RMS   = 0.05703");
   text = ptstats->AddText("#chi^{2} / ndf = 54.55 / 27");
   text = ptstats->AddText("p0       = 111.6 #pm 12.5 ");
   text = ptstats->AddText("p1       = 56.07 #pm 89.42 ");
   text = ptstats->AddText("p2       = -0.0002534 #pm 866.3760986 ");
   text = ptstats->AddText("p3       = 677.9 #pm 10.4 ");
   text = ptstats->AddText("p4       = 0.1335 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00005 ");
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
   fmb->SetParameter(0,111.5708);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,56.06769);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.0002533583);
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
   fpeak->SetParameter(0,677.8684);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.133504);
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
