{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 11 12:04:11 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-20.33827,0.350906,183.0444);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin9 = new TH1F("hM_bin9","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin9->SetBinContent(0,994);
   hM_bin9->SetBinContent(15,3);
   hM_bin9->SetBinContent(17,6);
   hM_bin9->SetBinContent(18,2);
   hM_bin9->SetBinContent(19,2);
   hM_bin9->SetBinContent(20,2);
   hM_bin9->SetBinContent(21,3);
   hM_bin9->SetBinContent(22,1);
   hM_bin9->SetBinContent(23,1);
   hM_bin9->SetBinContent(24,2);
   hM_bin9->SetBinContent(25,6);
   hM_bin9->SetBinContent(26,4);
   hM_bin9->SetBinContent(27,1);
   hM_bin9->SetBinContent(28,3);
   hM_bin9->SetBinContent(29,1);
   hM_bin9->SetBinContent(30,5);
   hM_bin9->SetBinContent(31,3);
   hM_bin9->SetBinContent(32,7);
   hM_bin9->SetBinContent(33,5);
   hM_bin9->SetBinContent(34,3);
   hM_bin9->SetBinContent(35,5);
   hM_bin9->SetBinContent(36,4);
   hM_bin9->SetBinContent(37,8);
   hM_bin9->SetBinContent(38,9);
   hM_bin9->SetBinContent(39,11);
   hM_bin9->SetBinContent(40,19);
   hM_bin9->SetBinContent(41,17);
   hM_bin9->SetBinContent(42,27);
   hM_bin9->SetBinContent(43,42);
   hM_bin9->SetBinContent(44,44);
   hM_bin9->SetBinContent(45,50);
   hM_bin9->SetBinContent(46,86);
   hM_bin9->SetBinContent(47,106);
   hM_bin9->SetBinContent(48,127);
   hM_bin9->SetBinContent(49,134);
   hM_bin9->SetBinContent(50,119);
   hM_bin9->SetBinContent(51,143);
   hM_bin9->SetBinContent(52,127);
   hM_bin9->SetBinContent(53,113);
   hM_bin9->SetBinContent(54,119);
   hM_bin9->SetBinContent(55,95);
   hM_bin9->SetBinContent(56,84);
   hM_bin9->SetBinContent(57,75);
   hM_bin9->SetBinContent(58,58);
   hM_bin9->SetBinContent(59,48);
   hM_bin9->SetBinContent(60,52);
   hM_bin9->SetBinContent(61,36);
   hM_bin9->SetBinContent(62,31);
   hM_bin9->SetBinContent(63,26);
   hM_bin9->SetBinContent(64,25);
   hM_bin9->SetBinContent(65,22);
   hM_bin9->SetBinContent(66,17);
   hM_bin9->SetBinContent(67,16);
   hM_bin9->SetBinContent(68,16);
   hM_bin9->SetBinContent(69,18);
   hM_bin9->SetBinContent(70,22);
   hM_bin9->SetBinContent(71,19);
   hM_bin9->SetBinContent(72,27);
   hM_bin9->SetBinContent(73,20);
   hM_bin9->SetBinContent(74,22);
   hM_bin9->SetBinContent(75,23);
   hM_bin9->SetBinContent(76,23);
   hM_bin9->SetBinContent(77,19);
   hM_bin9->SetBinContent(78,26);
   hM_bin9->SetBinContent(79,16);
   hM_bin9->SetBinContent(80,24);
   hM_bin9->SetBinContent(81,21);
   hM_bin9->SetBinContent(82,31);
   hM_bin9->SetBinContent(83,27);
   hM_bin9->SetBinContent(84,28);
   hM_bin9->SetBinContent(85,26);
   hM_bin9->SetBinContent(86,24);
   hM_bin9->SetBinContent(87,29);
   hM_bin9->SetBinContent(88,30);
   hM_bin9->SetBinContent(89,28);
   hM_bin9->SetBinContent(90,27);
   hM_bin9->SetBinContent(91,27);
   hM_bin9->SetBinContent(92,25);
   hM_bin9->SetBinContent(93,31);
   hM_bin9->SetBinContent(94,45);
   hM_bin9->SetBinContent(95,34);
   hM_bin9->SetBinContent(96,27);
   hM_bin9->SetBinContent(97,34);
   hM_bin9->SetBinContent(98,34);
   hM_bin9->SetBinContent(99,35);
   hM_bin9->SetBinContent(100,43);
   hM_bin9->SetBinContent(101,19464);
   hM_bin9->SetEntries(23294);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08070038,0.1966338);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(33.71312);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-8.424756);
   fsig->SetParError(0,2.909211);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,115.3079);
   fsig->SetParError(1,23.0144);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.0001664904);
   fsig->SetParError(2,377.0202);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,115.6169);
   fsig->SetParError(3,3.712268);
   fsig->SetParLimits(3,0,286);
   fsig->SetParameter(4,0.1382801);
   fsig->SetParError(4,0.0006161638);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0001221711);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin9->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin9");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 23294  ");
   text = ptstats->AddText("Mean  = 0.1747");
   text = ptstats->AddText("RMS   = 0.06233");
   text = ptstats->AddText("#chi^{2} / ndf = 33.71 / 28");
   text = ptstats->AddText("p0       = -8.425 #pm 2.909 ");
   text = ptstats->AddText("p1       = 115.3 #pm 23.0 ");
   text = ptstats->AddText("p2       = -0.0001665 #pm 377.0202332 ");
   text = ptstats->AddText("p3       = 115.6 #pm 3.7 ");
   text = ptstats->AddText("p4       = 0.1383 #pm 0.0006 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00012 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin9->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin9);

   ci = TColor::GetColor("#0000ff");
   hM_bin9->SetMarkerColor(ci);
   hM_bin9->SetMarkerStyle(24);
   hM_bin9->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin9->GetXaxis()->SetLabelFont(42);
   hM_bin9->GetXaxis()->SetLabelSize(0.035);
   hM_bin9->GetXaxis()->SetTitleSize(0.035);
   hM_bin9->GetXaxis()->SetTitleFont(42);
   hM_bin9->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin9->GetYaxis()->SetLabelFont(42);
   hM_bin9->GetYaxis()->SetLabelSize(0.035);
   hM_bin9->GetYaxis()->SetTitleSize(0.035);
   hM_bin9->GetYaxis()->SetTitleFont(42);
   hM_bin9->GetZaxis()->SetLabelFont(42);
   hM_bin9->GetZaxis()->SetLabelSize(0.035);
   hM_bin9->GetZaxis()->SetTitleSize(0.035);
   hM_bin9->GetZaxis()->SetTitleFont(42);
   hM_bin9->Draw("e");
   
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
   fmb->SetParameter(0,-8.424756);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,115.3079);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.0001664904);
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
   fpeak->SetParameter(0,115.6169);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1382801);
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
