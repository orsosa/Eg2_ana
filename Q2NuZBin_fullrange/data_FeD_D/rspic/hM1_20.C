{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr  4 12:39:46 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-124.5976,0.350906,1121.378);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin20 = new TH1F("hM_bin20","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin20->SetBinContent(0,6601);
   hM_bin20->SetBinContent(13,1);
   hM_bin20->SetBinContent(14,11);
   hM_bin20->SetBinContent(15,23);
   hM_bin20->SetBinContent(16,18);
   hM_bin20->SetBinContent(17,14);
   hM_bin20->SetBinContent(18,16);
   hM_bin20->SetBinContent(19,10);
   hM_bin20->SetBinContent(20,16);
   hM_bin20->SetBinContent(21,12);
   hM_bin20->SetBinContent(22,11);
   hM_bin20->SetBinContent(23,24);
   hM_bin20->SetBinContent(24,11);
   hM_bin20->SetBinContent(25,20);
   hM_bin20->SetBinContent(26,19);
   hM_bin20->SetBinContent(27,24);
   hM_bin20->SetBinContent(28,14);
   hM_bin20->SetBinContent(29,23);
   hM_bin20->SetBinContent(30,24);
   hM_bin20->SetBinContent(31,24);
   hM_bin20->SetBinContent(32,22);
   hM_bin20->SetBinContent(33,32);
   hM_bin20->SetBinContent(34,26);
   hM_bin20->SetBinContent(35,39);
   hM_bin20->SetBinContent(36,41);
   hM_bin20->SetBinContent(37,50);
   hM_bin20->SetBinContent(38,65);
   hM_bin20->SetBinContent(39,85);
   hM_bin20->SetBinContent(40,117);
   hM_bin20->SetBinContent(41,180);
   hM_bin20->SetBinContent(42,251);
   hM_bin20->SetBinContent(43,316);
   hM_bin20->SetBinContent(44,343);
   hM_bin20->SetBinContent(45,529);
   hM_bin20->SetBinContent(46,627);
   hM_bin20->SetBinContent(47,704);
   hM_bin20->SetBinContent(48,835);
   hM_bin20->SetBinContent(49,919);
   hM_bin20->SetBinContent(50,904);
   hM_bin20->SetBinContent(51,842);
   hM_bin20->SetBinContent(52,826);
   hM_bin20->SetBinContent(53,737);
   hM_bin20->SetBinContent(54,635);
   hM_bin20->SetBinContent(55,512);
   hM_bin20->SetBinContent(56,437);
   hM_bin20->SetBinContent(57,375);
   hM_bin20->SetBinContent(58,281);
   hM_bin20->SetBinContent(59,260);
   hM_bin20->SetBinContent(60,181);
   hM_bin20->SetBinContent(61,214);
   hM_bin20->SetBinContent(62,188);
   hM_bin20->SetBinContent(63,168);
   hM_bin20->SetBinContent(64,176);
   hM_bin20->SetBinContent(65,150);
   hM_bin20->SetBinContent(66,161);
   hM_bin20->SetBinContent(67,163);
   hM_bin20->SetBinContent(68,152);
   hM_bin20->SetBinContent(69,165);
   hM_bin20->SetBinContent(70,158);
   hM_bin20->SetBinContent(71,146);
   hM_bin20->SetBinContent(72,180);
   hM_bin20->SetBinContent(73,148);
   hM_bin20->SetBinContent(74,165);
   hM_bin20->SetBinContent(75,158);
   hM_bin20->SetBinContent(76,173);
   hM_bin20->SetBinContent(77,186);
   hM_bin20->SetBinContent(78,161);
   hM_bin20->SetBinContent(79,180);
   hM_bin20->SetBinContent(80,183);
   hM_bin20->SetBinContent(81,206);
   hM_bin20->SetBinContent(82,171);
   hM_bin20->SetBinContent(83,199);
   hM_bin20->SetBinContent(84,215);
   hM_bin20->SetBinContent(85,241);
   hM_bin20->SetBinContent(86,216);
   hM_bin20->SetBinContent(87,225);
   hM_bin20->SetBinContent(88,233);
   hM_bin20->SetBinContent(89,229);
   hM_bin20->SetBinContent(90,225);
   hM_bin20->SetBinContent(91,212);
   hM_bin20->SetBinContent(92,227);
   hM_bin20->SetBinContent(93,191);
   hM_bin20->SetBinContent(94,238);
   hM_bin20->SetBinContent(95,221);
   hM_bin20->SetBinContent(96,250);
   hM_bin20->SetBinContent(97,256);
   hM_bin20->SetBinContent(98,265);
   hM_bin20->SetBinContent(99,211);
   hM_bin20->SetBinContent(100,233);
   hM_bin20->SetBinContent(101,39747);
   hM_bin20->SetEntries(65673);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07656438,0.1924978);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(263.1908);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-87.84843);
   fsig->SetParError(0,7.502871);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,1093.718);
   fsig->SetParError(1,63.44576);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-3.514046e-05);
   fsig->SetParError(2,175.6088);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,715.8857);
   fsig->SetParError(3,9.629484);
   fsig->SetParLimits(3,0,1838);
   fsig->SetParameter(4,0.134023);
   fsig->SetParError(4,0.0002437092);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,8.815117e-06);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin20->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin20");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 65673  ");
   text = ptstats->AddText("Mean  = 0.1765");
   text = ptstats->AddText("RMS   = 0.06398");
   text = ptstats->AddText("#chi^{2} / ndf = 263.2 / 28");
   text = ptstats->AddText("p0       = -87.85 #pm 7.50 ");
   text = ptstats->AddText("p1       =  1094 #pm 63.4 ");
   text = ptstats->AddText("p2       = -3.514e-05 #pm 1.756e+02 ");
   text = ptstats->AddText("p3       = 715.9 #pm 9.6 ");
   text = ptstats->AddText("p4       = 0.134 #pm 0.000 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00001 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin20->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin20);

   ci = TColor::GetColor("#0000ff");
   hM_bin20->SetMarkerColor(ci);
   hM_bin20->SetMarkerStyle(24);
   hM_bin20->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin20->GetXaxis()->SetLabelFont(42);
   hM_bin20->GetXaxis()->SetLabelSize(0.035);
   hM_bin20->GetXaxis()->SetTitleSize(0.035);
   hM_bin20->GetXaxis()->SetTitleFont(42);
   hM_bin20->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin20->GetYaxis()->SetLabelFont(42);
   hM_bin20->GetYaxis()->SetLabelSize(0.035);
   hM_bin20->GetYaxis()->SetTitleSize(0.035);
   hM_bin20->GetYaxis()->SetTitleFont(42);
   hM_bin20->GetZaxis()->SetLabelFont(42);
   hM_bin20->GetZaxis()->SetLabelSize(0.035);
   hM_bin20->GetZaxis()->SetTitleSize(0.035);
   hM_bin20->GetZaxis()->SetTitleFont(42);
   hM_bin20->Draw("e");
   
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
   fmb->SetParameter(0,-87.84843);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1093.718);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-3.514046e-05);
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
   fpeak->SetParameter(0,715.8857);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.134023);
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
