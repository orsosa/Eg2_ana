{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:36:01 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-68.69403,0.350906,618.2462);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin11 = new TH1F("hM_bin11","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin11->SetBinContent(13,4);
   hM_bin11->SetBinContent(14,5);
   hM_bin11->SetBinContent(15,9);
   hM_bin11->SetBinContent(16,32);
   hM_bin11->SetBinContent(17,30);
   hM_bin11->SetBinContent(18,41);
   hM_bin11->SetBinContent(19,47);
   hM_bin11->SetBinContent(20,61);
   hM_bin11->SetBinContent(21,70);
   hM_bin11->SetBinContent(22,61);
   hM_bin11->SetBinContent(23,70);
   hM_bin11->SetBinContent(24,69);
   hM_bin11->SetBinContent(25,83);
   hM_bin11->SetBinContent(26,82);
   hM_bin11->SetBinContent(27,71);
   hM_bin11->SetBinContent(28,115);
   hM_bin11->SetBinContent(29,85);
   hM_bin11->SetBinContent(30,91);
   hM_bin11->SetBinContent(31,104);
   hM_bin11->SetBinContent(32,106);
   hM_bin11->SetBinContent(33,117);
   hM_bin11->SetBinContent(34,115);
   hM_bin11->SetBinContent(35,107);
   hM_bin11->SetBinContent(36,99);
   hM_bin11->SetBinContent(37,88);
   hM_bin11->SetBinContent(38,137);
   hM_bin11->SetBinContent(39,114);
   hM_bin11->SetBinContent(40,134);
   hM_bin11->SetBinContent(41,172);
   hM_bin11->SetBinContent(42,173);
   hM_bin11->SetBinContent(43,229);
   hM_bin11->SetBinContent(44,226);
   hM_bin11->SetBinContent(45,272);
   hM_bin11->SetBinContent(46,305);
   hM_bin11->SetBinContent(47,376);
   hM_bin11->SetBinContent(48,371);
   hM_bin11->SetBinContent(49,401);
   hM_bin11->SetBinContent(50,468);
   hM_bin11->SetBinContent(51,501);
   hM_bin11->SetBinContent(52,486);
   hM_bin11->SetBinContent(53,434);
   hM_bin11->SetBinContent(54,427);
   hM_bin11->SetBinContent(55,441);
   hM_bin11->SetBinContent(56,388);
   hM_bin11->SetBinContent(57,351);
   hM_bin11->SetBinContent(58,319);
   hM_bin11->SetBinContent(59,269);
   hM_bin11->SetBinContent(60,293);
   hM_bin11->SetBinContent(61,203);
   hM_bin11->SetBinContent(62,230);
   hM_bin11->SetBinContent(63,200);
   hM_bin11->SetBinContent(64,167);
   hM_bin11->SetBinContent(65,158);
   hM_bin11->SetBinContent(66,149);
   hM_bin11->SetBinContent(67,135);
   hM_bin11->SetBinContent(68,151);
   hM_bin11->SetBinContent(69,119);
   hM_bin11->SetBinContent(70,122);
   hM_bin11->SetBinContent(71,121);
   hM_bin11->SetBinContent(72,107);
   hM_bin11->SetBinContent(73,108);
   hM_bin11->SetBinContent(74,119);
   hM_bin11->SetBinContent(75,133);
   hM_bin11->SetBinContent(76,111);
   hM_bin11->SetBinContent(77,113);
   hM_bin11->SetBinContent(78,101);
   hM_bin11->SetBinContent(79,71);
   hM_bin11->SetBinContent(80,118);
   hM_bin11->SetBinContent(81,123);
   hM_bin11->SetBinContent(82,111);
   hM_bin11->SetBinContent(83,94);
   hM_bin11->SetBinContent(84,74);
   hM_bin11->SetBinContent(85,57);
   hM_bin11->SetBinContent(86,93);
   hM_bin11->SetBinContent(87,93);
   hM_bin11->SetBinContent(88,99);
   hM_bin11->SetBinContent(89,76);
   hM_bin11->SetBinContent(90,80);
   hM_bin11->SetBinContent(91,70);
   hM_bin11->SetBinContent(92,88);
   hM_bin11->SetBinContent(93,70);
   hM_bin11->SetBinContent(94,68);
   hM_bin11->SetBinContent(95,74);
   hM_bin11->SetBinContent(96,61);
   hM_bin11->SetBinContent(97,69);
   hM_bin11->SetBinContent(98,49);
   hM_bin11->SetBinContent(99,63);
   hM_bin11->SetBinContent(100,73);
   hM_bin11->SetBinContent(101,3949);
   hM_bin11->SetEntries(17319);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08118857,0.2005707);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(44.13909);
   fsig->SetNDF(29);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-55.87236);
   fsig->SetParError(0,71.35222);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,2350.77);
   fsig->SetParError(1,1161.169);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-7131.855);
   fsig->SetParError(2,3594.938);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,333.4969);
   fsig->SetParError(3,15.17418);
   fsig->SetParLimits(3,0,1002);
   fsig->SetParameter(4,0.1403404);
   fsig->SetParError(4,0.0005182177);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.00639397);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin11->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin11");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 17319  ");
   text = ptstats->AddText("Mean  = 0.1545");
   text = ptstats->AddText("RMS   = 0.06165");
   text = ptstats->AddText("#chi^{2} / ndf = 44.14 / 29");
   text = ptstats->AddText("p0       = -55.87 #pm 71.35 ");
   text = ptstats->AddText("p1       =  2351 #pm 1161.2 ");
   text = ptstats->AddText("p2       = -7132 #pm 3594.9 ");
   text = ptstats->AddText("p3       = 333.5 #pm 15.2 ");
   text = ptstats->AddText("p4       = 0.1403 #pm 0.0005 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00639 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin11->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin11);

   ci = TColor::GetColor("#0000ff");
   hM_bin11->SetMarkerColor(ci);
   hM_bin11->SetMarkerStyle(24);
   hM_bin11->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin11->GetXaxis()->SetLabelFont(42);
   hM_bin11->GetXaxis()->SetLabelSize(0.035);
   hM_bin11->GetXaxis()->SetTitleSize(0.035);
   hM_bin11->GetXaxis()->SetTitleFont(42);
   hM_bin11->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin11->GetYaxis()->SetLabelFont(42);
   hM_bin11->GetYaxis()->SetLabelSize(0.035);
   hM_bin11->GetYaxis()->SetTitleSize(0.035);
   hM_bin11->GetYaxis()->SetTitleFont(42);
   hM_bin11->GetZaxis()->SetLabelFont(42);
   hM_bin11->GetZaxis()->SetLabelSize(0.035);
   hM_bin11->GetZaxis()->SetTitleSize(0.035);
   hM_bin11->GetZaxis()->SetTitleFont(42);
   hM_bin11->Draw("e");
   
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
   fmb->SetParameter(0,-55.87236);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,2350.77);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-7131.855);
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
   fpeak->SetParameter(0,333.4969);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1403404);
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
