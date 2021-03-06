{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr  4 12:27:41 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-25.52204,0.350906,229.6983);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin49 = new TH1F("hM_bin49","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin49->SetBinContent(0,2331);
   hM_bin49->SetBinContent(15,6);
   hM_bin49->SetBinContent(16,5);
   hM_bin49->SetBinContent(17,10);
   hM_bin49->SetBinContent(18,11);
   hM_bin49->SetBinContent(19,6);
   hM_bin49->SetBinContent(20,3);
   hM_bin49->SetBinContent(21,2);
   hM_bin49->SetBinContent(22,6);
   hM_bin49->SetBinContent(23,7);
   hM_bin49->SetBinContent(24,3);
   hM_bin49->SetBinContent(25,9);
   hM_bin49->SetBinContent(26,4);
   hM_bin49->SetBinContent(27,3);
   hM_bin49->SetBinContent(28,5);
   hM_bin49->SetBinContent(29,2);
   hM_bin49->SetBinContent(30,3);
   hM_bin49->SetBinContent(31,5);
   hM_bin49->SetBinContent(32,8);
   hM_bin49->SetBinContent(33,6);
   hM_bin49->SetBinContent(34,4);
   hM_bin49->SetBinContent(35,10);
   hM_bin49->SetBinContent(36,10);
   hM_bin49->SetBinContent(37,10);
   hM_bin49->SetBinContent(38,9);
   hM_bin49->SetBinContent(39,12);
   hM_bin49->SetBinContent(40,14);
   hM_bin49->SetBinContent(41,35);
   hM_bin49->SetBinContent(42,28);
   hM_bin49->SetBinContent(43,42);
   hM_bin49->SetBinContent(44,43);
   hM_bin49->SetBinContent(45,64);
   hM_bin49->SetBinContent(46,74);
   hM_bin49->SetBinContent(47,114);
   hM_bin49->SetBinContent(48,121);
   hM_bin49->SetBinContent(49,148);
   hM_bin49->SetBinContent(50,157);
   hM_bin49->SetBinContent(51,177);
   hM_bin49->SetBinContent(52,161);
   hM_bin49->SetBinContent(53,181);
   hM_bin49->SetBinContent(54,147);
   hM_bin49->SetBinContent(55,126);
   hM_bin49->SetBinContent(56,130);
   hM_bin49->SetBinContent(57,109);
   hM_bin49->SetBinContent(58,93);
   hM_bin49->SetBinContent(59,73);
   hM_bin49->SetBinContent(60,59);
   hM_bin49->SetBinContent(61,60);
   hM_bin49->SetBinContent(62,60);
   hM_bin49->SetBinContent(63,47);
   hM_bin49->SetBinContent(64,38);
   hM_bin49->SetBinContent(65,45);
   hM_bin49->SetBinContent(66,32);
   hM_bin49->SetBinContent(67,32);
   hM_bin49->SetBinContent(68,41);
   hM_bin49->SetBinContent(69,38);
   hM_bin49->SetBinContent(70,48);
   hM_bin49->SetBinContent(71,33);
   hM_bin49->SetBinContent(72,39);
   hM_bin49->SetBinContent(73,27);
   hM_bin49->SetBinContent(74,37);
   hM_bin49->SetBinContent(75,30);
   hM_bin49->SetBinContent(76,37);
   hM_bin49->SetBinContent(77,41);
   hM_bin49->SetBinContent(78,34);
   hM_bin49->SetBinContent(79,46);
   hM_bin49->SetBinContent(80,27);
   hM_bin49->SetBinContent(81,43);
   hM_bin49->SetBinContent(82,43);
   hM_bin49->SetBinContent(83,39);
   hM_bin49->SetBinContent(84,41);
   hM_bin49->SetBinContent(85,44);
   hM_bin49->SetBinContent(86,53);
   hM_bin49->SetBinContent(87,43);
   hM_bin49->SetBinContent(88,48);
   hM_bin49->SetBinContent(89,39);
   hM_bin49->SetBinContent(90,43);
   hM_bin49->SetBinContent(91,45);
   hM_bin49->SetBinContent(92,52);
   hM_bin49->SetBinContent(93,56);
   hM_bin49->SetBinContent(94,53);
   hM_bin49->SetBinContent(95,58);
   hM_bin49->SetBinContent(96,47);
   hM_bin49->SetBinContent(97,62);
   hM_bin49->SetBinContent(98,60);
   hM_bin49->SetBinContent(99,49);
   hM_bin49->SetBinContent(100,54);
   hM_bin49->SetBinContent(101,13349);
   hM_bin49->SetEntries(19699);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08340625,0.1993397);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(45.4726);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-19.34326);
   fsig->SetParError(0,4.100951);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,253.8715);
   fsig->SetParError(1,31.76532);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-2.253728e-09);
   fsig->SetParError(2,286.4486);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,136.6745);
   fsig->SetParError(3,4.362501);
   fsig->SetParLimits(3,0,362);
   fsig->SetParameter(4,0.1407681);
   fsig->SetParError(4,0.0006088064);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,6.837286e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin49->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin49");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 19699  ");
   text = ptstats->AddText("Mean  = 0.1811");
   text = ptstats->AddText("RMS   = 0.06408");
   text = ptstats->AddText("#chi^{2} / ndf = 45.47 / 28");
   text = ptstats->AddText("p0       = -19.34 #pm 4.10 ");
   text = ptstats->AddText("p1       = 253.9 #pm 31.8 ");
   text = ptstats->AddText("p2       = -2.254e-09 #pm 2.864e+02 ");
   text = ptstats->AddText("p3       = 136.7 #pm 4.4 ");
   text = ptstats->AddText("p4       = 0.1408 #pm 0.0006 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00007 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin49->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin49);

   ci = TColor::GetColor("#0000ff");
   hM_bin49->SetMarkerColor(ci);
   hM_bin49->SetMarkerStyle(24);
   hM_bin49->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin49->GetXaxis()->SetLabelFont(42);
   hM_bin49->GetXaxis()->SetLabelSize(0.035);
   hM_bin49->GetXaxis()->SetTitleSize(0.035);
   hM_bin49->GetXaxis()->SetTitleFont(42);
   hM_bin49->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin49->GetYaxis()->SetLabelFont(42);
   hM_bin49->GetYaxis()->SetLabelSize(0.035);
   hM_bin49->GetYaxis()->SetTitleSize(0.035);
   hM_bin49->GetYaxis()->SetTitleFont(42);
   hM_bin49->GetZaxis()->SetLabelFont(42);
   hM_bin49->GetZaxis()->SetLabelSize(0.035);
   hM_bin49->GetZaxis()->SetTitleSize(0.035);
   hM_bin49->GetZaxis()->SetTitleFont(42);
   hM_bin49->Draw("e");
   
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
   fmb->SetParameter(0,-19.34326);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,253.8715);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-2.253728e-09);
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
   fpeak->SetParameter(0,136.6745);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1407681);
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
