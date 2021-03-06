{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue May  9 16:29:44 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-204.2183,0.350906,1837.964);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin24 = new TH1F("hM_bin24","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin24->SetBinContent(14,6);
   hM_bin24->SetBinContent(15,46);
   hM_bin24->SetBinContent(16,67);
   hM_bin24->SetBinContent(17,63);
   hM_bin24->SetBinContent(18,112);
   hM_bin24->SetBinContent(19,136);
   hM_bin24->SetBinContent(20,138);
   hM_bin24->SetBinContent(21,188);
   hM_bin24->SetBinContent(22,185);
   hM_bin24->SetBinContent(23,211);
   hM_bin24->SetBinContent(24,175);
   hM_bin24->SetBinContent(25,203);
   hM_bin24->SetBinContent(26,219);
   hM_bin24->SetBinContent(27,268);
   hM_bin24->SetBinContent(28,290);
   hM_bin24->SetBinContent(29,275);
   hM_bin24->SetBinContent(30,256);
   hM_bin24->SetBinContent(31,301);
   hM_bin24->SetBinContent(32,313);
   hM_bin24->SetBinContent(33,300);
   hM_bin24->SetBinContent(34,407);
   hM_bin24->SetBinContent(35,347);
   hM_bin24->SetBinContent(36,382);
   hM_bin24->SetBinContent(37,366);
   hM_bin24->SetBinContent(38,424);
   hM_bin24->SetBinContent(39,507);
   hM_bin24->SetBinContent(40,521);
   hM_bin24->SetBinContent(41,700);
   hM_bin24->SetBinContent(42,693);
   hM_bin24->SetBinContent(43,954);
   hM_bin24->SetBinContent(44,942);
   hM_bin24->SetBinContent(45,1137);
   hM_bin24->SetBinContent(46,1249);
   hM_bin24->SetBinContent(47,1402);
   hM_bin24->SetBinContent(48,1413);
   hM_bin24->SetBinContent(49,1457);
   hM_bin24->SetBinContent(50,1517);
   hM_bin24->SetBinContent(51,1372);
   hM_bin24->SetBinContent(52,1301);
   hM_bin24->SetBinContent(53,1223);
   hM_bin24->SetBinContent(54,1023);
   hM_bin24->SetBinContent(55,994);
   hM_bin24->SetBinContent(56,806);
   hM_bin24->SetBinContent(57,722);
   hM_bin24->SetBinContent(58,646);
   hM_bin24->SetBinContent(59,594);
   hM_bin24->SetBinContent(60,608);
   hM_bin24->SetBinContent(61,543);
   hM_bin24->SetBinContent(62,475);
   hM_bin24->SetBinContent(63,469);
   hM_bin24->SetBinContent(64,509);
   hM_bin24->SetBinContent(65,386);
   hM_bin24->SetBinContent(66,404);
   hM_bin24->SetBinContent(67,428);
   hM_bin24->SetBinContent(68,421);
   hM_bin24->SetBinContent(69,400);
   hM_bin24->SetBinContent(70,414);
   hM_bin24->SetBinContent(71,384);
   hM_bin24->SetBinContent(72,397);
   hM_bin24->SetBinContent(73,386);
   hM_bin24->SetBinContent(74,371);
   hM_bin24->SetBinContent(75,368);
   hM_bin24->SetBinContent(76,392);
   hM_bin24->SetBinContent(77,363);
   hM_bin24->SetBinContent(78,335);
   hM_bin24->SetBinContent(79,348);
   hM_bin24->SetBinContent(80,387);
   hM_bin24->SetBinContent(81,382);
   hM_bin24->SetBinContent(82,345);
   hM_bin24->SetBinContent(83,387);
   hM_bin24->SetBinContent(84,346);
   hM_bin24->SetBinContent(85,361);
   hM_bin24->SetBinContent(86,336);
   hM_bin24->SetBinContent(87,301);
   hM_bin24->SetBinContent(88,346);
   hM_bin24->SetBinContent(89,364);
   hM_bin24->SetBinContent(90,326);
   hM_bin24->SetBinContent(91,293);
   hM_bin24->SetBinContent(92,317);
   hM_bin24->SetBinContent(93,329);
   hM_bin24->SetBinContent(94,326);
   hM_bin24->SetBinContent(95,343);
   hM_bin24->SetBinContent(96,344);
   hM_bin24->SetBinContent(97,313);
   hM_bin24->SetBinContent(98,333);
   hM_bin24->SetBinContent(99,334);
   hM_bin24->SetBinContent(100,282);
   hM_bin24->SetBinContent(101,23396);
   hM_bin24->SetEntries(65743);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07302956,0.188963);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(117.5808);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,211.5662);
   fsig->SetParError(0,17.83516);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,1032.465);
   fsig->SetParError(1,130.7921);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-3.373414e-06);
   fsig->SetParError(2,1244.144);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,1060.264);
   fsig->SetParError(3,14.45723);
   fsig->SetParLimits(3,0,3034);
   fsig->SetParameter(4,0.1309236);
   fsig->SetParError(4,0.000279208);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,3.390744e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin24->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin24");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 65743  ");
   text = ptstats->AddText("Mean  = 0.1585");
   text = ptstats->AddText("RMS   = 0.06625");
   text = ptstats->AddText("#chi^{2} / ndf = 117.6 / 28");
   text = ptstats->AddText("p0       = 211.6 #pm 17.8 ");
   text = ptstats->AddText("p1       =  1032 #pm 130.8 ");
   text = ptstats->AddText("p2       = -3.373e-06 #pm 1.244e+03 ");
   text = ptstats->AddText("p3       =  1060 #pm 14.5 ");
   text = ptstats->AddText("p4       = 0.1309 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00003 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin24->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin24);

   ci = TColor::GetColor("#0000ff");
   hM_bin24->SetMarkerColor(ci);
   hM_bin24->SetMarkerStyle(24);
   hM_bin24->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin24->GetXaxis()->SetLabelFont(42);
   hM_bin24->GetXaxis()->SetLabelSize(0.035);
   hM_bin24->GetXaxis()->SetTitleSize(0.035);
   hM_bin24->GetXaxis()->SetTitleFont(42);
   hM_bin24->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin24->GetYaxis()->SetLabelFont(42);
   hM_bin24->GetYaxis()->SetLabelSize(0.035);
   hM_bin24->GetYaxis()->SetTitleSize(0.035);
   hM_bin24->GetYaxis()->SetTitleFont(42);
   hM_bin24->GetZaxis()->SetLabelFont(42);
   hM_bin24->GetZaxis()->SetLabelSize(0.035);
   hM_bin24->GetZaxis()->SetTitleSize(0.035);
   hM_bin24->GetZaxis()->SetTitleFont(42);
   hM_bin24->Draw("e");
   
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
   fmb->SetParameter(0,211.5662);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1032.465);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-3.373414e-06);
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
   fpeak->SetParameter(0,1060.264);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1309236);
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
