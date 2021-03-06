{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Jan 31 05:44:16 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-39.75714,0.350906,357.8143);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin33 = new TH1F("hM_bin33","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin33->SetBinContent(0,3407);
   hM_bin33->SetBinContent(15,3);
   hM_bin33->SetBinContent(16,7);
   hM_bin33->SetBinContent(17,5);
   hM_bin33->SetBinContent(18,10);
   hM_bin33->SetBinContent(19,6);
   hM_bin33->SetBinContent(20,2);
   hM_bin33->SetBinContent(21,6);
   hM_bin33->SetBinContent(22,3);
   hM_bin33->SetBinContent(23,6);
   hM_bin33->SetBinContent(24,4);
   hM_bin33->SetBinContent(25,3);
   hM_bin33->SetBinContent(26,2);
   hM_bin33->SetBinContent(27,2);
   hM_bin33->SetBinContent(28,3);
   hM_bin33->SetBinContent(29,8);
   hM_bin33->SetBinContent(30,10);
   hM_bin33->SetBinContent(31,3);
   hM_bin33->SetBinContent(32,9);
   hM_bin33->SetBinContent(33,9);
   hM_bin33->SetBinContent(34,10);
   hM_bin33->SetBinContent(35,15);
   hM_bin33->SetBinContent(36,11);
   hM_bin33->SetBinContent(37,16);
   hM_bin33->SetBinContent(38,31);
   hM_bin33->SetBinContent(39,18);
   hM_bin33->SetBinContent(40,36);
   hM_bin33->SetBinContent(41,49);
   hM_bin33->SetBinContent(42,65);
   hM_bin33->SetBinContent(43,70);
   hM_bin33->SetBinContent(44,121);
   hM_bin33->SetBinContent(45,149);
   hM_bin33->SetBinContent(46,150);
   hM_bin33->SetBinContent(47,198);
   hM_bin33->SetBinContent(48,237);
   hM_bin33->SetBinContent(49,272);
   hM_bin33->SetBinContent(50,277);
   hM_bin33->SetBinContent(51,286);
   hM_bin33->SetBinContent(52,259);
   hM_bin33->SetBinContent(53,258);
   hM_bin33->SetBinContent(54,213);
   hM_bin33->SetBinContent(55,189);
   hM_bin33->SetBinContent(56,174);
   hM_bin33->SetBinContent(57,146);
   hM_bin33->SetBinContent(58,123);
   hM_bin33->SetBinContent(59,93);
   hM_bin33->SetBinContent(60,78);
   hM_bin33->SetBinContent(61,63);
   hM_bin33->SetBinContent(62,59);
   hM_bin33->SetBinContent(63,50);
   hM_bin33->SetBinContent(64,40);
   hM_bin33->SetBinContent(65,44);
   hM_bin33->SetBinContent(66,43);
   hM_bin33->SetBinContent(67,44);
   hM_bin33->SetBinContent(68,38);
   hM_bin33->SetBinContent(69,43);
   hM_bin33->SetBinContent(70,37);
   hM_bin33->SetBinContent(71,42);
   hM_bin33->SetBinContent(72,50);
   hM_bin33->SetBinContent(73,56);
   hM_bin33->SetBinContent(74,44);
   hM_bin33->SetBinContent(75,35);
   hM_bin33->SetBinContent(76,32);
   hM_bin33->SetBinContent(77,53);
   hM_bin33->SetBinContent(78,53);
   hM_bin33->SetBinContent(79,53);
   hM_bin33->SetBinContent(80,43);
   hM_bin33->SetBinContent(81,46);
   hM_bin33->SetBinContent(82,62);
   hM_bin33->SetBinContent(83,55);
   hM_bin33->SetBinContent(84,53);
   hM_bin33->SetBinContent(85,55);
   hM_bin33->SetBinContent(86,56);
   hM_bin33->SetBinContent(87,45);
   hM_bin33->SetBinContent(88,48);
   hM_bin33->SetBinContent(89,65);
   hM_bin33->SetBinContent(90,72);
   hM_bin33->SetBinContent(91,65);
   hM_bin33->SetBinContent(92,79);
   hM_bin33->SetBinContent(93,69);
   hM_bin33->SetBinContent(94,69);
   hM_bin33->SetBinContent(95,86);
   hM_bin33->SetBinContent(96,68);
   hM_bin33->SetBinContent(97,74);
   hM_bin33->SetBinContent(98,70);
   hM_bin33->SetBinContent(99,74);
   hM_bin33->SetBinContent(100,56);
   hM_bin33->SetBinContent(101,21310);
   hM_bin33->SetEntries(30551);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07937273,0.1953062);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(57.73464);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-17.39122);
   fsig->SetParError(0,4.899302);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,244.3966);
   fsig->SetParError(1,39.03374);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.727367e-07);
   fsig->SetParError(2,268.1762);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,234.8857);
   fsig->SetParError(3,5.541806);
   fsig->SetParLimits(3,0,572);
   fsig->SetParameter(4,0.1371003);
   fsig->SetParError(4,0.0004513307);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,3.867933e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin33->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin33");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 30551  ");
   text = ptstats->AddText("Mean  = 0.1749");
   text = ptstats->AddText("RMS   = 0.06265");
   text = ptstats->AddText("#chi^{2} / ndf = 57.73 / 27");
   text = ptstats->AddText("p0       = -17.39 #pm 4.90 ");
   text = ptstats->AddText("p1       = 244.4 #pm 39.0 ");
   text = ptstats->AddText("p2       = -1.727e-07 #pm 2.682e+02 ");
   text = ptstats->AddText("p3       = 234.9 #pm 5.5 ");
   text = ptstats->AddText("p4       = 0.1371 #pm 0.0005 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00004 ");
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
   fmb->SetParameter(0,-17.39122);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,244.3966);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.727367e-07);
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
   fpeak->SetParameter(0,234.8857);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1371003);
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
