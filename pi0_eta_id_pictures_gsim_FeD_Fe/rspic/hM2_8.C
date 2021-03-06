{
//=========Macro generated from canvas: c/The canvas
//=========  (Wed Sep 14 17:45:34 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.06625,-0.5972565,0.20375,5.375309);
   c->SetBorderSize(2);
   c->SetLogy();
   c->SetFrameFillColor(0);
   
   TH1F *hM = new TH1F("hM","Mass bin (pt2,nu,z) = (1,0,3)",75,0.08,0.19);
   hM->SetBinContent(0,33);
   hM->SetBinContent(1,4);
   hM->SetBinContent(2,7);
   hM->SetBinContent(3,8);
   hM->SetBinContent(4,15);
   hM->SetBinContent(5,11);
   hM->SetBinContent(6,15);
   hM->SetBinContent(7,16);
   hM->SetBinContent(8,16);
   hM->SetBinContent(9,21);
   hM->SetBinContent(10,23);
   hM->SetBinContent(11,15);
   hM->SetBinContent(12,21);
   hM->SetBinContent(13,18);
   hM->SetBinContent(14,27);
   hM->SetBinContent(15,15);
   hM->SetBinContent(16,20);
   hM->SetBinContent(17,14);
   hM->SetBinContent(18,33);
   hM->SetBinContent(19,20);
   hM->SetBinContent(20,26);
   hM->SetBinContent(21,30);
   hM->SetBinContent(22,25);
   hM->SetBinContent(23,20);
   hM->SetBinContent(24,18);
   hM->SetBinContent(25,20);
   hM->SetBinContent(26,17);
   hM->SetBinContent(27,20);
   hM->SetBinContent(28,20);
   hM->SetBinContent(29,25);
   hM->SetBinContent(30,22);
   hM->SetBinContent(31,33);
   hM->SetBinContent(32,28);
   hM->SetBinContent(33,41);
   hM->SetBinContent(34,38);
   hM->SetBinContent(35,117);
   hM->SetBinContent(36,434);
   hM->SetBinContent(37,5123);
   hM->SetBinContent(38,31482);
   hM->SetBinContent(39,5097);
   hM->SetBinContent(40,420);
   hM->SetBinContent(41,131);
   hM->SetBinContent(42,53);
   hM->SetBinContent(43,37);
   hM->SetBinContent(44,21);
   hM->SetBinContent(45,27);
   hM->SetBinContent(46,33);
   hM->SetBinContent(47,23);
   hM->SetBinContent(48,37);
   hM->SetBinContent(49,30);
   hM->SetBinContent(50,29);
   hM->SetBinContent(51,38);
   hM->SetBinContent(52,27);
   hM->SetBinContent(53,31);
   hM->SetBinContent(54,23);
   hM->SetBinContent(55,31);
   hM->SetBinContent(56,22);
   hM->SetBinContent(57,27);
   hM->SetBinContent(58,28);
   hM->SetBinContent(59,33);
   hM->SetBinContent(60,44);
   hM->SetBinContent(61,34);
   hM->SetBinContent(62,34);
   hM->SetBinContent(63,30);
   hM->SetBinContent(64,28);
   hM->SetBinContent(65,25);
   hM->SetBinContent(66,28);
   hM->SetBinContent(67,30);
   hM->SetBinContent(68,25);
   hM->SetBinContent(69,37);
   hM->SetBinContent(70,26);
   hM->SetBinContent(71,31);
   hM->SetBinContent(72,33);
   hM->SetBinContent(73,25);
   hM->SetBinContent(74,31);
   hM->SetBinContent(75,36);
   hM->SetBinContent(76,25);
   hM->SetEntries(44611);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 44611  ");
   text = ptstats->AddText("Mean  = 0.1353");
   text = ptstats->AddText("RMS   = 0.006313");
   text = ptstats->AddText("#chi^{2} / ndf = 888.5 / 69");
   text = ptstats->AddText("p0       = -85.93 #pm 9.60 ");
   text = ptstats->AddText("p1       =  1562 #pm 156.6 ");
   text = ptstats->AddText("p2       = -5129 #pm 598.2 ");
   text = ptstats->AddText("p3       = 3.133e+04 #pm 1.792e+02 ");
   text = ptstats->AddText("p4       = 0.135 #pm 0.000 ");
   text = ptstats->AddText("p5       = 0.0007721 #pm 0.0000025 ");
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
   fsig->SetChisquare(888.5404);
   fsig->SetNDF(69);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-85.93338);
   fsig->SetParError(0,9.59788);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,1562.042);
   fsig->SetParError(1,156.597);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-5128.61);
   fsig->SetParError(2,598.2136);
   fsig->SetParLimits(2,0,0);
   fsig->SetParameter(3,31329.43);
   fsig->SetParError(3,179.231);
   fsig->SetParLimits(3,0,0);
   fsig->SetParameter(4,0.1349989);
   fsig->SetParError(4,3.974024e-06);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.0007721473);
   fsig->SetParError(5,2.482662e-06);
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
   fmb->SetParameter(0,-85.93338);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1562.042);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-5128.61);
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
   fpeak->SetParameter(0,31329.43);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1349989);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.0007721473);
   fpeak->SetParError(2,0);
   fpeak->SetParLimits(2,0,0);
   fpeak->Draw("same");
   
   TPaveText *pt = new TPaveText(0.01,0.9404546,0.4709548,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   text = pt->AddText("Mass bin (pt2,nu,z) = (1,0,3)");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
