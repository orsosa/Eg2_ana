{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:39:06 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-40.83797,0.350906,367.5417);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin4 = new TH1F("hM_bin4","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin4->SetBinContent(14,8);
   hM_bin4->SetBinContent(15,4);
   hM_bin4->SetBinContent(16,10);
   hM_bin4->SetBinContent(17,17);
   hM_bin4->SetBinContent(18,18);
   hM_bin4->SetBinContent(19,21);
   hM_bin4->SetBinContent(20,17);
   hM_bin4->SetBinContent(21,26);
   hM_bin4->SetBinContent(22,33);
   hM_bin4->SetBinContent(23,26);
   hM_bin4->SetBinContent(24,34);
   hM_bin4->SetBinContent(25,43);
   hM_bin4->SetBinContent(26,46);
   hM_bin4->SetBinContent(27,31);
   hM_bin4->SetBinContent(28,31);
   hM_bin4->SetBinContent(29,23);
   hM_bin4->SetBinContent(30,38);
   hM_bin4->SetBinContent(31,32);
   hM_bin4->SetBinContent(32,35);
   hM_bin4->SetBinContent(33,44);
   hM_bin4->SetBinContent(34,42);
   hM_bin4->SetBinContent(35,52);
   hM_bin4->SetBinContent(36,53);
   hM_bin4->SetBinContent(37,45);
   hM_bin4->SetBinContent(38,50);
   hM_bin4->SetBinContent(39,73);
   hM_bin4->SetBinContent(40,82);
   hM_bin4->SetBinContent(41,116);
   hM_bin4->SetBinContent(42,116);
   hM_bin4->SetBinContent(43,140);
   hM_bin4->SetBinContent(44,171);
   hM_bin4->SetBinContent(45,178);
   hM_bin4->SetBinContent(46,193);
   hM_bin4->SetBinContent(47,209);
   hM_bin4->SetBinContent(48,258);
   hM_bin4->SetBinContent(49,289);
   hM_bin4->SetBinContent(50,294);
   hM_bin4->SetBinContent(51,270);
   hM_bin4->SetBinContent(52,286);
   hM_bin4->SetBinContent(53,247);
   hM_bin4->SetBinContent(54,192);
   hM_bin4->SetBinContent(55,206);
   hM_bin4->SetBinContent(56,167);
   hM_bin4->SetBinContent(57,150);
   hM_bin4->SetBinContent(58,124);
   hM_bin4->SetBinContent(59,124);
   hM_bin4->SetBinContent(60,101);
   hM_bin4->SetBinContent(61,99);
   hM_bin4->SetBinContent(62,66);
   hM_bin4->SetBinContent(63,54);
   hM_bin4->SetBinContent(64,56);
   hM_bin4->SetBinContent(65,50);
   hM_bin4->SetBinContent(66,55);
   hM_bin4->SetBinContent(67,45);
   hM_bin4->SetBinContent(68,37);
   hM_bin4->SetBinContent(69,45);
   hM_bin4->SetBinContent(70,25);
   hM_bin4->SetBinContent(71,35);
   hM_bin4->SetBinContent(72,36);
   hM_bin4->SetBinContent(73,47);
   hM_bin4->SetBinContent(74,39);
   hM_bin4->SetBinContent(75,43);
   hM_bin4->SetBinContent(76,45);
   hM_bin4->SetBinContent(77,28);
   hM_bin4->SetBinContent(78,48);
   hM_bin4->SetBinContent(79,40);
   hM_bin4->SetBinContent(80,25);
   hM_bin4->SetBinContent(81,47);
   hM_bin4->SetBinContent(82,41);
   hM_bin4->SetBinContent(83,35);
   hM_bin4->SetBinContent(84,24);
   hM_bin4->SetBinContent(85,20);
   hM_bin4->SetBinContent(86,29);
   hM_bin4->SetBinContent(87,36);
   hM_bin4->SetBinContent(88,31);
   hM_bin4->SetBinContent(89,25);
   hM_bin4->SetBinContent(90,28);
   hM_bin4->SetBinContent(91,26);
   hM_bin4->SetBinContent(92,28);
   hM_bin4->SetBinContent(93,26);
   hM_bin4->SetBinContent(94,22);
   hM_bin4->SetBinContent(95,17);
   hM_bin4->SetBinContent(96,21);
   hM_bin4->SetBinContent(97,34);
   hM_bin4->SetBinContent(98,31);
   hM_bin4->SetBinContent(99,33);
   hM_bin4->SetBinContent(100,26);
   hM_bin4->SetBinContent(101,1301);
   hM_bin4->SetEntries(7564);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07447863,0.1954102);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(35.12118);
   fsig->SetNDF(29);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,36.03855);
   fsig->SetParError(0,6.063549);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,45.46342);
   fsig->SetParError(1,43.94433);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.009143637);
   fsig->SetParError(2,36.43984);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,227.4328);
   fsig->SetParError(3,5.682789);
   fsig->SetParLimits(3,0,588);
   fsig->SetParameter(4,0.1346314);
   fsig->SetParError(4,0.0005384724);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0008944538);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin4->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin4");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 7564   ");
   text = ptstats->AddText("Mean  = 0.1469");
   text = ptstats->AddText("RMS   = 0.05706");
   text = ptstats->AddText("#chi^{2} / ndf = 35.12 / 29");
   text = ptstats->AddText("p0       = 36.04 #pm 6.06 ");
   text = ptstats->AddText("p1       = 45.46 #pm 43.94 ");
   text = ptstats->AddText("p2       = -0.009144 #pm 36.439842 ");
   text = ptstats->AddText("p3       = 227.4 #pm 5.7 ");
   text = ptstats->AddText("p4       = 0.1346 #pm 0.0005 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00089 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin4->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin4);

   ci = TColor::GetColor("#0000ff");
   hM_bin4->SetMarkerColor(ci);
   hM_bin4->SetMarkerStyle(24);
   hM_bin4->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin4->GetXaxis()->SetLabelFont(42);
   hM_bin4->GetXaxis()->SetLabelSize(0.035);
   hM_bin4->GetXaxis()->SetTitleSize(0.035);
   hM_bin4->GetXaxis()->SetTitleFont(42);
   hM_bin4->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin4->GetYaxis()->SetLabelFont(42);
   hM_bin4->GetYaxis()->SetLabelSize(0.035);
   hM_bin4->GetYaxis()->SetTitleSize(0.035);
   hM_bin4->GetYaxis()->SetTitleFont(42);
   hM_bin4->GetZaxis()->SetLabelFont(42);
   hM_bin4->GetZaxis()->SetLabelSize(0.035);
   hM_bin4->GetZaxis()->SetTitleSize(0.035);
   hM_bin4->GetZaxis()->SetTitleFont(42);
   hM_bin4->Draw("e");
   
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
   fmb->SetParameter(0,36.03855);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,45.46342);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.009143637);
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
   fpeak->SetParameter(0,227.4328);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1346314);
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
