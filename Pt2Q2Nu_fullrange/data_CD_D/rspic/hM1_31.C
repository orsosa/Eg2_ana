{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 14:56:57 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-201.2936,0.350906,1811.642);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin31 = new TH1F("hM_bin31","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin31->SetBinContent(0,2900);
   hM_bin31->SetBinContent(13,24);
   hM_bin31->SetBinContent(14,38);
   hM_bin31->SetBinContent(15,73);
   hM_bin31->SetBinContent(16,38);
   hM_bin31->SetBinContent(17,51);
   hM_bin31->SetBinContent(18,52);
   hM_bin31->SetBinContent(19,49);
   hM_bin31->SetBinContent(20,48);
   hM_bin31->SetBinContent(21,72);
   hM_bin31->SetBinContent(22,54);
   hM_bin31->SetBinContent(23,70);
   hM_bin31->SetBinContent(24,67);
   hM_bin31->SetBinContent(25,77);
   hM_bin31->SetBinContent(26,75);
   hM_bin31->SetBinContent(27,93);
   hM_bin31->SetBinContent(28,130);
   hM_bin31->SetBinContent(29,118);
   hM_bin31->SetBinContent(30,104);
   hM_bin31->SetBinContent(31,120);
   hM_bin31->SetBinContent(32,129);
   hM_bin31->SetBinContent(33,126);
   hM_bin31->SetBinContent(34,130);
   hM_bin31->SetBinContent(35,163);
   hM_bin31->SetBinContent(36,177);
   hM_bin31->SetBinContent(37,207);
   hM_bin31->SetBinContent(38,225);
   hM_bin31->SetBinContent(39,285);
   hM_bin31->SetBinContent(40,349);
   hM_bin31->SetBinContent(41,391);
   hM_bin31->SetBinContent(42,534);
   hM_bin31->SetBinContent(43,669);
   hM_bin31->SetBinContent(44,809);
   hM_bin31->SetBinContent(45,902);
   hM_bin31->SetBinContent(46,1045);
   hM_bin31->SetBinContent(47,1186);
   hM_bin31->SetBinContent(48,1281);
   hM_bin31->SetBinContent(49,1403);
   hM_bin31->SetBinContent(50,1454);
   hM_bin31->SetBinContent(51,1495);
   hM_bin31->SetBinContent(52,1307);
   hM_bin31->SetBinContent(53,1336);
   hM_bin31->SetBinContent(54,1165);
   hM_bin31->SetBinContent(55,1112);
   hM_bin31->SetBinContent(56,994);
   hM_bin31->SetBinContent(57,891);
   hM_bin31->SetBinContent(58,755);
   hM_bin31->SetBinContent(59,773);
   hM_bin31->SetBinContent(60,645);
   hM_bin31->SetBinContent(61,605);
   hM_bin31->SetBinContent(62,572);
   hM_bin31->SetBinContent(63,464);
   hM_bin31->SetBinContent(64,441);
   hM_bin31->SetBinContent(65,471);
   hM_bin31->SetBinContent(66,450);
   hM_bin31->SetBinContent(67,404);
   hM_bin31->SetBinContent(68,396);
   hM_bin31->SetBinContent(69,424);
   hM_bin31->SetBinContent(70,432);
   hM_bin31->SetBinContent(71,410);
   hM_bin31->SetBinContent(72,396);
   hM_bin31->SetBinContent(73,414);
   hM_bin31->SetBinContent(74,429);
   hM_bin31->SetBinContent(75,393);
   hM_bin31->SetBinContent(76,405);
   hM_bin31->SetBinContent(77,440);
   hM_bin31->SetBinContent(78,392);
   hM_bin31->SetBinContent(79,408);
   hM_bin31->SetBinContent(80,390);
   hM_bin31->SetBinContent(81,402);
   hM_bin31->SetBinContent(82,402);
   hM_bin31->SetBinContent(83,369);
   hM_bin31->SetBinContent(84,393);
   hM_bin31->SetBinContent(85,439);
   hM_bin31->SetBinContent(86,406);
   hM_bin31->SetBinContent(87,406);
   hM_bin31->SetBinContent(88,421);
   hM_bin31->SetBinContent(89,422);
   hM_bin31->SetBinContent(90,375);
   hM_bin31->SetBinContent(91,395);
   hM_bin31->SetBinContent(92,370);
   hM_bin31->SetBinContent(93,403);
   hM_bin31->SetBinContent(94,402);
   hM_bin31->SetBinContent(95,394);
   hM_bin31->SetBinContent(96,420);
   hM_bin31->SetBinContent(97,418);
   hM_bin31->SetBinContent(98,352);
   hM_bin31->SetBinContent(99,401);
   hM_bin31->SetBinContent(100,409);
   hM_bin31->SetBinContent(101,60344);
   hM_bin31->SetEntries(103270);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.0778828,0.1938162);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(57.92428);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-103.3657);
   fsig->SetParError(0,14.30178);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,2745.393);
   fsig->SetParError(1,114.6731);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.003869263);
   fsig->SetParError(2,6577.233);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,1136.009);
   fsig->SetParError(3,13.85043);
   fsig->SetParLimits(3,0,2990);
   fsig->SetParameter(4,0.1354438);
   fsig->SetParError(4,0.0002532658);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,9.862248e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin31->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin31");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 103270 ");
   text = ptstats->AddText("Mean  = 0.1729");
   text = ptstats->AddText("RMS   = 0.06391");
   text = ptstats->AddText("#chi^{2} / ndf = 57.92 / 28");
   text = ptstats->AddText("p0       = -103.4 #pm 14.3 ");
   text = ptstats->AddText("p1       =  2745 #pm 114.7 ");
   text = ptstats->AddText("p2       = -0.003869 #pm 6577.232422 ");
   text = ptstats->AddText("p3       =  1136 #pm 13.9 ");
   text = ptstats->AddText("p4       = 0.1354 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00010 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin31->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin31);

   ci = TColor::GetColor("#0000ff");
   hM_bin31->SetMarkerColor(ci);
   hM_bin31->SetMarkerStyle(24);
   hM_bin31->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin31->GetXaxis()->SetLabelFont(42);
   hM_bin31->GetXaxis()->SetLabelSize(0.035);
   hM_bin31->GetXaxis()->SetTitleSize(0.035);
   hM_bin31->GetXaxis()->SetTitleFont(42);
   hM_bin31->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin31->GetYaxis()->SetLabelFont(42);
   hM_bin31->GetYaxis()->SetLabelSize(0.035);
   hM_bin31->GetYaxis()->SetTitleSize(0.035);
   hM_bin31->GetYaxis()->SetTitleFont(42);
   hM_bin31->GetZaxis()->SetLabelFont(42);
   hM_bin31->GetZaxis()->SetLabelSize(0.035);
   hM_bin31->GetZaxis()->SetTitleSize(0.035);
   hM_bin31->GetZaxis()->SetTitleFont(42);
   hM_bin31->Draw("e");
   
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
   fmb->SetParameter(0,-103.3657);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,2745.393);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.003869263);
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
   fpeak->SetParameter(0,1136.009);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1354438);
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
