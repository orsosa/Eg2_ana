{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 15:55:41 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-29.4645,0.350906,265.1804);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin52 = new TH1F("hM_bin52","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin52->SetBinContent(0,3728);
   hM_bin52->SetBinContent(13,1);
   hM_bin52->SetBinContent(14,1);
   hM_bin52->SetBinContent(15,2);
   hM_bin52->SetBinContent(16,2);
   hM_bin52->SetBinContent(17,3);
   hM_bin52->SetBinContent(18,6);
   hM_bin52->SetBinContent(19,6);
   hM_bin52->SetBinContent(20,2);
   hM_bin52->SetBinContent(21,4);
   hM_bin52->SetBinContent(22,3);
   hM_bin52->SetBinContent(23,2);
   hM_bin52->SetBinContent(24,1);
   hM_bin52->SetBinContent(25,3);
   hM_bin52->SetBinContent(26,7);
   hM_bin52->SetBinContent(27,3);
   hM_bin52->SetBinContent(28,1);
   hM_bin52->SetBinContent(29,8);
   hM_bin52->SetBinContent(30,6);
   hM_bin52->SetBinContent(31,11);
   hM_bin52->SetBinContent(32,6);
   hM_bin52->SetBinContent(33,4);
   hM_bin52->SetBinContent(34,5);
   hM_bin52->SetBinContent(35,3);
   hM_bin52->SetBinContent(36,7);
   hM_bin52->SetBinContent(37,7);
   hM_bin52->SetBinContent(38,7);
   hM_bin52->SetBinContent(39,10);
   hM_bin52->SetBinContent(40,25);
   hM_bin52->SetBinContent(41,21);
   hM_bin52->SetBinContent(42,37);
   hM_bin52->SetBinContent(43,35);
   hM_bin52->SetBinContent(44,49);
   hM_bin52->SetBinContent(45,59);
   hM_bin52->SetBinContent(46,92);
   hM_bin52->SetBinContent(47,92);
   hM_bin52->SetBinContent(48,121);
   hM_bin52->SetBinContent(49,170);
   hM_bin52->SetBinContent(50,172);
   hM_bin52->SetBinContent(51,210);
   hM_bin52->SetBinContent(52,203);
   hM_bin52->SetBinContent(53,204);
   hM_bin52->SetBinContent(54,174);
   hM_bin52->SetBinContent(55,205);
   hM_bin52->SetBinContent(56,158);
   hM_bin52->SetBinContent(57,152);
   hM_bin52->SetBinContent(58,151);
   hM_bin52->SetBinContent(59,108);
   hM_bin52->SetBinContent(60,97);
   hM_bin52->SetBinContent(61,92);
   hM_bin52->SetBinContent(62,61);
   hM_bin52->SetBinContent(63,70);
   hM_bin52->SetBinContent(64,48);
   hM_bin52->SetBinContent(65,43);
   hM_bin52->SetBinContent(66,48);
   hM_bin52->SetBinContent(67,35);
   hM_bin52->SetBinContent(68,40);
   hM_bin52->SetBinContent(69,30);
   hM_bin52->SetBinContent(70,26);
   hM_bin52->SetBinContent(71,25);
   hM_bin52->SetBinContent(72,27);
   hM_bin52->SetBinContent(73,36);
   hM_bin52->SetBinContent(74,39);
   hM_bin52->SetBinContent(75,42);
   hM_bin52->SetBinContent(76,30);
   hM_bin52->SetBinContent(77,25);
   hM_bin52->SetBinContent(78,35);
   hM_bin52->SetBinContent(79,34);
   hM_bin52->SetBinContent(80,42);
   hM_bin52->SetBinContent(81,30);
   hM_bin52->SetBinContent(82,36);
   hM_bin52->SetBinContent(83,50);
   hM_bin52->SetBinContent(84,29);
   hM_bin52->SetBinContent(85,30);
   hM_bin52->SetBinContent(86,34);
   hM_bin52->SetBinContent(87,33);
   hM_bin52->SetBinContent(88,40);
   hM_bin52->SetBinContent(89,49);
   hM_bin52->SetBinContent(90,40);
   hM_bin52->SetBinContent(91,38);
   hM_bin52->SetBinContent(92,23);
   hM_bin52->SetBinContent(93,44);
   hM_bin52->SetBinContent(94,42);
   hM_bin52->SetBinContent(95,42);
   hM_bin52->SetBinContent(96,37);
   hM_bin52->SetBinContent(97,39);
   hM_bin52->SetBinContent(98,54);
   hM_bin52->SetBinContent(99,56);
   hM_bin52->SetBinContent(100,35);
   hM_bin52->SetBinContent(101,22023);
   hM_bin52->SetEntries(30016);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08708241,0.2030158);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(39.27621);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-17.83851);
   fsig->SetParError(0,3.966246);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,229.0405);
   fsig->SetParError(1,30.17282);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.648111e-05);
   fsig->SetParError(2,1192.122);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,177.3816);
   fsig->SetParError(3,4.676073);
   fsig->SetParLimits(3,0,420);
   fsig->SetParameter(4,0.1443806);
   fsig->SetParError(4,0.0005261402);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.000166303);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin52->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin52");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 30016  ");
   text = ptstats->AddText("Mean  = 0.1746");
   text = ptstats->AddText("RMS   = 0.05769");
   text = ptstats->AddText("#chi^{2} / ndf = 39.28 / 28");
   text = ptstats->AddText("p0       = -17.84 #pm 3.97 ");
   text = ptstats->AddText("p1       =   229 #pm 30.2 ");
   text = ptstats->AddText("p2       = -1.648e-05 #pm 1.192e+03 ");
   text = ptstats->AddText("p3       = 177.4 #pm 4.7 ");
   text = ptstats->AddText("p4       = 0.1444 #pm 0.0005 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00017 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin52->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin52);

   ci = TColor::GetColor("#0000ff");
   hM_bin52->SetMarkerColor(ci);
   hM_bin52->SetMarkerStyle(24);
   hM_bin52->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin52->GetXaxis()->SetLabelFont(42);
   hM_bin52->GetXaxis()->SetLabelSize(0.035);
   hM_bin52->GetXaxis()->SetTitleSize(0.035);
   hM_bin52->GetXaxis()->SetTitleFont(42);
   hM_bin52->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin52->GetYaxis()->SetLabelFont(42);
   hM_bin52->GetYaxis()->SetLabelSize(0.035);
   hM_bin52->GetYaxis()->SetTitleSize(0.035);
   hM_bin52->GetYaxis()->SetTitleFont(42);
   hM_bin52->GetZaxis()->SetLabelFont(42);
   hM_bin52->GetZaxis()->SetLabelSize(0.035);
   hM_bin52->GetZaxis()->SetTitleSize(0.035);
   hM_bin52->GetZaxis()->SetTitleFont(42);
   hM_bin52->Draw("e");
   
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
   fmb->SetParameter(0,-17.83851);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,229.0405);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.648111e-05);
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
   fpeak->SetParameter(0,177.3816);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1443806);
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
