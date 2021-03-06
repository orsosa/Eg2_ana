{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 11 12:10:16 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-18.83295,0.350906,169.4965);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin33 = new TH1F("hM_bin33","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin33->SetBinContent(0,2297);
   hM_bin33->SetBinContent(15,1);
   hM_bin33->SetBinContent(17,3);
   hM_bin33->SetBinContent(18,3);
   hM_bin33->SetBinContent(19,3);
   hM_bin33->SetBinContent(20,3);
   hM_bin33->SetBinContent(21,2);
   hM_bin33->SetBinContent(22,4);
   hM_bin33->SetBinContent(23,5);
   hM_bin33->SetBinContent(24,7);
   hM_bin33->SetBinContent(25,8);
   hM_bin33->SetBinContent(26,5);
   hM_bin33->SetBinContent(27,2);
   hM_bin33->SetBinContent(28,5);
   hM_bin33->SetBinContent(29,3);
   hM_bin33->SetBinContent(30,4);
   hM_bin33->SetBinContent(31,7);
   hM_bin33->SetBinContent(32,8);
   hM_bin33->SetBinContent(33,7);
   hM_bin33->SetBinContent(34,11);
   hM_bin33->SetBinContent(35,11);
   hM_bin33->SetBinContent(36,12);
   hM_bin33->SetBinContent(37,14);
   hM_bin33->SetBinContent(38,22);
   hM_bin33->SetBinContent(39,26);
   hM_bin33->SetBinContent(40,17);
   hM_bin33->SetBinContent(41,14);
   hM_bin33->SetBinContent(42,41);
   hM_bin33->SetBinContent(43,43);
   hM_bin33->SetBinContent(44,37);
   hM_bin33->SetBinContent(45,50);
   hM_bin33->SetBinContent(46,87);
   hM_bin33->SetBinContent(47,100);
   hM_bin33->SetBinContent(48,114);
   hM_bin33->SetBinContent(49,126);
   hM_bin33->SetBinContent(50,126);
   hM_bin33->SetBinContent(51,131);
   hM_bin33->SetBinContent(52,120);
   hM_bin33->SetBinContent(53,132);
   hM_bin33->SetBinContent(54,110);
   hM_bin33->SetBinContent(55,99);
   hM_bin33->SetBinContent(56,95);
   hM_bin33->SetBinContent(57,87);
   hM_bin33->SetBinContent(58,67);
   hM_bin33->SetBinContent(59,56);
   hM_bin33->SetBinContent(60,46);
   hM_bin33->SetBinContent(61,43);
   hM_bin33->SetBinContent(62,31);
   hM_bin33->SetBinContent(63,30);
   hM_bin33->SetBinContent(64,26);
   hM_bin33->SetBinContent(65,20);
   hM_bin33->SetBinContent(66,16);
   hM_bin33->SetBinContent(67,20);
   hM_bin33->SetBinContent(68,20);
   hM_bin33->SetBinContent(69,20);
   hM_bin33->SetBinContent(70,23);
   hM_bin33->SetBinContent(71,20);
   hM_bin33->SetBinContent(72,25);
   hM_bin33->SetBinContent(73,16);
   hM_bin33->SetBinContent(74,20);
   hM_bin33->SetBinContent(75,32);
   hM_bin33->SetBinContent(76,26);
   hM_bin33->SetBinContent(77,23);
   hM_bin33->SetBinContent(78,12);
   hM_bin33->SetBinContent(79,28);
   hM_bin33->SetBinContent(80,21);
   hM_bin33->SetBinContent(81,24);
   hM_bin33->SetBinContent(82,23);
   hM_bin33->SetBinContent(83,26);
   hM_bin33->SetBinContent(84,27);
   hM_bin33->SetBinContent(85,20);
   hM_bin33->SetBinContent(86,26);
   hM_bin33->SetBinContent(87,27);
   hM_bin33->SetBinContent(88,34);
   hM_bin33->SetBinContent(89,37);
   hM_bin33->SetBinContent(90,31);
   hM_bin33->SetBinContent(91,31);
   hM_bin33->SetBinContent(92,25);
   hM_bin33->SetBinContent(93,26);
   hM_bin33->SetBinContent(94,38);
   hM_bin33->SetBinContent(95,31);
   hM_bin33->SetBinContent(96,41);
   hM_bin33->SetBinContent(97,40);
   hM_bin33->SetBinContent(98,35);
   hM_bin33->SetBinContent(99,49);
   hM_bin33->SetBinContent(100,46);
   hM_bin33->SetBinContent(101,38107);
   hM_bin33->SetEntries(43387);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08149473,0.1974282);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(44.68486);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,4.195346);
   fsig->SetParError(0,3.775286);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,50.79625);
   fsig->SetParError(1,27.56536);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-3.44088e-06);
   fsig->SetParError(2,392.9499);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,111.5049);
   fsig->SetParError(3,3.845992);
   fsig->SetParLimits(3,0,264);
   fsig->SetParameter(4,0.1398508);
   fsig->SetParError(4,0.0006795487);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0001346488);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin33->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin33");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 43387  ");
   text = ptstats->AddText("Mean  = 0.1738");
   text = ptstats->AddText("RMS   = 0.06407");
   text = ptstats->AddText("#chi^{2} / ndf = 44.68 / 28");
   text = ptstats->AddText("p0       = 4.195 #pm 3.775 ");
   text = ptstats->AddText("p1       =  50.8 #pm 27.6 ");
   text = ptstats->AddText("p2       = -3.441e-06 #pm 3.929e+02 ");
   text = ptstats->AddText("p3       = 111.5 #pm 3.8 ");
   text = ptstats->AddText("p4       = 0.1399 #pm 0.0007 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00013 ");
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
   fmb->SetParameter(0,4.195346);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,50.79625);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-3.44088e-06);
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
   fpeak->SetParameter(0,111.5049);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1398508);
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
