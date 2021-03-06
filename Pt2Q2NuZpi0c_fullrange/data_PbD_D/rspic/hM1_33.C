{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue May  9 16:19:12 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-137.267,0.350906,1235.402);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin33 = new TH1F("hM_bin33","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin33->SetBinContent(14,2);
   hM_bin33->SetBinContent(15,8);
   hM_bin33->SetBinContent(16,38);
   hM_bin33->SetBinContent(17,47);
   hM_bin33->SetBinContent(18,47);
   hM_bin33->SetBinContent(19,62);
   hM_bin33->SetBinContent(20,84);
   hM_bin33->SetBinContent(21,112);
   hM_bin33->SetBinContent(22,111);
   hM_bin33->SetBinContent(23,120);
   hM_bin33->SetBinContent(24,136);
   hM_bin33->SetBinContent(25,98);
   hM_bin33->SetBinContent(26,134);
   hM_bin33->SetBinContent(27,149);
   hM_bin33->SetBinContent(28,145);
   hM_bin33->SetBinContent(29,124);
   hM_bin33->SetBinContent(30,160);
   hM_bin33->SetBinContent(31,165);
   hM_bin33->SetBinContent(32,160);
   hM_bin33->SetBinContent(33,189);
   hM_bin33->SetBinContent(34,147);
   hM_bin33->SetBinContent(35,193);
   hM_bin33->SetBinContent(36,188);
   hM_bin33->SetBinContent(37,177);
   hM_bin33->SetBinContent(38,195);
   hM_bin33->SetBinContent(39,239);
   hM_bin33->SetBinContent(40,268);
   hM_bin33->SetBinContent(41,291);
   hM_bin33->SetBinContent(42,326);
   hM_bin33->SetBinContent(43,397);
   hM_bin33->SetBinContent(44,515);
   hM_bin33->SetBinContent(45,572);
   hM_bin33->SetBinContent(46,655);
   hM_bin33->SetBinContent(47,770);
   hM_bin33->SetBinContent(48,846);
   hM_bin33->SetBinContent(49,1005);
   hM_bin33->SetBinContent(50,996);
   hM_bin33->SetBinContent(51,977);
   hM_bin33->SetBinContent(52,1014);
   hM_bin33->SetBinContent(53,856);
   hM_bin33->SetBinContent(54,830);
   hM_bin33->SetBinContent(55,748);
   hM_bin33->SetBinContent(56,606);
   hM_bin33->SetBinContent(57,565);
   hM_bin33->SetBinContent(58,507);
   hM_bin33->SetBinContent(59,464);
   hM_bin33->SetBinContent(60,408);
   hM_bin33->SetBinContent(61,398);
   hM_bin33->SetBinContent(62,338);
   hM_bin33->SetBinContent(63,312);
   hM_bin33->SetBinContent(64,318);
   hM_bin33->SetBinContent(65,270);
   hM_bin33->SetBinContent(66,286);
   hM_bin33->SetBinContent(67,249);
   hM_bin33->SetBinContent(68,204);
   hM_bin33->SetBinContent(69,202);
   hM_bin33->SetBinContent(70,223);
   hM_bin33->SetBinContent(71,191);
   hM_bin33->SetBinContent(72,186);
   hM_bin33->SetBinContent(73,211);
   hM_bin33->SetBinContent(74,202);
   hM_bin33->SetBinContent(75,193);
   hM_bin33->SetBinContent(76,191);
   hM_bin33->SetBinContent(77,178);
   hM_bin33->SetBinContent(78,178);
   hM_bin33->SetBinContent(79,170);
   hM_bin33->SetBinContent(80,222);
   hM_bin33->SetBinContent(81,168);
   hM_bin33->SetBinContent(82,157);
   hM_bin33->SetBinContent(83,184);
   hM_bin33->SetBinContent(84,164);
   hM_bin33->SetBinContent(85,176);
   hM_bin33->SetBinContent(86,167);
   hM_bin33->SetBinContent(87,159);
   hM_bin33->SetBinContent(88,161);
   hM_bin33->SetBinContent(89,152);
   hM_bin33->SetBinContent(90,159);
   hM_bin33->SetBinContent(91,157);
   hM_bin33->SetBinContent(92,175);
   hM_bin33->SetBinContent(93,147);
   hM_bin33->SetBinContent(94,161);
   hM_bin33->SetBinContent(95,158);
   hM_bin33->SetBinContent(96,149);
   hM_bin33->SetBinContent(97,116);
   hM_bin33->SetBinContent(98,161);
   hM_bin33->SetBinContent(99,159);
   hM_bin33->SetBinContent(100,143);
   hM_bin33->SetBinContent(101,8168);
   hM_bin33->SetEntries(32909);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07930902,0.1952425);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(91.2009);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,61.59031);
   fsig->SetParError(0,14.93373);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,975.0238);
   fsig->SetParError(1,108.1833);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-5.59703e-09);
   fsig->SetParError(2,797.0951);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,731.9581);
   fsig->SetParError(3,11.74964);
   fsig->SetParLimits(3,0,2028);
   fsig->SetParameter(4,0.1365022);
   fsig->SetParError(4,0.000322927);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,3.409631e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin33->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin33");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 32909  ");
   text = ptstats->AddText("Mean  = 0.1562");
   text = ptstats->AddText("RMS   = 0.0615");
   text = ptstats->AddText("#chi^{2} / ndf =  91.2 / 27");
   text = ptstats->AddText("p0       = 61.59 #pm 14.93 ");
   text = ptstats->AddText("p1       =   975 #pm 108.2 ");
   text = ptstats->AddText("p2       = -5.597e-09 #pm 7.971e+02 ");
   text = ptstats->AddText("p3       =   732 #pm 11.7 ");
   text = ptstats->AddText("p4       = 0.1365 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00003 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin33->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin33);

   ci = TColor::GetColor("#0000ff");
   hM_bin33->SetMarkerColor(ci);
   hM_bin33->SetMarkerStyle(24);
   hM_bin33->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin33->GetXaxis()->SetLabelFont(42);
   hM_bin33->GetXaxis()->SetLabelSize(0.035);
   hM_bin33->GetXaxis()->SetTitleSize(0.035);
   hM_bin33->GetXaxis()->SetTitleFont(42);
   hM_bin33->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin33->GetYaxis()->SetLabelFont(42);
   hM_bin33->GetYaxis()->SetLabelSize(0.035);
   hM_bin33->GetYaxis()->SetTitleSize(0.035);
   hM_bin33->GetYaxis()->SetTitleFont(42);
   hM_bin33->GetZaxis()->SetLabelFont(42);
   hM_bin33->GetZaxis()->SetLabelSize(0.035);
   hM_bin33->GetZaxis()->SetTitleSize(0.035);
   hM_bin33->GetZaxis()->SetTitleFont(42);
   hM_bin33->Draw("e");
   
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
   fmb->SetParameter(0,61.59031);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,975.0238);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-5.59703e-09);
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
   fpeak->SetParameter(0,731.9581);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1365022);
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
