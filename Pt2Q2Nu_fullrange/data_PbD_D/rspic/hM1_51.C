{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 14:53:16 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-61.84674,0.350906,556.6206);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin51 = new TH1F("hM_bin51","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin51->SetBinContent(0,5829);
   hM_bin51->SetBinContent(14,3);
   hM_bin51->SetBinContent(15,10);
   hM_bin51->SetBinContent(16,6);
   hM_bin51->SetBinContent(17,5);
   hM_bin51->SetBinContent(18,10);
   hM_bin51->SetBinContent(19,11);
   hM_bin51->SetBinContent(20,4);
   hM_bin51->SetBinContent(21,8);
   hM_bin51->SetBinContent(22,7);
   hM_bin51->SetBinContent(23,10);
   hM_bin51->SetBinContent(24,7);
   hM_bin51->SetBinContent(25,11);
   hM_bin51->SetBinContent(26,10);
   hM_bin51->SetBinContent(27,13);
   hM_bin51->SetBinContent(28,16);
   hM_bin51->SetBinContent(29,8);
   hM_bin51->SetBinContent(30,13);
   hM_bin51->SetBinContent(31,10);
   hM_bin51->SetBinContent(32,12);
   hM_bin51->SetBinContent(33,19);
   hM_bin51->SetBinContent(34,14);
   hM_bin51->SetBinContent(35,9);
   hM_bin51->SetBinContent(36,18);
   hM_bin51->SetBinContent(37,21);
   hM_bin51->SetBinContent(38,25);
   hM_bin51->SetBinContent(39,24);
   hM_bin51->SetBinContent(40,24);
   hM_bin51->SetBinContent(41,39);
   hM_bin51->SetBinContent(42,57);
   hM_bin51->SetBinContent(43,72);
   hM_bin51->SetBinContent(44,120);
   hM_bin51->SetBinContent(45,149);
   hM_bin51->SetBinContent(46,186);
   hM_bin51->SetBinContent(47,247);
   hM_bin51->SetBinContent(48,285);
   hM_bin51->SetBinContent(49,381);
   hM_bin51->SetBinContent(50,399);
   hM_bin51->SetBinContent(51,426);
   hM_bin51->SetBinContent(52,450);
   hM_bin51->SetBinContent(53,395);
   hM_bin51->SetBinContent(54,390);
   hM_bin51->SetBinContent(55,375);
   hM_bin51->SetBinContent(56,327);
   hM_bin51->SetBinContent(57,305);
   hM_bin51->SetBinContent(58,264);
   hM_bin51->SetBinContent(59,222);
   hM_bin51->SetBinContent(60,173);
   hM_bin51->SetBinContent(61,152);
   hM_bin51->SetBinContent(62,121);
   hM_bin51->SetBinContent(63,109);
   hM_bin51->SetBinContent(64,95);
   hM_bin51->SetBinContent(65,93);
   hM_bin51->SetBinContent(66,77);
   hM_bin51->SetBinContent(67,74);
   hM_bin51->SetBinContent(68,73);
   hM_bin51->SetBinContent(69,62);
   hM_bin51->SetBinContent(70,64);
   hM_bin51->SetBinContent(71,51);
   hM_bin51->SetBinContent(72,61);
   hM_bin51->SetBinContent(73,68);
   hM_bin51->SetBinContent(74,68);
   hM_bin51->SetBinContent(75,83);
   hM_bin51->SetBinContent(76,66);
   hM_bin51->SetBinContent(77,67);
   hM_bin51->SetBinContent(78,81);
   hM_bin51->SetBinContent(79,73);
   hM_bin51->SetBinContent(80,69);
   hM_bin51->SetBinContent(81,82);
   hM_bin51->SetBinContent(82,84);
   hM_bin51->SetBinContent(83,74);
   hM_bin51->SetBinContent(84,76);
   hM_bin51->SetBinContent(85,76);
   hM_bin51->SetBinContent(86,79);
   hM_bin51->SetBinContent(87,81);
   hM_bin51->SetBinContent(88,88);
   hM_bin51->SetBinContent(89,95);
   hM_bin51->SetBinContent(90,95);
   hM_bin51->SetBinContent(91,76);
   hM_bin51->SetBinContent(92,83);
   hM_bin51->SetBinContent(93,76);
   hM_bin51->SetBinContent(94,86);
   hM_bin51->SetBinContent(95,92);
   hM_bin51->SetBinContent(96,100);
   hM_bin51->SetBinContent(97,76);
   hM_bin51->SetBinContent(98,94);
   hM_bin51->SetBinContent(99,92);
   hM_bin51->SetBinContent(100,94);
   hM_bin51->SetBinContent(101,37692);
   hM_bin51->SetEntries(52417);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08564985,0.2015833);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(71.0136);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-45.40237);
   fsig->SetParError(0,6.519872);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,511.1065);
   fsig->SetParError(1,48.67645);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-5.38239e-09);
   fsig->SetParError(2,303.6944);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,372.3254);
   fsig->SetParError(3,6.934779);
   fsig->SetParLimits(3,0,900);
   fsig->SetParameter(4,0.1426564);
   fsig->SetParError(4,0.0003589376);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,3.313717e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin51->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin51");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 52417  ");
   text = ptstats->AddText("Mean  = 0.1742");
   text = ptstats->AddText("RMS   = 0.05884");
   text = ptstats->AddText("#chi^{2} / ndf = 71.01 / 27");
   text = ptstats->AddText("p0       = -45.4 #pm 6.5 ");
   text = ptstats->AddText("p1       = 511.1 #pm 48.7 ");
   text = ptstats->AddText("p2       = -5.382e-09 #pm 3.037e+02 ");
   text = ptstats->AddText("p3       = 372.3 #pm 6.9 ");
   text = ptstats->AddText("p4       = 0.1427 #pm 0.0004 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00003 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin51->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin51);

   ci = TColor::GetColor("#0000ff");
   hM_bin51->SetMarkerColor(ci);
   hM_bin51->SetMarkerStyle(24);
   hM_bin51->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin51->GetXaxis()->SetLabelFont(42);
   hM_bin51->GetXaxis()->SetLabelSize(0.035);
   hM_bin51->GetXaxis()->SetTitleSize(0.035);
   hM_bin51->GetXaxis()->SetTitleFont(42);
   hM_bin51->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin51->GetYaxis()->SetLabelFont(42);
   hM_bin51->GetYaxis()->SetLabelSize(0.035);
   hM_bin51->GetYaxis()->SetTitleSize(0.035);
   hM_bin51->GetYaxis()->SetTitleFont(42);
   hM_bin51->GetZaxis()->SetLabelFont(42);
   hM_bin51->GetZaxis()->SetLabelSize(0.035);
   hM_bin51->GetZaxis()->SetTitleSize(0.035);
   hM_bin51->GetZaxis()->SetTitleFont(42);
   hM_bin51->Draw("e");
   
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
   fmb->SetParameter(0,-45.40237);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,511.1065);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-5.38239e-09);
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
   fpeak->SetParameter(0,372.3254);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1426564);
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
