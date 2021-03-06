{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 14:54:45 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-58.7559,0.350906,528.8031);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin32 = new TH1F("hM_bin32","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin32->SetBinContent(0,1920);
   hM_bin32->SetBinContent(13,4);
   hM_bin32->SetBinContent(14,4);
   hM_bin32->SetBinContent(15,8);
   hM_bin32->SetBinContent(16,9);
   hM_bin32->SetBinContent(17,15);
   hM_bin32->SetBinContent(18,5);
   hM_bin32->SetBinContent(19,8);
   hM_bin32->SetBinContent(20,9);
   hM_bin32->SetBinContent(21,16);
   hM_bin32->SetBinContent(22,11);
   hM_bin32->SetBinContent(23,8);
   hM_bin32->SetBinContent(24,13);
   hM_bin32->SetBinContent(25,7);
   hM_bin32->SetBinContent(26,6);
   hM_bin32->SetBinContent(27,18);
   hM_bin32->SetBinContent(28,16);
   hM_bin32->SetBinContent(29,14);
   hM_bin32->SetBinContent(30,18);
   hM_bin32->SetBinContent(31,21);
   hM_bin32->SetBinContent(32,22);
   hM_bin32->SetBinContent(33,27);
   hM_bin32->SetBinContent(34,23);
   hM_bin32->SetBinContent(35,14);
   hM_bin32->SetBinContent(36,24);
   hM_bin32->SetBinContent(37,34);
   hM_bin32->SetBinContent(38,38);
   hM_bin32->SetBinContent(39,52);
   hM_bin32->SetBinContent(40,63);
   hM_bin32->SetBinContent(41,65);
   hM_bin32->SetBinContent(42,99);
   hM_bin32->SetBinContent(43,101);
   hM_bin32->SetBinContent(44,159);
   hM_bin32->SetBinContent(45,173);
   hM_bin32->SetBinContent(46,228);
   hM_bin32->SetBinContent(47,268);
   hM_bin32->SetBinContent(48,303);
   hM_bin32->SetBinContent(49,378);
   hM_bin32->SetBinContent(50,368);
   hM_bin32->SetBinContent(51,383);
   hM_bin32->SetBinContent(52,427);
   hM_bin32->SetBinContent(53,366);
   hM_bin32->SetBinContent(54,336);
   hM_bin32->SetBinContent(55,321);
   hM_bin32->SetBinContent(56,298);
   hM_bin32->SetBinContent(57,260);
   hM_bin32->SetBinContent(58,234);
   hM_bin32->SetBinContent(59,199);
   hM_bin32->SetBinContent(60,191);
   hM_bin32->SetBinContent(61,152);
   hM_bin32->SetBinContent(62,108);
   hM_bin32->SetBinContent(63,138);
   hM_bin32->SetBinContent(64,119);
   hM_bin32->SetBinContent(65,119);
   hM_bin32->SetBinContent(66,100);
   hM_bin32->SetBinContent(67,95);
   hM_bin32->SetBinContent(68,91);
   hM_bin32->SetBinContent(69,101);
   hM_bin32->SetBinContent(70,86);
   hM_bin32->SetBinContent(71,88);
   hM_bin32->SetBinContent(72,97);
   hM_bin32->SetBinContent(73,101);
   hM_bin32->SetBinContent(74,90);
   hM_bin32->SetBinContent(75,90);
   hM_bin32->SetBinContent(76,76);
   hM_bin32->SetBinContent(77,92);
   hM_bin32->SetBinContent(78,94);
   hM_bin32->SetBinContent(79,79);
   hM_bin32->SetBinContent(80,86);
   hM_bin32->SetBinContent(81,110);
   hM_bin32->SetBinContent(82,89);
   hM_bin32->SetBinContent(83,97);
   hM_bin32->SetBinContent(84,101);
   hM_bin32->SetBinContent(85,97);
   hM_bin32->SetBinContent(86,99);
   hM_bin32->SetBinContent(87,98);
   hM_bin32->SetBinContent(88,110);
   hM_bin32->SetBinContent(89,101);
   hM_bin32->SetBinContent(90,114);
   hM_bin32->SetBinContent(91,69);
   hM_bin32->SetBinContent(92,86);
   hM_bin32->SetBinContent(93,107);
   hM_bin32->SetBinContent(94,99);
   hM_bin32->SetBinContent(95,115);
   hM_bin32->SetBinContent(96,102);
   hM_bin32->SetBinContent(97,86);
   hM_bin32->SetBinContent(98,80);
   hM_bin32->SetBinContent(99,94);
   hM_bin32->SetBinContent(100,94);
   hM_bin32->SetBinContent(101,22850);
   hM_bin32->SetEntries(34384);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08233114,0.1982646);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(42.67968);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-39.72644);
   fsig->SetParError(0,7.369953);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,658.4531);
   fsig->SetParError(1,57.07895);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-4.43209e-06);
   fsig->SetParError(2,936.5648);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,321.8697);
   fsig->SetParError(3,7.056115);
   fsig->SetParLimits(3,0,854);
   fsig->SetParameter(4,0.1397211);
   fsig->SetParError(4,0.0004314769);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,8.470117e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin32->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin32");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 34384  ");
   text = ptstats->AddText("Mean  = 0.1754");
   text = ptstats->AddText("RMS   = 0.06091");
   text = ptstats->AddText("#chi^{2} / ndf = 42.68 / 27");
   text = ptstats->AddText("p0       = -39.73 #pm 7.37 ");
   text = ptstats->AddText("p1       = 658.5 #pm 57.1 ");
   text = ptstats->AddText("p2       = -4.432e-06 #pm 9.366e+02 ");
   text = ptstats->AddText("p3       = 321.9 #pm 7.1 ");
   text = ptstats->AddText("p4       = 0.1397 #pm 0.0004 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00008 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin32->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin32);

   ci = TColor::GetColor("#0000ff");
   hM_bin32->SetMarkerColor(ci);
   hM_bin32->SetMarkerStyle(24);
   hM_bin32->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin32->GetXaxis()->SetLabelFont(42);
   hM_bin32->GetXaxis()->SetLabelSize(0.035);
   hM_bin32->GetXaxis()->SetTitleSize(0.035);
   hM_bin32->GetXaxis()->SetTitleFont(42);
   hM_bin32->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin32->GetYaxis()->SetLabelFont(42);
   hM_bin32->GetYaxis()->SetLabelSize(0.035);
   hM_bin32->GetYaxis()->SetTitleSize(0.035);
   hM_bin32->GetYaxis()->SetTitleFont(42);
   hM_bin32->GetZaxis()->SetLabelFont(42);
   hM_bin32->GetZaxis()->SetLabelSize(0.035);
   hM_bin32->GetZaxis()->SetTitleSize(0.035);
   hM_bin32->GetZaxis()->SetTitleFont(42);
   hM_bin32->Draw("e");
   
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
   fmb->SetParameter(0,-39.72644);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,658.4531);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-4.43209e-06);
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
   fpeak->SetParameter(0,321.8697);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1397211);
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
