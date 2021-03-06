{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:44:53 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-243.8104,0.350906,2194.293);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin12 = new TH1F("hM_bin12","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin12->SetBinContent(13,2);
   hM_bin12->SetBinContent(14,15);
   hM_bin12->SetBinContent(15,75);
   hM_bin12->SetBinContent(16,125);
   hM_bin12->SetBinContent(17,133);
   hM_bin12->SetBinContent(18,200);
   hM_bin12->SetBinContent(19,218);
   hM_bin12->SetBinContent(20,243);
   hM_bin12->SetBinContent(21,258);
   hM_bin12->SetBinContent(22,263);
   hM_bin12->SetBinContent(23,237);
   hM_bin12->SetBinContent(24,271);
   hM_bin12->SetBinContent(25,264);
   hM_bin12->SetBinContent(26,338);
   hM_bin12->SetBinContent(27,342);
   hM_bin12->SetBinContent(28,353);
   hM_bin12->SetBinContent(29,377);
   hM_bin12->SetBinContent(30,379);
   hM_bin12->SetBinContent(31,405);
   hM_bin12->SetBinContent(32,447);
   hM_bin12->SetBinContent(33,516);
   hM_bin12->SetBinContent(34,504);
   hM_bin12->SetBinContent(35,470);
   hM_bin12->SetBinContent(36,518);
   hM_bin12->SetBinContent(37,636);
   hM_bin12->SetBinContent(38,738);
   hM_bin12->SetBinContent(39,741);
   hM_bin12->SetBinContent(40,838);
   hM_bin12->SetBinContent(41,1027);
   hM_bin12->SetBinContent(42,1175);
   hM_bin12->SetBinContent(43,1314);
   hM_bin12->SetBinContent(44,1466);
   hM_bin12->SetBinContent(45,1610);
   hM_bin12->SetBinContent(46,1716);
   hM_bin12->SetBinContent(47,1642);
   hM_bin12->SetBinContent(48,1815);
   hM_bin12->SetBinContent(49,1715);
   hM_bin12->SetBinContent(50,1671);
   hM_bin12->SetBinContent(51,1652);
   hM_bin12->SetBinContent(52,1548);
   hM_bin12->SetBinContent(53,1311);
   hM_bin12->SetBinContent(54,1220);
   hM_bin12->SetBinContent(55,1025);
   hM_bin12->SetBinContent(56,926);
   hM_bin12->SetBinContent(57,859);
   hM_bin12->SetBinContent(58,758);
   hM_bin12->SetBinContent(59,735);
   hM_bin12->SetBinContent(60,784);
   hM_bin12->SetBinContent(61,694);
   hM_bin12->SetBinContent(62,647);
   hM_bin12->SetBinContent(63,564);
   hM_bin12->SetBinContent(64,617);
   hM_bin12->SetBinContent(65,623);
   hM_bin12->SetBinContent(66,591);
   hM_bin12->SetBinContent(67,554);
   hM_bin12->SetBinContent(68,665);
   hM_bin12->SetBinContent(69,625);
   hM_bin12->SetBinContent(70,588);
   hM_bin12->SetBinContent(71,670);
   hM_bin12->SetBinContent(72,582);
   hM_bin12->SetBinContent(73,573);
   hM_bin12->SetBinContent(74,579);
   hM_bin12->SetBinContent(75,589);
   hM_bin12->SetBinContent(76,483);
   hM_bin12->SetBinContent(77,533);
   hM_bin12->SetBinContent(78,571);
   hM_bin12->SetBinContent(79,481);
   hM_bin12->SetBinContent(80,590);
   hM_bin12->SetBinContent(81,589);
   hM_bin12->SetBinContent(82,506);
   hM_bin12->SetBinContent(83,549);
   hM_bin12->SetBinContent(84,518);
   hM_bin12->SetBinContent(85,505);
   hM_bin12->SetBinContent(86,529);
   hM_bin12->SetBinContent(87,491);
   hM_bin12->SetBinContent(88,534);
   hM_bin12->SetBinContent(89,553);
   hM_bin12->SetBinContent(90,504);
   hM_bin12->SetBinContent(91,550);
   hM_bin12->SetBinContent(92,525);
   hM_bin12->SetBinContent(93,505);
   hM_bin12->SetBinContent(94,539);
   hM_bin12->SetBinContent(95,519);
   hM_bin12->SetBinContent(96,464);
   hM_bin12->SetBinContent(97,473);
   hM_bin12->SetBinContent(98,491);
   hM_bin12->SetBinContent(99,408);
   hM_bin12->SetBinContent(100,448);
   hM_bin12->SetBinContent(101,40230);
   hM_bin12->SetEntries(98124);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.06846313,0.1843966);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(79.15277);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,302.5328);
   fsig->SetParError(0,21.38717);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,1537.365);
   fsig->SetParError(1,165.6641);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-8.325622e-06);
   fsig->SetParError(2,1788.962);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,1243.651);
   fsig->SetParError(3,16.52501);
   fsig->SetParLimits(3,0,3630);
   fsig->SetParameter(4,0.1265607);
   fsig->SetParError(4,0.0002789513);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,4.889946e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin12->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin12");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 98124  ");
   text = ptstats->AddText("Mean  = 0.1604");
   text = ptstats->AddText("RMS   = 0.06906");
   text = ptstats->AddText("#chi^{2} / ndf = 79.15 / 27");
   text = ptstats->AddText("p0       = 302.5 #pm 21.4 ");
   text = ptstats->AddText("p1       =  1537 #pm 165.7 ");
   text = ptstats->AddText("p2       = -8.326e-06 #pm 1.789e+03 ");
   text = ptstats->AddText("p3       =  1244 #pm 16.5 ");
   text = ptstats->AddText("p4       = 0.1266 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00005 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin12->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin12);

   ci = TColor::GetColor("#0000ff");
   hM_bin12->SetMarkerColor(ci);
   hM_bin12->SetMarkerStyle(24);
   hM_bin12->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin12->GetXaxis()->SetLabelFont(42);
   hM_bin12->GetXaxis()->SetLabelSize(0.035);
   hM_bin12->GetXaxis()->SetTitleSize(0.035);
   hM_bin12->GetXaxis()->SetTitleFont(42);
   hM_bin12->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin12->GetYaxis()->SetLabelFont(42);
   hM_bin12->GetYaxis()->SetLabelSize(0.035);
   hM_bin12->GetYaxis()->SetTitleSize(0.035);
   hM_bin12->GetYaxis()->SetTitleFont(42);
   hM_bin12->GetZaxis()->SetLabelFont(42);
   hM_bin12->GetZaxis()->SetLabelSize(0.035);
   hM_bin12->GetZaxis()->SetTitleSize(0.035);
   hM_bin12->GetZaxis()->SetTitleFont(42);
   hM_bin12->Draw("e");
   
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
   fmb->SetParameter(0,302.5328);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1537.365);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-8.325622e-06);
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
   fpeak->SetParameter(0,1243.651);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1265607);
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
