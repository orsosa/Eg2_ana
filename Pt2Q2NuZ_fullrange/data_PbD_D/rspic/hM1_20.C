{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 15:53:55 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-128.3328,0.350906,1154.995);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin20 = new TH1F("hM_bin20","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin20->SetBinContent(0,2386);
   hM_bin20->SetBinContent(13,2);
   hM_bin20->SetBinContent(14,9);
   hM_bin20->SetBinContent(15,18);
   hM_bin20->SetBinContent(16,25);
   hM_bin20->SetBinContent(17,19);
   hM_bin20->SetBinContent(18,21);
   hM_bin20->SetBinContent(19,21);
   hM_bin20->SetBinContent(20,20);
   hM_bin20->SetBinContent(21,16);
   hM_bin20->SetBinContent(22,15);
   hM_bin20->SetBinContent(23,18);
   hM_bin20->SetBinContent(24,14);
   hM_bin20->SetBinContent(25,18);
   hM_bin20->SetBinContent(26,18);
   hM_bin20->SetBinContent(27,23);
   hM_bin20->SetBinContent(28,16);
   hM_bin20->SetBinContent(29,26);
   hM_bin20->SetBinContent(30,14);
   hM_bin20->SetBinContent(31,26);
   hM_bin20->SetBinContent(32,27);
   hM_bin20->SetBinContent(33,23);
   hM_bin20->SetBinContent(34,36);
   hM_bin20->SetBinContent(35,33);
   hM_bin20->SetBinContent(36,37);
   hM_bin20->SetBinContent(37,42);
   hM_bin20->SetBinContent(38,60);
   hM_bin20->SetBinContent(39,66);
   hM_bin20->SetBinContent(40,95);
   hM_bin20->SetBinContent(41,149);
   hM_bin20->SetBinContent(42,187);
   hM_bin20->SetBinContent(43,254);
   hM_bin20->SetBinContent(44,349);
   hM_bin20->SetBinContent(45,419);
   hM_bin20->SetBinContent(46,513);
   hM_bin20->SetBinContent(47,682);
   hM_bin20->SetBinContent(48,790);
   hM_bin20->SetBinContent(49,867);
   hM_bin20->SetBinContent(50,882);
   hM_bin20->SetBinContent(51,947);
   hM_bin20->SetBinContent(52,852);
   hM_bin20->SetBinContent(53,835);
   hM_bin20->SetBinContent(54,784);
   hM_bin20->SetBinContent(55,678);
   hM_bin20->SetBinContent(56,632);
   hM_bin20->SetBinContent(57,539);
   hM_bin20->SetBinContent(58,419);
   hM_bin20->SetBinContent(59,342);
   hM_bin20->SetBinContent(60,310);
   hM_bin20->SetBinContent(61,252);
   hM_bin20->SetBinContent(62,253);
   hM_bin20->SetBinContent(63,223);
   hM_bin20->SetBinContent(64,191);
   hM_bin20->SetBinContent(65,168);
   hM_bin20->SetBinContent(66,181);
   hM_bin20->SetBinContent(67,159);
   hM_bin20->SetBinContent(68,146);
   hM_bin20->SetBinContent(69,161);
   hM_bin20->SetBinContent(70,145);
   hM_bin20->SetBinContent(71,173);
   hM_bin20->SetBinContent(72,148);
   hM_bin20->SetBinContent(73,151);
   hM_bin20->SetBinContent(74,162);
   hM_bin20->SetBinContent(75,159);
   hM_bin20->SetBinContent(76,157);
   hM_bin20->SetBinContent(77,159);
   hM_bin20->SetBinContent(78,163);
   hM_bin20->SetBinContent(79,180);
   hM_bin20->SetBinContent(80,162);
   hM_bin20->SetBinContent(81,147);
   hM_bin20->SetBinContent(82,147);
   hM_bin20->SetBinContent(83,140);
   hM_bin20->SetBinContent(84,162);
   hM_bin20->SetBinContent(85,159);
   hM_bin20->SetBinContent(86,148);
   hM_bin20->SetBinContent(87,185);
   hM_bin20->SetBinContent(88,155);
   hM_bin20->SetBinContent(89,178);
   hM_bin20->SetBinContent(90,153);
   hM_bin20->SetBinContent(91,165);
   hM_bin20->SetBinContent(92,169);
   hM_bin20->SetBinContent(93,145);
   hM_bin20->SetBinContent(94,162);
   hM_bin20->SetBinContent(95,181);
   hM_bin20->SetBinContent(96,158);
   hM_bin20->SetBinContent(97,153);
   hM_bin20->SetBinContent(98,175);
   hM_bin20->SetBinContent(99,179);
   hM_bin20->SetBinContent(100,180);
   hM_bin20->SetBinContent(101,28018);
   hM_bin20->SetEntries(49326);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.080865,0.1967984);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(128.8302);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-90.67407);
   fsig->SetParError(0,8.066097);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,1152.824);
   fsig->SetParError(1,66.42595);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-4.738595e-07);
   fsig->SetParError(2,292.9937);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,774.5483);
   fsig->SetParError(3,9.917377);
   fsig->SetParLimits(3,0,1894);
   fsig->SetParameter(4,0.1382517);
   fsig->SetParError(4,0.0002443796);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,1.277126e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin20->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin20");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 49326  ");
   text = ptstats->AddText("Mean  = 0.1701");
   text = ptstats->AddText("RMS   = 0.05859");
   text = ptstats->AddText("#chi^{2} / ndf = 128.8 / 28");
   text = ptstats->AddText("p0       = -90.67 #pm 8.07 ");
   text = ptstats->AddText("p1       =  1153 #pm 66.4 ");
   text = ptstats->AddText("p2       = -4.739e-07 #pm 2.930e+02 ");
   text = ptstats->AddText("p3       = 774.5 #pm 9.9 ");
   text = ptstats->AddText("p4       = 0.1383 #pm 0.0002 ");
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
   fmb->SetParameter(0,-90.67407);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1152.824);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-4.738595e-07);
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
   fpeak->SetParameter(0,774.5483);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1382517);
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
