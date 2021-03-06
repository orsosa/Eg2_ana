{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:37:01 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-60.6375,0.350906,545.7375);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin28 = new TH1F("hM_bin28","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin28->SetBinContent(14,3);
   hM_bin28->SetBinContent(15,8);
   hM_bin28->SetBinContent(16,10);
   hM_bin28->SetBinContent(17,23);
   hM_bin28->SetBinContent(18,25);
   hM_bin28->SetBinContent(19,38);
   hM_bin28->SetBinContent(20,42);
   hM_bin28->SetBinContent(21,44);
   hM_bin28->SetBinContent(22,48);
   hM_bin28->SetBinContent(23,75);
   hM_bin28->SetBinContent(24,43);
   hM_bin28->SetBinContent(25,58);
   hM_bin28->SetBinContent(26,62);
   hM_bin28->SetBinContent(27,74);
   hM_bin28->SetBinContent(28,63);
   hM_bin28->SetBinContent(29,68);
   hM_bin28->SetBinContent(30,69);
   hM_bin28->SetBinContent(31,60);
   hM_bin28->SetBinContent(32,65);
   hM_bin28->SetBinContent(33,80);
   hM_bin28->SetBinContent(34,64);
   hM_bin28->SetBinContent(35,86);
   hM_bin28->SetBinContent(36,77);
   hM_bin28->SetBinContent(37,70);
   hM_bin28->SetBinContent(38,83);
   hM_bin28->SetBinContent(39,115);
   hM_bin28->SetBinContent(40,140);
   hM_bin28->SetBinContent(41,127);
   hM_bin28->SetBinContent(42,155);
   hM_bin28->SetBinContent(43,189);
   hM_bin28->SetBinContent(44,208);
   hM_bin28->SetBinContent(45,241);
   hM_bin28->SetBinContent(46,261);
   hM_bin28->SetBinContent(47,278);
   hM_bin28->SetBinContent(48,334);
   hM_bin28->SetBinContent(49,366);
   hM_bin28->SetBinContent(50,404);
   hM_bin28->SetBinContent(51,441);
   hM_bin28->SetBinContent(52,398);
   hM_bin28->SetBinContent(53,402);
   hM_bin28->SetBinContent(54,388);
   hM_bin28->SetBinContent(55,390);
   hM_bin28->SetBinContent(56,375);
   hM_bin28->SetBinContent(57,304);
   hM_bin28->SetBinContent(58,270);
   hM_bin28->SetBinContent(59,255);
   hM_bin28->SetBinContent(60,224);
   hM_bin28->SetBinContent(61,200);
   hM_bin28->SetBinContent(62,198);
   hM_bin28->SetBinContent(63,138);
   hM_bin28->SetBinContent(64,128);
   hM_bin28->SetBinContent(65,123);
   hM_bin28->SetBinContent(66,108);
   hM_bin28->SetBinContent(67,108);
   hM_bin28->SetBinContent(68,112);
   hM_bin28->SetBinContent(69,82);
   hM_bin28->SetBinContent(70,94);
   hM_bin28->SetBinContent(71,104);
   hM_bin28->SetBinContent(72,80);
   hM_bin28->SetBinContent(73,77);
   hM_bin28->SetBinContent(74,83);
   hM_bin28->SetBinContent(75,69);
   hM_bin28->SetBinContent(76,81);
   hM_bin28->SetBinContent(77,86);
   hM_bin28->SetBinContent(78,82);
   hM_bin28->SetBinContent(79,78);
   hM_bin28->SetBinContent(80,60);
   hM_bin28->SetBinContent(81,74);
   hM_bin28->SetBinContent(82,62);
   hM_bin28->SetBinContent(83,59);
   hM_bin28->SetBinContent(84,63);
   hM_bin28->SetBinContent(85,63);
   hM_bin28->SetBinContent(86,62);
   hM_bin28->SetBinContent(87,67);
   hM_bin28->SetBinContent(88,61);
   hM_bin28->SetBinContent(89,56);
   hM_bin28->SetBinContent(90,40);
   hM_bin28->SetBinContent(91,66);
   hM_bin28->SetBinContent(92,53);
   hM_bin28->SetBinContent(93,52);
   hM_bin28->SetBinContent(94,65);
   hM_bin28->SetBinContent(95,60);
   hM_bin28->SetBinContent(96,53);
   hM_bin28->SetBinContent(97,57);
   hM_bin28->SetBinContent(98,62);
   hM_bin28->SetBinContent(99,48);
   hM_bin28->SetBinContent(100,56);
   hM_bin28->SetBinContent(101,2930);
   hM_bin28->SetEntries(13803);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07857099,0.203187);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(32.79825);
   fsig->SetNDF(30);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-31.51564);
   fsig->SetParError(0,172.8169);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,1673.688);
   fsig->SetParError(1,2958.93);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-5360.386);
   fsig->SetParError(2,6886.301);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,313.7714);
   fsig->SetParError(3,33.88371);
   fsig->SetParLimits(3,0,882);
   fsig->SetParameter(4,0.1410157);
   fsig->SetParError(4,0.0005199927);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.02001655);
   fsig->SetParError(5,0.001584184);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin28->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin28");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 13803  ");
   text = ptstats->AddText("Mean  = 0.1538");
   text = ptstats->AddText("RMS   = 0.05933");
   text = ptstats->AddText("#chi^{2} / ndf =  32.8 / 30");
   text = ptstats->AddText("p0       = -31.52 #pm 172.82 ");
   text = ptstats->AddText("p1       =  1674 #pm 2958.9 ");
   text = ptstats->AddText("p2       = -5360 #pm 6886.3 ");
   text = ptstats->AddText("p3       = 313.8 #pm 33.9 ");
   text = ptstats->AddText("p4       = 0.141 #pm 0.001 ");
   text = ptstats->AddText("p5       = 0.02002 #pm 0.00158 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin28->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin28);

   ci = TColor::GetColor("#0000ff");
   hM_bin28->SetMarkerColor(ci);
   hM_bin28->SetMarkerStyle(24);
   hM_bin28->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin28->GetXaxis()->SetLabelFont(42);
   hM_bin28->GetXaxis()->SetLabelSize(0.035);
   hM_bin28->GetXaxis()->SetTitleSize(0.035);
   hM_bin28->GetXaxis()->SetTitleFont(42);
   hM_bin28->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin28->GetYaxis()->SetLabelFont(42);
   hM_bin28->GetYaxis()->SetLabelSize(0.035);
   hM_bin28->GetYaxis()->SetTitleSize(0.035);
   hM_bin28->GetYaxis()->SetTitleFont(42);
   hM_bin28->GetZaxis()->SetLabelFont(42);
   hM_bin28->GetZaxis()->SetLabelSize(0.035);
   hM_bin28->GetZaxis()->SetTitleSize(0.035);
   hM_bin28->GetZaxis()->SetTitleFont(42);
   hM_bin28->Draw("e");
   
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
   fmb->SetParameter(0,-31.51564);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1673.688);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-5360.386);
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
   fpeak->SetParameter(0,313.7714);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1410157);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.02001655);
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
