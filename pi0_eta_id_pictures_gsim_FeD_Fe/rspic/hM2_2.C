{
//=========Macro generated from canvas: c/The canvas
//=========  (Wed Sep 14 17:45:33 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.06625,1.080804,0.20375,5.3551);
   c->SetBorderSize(2);
   c->SetLogy();
   c->SetFrameFillColor(0);
   
   TH1F *hM = new TH1F("hM","Mass bin (pt2,nu,z) = (0,0,2)",75,0.08,0.19);
   hM->SetBinContent(0,271);
   hM->SetBinContent(1,73);
   hM->SetBinContent(2,78);
   hM->SetBinContent(3,83);
   hM->SetBinContent(4,84);
   hM->SetBinContent(5,105);
   hM->SetBinContent(6,95);
   hM->SetBinContent(7,100);
   hM->SetBinContent(8,99);
   hM->SetBinContent(9,108);
   hM->SetBinContent(10,90);
   hM->SetBinContent(11,88);
   hM->SetBinContent(12,117);
   hM->SetBinContent(13,115);
   hM->SetBinContent(14,92);
   hM->SetBinContent(15,87);
   hM->SetBinContent(16,106);
   hM->SetBinContent(17,103);
   hM->SetBinContent(18,104);
   hM->SetBinContent(19,114);
   hM->SetBinContent(20,103);
   hM->SetBinContent(21,108);
   hM->SetBinContent(22,98);
   hM->SetBinContent(23,104);
   hM->SetBinContent(24,98);
   hM->SetBinContent(25,127);
   hM->SetBinContent(26,128);
   hM->SetBinContent(27,100);
   hM->SetBinContent(28,101);
   hM->SetBinContent(29,112);
   hM->SetBinContent(30,111);
   hM->SetBinContent(31,129);
   hM->SetBinContent(32,111);
   hM->SetBinContent(33,156);
   hM->SetBinContent(34,172);
   hM->SetBinContent(35,232);
   hM->SetBinContent(36,674);
   hM->SetBinContent(37,7225);
   hM->SetBinContent(38,44470);
   hM->SetBinContent(39,7272);
   hM->SetBinContent(40,692);
   hM->SetBinContent(41,223);
   hM->SetBinContent(42,146);
   hM->SetBinContent(43,112);
   hM->SetBinContent(44,117);
   hM->SetBinContent(45,145);
   hM->SetBinContent(46,116);
   hM->SetBinContent(47,143);
   hM->SetBinContent(48,143);
   hM->SetBinContent(49,127);
   hM->SetBinContent(50,163);
   hM->SetBinContent(51,157);
   hM->SetBinContent(52,140);
   hM->SetBinContent(53,160);
   hM->SetBinContent(54,144);
   hM->SetBinContent(55,129);
   hM->SetBinContent(56,126);
   hM->SetBinContent(57,130);
   hM->SetBinContent(58,127);
   hM->SetBinContent(59,138);
   hM->SetBinContent(60,140);
   hM->SetBinContent(61,153);
   hM->SetBinContent(62,116);
   hM->SetBinContent(63,151);
   hM->SetBinContent(64,144);
   hM->SetBinContent(65,142);
   hM->SetBinContent(66,143);
   hM->SetBinContent(67,172);
   hM->SetBinContent(68,154);
   hM->SetBinContent(69,143);
   hM->SetBinContent(70,135);
   hM->SetBinContent(71,120);
   hM->SetBinContent(72,128);
   hM->SetBinContent(73,174);
   hM->SetBinContent(74,170);
   hM->SetBinContent(75,182);
   hM->SetBinContent(76,155);
   hM->SetEntries(69643);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 69643  ");
   text = ptstats->AddText("Mean  = 0.1357");
   text = ptstats->AddText("RMS   = 0.01154");
   text = ptstats->AddText("#chi^{2} / ndf = 994.9 / 69");
   text = ptstats->AddText("p0       = -108.5 #pm 24.9 ");
   text = ptstats->AddText("p1       =  3018 #pm 392.3 ");
   text = ptstats->AddText("p2       = -8916 #pm 1467.8 ");
   text = ptstats->AddText("p3       = 4.419e+04 #pm 2.123e+02 ");
   text = ptstats->AddText("p4       = 0.135 #pm 0.000 ");
   text = ptstats->AddText("p5       = 0.0007701 #pm 0.0000021 ");
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
   fsig->SetChisquare(994.9001);
   fsig->SetNDF(69);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-108.4903);
   fsig->SetParError(0,24.87912);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,3017.538);
   fsig->SetParError(1,392.3316);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-8916.21);
   fsig->SetParError(2,1467.814);
   fsig->SetParLimits(2,0,0);
   fsig->SetParameter(3,44191.25);
   fsig->SetParError(3,212.2592);
   fsig->SetParLimits(3,0,0);
   fsig->SetParameter(4,0.1350013);
   fsig->SetParError(4,3.376517e-06);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.0007701257);
   fsig->SetParError(5,2.095609e-06);
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
   fmb->SetParameter(0,-108.4903);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,3017.538);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-8916.21);
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
   fpeak->SetParameter(0,44191.25);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1350013);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.0007701257);
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
