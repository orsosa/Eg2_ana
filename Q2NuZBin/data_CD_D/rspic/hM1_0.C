{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Jan 31 05:37:33 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-164.5762,0.350906,1481.186);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin0 = new TH1F("hM_bin0","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin0->SetBinContent(0,5357);
   hM_bin0->SetBinContent(13,9);
   hM_bin0->SetBinContent(14,45);
   hM_bin0->SetBinContent(15,48);
   hM_bin0->SetBinContent(16,36);
   hM_bin0->SetBinContent(17,37);
   hM_bin0->SetBinContent(18,38);
   hM_bin0->SetBinContent(19,33);
   hM_bin0->SetBinContent(20,29);
   hM_bin0->SetBinContent(21,44);
   hM_bin0->SetBinContent(22,41);
   hM_bin0->SetBinContent(23,44);
   hM_bin0->SetBinContent(24,52);
   hM_bin0->SetBinContent(25,37);
   hM_bin0->SetBinContent(26,46);
   hM_bin0->SetBinContent(27,66);
   hM_bin0->SetBinContent(28,64);
   hM_bin0->SetBinContent(29,71);
   hM_bin0->SetBinContent(30,80);
   hM_bin0->SetBinContent(31,67);
   hM_bin0->SetBinContent(32,85);
   hM_bin0->SetBinContent(33,123);
   hM_bin0->SetBinContent(34,107);
   hM_bin0->SetBinContent(35,125);
   hM_bin0->SetBinContent(36,142);
   hM_bin0->SetBinContent(37,160);
   hM_bin0->SetBinContent(38,186);
   hM_bin0->SetBinContent(39,228);
   hM_bin0->SetBinContent(40,310);
   hM_bin0->SetBinContent(41,385);
   hM_bin0->SetBinContent(42,477);
   hM_bin0->SetBinContent(43,572);
   hM_bin0->SetBinContent(44,676);
   hM_bin0->SetBinContent(45,815);
   hM_bin0->SetBinContent(46,932);
   hM_bin0->SetBinContent(47,1053);
   hM_bin0->SetBinContent(48,1122);
   hM_bin0->SetBinContent(49,1198);
   hM_bin0->SetBinContent(50,1219);
   hM_bin0->SetBinContent(51,1125);
   hM_bin0->SetBinContent(52,1139);
   hM_bin0->SetBinContent(53,1056);
   hM_bin0->SetBinContent(54,942);
   hM_bin0->SetBinContent(55,813);
   hM_bin0->SetBinContent(56,771);
   hM_bin0->SetBinContent(57,744);
   hM_bin0->SetBinContent(58,573);
   hM_bin0->SetBinContent(59,543);
   hM_bin0->SetBinContent(60,522);
   hM_bin0->SetBinContent(61,478);
   hM_bin0->SetBinContent(62,442);
   hM_bin0->SetBinContent(63,435);
   hM_bin0->SetBinContent(64,371);
   hM_bin0->SetBinContent(65,371);
   hM_bin0->SetBinContent(66,386);
   hM_bin0->SetBinContent(67,327);
   hM_bin0->SetBinContent(68,358);
   hM_bin0->SetBinContent(69,373);
   hM_bin0->SetBinContent(70,374);
   hM_bin0->SetBinContent(71,356);
   hM_bin0->SetBinContent(72,371);
   hM_bin0->SetBinContent(73,362);
   hM_bin0->SetBinContent(74,373);
   hM_bin0->SetBinContent(75,361);
   hM_bin0->SetBinContent(76,374);
   hM_bin0->SetBinContent(77,344);
   hM_bin0->SetBinContent(78,368);
   hM_bin0->SetBinContent(79,380);
   hM_bin0->SetBinContent(80,368);
   hM_bin0->SetBinContent(81,356);
   hM_bin0->SetBinContent(82,352);
   hM_bin0->SetBinContent(83,359);
   hM_bin0->SetBinContent(84,408);
   hM_bin0->SetBinContent(85,344);
   hM_bin0->SetBinContent(86,397);
   hM_bin0->SetBinContent(87,366);
   hM_bin0->SetBinContent(88,376);
   hM_bin0->SetBinContent(89,371);
   hM_bin0->SetBinContent(90,390);
   hM_bin0->SetBinContent(91,348);
   hM_bin0->SetBinContent(92,386);
   hM_bin0->SetBinContent(93,376);
   hM_bin0->SetBinContent(94,399);
   hM_bin0->SetBinContent(95,386);
   hM_bin0->SetBinContent(96,389);
   hM_bin0->SetBinContent(97,397);
   hM_bin0->SetBinContent(98,394);
   hM_bin0->SetBinContent(99,371);
   hM_bin0->SetBinContent(100,368);
   hM_bin0->SetBinContent(101,18543);
   hM_bin0->SetEntries(58035);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.0760241,0.1919575);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(48.88034);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-131.3283);
   fsig->SetParError(0,13.7197);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,2627.876);
   fsig->SetParError(1,112.7679);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.044886e-05);
   fsig->SetParError(2,1138.112);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,937.0635);
   fsig->SetParError(3,12.76842);
   fsig->SetParLimits(3,0,2438);
   fsig->SetParameter(4,0.1334445);
   fsig->SetParError(4,0.0002784123);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,4.763743e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin0->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin0");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 58035  ");
   text = ptstats->AddText("Mean  = 0.1766");
   text = ptstats->AddText("RMS   = 0.06479");
   text = ptstats->AddText("#chi^{2} / ndf = 48.88 / 27");
   text = ptstats->AddText("p0       = -131.3 #pm 13.7 ");
   text = ptstats->AddText("p1       =  2628 #pm 112.8 ");
   text = ptstats->AddText("p2       = -1.045e-05 #pm 1.138e+03 ");
   text = ptstats->AddText("p3       = 937.1 #pm 12.8 ");
   text = ptstats->AddText("p4       = 0.1334 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00005 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin0->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin0);

   ci = TColor::GetColor("#0000ff");
   hM_bin0->SetMarkerColor(ci);
   hM_bin0->SetMarkerStyle(24);
   hM_bin0->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin0->GetXaxis()->SetLabelFont(42);
   hM_bin0->GetXaxis()->SetLabelSize(0.035);
   hM_bin0->GetXaxis()->SetTitleSize(0.035);
   hM_bin0->GetXaxis()->SetTitleFont(42);
   hM_bin0->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin0->GetYaxis()->SetLabelFont(42);
   hM_bin0->GetYaxis()->SetLabelSize(0.035);
   hM_bin0->GetYaxis()->SetTitleSize(0.035);
   hM_bin0->GetYaxis()->SetTitleFont(42);
   hM_bin0->GetZaxis()->SetLabelFont(42);
   hM_bin0->GetZaxis()->SetLabelSize(0.035);
   hM_bin0->GetZaxis()->SetTitleSize(0.035);
   hM_bin0->GetZaxis()->SetTitleFont(42);
   hM_bin0->Draw("e");
   
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
   fmb->SetParameter(0,-131.3283);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,2627.876);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.044886e-05);
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
   fpeak->SetParameter(0,937.0635);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1334445);
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
