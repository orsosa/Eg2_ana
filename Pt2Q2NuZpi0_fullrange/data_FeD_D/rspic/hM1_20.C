{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:45:40 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-256.6891,0.350906,2310.202);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin20 = new TH1F("hM_bin20","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin20->SetBinContent(13,1);
   hM_bin20->SetBinContent(14,16);
   hM_bin20->SetBinContent(15,39);
   hM_bin20->SetBinContent(16,65);
   hM_bin20->SetBinContent(17,73);
   hM_bin20->SetBinContent(18,94);
   hM_bin20->SetBinContent(19,105);
   hM_bin20->SetBinContent(20,140);
   hM_bin20->SetBinContent(21,126);
   hM_bin20->SetBinContent(22,163);
   hM_bin20->SetBinContent(23,175);
   hM_bin20->SetBinContent(24,180);
   hM_bin20->SetBinContent(25,205);
   hM_bin20->SetBinContent(26,224);
   hM_bin20->SetBinContent(27,215);
   hM_bin20->SetBinContent(28,213);
   hM_bin20->SetBinContent(29,227);
   hM_bin20->SetBinContent(30,224);
   hM_bin20->SetBinContent(31,227);
   hM_bin20->SetBinContent(32,245);
   hM_bin20->SetBinContent(33,279);
   hM_bin20->SetBinContent(34,251);
   hM_bin20->SetBinContent(35,292);
   hM_bin20->SetBinContent(36,298);
   hM_bin20->SetBinContent(37,344);
   hM_bin20->SetBinContent(38,423);
   hM_bin20->SetBinContent(39,453);
   hM_bin20->SetBinContent(40,504);
   hM_bin20->SetBinContent(41,680);
   hM_bin20->SetBinContent(42,781);
   hM_bin20->SetBinContent(43,953);
   hM_bin20->SetBinContent(44,1171);
   hM_bin20->SetBinContent(45,1379);
   hM_bin20->SetBinContent(46,1527);
   hM_bin20->SetBinContent(47,1798);
   hM_bin20->SetBinContent(48,1879);
   hM_bin20->SetBinContent(49,1863);
   hM_bin20->SetBinContent(50,1912);
   hM_bin20->SetBinContent(51,1777);
   hM_bin20->SetBinContent(52,1763);
   hM_bin20->SetBinContent(53,1552);
   hM_bin20->SetBinContent(54,1364);
   hM_bin20->SetBinContent(55,1197);
   hM_bin20->SetBinContent(56,970);
   hM_bin20->SetBinContent(57,871);
   hM_bin20->SetBinContent(58,676);
   hM_bin20->SetBinContent(59,592);
   hM_bin20->SetBinContent(60,498);
   hM_bin20->SetBinContent(61,454);
   hM_bin20->SetBinContent(62,386);
   hM_bin20->SetBinContent(63,379);
   hM_bin20->SetBinContent(64,328);
   hM_bin20->SetBinContent(65,309);
   hM_bin20->SetBinContent(66,305);
   hM_bin20->SetBinContent(67,265);
   hM_bin20->SetBinContent(68,241);
   hM_bin20->SetBinContent(69,276);
   hM_bin20->SetBinContent(70,251);
   hM_bin20->SetBinContent(71,223);
   hM_bin20->SetBinContent(72,260);
   hM_bin20->SetBinContent(73,245);
   hM_bin20->SetBinContent(74,207);
   hM_bin20->SetBinContent(75,266);
   hM_bin20->SetBinContent(76,242);
   hM_bin20->SetBinContent(77,230);
   hM_bin20->SetBinContent(78,213);
   hM_bin20->SetBinContent(79,204);
   hM_bin20->SetBinContent(80,221);
   hM_bin20->SetBinContent(81,193);
   hM_bin20->SetBinContent(82,201);
   hM_bin20->SetBinContent(83,205);
   hM_bin20->SetBinContent(84,217);
   hM_bin20->SetBinContent(85,185);
   hM_bin20->SetBinContent(86,197);
   hM_bin20->SetBinContent(87,181);
   hM_bin20->SetBinContent(88,181);
   hM_bin20->SetBinContent(89,188);
   hM_bin20->SetBinContent(90,199);
   hM_bin20->SetBinContent(91,162);
   hM_bin20->SetBinContent(92,195);
   hM_bin20->SetBinContent(93,175);
   hM_bin20->SetBinContent(94,169);
   hM_bin20->SetBinContent(95,151);
   hM_bin20->SetBinContent(96,154);
   hM_bin20->SetBinContent(97,150);
   hM_bin20->SetBinContent(98,134);
   hM_bin20->SetBinContent(99,168);
   hM_bin20->SetBinContent(100,135);
   hM_bin20->SetBinContent(101,9315);
   hM_bin20->SetEntries(49364);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07424474,0.1901782);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(106.2045);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,176.9952);
   fsig->SetParError(0,16.08441);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,441.3763);
   fsig->SetParError(1,118.022);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-7.021299e-10);
   fsig->SetParError(2,573.7235);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,1577.928);
   fsig->SetParError(3,15.28113);
   fsig->SetParLimits(3,0,3824);
   fsig->SetParameter(4,0.1320367);
   fsig->SetParError(4,0.0001937314);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,1.368573e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin20->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin20");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 49364  ");
   text = ptstats->AddText("Mean  = 0.1454");
   text = ptstats->AddText("RMS   = 0.0557");
   text = ptstats->AddText("#chi^{2} / ndf = 106.2 / 28");
   text = ptstats->AddText("p0       =   177 #pm 16.1 ");
   text = ptstats->AddText("p1       = 441.4 #pm 118.0 ");
   text = ptstats->AddText("p2       = -7.021e-10 #pm 5.737e+02 ");
   text = ptstats->AddText("p3       =  1578 #pm 15.3 ");
   text = ptstats->AddText("p4       = 0.132 #pm 0.000 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00001 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin20->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin20);

   ci = TColor::GetColor("#0000ff");
   hM_bin20->SetMarkerColor(ci);
   hM_bin20->SetMarkerStyle(24);
   hM_bin20->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin20->GetXaxis()->SetLabelFont(42);
   hM_bin20->GetXaxis()->SetLabelSize(0.035);
   hM_bin20->GetXaxis()->SetTitleSize(0.035);
   hM_bin20->GetXaxis()->SetTitleFont(42);
   hM_bin20->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin20->GetYaxis()->SetLabelFont(42);
   hM_bin20->GetYaxis()->SetLabelSize(0.035);
   hM_bin20->GetYaxis()->SetTitleSize(0.035);
   hM_bin20->GetYaxis()->SetTitleFont(42);
   hM_bin20->GetZaxis()->SetLabelFont(42);
   hM_bin20->GetZaxis()->SetLabelSize(0.035);
   hM_bin20->GetZaxis()->SetTitleSize(0.035);
   hM_bin20->GetZaxis()->SetTitleFont(42);
   hM_bin20->Draw("e");
   
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
   fmb->SetParameter(0,176.9952);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,441.3763);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-7.021299e-10);
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
   fpeak->SetParameter(0,1577.928);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1320367);
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
