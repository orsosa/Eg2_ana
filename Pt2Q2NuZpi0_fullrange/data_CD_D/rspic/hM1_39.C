{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:37:40 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-44.34787,0.350906,399.1308);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin39 = new TH1F("hM_bin39","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin39->SetBinContent(13,1);
   hM_bin39->SetBinContent(14,1);
   hM_bin39->SetBinContent(15,3);
   hM_bin39->SetBinContent(16,13);
   hM_bin39->SetBinContent(17,11);
   hM_bin39->SetBinContent(18,19);
   hM_bin39->SetBinContent(19,29);
   hM_bin39->SetBinContent(20,25);
   hM_bin39->SetBinContent(21,28);
   hM_bin39->SetBinContent(22,27);
   hM_bin39->SetBinContent(23,28);
   hM_bin39->SetBinContent(24,43);
   hM_bin39->SetBinContent(25,19);
   hM_bin39->SetBinContent(26,37);
   hM_bin39->SetBinContent(27,41);
   hM_bin39->SetBinContent(28,30);
   hM_bin39->SetBinContent(29,46);
   hM_bin39->SetBinContent(30,46);
   hM_bin39->SetBinContent(31,49);
   hM_bin39->SetBinContent(32,43);
   hM_bin39->SetBinContent(33,57);
   hM_bin39->SetBinContent(34,56);
   hM_bin39->SetBinContent(35,61);
   hM_bin39->SetBinContent(36,41);
   hM_bin39->SetBinContent(37,45);
   hM_bin39->SetBinContent(38,67);
   hM_bin39->SetBinContent(39,70);
   hM_bin39->SetBinContent(40,72);
   hM_bin39->SetBinContent(41,101);
   hM_bin39->SetBinContent(42,100);
   hM_bin39->SetBinContent(43,115);
   hM_bin39->SetBinContent(44,109);
   hM_bin39->SetBinContent(45,157);
   hM_bin39->SetBinContent(46,169);
   hM_bin39->SetBinContent(47,224);
   hM_bin39->SetBinContent(48,254);
   hM_bin39->SetBinContent(49,249);
   hM_bin39->SetBinContent(50,274);
   hM_bin39->SetBinContent(51,320);
   hM_bin39->SetBinContent(52,305);
   hM_bin39->SetBinContent(53,272);
   hM_bin39->SetBinContent(54,292);
   hM_bin39->SetBinContent(55,249);
   hM_bin39->SetBinContent(56,242);
   hM_bin39->SetBinContent(57,210);
   hM_bin39->SetBinContent(58,180);
   hM_bin39->SetBinContent(59,181);
   hM_bin39->SetBinContent(60,165);
   hM_bin39->SetBinContent(61,117);
   hM_bin39->SetBinContent(62,125);
   hM_bin39->SetBinContent(63,85);
   hM_bin39->SetBinContent(64,89);
   hM_bin39->SetBinContent(65,90);
   hM_bin39->SetBinContent(66,84);
   hM_bin39->SetBinContent(67,67);
   hM_bin39->SetBinContent(68,64);
   hM_bin39->SetBinContent(69,50);
   hM_bin39->SetBinContent(70,48);
   hM_bin39->SetBinContent(71,40);
   hM_bin39->SetBinContent(72,50);
   hM_bin39->SetBinContent(73,45);
   hM_bin39->SetBinContent(74,63);
   hM_bin39->SetBinContent(75,17);
   hM_bin39->SetBinContent(76,53);
   hM_bin39->SetBinContent(77,41);
   hM_bin39->SetBinContent(78,42);
   hM_bin39->SetBinContent(79,41);
   hM_bin39->SetBinContent(80,33);
   hM_bin39->SetBinContent(81,46);
   hM_bin39->SetBinContent(82,33);
   hM_bin39->SetBinContent(83,38);
   hM_bin39->SetBinContent(84,43);
   hM_bin39->SetBinContent(85,30);
   hM_bin39->SetBinContent(86,36);
   hM_bin39->SetBinContent(87,34);
   hM_bin39->SetBinContent(88,34);
   hM_bin39->SetBinContent(89,28);
   hM_bin39->SetBinContent(90,30);
   hM_bin39->SetBinContent(91,35);
   hM_bin39->SetBinContent(92,23);
   hM_bin39->SetBinContent(93,31);
   hM_bin39->SetBinContent(94,27);
   hM_bin39->SetBinContent(95,26);
   hM_bin39->SetBinContent(96,30);
   hM_bin39->SetBinContent(97,27);
   hM_bin39->SetBinContent(98,21);
   hM_bin39->SetBinContent(99,22);
   hM_bin39->SetBinContent(100,27);
   hM_bin39->SetBinContent(101,1457);
   hM_bin39->SetEntries(8498);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.0810192,0.2022606);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(42.9053);
   fsig->SetNDF(29);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-26.51374);
   fsig->SetParError(0,56.1929);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,1171.99);
   fsig->SetParError(1,913.7299);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-3767.065);
   fsig->SetParError(2,3009.459);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,226.8248);
   fsig->SetParError(3,12.52361);
   fsig->SetParLimits(3,0,640);
   fsig->SetParameter(4,0.1410804);
   fsig->SetParError(4,0.0005732907);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0004888285);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin39->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin39");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 8498   ");
   text = ptstats->AddText("Mean  = 0.1501");
   text = ptstats->AddText("RMS   = 0.05552");
   text = ptstats->AddText("#chi^{2} / ndf = 42.91 / 29");
   text = ptstats->AddText("p0       = -26.51 #pm 56.19 ");
   text = ptstats->AddText("p1       =  1172 #pm 913.7 ");
   text = ptstats->AddText("p2       = -3767 #pm 3009.5 ");
   text = ptstats->AddText("p3       = 226.8 #pm 12.5 ");
   text = ptstats->AddText("p4       = 0.1411 #pm 0.0006 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00049 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin39->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin39);

   ci = TColor::GetColor("#0000ff");
   hM_bin39->SetMarkerColor(ci);
   hM_bin39->SetMarkerStyle(24);
   hM_bin39->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin39->GetXaxis()->SetLabelFont(42);
   hM_bin39->GetXaxis()->SetLabelSize(0.035);
   hM_bin39->GetXaxis()->SetTitleSize(0.035);
   hM_bin39->GetXaxis()->SetTitleFont(42);
   hM_bin39->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin39->GetYaxis()->SetLabelFont(42);
   hM_bin39->GetYaxis()->SetLabelSize(0.035);
   hM_bin39->GetYaxis()->SetTitleSize(0.035);
   hM_bin39->GetYaxis()->SetTitleFont(42);
   hM_bin39->GetZaxis()->SetLabelFont(42);
   hM_bin39->GetZaxis()->SetLabelSize(0.035);
   hM_bin39->GetZaxis()->SetTitleSize(0.035);
   hM_bin39->GetZaxis()->SetTitleFont(42);
   hM_bin39->Draw("e");
   
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
   fmb->SetParameter(0,-26.51374);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1171.99);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-3767.065);
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
   fpeak->SetParameter(0,226.8248);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1410804);
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
