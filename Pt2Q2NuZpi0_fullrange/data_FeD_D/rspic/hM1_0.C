{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:43:42 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-493.344,0.350906,4440.096);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin0 = new TH1F("hM_bin0","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin0->SetBinContent(13,1);
   hM_bin0->SetBinContent(14,31);
   hM_bin0->SetBinContent(15,92);
   hM_bin0->SetBinContent(16,161);
   hM_bin0->SetBinContent(17,225);
   hM_bin0->SetBinContent(18,268);
   hM_bin0->SetBinContent(19,316);
   hM_bin0->SetBinContent(20,355);
   hM_bin0->SetBinContent(21,349);
   hM_bin0->SetBinContent(22,513);
   hM_bin0->SetBinContent(23,465);
   hM_bin0->SetBinContent(24,478);
   hM_bin0->SetBinContent(25,589);
   hM_bin0->SetBinContent(26,546);
   hM_bin0->SetBinContent(27,573);
   hM_bin0->SetBinContent(28,630);
   hM_bin0->SetBinContent(29,522);
   hM_bin0->SetBinContent(30,654);
   hM_bin0->SetBinContent(31,681);
   hM_bin0->SetBinContent(32,699);
   hM_bin0->SetBinContent(33,726);
   hM_bin0->SetBinContent(34,738);
   hM_bin0->SetBinContent(35,835);
   hM_bin0->SetBinContent(36,878);
   hM_bin0->SetBinContent(37,1024);
   hM_bin0->SetBinContent(38,1212);
   hM_bin0->SetBinContent(39,1248);
   hM_bin0->SetBinContent(40,1570);
   hM_bin0->SetBinContent(41,1854);
   hM_bin0->SetBinContent(42,2156);
   hM_bin0->SetBinContent(43,2490);
   hM_bin0->SetBinContent(44,2755);
   hM_bin0->SetBinContent(45,3072);
   hM_bin0->SetBinContent(46,3487);
   hM_bin0->SetBinContent(47,3592);
   hM_bin0->SetBinContent(48,3698);
   hM_bin0->SetBinContent(49,3604);
   hM_bin0->SetBinContent(50,3490);
   hM_bin0->SetBinContent(51,3212);
   hM_bin0->SetBinContent(52,3063);
   hM_bin0->SetBinContent(53,2672);
   hM_bin0->SetBinContent(54,2359);
   hM_bin0->SetBinContent(55,2012);
   hM_bin0->SetBinContent(56,1941);
   hM_bin0->SetBinContent(57,1532);
   hM_bin0->SetBinContent(58,1341);
   hM_bin0->SetBinContent(59,1213);
   hM_bin0->SetBinContent(60,1159);
   hM_bin0->SetBinContent(61,1080);
   hM_bin0->SetBinContent(62,1028);
   hM_bin0->SetBinContent(63,1016);
   hM_bin0->SetBinContent(64,816);
   hM_bin0->SetBinContent(65,892);
   hM_bin0->SetBinContent(66,907);
   hM_bin0->SetBinContent(67,841);
   hM_bin0->SetBinContent(68,984);
   hM_bin0->SetBinContent(69,861);
   hM_bin0->SetBinContent(70,836);
   hM_bin0->SetBinContent(71,862);
   hM_bin0->SetBinContent(72,831);
   hM_bin0->SetBinContent(73,795);
   hM_bin0->SetBinContent(74,882);
   hM_bin0->SetBinContent(75,843);
   hM_bin0->SetBinContent(76,809);
   hM_bin0->SetBinContent(77,812);
   hM_bin0->SetBinContent(78,852);
   hM_bin0->SetBinContent(79,867);
   hM_bin0->SetBinContent(80,798);
   hM_bin0->SetBinContent(81,787);
   hM_bin0->SetBinContent(82,754);
   hM_bin0->SetBinContent(83,700);
   hM_bin0->SetBinContent(84,748);
   hM_bin0->SetBinContent(85,762);
   hM_bin0->SetBinContent(86,762);
   hM_bin0->SetBinContent(87,755);
   hM_bin0->SetBinContent(88,740);
   hM_bin0->SetBinContent(89,673);
   hM_bin0->SetBinContent(90,707);
   hM_bin0->SetBinContent(91,690);
   hM_bin0->SetBinContent(92,747);
   hM_bin0->SetBinContent(93,754);
   hM_bin0->SetBinContent(94,681);
   hM_bin0->SetBinContent(95,652);
   hM_bin0->SetBinContent(96,637);
   hM_bin0->SetBinContent(97,753);
   hM_bin0->SetBinContent(98,637);
   hM_bin0->SetBinContent(99,652);
   hM_bin0->SetBinContent(100,646);
   hM_bin0->SetBinContent(101,41176);
   hM_bin0->SetEntries(140106);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.06968009,0.1856135);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(99.46575);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,472.152);
   fsig->SetParError(0,25.57493);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,2008.129);
   fsig->SetParError(1,189.762);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.0002652144);
   fsig->SetParError(2,1207.021);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,2822.757);
   fsig->SetParError(3,21.99326);
   fsig->SetParLimits(3,0,7396);
   fsig->SetParameter(4,0.1275831);
   fsig->SetParError(4,0.0001624358);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,1.65629e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin0->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin0");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 140106 ");
   text = ptstats->AddText("Mean  = 0.1543");
   text = ptstats->AddText("RMS   = 0.06528");
   text = ptstats->AddText("#chi^{2} / ndf = 99.47 / 28");
   text = ptstats->AddText("p0       = 472.2 #pm 25.6 ");
   text = ptstats->AddText("p1       =  2008 #pm 189.8 ");
   text = ptstats->AddText("p2       = -0.0002652 #pm 1207.0205078 ");
   text = ptstats->AddText("p3       =  2823 #pm 22.0 ");
   text = ptstats->AddText("p4       = 0.1276 #pm 0.0002 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00002 ");
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
   fmb->SetParameter(0,472.152);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,2008.129);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.0002652144);
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
   fpeak->SetParameter(0,2822.757);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1275831);
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
