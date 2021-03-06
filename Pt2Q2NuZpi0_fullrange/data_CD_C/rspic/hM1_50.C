{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:35:06 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-127.3991,0.350906,1146.591);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin50 = new TH1F("hM_bin50","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin50->SetBinContent(14,5);
   hM_bin50->SetBinContent(15,26);
   hM_bin50->SetBinContent(16,34);
   hM_bin50->SetBinContent(17,42);
   hM_bin50->SetBinContent(18,57);
   hM_bin50->SetBinContent(19,83);
   hM_bin50->SetBinContent(20,63);
   hM_bin50->SetBinContent(21,95);
   hM_bin50->SetBinContent(22,112);
   hM_bin50->SetBinContent(23,123);
   hM_bin50->SetBinContent(24,113);
   hM_bin50->SetBinContent(25,97);
   hM_bin50->SetBinContent(26,118);
   hM_bin50->SetBinContent(27,146);
   hM_bin50->SetBinContent(28,120);
   hM_bin50->SetBinContent(29,152);
   hM_bin50->SetBinContent(30,170);
   hM_bin50->SetBinContent(31,123);
   hM_bin50->SetBinContent(32,175);
   hM_bin50->SetBinContent(33,162);
   hM_bin50->SetBinContent(34,189);
   hM_bin50->SetBinContent(35,183);
   hM_bin50->SetBinContent(36,207);
   hM_bin50->SetBinContent(37,202);
   hM_bin50->SetBinContent(38,209);
   hM_bin50->SetBinContent(39,229);
   hM_bin50->SetBinContent(40,243);
   hM_bin50->SetBinContent(41,312);
   hM_bin50->SetBinContent(42,316);
   hM_bin50->SetBinContent(43,382);
   hM_bin50->SetBinContent(44,472);
   hM_bin50->SetBinContent(45,544);
   hM_bin50->SetBinContent(46,613);
   hM_bin50->SetBinContent(47,700);
   hM_bin50->SetBinContent(48,759);
   hM_bin50->SetBinContent(49,800);
   hM_bin50->SetBinContent(50,925);
   hM_bin50->SetBinContent(51,940);
   hM_bin50->SetBinContent(52,892);
   hM_bin50->SetBinContent(53,849);
   hM_bin50->SetBinContent(54,827);
   hM_bin50->SetBinContent(55,786);
   hM_bin50->SetBinContent(56,669);
   hM_bin50->SetBinContent(57,692);
   hM_bin50->SetBinContent(58,588);
   hM_bin50->SetBinContent(59,540);
   hM_bin50->SetBinContent(60,410);
   hM_bin50->SetBinContent(61,352);
   hM_bin50->SetBinContent(62,341);
   hM_bin50->SetBinContent(63,334);
   hM_bin50->SetBinContent(64,262);
   hM_bin50->SetBinContent(65,268);
   hM_bin50->SetBinContent(66,260);
   hM_bin50->SetBinContent(67,247);
   hM_bin50->SetBinContent(68,214);
   hM_bin50->SetBinContent(69,190);
   hM_bin50->SetBinContent(70,181);
   hM_bin50->SetBinContent(71,194);
   hM_bin50->SetBinContent(72,205);
   hM_bin50->SetBinContent(73,188);
   hM_bin50->SetBinContent(74,164);
   hM_bin50->SetBinContent(75,176);
   hM_bin50->SetBinContent(76,186);
   hM_bin50->SetBinContent(77,166);
   hM_bin50->SetBinContent(78,168);
   hM_bin50->SetBinContent(79,180);
   hM_bin50->SetBinContent(80,148);
   hM_bin50->SetBinContent(81,159);
   hM_bin50->SetBinContent(82,176);
   hM_bin50->SetBinContent(83,143);
   hM_bin50->SetBinContent(84,159);
   hM_bin50->SetBinContent(85,156);
   hM_bin50->SetBinContent(86,148);
   hM_bin50->SetBinContent(87,141);
   hM_bin50->SetBinContent(88,140);
   hM_bin50->SetBinContent(89,125);
   hM_bin50->SetBinContent(90,134);
   hM_bin50->SetBinContent(91,150);
   hM_bin50->SetBinContent(92,138);
   hM_bin50->SetBinContent(93,143);
   hM_bin50->SetBinContent(94,131);
   hM_bin50->SetBinContent(95,138);
   hM_bin50->SetBinContent(96,115);
   hM_bin50->SetBinContent(97,143);
   hM_bin50->SetBinContent(98,111);
   hM_bin50->SetBinContent(99,101);
   hM_bin50->SetBinContent(100,120);
   hM_bin50->SetBinContent(101,8108);
   hM_bin50->SetEntries(31797);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07993638,0.1989594);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(36.96365);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,136.4543);
   fsig->SetParError(0,14.20519);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,435.6805);
   fsig->SetParError(1,99.66016);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-6.705943e-06);
   fsig->SetParError(2,6610.038);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,702.0481);
   fsig->SetParError(3,11.23733);
   fsig->SetParLimits(3,0,1880);
   fsig->SetParameter(4,0.1392102);
   fsig->SetParError(4,0.0003447363);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0001896098);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin50->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin50");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 31797  ");
   text = ptstats->AddText("Mean  = 0.1544");
   text = ptstats->AddText("RMS   = 0.06008");
   text = ptstats->AddText("#chi^{2} / ndf = 36.96 / 28");
   text = ptstats->AddText("p0       = 136.5 #pm 14.2 ");
   text = ptstats->AddText("p1       = 435.7 #pm 99.7 ");
   text = ptstats->AddText("p2       = -6.706e-06 #pm 6.610e+03 ");
   text = ptstats->AddText("p3       =   702 #pm 11.2 ");
   text = ptstats->AddText("p4       = 0.1392 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00019 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin50->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin50);

   ci = TColor::GetColor("#0000ff");
   hM_bin50->SetMarkerColor(ci);
   hM_bin50->SetMarkerStyle(24);
   hM_bin50->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin50->GetXaxis()->SetLabelFont(42);
   hM_bin50->GetXaxis()->SetLabelSize(0.035);
   hM_bin50->GetXaxis()->SetTitleSize(0.035);
   hM_bin50->GetXaxis()->SetTitleFont(42);
   hM_bin50->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin50->GetYaxis()->SetLabelFont(42);
   hM_bin50->GetYaxis()->SetLabelSize(0.035);
   hM_bin50->GetYaxis()->SetTitleSize(0.035);
   hM_bin50->GetYaxis()->SetTitleFont(42);
   hM_bin50->GetZaxis()->SetLabelFont(42);
   hM_bin50->GetZaxis()->SetLabelSize(0.035);
   hM_bin50->GetZaxis()->SetTitleSize(0.035);
   hM_bin50->GetZaxis()->SetTitleFont(42);
   hM_bin50->Draw("e");
   
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
   fmb->SetParameter(0,136.4543);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,435.6805);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-6.705943e-06);
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
   fpeak->SetParameter(0,702.0481);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1392102);
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
