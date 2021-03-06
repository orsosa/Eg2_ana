{
//=========Macro generated from canvas: c/The canvas
//=========  (Wed Sep 14 17:45:37 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.06625,0.2965211,0.20375,5.706361);
   c->SetBorderSize(2);
   c->SetLogy();
   c->SetFrameFillColor(0);
   
   TH1F *hM = new TH1F("hM","Mass bin (pt2,nu,z) = (4,0,0)",75,0.08,0.19);
   hM->SetBinContent(0,87);
   hM->SetBinContent(1,40);
   hM->SetBinContent(2,33);
   hM->SetBinContent(3,25);
   hM->SetBinContent(4,34);
   hM->SetBinContent(5,34);
   hM->SetBinContent(6,18);
   hM->SetBinContent(7,35);
   hM->SetBinContent(8,26);
   hM->SetBinContent(9,30);
   hM->SetBinContent(10,38);
   hM->SetBinContent(11,23);
   hM->SetBinContent(12,22);
   hM->SetBinContent(13,36);
   hM->SetBinContent(14,31);
   hM->SetBinContent(15,41);
   hM->SetBinContent(16,33);
   hM->SetBinContent(17,33);
   hM->SetBinContent(18,38);
   hM->SetBinContent(19,33);
   hM->SetBinContent(20,44);
   hM->SetBinContent(21,28);
   hM->SetBinContent(22,24);
   hM->SetBinContent(23,32);
   hM->SetBinContent(24,40);
   hM->SetBinContent(25,38);
   hM->SetBinContent(26,39);
   hM->SetBinContent(27,46);
   hM->SetBinContent(28,45);
   hM->SetBinContent(29,44);
   hM->SetBinContent(30,34);
   hM->SetBinContent(31,56);
   hM->SetBinContent(32,43);
   hM->SetBinContent(33,41);
   hM->SetBinContent(34,42);
   hM->SetBinContent(35,117);
   hM->SetBinContent(36,781);
   hM->SetBinContent(37,11606);
   hM->SetBinContent(38,76960);
   hM->SetBinContent(39,11826);
   hM->SetBinContent(40,743);
   hM->SetBinContent(41,86);
   hM->SetBinContent(42,36);
   hM->SetBinContent(43,42);
   hM->SetBinContent(44,45);
   hM->SetBinContent(45,47);
   hM->SetBinContent(46,44);
   hM->SetBinContent(47,50);
   hM->SetBinContent(48,41);
   hM->SetBinContent(49,42);
   hM->SetBinContent(50,41);
   hM->SetBinContent(51,38);
   hM->SetBinContent(52,40);
   hM->SetBinContent(53,38);
   hM->SetBinContent(54,52);
   hM->SetBinContent(55,72);
   hM->SetBinContent(56,43);
   hM->SetBinContent(57,42);
   hM->SetBinContent(58,49);
   hM->SetBinContent(59,47);
   hM->SetBinContent(60,40);
   hM->SetBinContent(61,39);
   hM->SetBinContent(62,47);
   hM->SetBinContent(63,43);
   hM->SetBinContent(64,56);
   hM->SetBinContent(65,44);
   hM->SetBinContent(66,33);
   hM->SetBinContent(67,26);
   hM->SetBinContent(68,32);
   hM->SetBinContent(69,39);
   hM->SetBinContent(70,39);
   hM->SetBinContent(71,41);
   hM->SetBinContent(72,53);
   hM->SetBinContent(73,32);
   hM->SetBinContent(74,33);
   hM->SetBinContent(75,52);
   hM->SetBinContent(76,42);
   hM->SetEntries(104905);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 104905 ");
   text = ptstats->AddText("Mean  = 0.1351");
   text = ptstats->AddText("RMS   = 0.005206");
   text = ptstats->AddText("#chi^{2} / ndf =  1363 / 69");
   text = ptstats->AddText("p0       = -74.71 #pm 14.23 ");
   text = ptstats->AddText("p1       =  1662 #pm 223.1 ");
   text = ptstats->AddText("p2       = -5703 #pm 827.5 ");
   text = ptstats->AddText("p3       = 7.668e+04 #pm 2.791e+02 ");
   text = ptstats->AddText("p4       = 0.135 #pm 0.000 ");
   text = ptstats->AddText("p5       = 0.0007584 #pm 0.0000015 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08,0.19);
   fsig->SetNpx(500);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(1363.483);
   fsig->SetNDF(69);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-74.71241);
   fsig->SetParError(0,14.23309);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,1662.091);
   fsig->SetParError(1,223.1036);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-5703.449);
   fsig->SetParError(2,827.4502);
   fsig->SetParLimits(2,0,0);
   fsig->SetParameter(3,76684.81);
   fsig->SetParError(3,279.0981);
   fsig->SetParLimits(3,0,0);
   fsig->SetParameter(4,0.1350037);
   fsig->SetParError(4,2.538188e-06);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.0007584398);
   fsig->SetParError(5,1.540873e-06);
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
   
   TF1 *fmb = new TF1("fmb","pol2",0.13,0.14);
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
   fmb->SetParameter(0,-74.71241);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1662.091);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-5703.449);
   fmb->SetParError(2,0);
   fmb->SetParLimits(2,0,0);
   fmb->Draw("same");
   
   TF1 *fpeak = new TF1("fpeak","gaus",0.13,0.14);
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
   fpeak->SetParameter(0,76684.81);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1350037);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.0007584398);
   fpeak->SetParError(2,0);
   fpeak->SetParLimits(2,0,0);
   fpeak->Draw("same");
   
   TPaveText *pt = new TPaveText(0.01,0.9404546,0.4709548,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   text = pt->AddText("Mass bin (pt2,nu,z) = (4,0,0)");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
