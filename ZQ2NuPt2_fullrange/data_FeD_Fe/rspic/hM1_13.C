{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 11 12:04:29 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-53.37575,0.350906,480.3817);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin13 = new TH1F("hM_bin13","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin13->SetBinContent(0,2531);
   hM_bin13->SetBinContent(14,2);
   hM_bin13->SetBinContent(15,2);
   hM_bin13->SetBinContent(16,20);
   hM_bin13->SetBinContent(17,6);
   hM_bin13->SetBinContent(18,9);
   hM_bin13->SetBinContent(19,7);
   hM_bin13->SetBinContent(20,7);
   hM_bin13->SetBinContent(21,6);
   hM_bin13->SetBinContent(22,6);
   hM_bin13->SetBinContent(23,6);
   hM_bin13->SetBinContent(24,11);
   hM_bin13->SetBinContent(25,17);
   hM_bin13->SetBinContent(26,10);
   hM_bin13->SetBinContent(27,13);
   hM_bin13->SetBinContent(28,7);
   hM_bin13->SetBinContent(29,10);
   hM_bin13->SetBinContent(30,15);
   hM_bin13->SetBinContent(31,14);
   hM_bin13->SetBinContent(32,14);
   hM_bin13->SetBinContent(33,12);
   hM_bin13->SetBinContent(34,10);
   hM_bin13->SetBinContent(35,19);
   hM_bin13->SetBinContent(36,17);
   hM_bin13->SetBinContent(37,21);
   hM_bin13->SetBinContent(38,36);
   hM_bin13->SetBinContent(39,35);
   hM_bin13->SetBinContent(40,63);
   hM_bin13->SetBinContent(41,74);
   hM_bin13->SetBinContent(42,101);
   hM_bin13->SetBinContent(43,124);
   hM_bin13->SetBinContent(44,159);
   hM_bin13->SetBinContent(45,191);
   hM_bin13->SetBinContent(46,226);
   hM_bin13->SetBinContent(47,306);
   hM_bin13->SetBinContent(48,301);
   hM_bin13->SetBinContent(49,387);
   hM_bin13->SetBinContent(50,363);
   hM_bin13->SetBinContent(51,380);
   hM_bin13->SetBinContent(52,371);
   hM_bin13->SetBinContent(53,350);
   hM_bin13->SetBinContent(54,330);
   hM_bin13->SetBinContent(55,264);
   hM_bin13->SetBinContent(56,236);
   hM_bin13->SetBinContent(57,174);
   hM_bin13->SetBinContent(58,164);
   hM_bin13->SetBinContent(59,161);
   hM_bin13->SetBinContent(60,119);
   hM_bin13->SetBinContent(61,105);
   hM_bin13->SetBinContent(62,100);
   hM_bin13->SetBinContent(63,99);
   hM_bin13->SetBinContent(64,72);
   hM_bin13->SetBinContent(65,87);
   hM_bin13->SetBinContent(66,76);
   hM_bin13->SetBinContent(67,87);
   hM_bin13->SetBinContent(68,68);
   hM_bin13->SetBinContent(69,74);
   hM_bin13->SetBinContent(70,76);
   hM_bin13->SetBinContent(71,78);
   hM_bin13->SetBinContent(72,80);
   hM_bin13->SetBinContent(73,93);
   hM_bin13->SetBinContent(74,90);
   hM_bin13->SetBinContent(75,88);
   hM_bin13->SetBinContent(76,82);
   hM_bin13->SetBinContent(77,96);
   hM_bin13->SetBinContent(78,89);
   hM_bin13->SetBinContent(79,112);
   hM_bin13->SetBinContent(80,124);
   hM_bin13->SetBinContent(81,121);
   hM_bin13->SetBinContent(82,106);
   hM_bin13->SetBinContent(83,117);
   hM_bin13->SetBinContent(84,111);
   hM_bin13->SetBinContent(85,108);
   hM_bin13->SetBinContent(86,115);
   hM_bin13->SetBinContent(87,115);
   hM_bin13->SetBinContent(88,99);
   hM_bin13->SetBinContent(89,115);
   hM_bin13->SetBinContent(90,113);
   hM_bin13->SetBinContent(91,121);
   hM_bin13->SetBinContent(92,135);
   hM_bin13->SetBinContent(93,124);
   hM_bin13->SetBinContent(94,125);
   hM_bin13->SetBinContent(95,136);
   hM_bin13->SetBinContent(96,146);
   hM_bin13->SetBinContent(97,146);
   hM_bin13->SetBinContent(98,171);
   hM_bin13->SetBinContent(99,129);
   hM_bin13->SetBinContent(100,140);
   hM_bin13->SetBinContent(101,35352);
   hM_bin13->SetEntries(47328);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07895739,0.1948908);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(60.28883);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-42.7081);
   fsig->SetParError(0,6.070901);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,568.3593);
   fsig->SetParError(1,49.91214);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-4.967114e-08);
   fsig->SetParError(2,367.2309);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,312.669);
   fsig->SetParError(3,6.628779);
   fsig->SetParLimits(3,0,774);
   fsig->SetParameter(4,0.1362833);
   fsig->SetParError(4,0.0004047965);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,3.545661e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin13->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin13");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 47328  ");
   text = ptstats->AddText("Mean  = 0.1834");
   text = ptstats->AddText("RMS   = 0.06563");
   text = ptstats->AddText("#chi^{2} / ndf = 60.29 / 27");
   text = ptstats->AddText("p0       = -42.71 #pm 6.07 ");
   text = ptstats->AddText("p1       = 568.4 #pm 49.9 ");
   text = ptstats->AddText("p2       = -4.967e-08 #pm 3.672e+02 ");
   text = ptstats->AddText("p3       = 312.7 #pm 6.6 ");
   text = ptstats->AddText("p4       = 0.1363 #pm 0.0004 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00004 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin13->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin13);

   ci = TColor::GetColor("#0000ff");
   hM_bin13->SetMarkerColor(ci);
   hM_bin13->SetMarkerStyle(24);
   hM_bin13->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin13->GetXaxis()->SetLabelFont(42);
   hM_bin13->GetXaxis()->SetLabelSize(0.035);
   hM_bin13->GetXaxis()->SetTitleSize(0.035);
   hM_bin13->GetXaxis()->SetTitleFont(42);
   hM_bin13->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin13->GetYaxis()->SetLabelFont(42);
   hM_bin13->GetYaxis()->SetLabelSize(0.035);
   hM_bin13->GetYaxis()->SetTitleSize(0.035);
   hM_bin13->GetYaxis()->SetTitleFont(42);
   hM_bin13->GetZaxis()->SetLabelFont(42);
   hM_bin13->GetZaxis()->SetLabelSize(0.035);
   hM_bin13->GetZaxis()->SetTitleSize(0.035);
   hM_bin13->GetZaxis()->SetTitleFont(42);
   hM_bin13->Draw("e");
   
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
   fmb->SetParameter(0,-42.7081);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,568.3593);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-4.967114e-08);
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
   fpeak->SetParameter(0,312.669);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1362833);
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
