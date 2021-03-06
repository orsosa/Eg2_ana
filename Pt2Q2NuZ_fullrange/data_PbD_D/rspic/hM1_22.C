{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 15:54:02 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-25.52204,0.350906,229.6983);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin22 = new TH1F("hM_bin22","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin22->SetBinContent(0,2270);
   hM_bin22->SetBinContent(14,1);
   hM_bin22->SetBinContent(15,2);
   hM_bin22->SetBinContent(16,5);
   hM_bin22->SetBinContent(17,3);
   hM_bin22->SetBinContent(18,2);
   hM_bin22->SetBinContent(19,3);
   hM_bin22->SetBinContent(20,4);
   hM_bin22->SetBinContent(21,6);
   hM_bin22->SetBinContent(22,3);
   hM_bin22->SetBinContent(23,2);
   hM_bin22->SetBinContent(24,1);
   hM_bin22->SetBinContent(25,4);
   hM_bin22->SetBinContent(26,2);
   hM_bin22->SetBinContent(27,4);
   hM_bin22->SetBinContent(28,4);
   hM_bin22->SetBinContent(29,3);
   hM_bin22->SetBinContent(30,4);
   hM_bin22->SetBinContent(31,2);
   hM_bin22->SetBinContent(32,2);
   hM_bin22->SetBinContent(33,4);
   hM_bin22->SetBinContent(34,5);
   hM_bin22->SetBinContent(35,2);
   hM_bin22->SetBinContent(36,2);
   hM_bin22->SetBinContent(37,5);
   hM_bin22->SetBinContent(38,7);
   hM_bin22->SetBinContent(39,6);
   hM_bin22->SetBinContent(40,5);
   hM_bin22->SetBinContent(41,8);
   hM_bin22->SetBinContent(42,14);
   hM_bin22->SetBinContent(43,20);
   hM_bin22->SetBinContent(44,40);
   hM_bin22->SetBinContent(45,38);
   hM_bin22->SetBinContent(46,52);
   hM_bin22->SetBinContent(47,74);
   hM_bin22->SetBinContent(48,84);
   hM_bin22->SetBinContent(49,118);
   hM_bin22->SetBinContent(50,160);
   hM_bin22->SetBinContent(51,158);
   hM_bin22->SetBinContent(52,144);
   hM_bin22->SetBinContent(53,181);
   hM_bin22->SetBinContent(54,165);
   hM_bin22->SetBinContent(55,146);
   hM_bin22->SetBinContent(56,138);
   hM_bin22->SetBinContent(57,107);
   hM_bin22->SetBinContent(58,119);
   hM_bin22->SetBinContent(59,107);
   hM_bin22->SetBinContent(60,77);
   hM_bin22->SetBinContent(61,60);
   hM_bin22->SetBinContent(62,59);
   hM_bin22->SetBinContent(63,47);
   hM_bin22->SetBinContent(64,39);
   hM_bin22->SetBinContent(65,38);
   hM_bin22->SetBinContent(66,30);
   hM_bin22->SetBinContent(67,27);
   hM_bin22->SetBinContent(68,20);
   hM_bin22->SetBinContent(69,25);
   hM_bin22->SetBinContent(70,19);
   hM_bin22->SetBinContent(71,29);
   hM_bin22->SetBinContent(72,24);
   hM_bin22->SetBinContent(73,19);
   hM_bin22->SetBinContent(74,21);
   hM_bin22->SetBinContent(75,14);
   hM_bin22->SetBinContent(76,26);
   hM_bin22->SetBinContent(77,22);
   hM_bin22->SetBinContent(78,26);
   hM_bin22->SetBinContent(79,20);
   hM_bin22->SetBinContent(80,24);
   hM_bin22->SetBinContent(81,20);
   hM_bin22->SetBinContent(82,22);
   hM_bin22->SetBinContent(83,27);
   hM_bin22->SetBinContent(84,23);
   hM_bin22->SetBinContent(85,27);
   hM_bin22->SetBinContent(86,27);
   hM_bin22->SetBinContent(87,27);
   hM_bin22->SetBinContent(88,35);
   hM_bin22->SetBinContent(89,26);
   hM_bin22->SetBinContent(90,26);
   hM_bin22->SetBinContent(91,37);
   hM_bin22->SetBinContent(92,23);
   hM_bin22->SetBinContent(93,29);
   hM_bin22->SetBinContent(94,31);
   hM_bin22->SetBinContent(95,30);
   hM_bin22->SetBinContent(96,35);
   hM_bin22->SetBinContent(97,26);
   hM_bin22->SetBinContent(98,32);
   hM_bin22->SetBinContent(99,31);
   hM_bin22->SetBinContent(100,33);
   hM_bin22->SetBinContent(101,9391);
   hM_bin22->SetEntries(14860);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08904274,0.2049762);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(45.33812);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-18.78477);
   fsig->SetParError(0,3.720281);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,180.6731);
   fsig->SetParError(1,27.58314);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.625813e-07);
   fsig->SetParError(2,339.1914);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,144.8761);
   fsig->SetParError(3,4.165849);
   fsig->SetParLimits(3,0,362);
   fsig->SetParameter(4,0.1458835);
   fsig->SetParError(4,0.0005618232);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,9.799647e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin22->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin22");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 14860  ");
   text = ptstats->AddText("Mean  = 0.1739");
   text = ptstats->AddText("RMS   = 0.05662");
   text = ptstats->AddText("#chi^{2} / ndf = 45.34 / 27");
   text = ptstats->AddText("p0       = -18.78 #pm 3.72 ");
   text = ptstats->AddText("p1       = 180.7 #pm 27.6 ");
   text = ptstats->AddText("p2       = -1.626e-07 #pm 3.392e+02 ");
   text = ptstats->AddText("p3       = 144.9 #pm 4.2 ");
   text = ptstats->AddText("p4       = 0.1459 #pm 0.0006 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00010 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin22->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin22);

   ci = TColor::GetColor("#0000ff");
   hM_bin22->SetMarkerColor(ci);
   hM_bin22->SetMarkerStyle(24);
   hM_bin22->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin22->GetXaxis()->SetLabelFont(42);
   hM_bin22->GetXaxis()->SetLabelSize(0.035);
   hM_bin22->GetXaxis()->SetTitleSize(0.035);
   hM_bin22->GetXaxis()->SetTitleFont(42);
   hM_bin22->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin22->GetYaxis()->SetLabelFont(42);
   hM_bin22->GetYaxis()->SetLabelSize(0.035);
   hM_bin22->GetYaxis()->SetTitleSize(0.035);
   hM_bin22->GetYaxis()->SetTitleFont(42);
   hM_bin22->GetZaxis()->SetLabelFont(42);
   hM_bin22->GetZaxis()->SetLabelSize(0.035);
   hM_bin22->GetZaxis()->SetTitleSize(0.035);
   hM_bin22->GetZaxis()->SetTitleFont(42);
   hM_bin22->Draw("e");
   
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
   fmb->SetParameter(0,-18.78477);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,180.6731);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.625813e-07);
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
   fpeak->SetParameter(0,144.8761);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1458835);
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
