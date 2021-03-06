{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 15:54:34 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-77.67805,0.350906,699.1024);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin32 = new TH1F("hM_bin32","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin32->SetBinContent(0,2478);
   hM_bin32->SetBinContent(13,1);
   hM_bin32->SetBinContent(14,2);
   hM_bin32->SetBinContent(15,12);
   hM_bin32->SetBinContent(16,11);
   hM_bin32->SetBinContent(17,10);
   hM_bin32->SetBinContent(18,10);
   hM_bin32->SetBinContent(19,10);
   hM_bin32->SetBinContent(20,12);
   hM_bin32->SetBinContent(21,16);
   hM_bin32->SetBinContent(22,10);
   hM_bin32->SetBinContent(23,9);
   hM_bin32->SetBinContent(24,11);
   hM_bin32->SetBinContent(25,18);
   hM_bin32->SetBinContent(26,9);
   hM_bin32->SetBinContent(27,14);
   hM_bin32->SetBinContent(28,15);
   hM_bin32->SetBinContent(29,15);
   hM_bin32->SetBinContent(30,16);
   hM_bin32->SetBinContent(31,19);
   hM_bin32->SetBinContent(32,22);
   hM_bin32->SetBinContent(33,24);
   hM_bin32->SetBinContent(34,16);
   hM_bin32->SetBinContent(35,19);
   hM_bin32->SetBinContent(36,24);
   hM_bin32->SetBinContent(37,33);
   hM_bin32->SetBinContent(38,52);
   hM_bin32->SetBinContent(39,53);
   hM_bin32->SetBinContent(40,76);
   hM_bin32->SetBinContent(41,64);
   hM_bin32->SetBinContent(42,100);
   hM_bin32->SetBinContent(43,135);
   hM_bin32->SetBinContent(44,183);
   hM_bin32->SetBinContent(45,223);
   hM_bin32->SetBinContent(46,281);
   hM_bin32->SetBinContent(47,335);
   hM_bin32->SetBinContent(48,409);
   hM_bin32->SetBinContent(49,498);
   hM_bin32->SetBinContent(50,519);
   hM_bin32->SetBinContent(51,568);
   hM_bin32->SetBinContent(52,568);
   hM_bin32->SetBinContent(53,528);
   hM_bin32->SetBinContent(54,473);
   hM_bin32->SetBinContent(55,447);
   hM_bin32->SetBinContent(56,424);
   hM_bin32->SetBinContent(57,345);
   hM_bin32->SetBinContent(58,312);
   hM_bin32->SetBinContent(59,231);
   hM_bin32->SetBinContent(60,237);
   hM_bin32->SetBinContent(61,184);
   hM_bin32->SetBinContent(62,175);
   hM_bin32->SetBinContent(63,151);
   hM_bin32->SetBinContent(64,122);
   hM_bin32->SetBinContent(65,136);
   hM_bin32->SetBinContent(66,116);
   hM_bin32->SetBinContent(67,133);
   hM_bin32->SetBinContent(68,119);
   hM_bin32->SetBinContent(69,118);
   hM_bin32->SetBinContent(70,118);
   hM_bin32->SetBinContent(71,117);
   hM_bin32->SetBinContent(72,111);
   hM_bin32->SetBinContent(73,114);
   hM_bin32->SetBinContent(74,116);
   hM_bin32->SetBinContent(75,111);
   hM_bin32->SetBinContent(76,119);
   hM_bin32->SetBinContent(77,101);
   hM_bin32->SetBinContent(78,153);
   hM_bin32->SetBinContent(79,138);
   hM_bin32->SetBinContent(80,150);
   hM_bin32->SetBinContent(81,139);
   hM_bin32->SetBinContent(82,135);
   hM_bin32->SetBinContent(83,131);
   hM_bin32->SetBinContent(84,140);
   hM_bin32->SetBinContent(85,129);
   hM_bin32->SetBinContent(86,133);
   hM_bin32->SetBinContent(87,120);
   hM_bin32->SetBinContent(88,128);
   hM_bin32->SetBinContent(89,153);
   hM_bin32->SetBinContent(90,170);
   hM_bin32->SetBinContent(91,166);
   hM_bin32->SetBinContent(92,161);
   hM_bin32->SetBinContent(93,139);
   hM_bin32->SetBinContent(94,177);
   hM_bin32->SetBinContent(95,180);
   hM_bin32->SetBinContent(96,152);
   hM_bin32->SetBinContent(97,163);
   hM_bin32->SetBinContent(98,166);
   hM_bin32->SetBinContent(99,169);
   hM_bin32->SetBinContent(100,161);
   hM_bin32->SetBinContent(101,42441);
   hM_bin32->SetEntries(57952);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08292915,0.1988626);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(82.26064);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-56.1538);
   fsig->SetParError(0,7.846486);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,797.5341);
   fsig->SetParError(1,62.92502);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-6.896389e-07);
   fsig->SetParError(2,383.6804);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,452.0029);
   fsig->SetParError(3,8.179437);
   fsig->SetParLimits(3,0,1136);
   fsig->SetParameter(4,0.1404021);
   fsig->SetParError(4,0.0003400525);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,2.536003e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin32->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin32");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 57952  ");
   text = ptstats->AddText("Mean  = 0.1805");
   text = ptstats->AddText("RMS   = 0.06245");
   text = ptstats->AddText("#chi^{2} / ndf = 82.26 / 27");
   text = ptstats->AddText("p0       = -56.15 #pm 7.85 ");
   text = ptstats->AddText("p1       = 797.5 #pm 62.9 ");
   text = ptstats->AddText("p2       = -6.896e-07 #pm 3.837e+02 ");
   text = ptstats->AddText("p3       =   452 #pm 8.2 ");
   text = ptstats->AddText("p4       = 0.1404 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00003 ");
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
   fmb->SetParameter(0,-56.1538);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,797.5341);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-6.896389e-07);
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
   fpeak->SetParameter(0,452.0029);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1404021);
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
