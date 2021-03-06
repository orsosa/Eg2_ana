{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Dec 20 14:49:16 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.425,0.4024212,0.675,3.096622);
   c->SetBorderSize(2);
   c->SetLogy();
   c->SetFrameFillColor(0);
   
   TH1F *hM = new TH1F("hM","Mass bin (pt2,nu,z) = (0,0,2)",75,0.45,0.65);
   hM->SetBinContent(0,4977);
   hM->SetBinContent(1,44);
   hM->SetBinContent(2,30);
   hM->SetBinContent(3,49);
   hM->SetBinContent(4,45);
   hM->SetBinContent(5,43);
   hM->SetBinContent(6,38);
   hM->SetBinContent(7,46);
   hM->SetBinContent(8,44);
   hM->SetBinContent(9,43);
   hM->SetBinContent(10,36);
   hM->SetBinContent(11,44);
   hM->SetBinContent(12,40);
   hM->SetBinContent(13,35);
   hM->SetBinContent(14,51);
   hM->SetBinContent(15,34);
   hM->SetBinContent(16,40);
   hM->SetBinContent(17,37);
   hM->SetBinContent(18,38);
   hM->SetBinContent(19,48);
   hM->SetBinContent(20,39);
   hM->SetBinContent(21,41);
   hM->SetBinContent(22,40);
   hM->SetBinContent(23,34);
   hM->SetBinContent(24,42);
   hM->SetBinContent(25,44);
   hM->SetBinContent(26,36);
   hM->SetBinContent(27,43);
   hM->SetBinContent(28,44);
   hM->SetBinContent(29,44);
   hM->SetBinContent(30,38);
   hM->SetBinContent(31,42);
   hM->SetBinContent(32,36);
   hM->SetBinContent(33,38);
   hM->SetBinContent(34,48);
   hM->SetBinContent(35,33);
   hM->SetBinContent(36,46);
   hM->SetBinContent(37,40);
   hM->SetBinContent(38,40);
   hM->SetBinContent(39,45);
   hM->SetBinContent(40,31);
   hM->SetBinContent(41,29);
   hM->SetBinContent(42,34);
   hM->SetBinContent(43,36);
   hM->SetBinContent(44,41);
   hM->SetBinContent(45,31);
   hM->SetBinContent(46,31);
   hM->SetBinContent(47,39);
   hM->SetBinContent(48,47);
   hM->SetBinContent(49,38);
   hM->SetBinContent(50,30);
   hM->SetBinContent(51,34);
   hM->SetBinContent(52,31);
   hM->SetBinContent(53,24);
   hM->SetBinContent(54,39);
   hM->SetBinContent(55,28);
   hM->SetBinContent(56,13);
   hM->SetBinContent(57,37);
   hM->SetBinContent(58,26);
   hM->SetBinContent(59,30);
   hM->SetBinContent(60,28);
   hM->SetBinContent(61,25);
   hM->SetBinContent(62,31);
   hM->SetBinContent(63,31);
   hM->SetBinContent(64,32);
   hM->SetBinContent(65,29);
   hM->SetBinContent(66,22);
   hM->SetBinContent(67,30);
   hM->SetBinContent(68,22);
   hM->SetBinContent(69,24);
   hM->SetBinContent(70,27);
   hM->SetBinContent(71,19);
   hM->SetBinContent(72,17);
   hM->SetBinContent(73,18);
   hM->SetBinContent(74,25);
   hM->SetBinContent(75,21);
   hM->SetBinContent(76,47588);
   hM->SetEntries(55213);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 55213  ");
   text = ptstats->AddText("Mean  = 0.5399");
   text = ptstats->AddText("RMS   = 0.05515");
   text = ptstats->AddText("#chi^{2} / ndf = 1.532e+05 / 69");
   text = ptstats->AddText("p0       = -3378 #pm 0.0 ");
   text = ptstats->AddText("p1       =  7885 #pm 0.0 ");
   text = ptstats->AddText("p2       = -3286 #pm 0.0 ");
   text = ptstats->AddText("p3       = 33.13 #pm 0.00 ");
   text = ptstats->AddText("p4       = 0.4032 #pm 0.3254 ");
   text = ptstats->AddText("p5       = 0.005748 #pm 0.000493 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.45,0.65);
   fsig->SetNpx(500);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(153151.2);
   fsig->SetNDF(69);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-3377.596);
   fsig->SetParError(0,1.353764e-05);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,7884.909);
   fsig->SetParError(1,1.353766e-05);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-3285.777);
   fsig->SetParError(2,1.353766e-05);
   fsig->SetParLimits(2,0,0);
   fsig->SetParameter(3,33.13237);
   fsig->SetParError(3,1.353769e-05);
   fsig->SetParLimits(3,0,0);
   fsig->SetParameter(4,0.4032054);
   fsig->SetParError(4,0.325375);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.005748097);
   fsig->SetParError(5,0.000493235);
   fsig->SetParLimits(5,0,0);
   hM->GetListOfFunctions()->Add(fsig);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.45,0.65);
   fsig->SetNpx(500);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(70.873);
   fsig->SetNDF(69);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-217.059);
   fsig->SetParError(0,7.510216);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,653.2812);
   fsig->SetParError(1,13.19988);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-694.5764);
   fsig->SetParError(2,14.18199);
   fsig->SetParLimits(2,0,0);
   fsig->SetParameter(3,1048.01);
   fsig->SetParError(3,75.34294);
   fsig->SetParLimits(3,0,0);
   fsig->SetParameter(4,-69257.95);
   fsig->SetParError(4,1080.297);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,32256.34);
   fsig->SetParError(5,503.022);
   fsig->SetParLimits(5,0,0);
   hM->GetListOfFunctions()->Add(fsig);

   ci = TColor::GetColor("#0000ff");
   hM->SetMarkerColor(ci);
   hM->SetMarkerStyle(24);
   hM->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM->GetXaxis()->SetLabelFont(42);
   hM->GetXaxis()->SetLabelSize(0.035);
   hM->GetXaxis()->SetTitleSize(0.035);
   hM->GetXaxis()->SetTitleFont(42);
   hM->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM->GetYaxis()->SetLabelFont(42);
   hM->GetYaxis()->SetLabelSize(0.035);
   hM->GetYaxis()->SetTitleSize(0.035);
   hM->GetYaxis()->SetTitleFont(42);
   hM->GetZaxis()->SetLabelFont(42);
   hM->GetZaxis()->SetLabelSize(0.035);
   hM->GetZaxis()->SetTitleSize(0.035);
   hM->GetZaxis()->SetTitleFont(42);
   hM->Draw("e");
   
   TF1 *fmb = new TF1("fmb","pol2",0.54,0.56);
   fmb->SetFillColor(19);
   fmb->SetFillStyle(0);

   ci = TColor::GetColor("#00ff00");
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
   fmb->SetParameter(0,-217.059);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,653.2812);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-694.5764);
   fmb->SetParError(2,0);
   fmb->SetParLimits(2,0,0);
   fmb->Draw("same");
   
   TF1 *fpeak = new TF1("fpeak","gaus",0.54,0.56);
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
   fpeak->SetParameter(0,1048.01);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,-69257.95);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,32256.34);
   fpeak->SetParError(2,0);
   fpeak->SetParLimits(2,0,0);
   fpeak->Draw("same");
   
   TPaveText *pt = new TPaveText(0.01,0.9404546,0.4709548,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   text = pt->AddText("Mass bin (pt2,nu,z) = (0,0,2)");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
