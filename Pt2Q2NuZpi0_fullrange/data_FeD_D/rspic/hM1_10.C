{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:44:41 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-92.80635,0.350906,835.2571);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin10 = new TH1F("hM_bin10","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin10->SetBinContent(14,3);
   hM_bin10->SetBinContent(15,11);
   hM_bin10->SetBinContent(16,22);
   hM_bin10->SetBinContent(17,45);
   hM_bin10->SetBinContent(18,49);
   hM_bin10->SetBinContent(19,54);
   hM_bin10->SetBinContent(20,84);
   hM_bin10->SetBinContent(21,77);
   hM_bin10->SetBinContent(22,89);
   hM_bin10->SetBinContent(23,98);
   hM_bin10->SetBinContent(24,112);
   hM_bin10->SetBinContent(25,103);
   hM_bin10->SetBinContent(26,100);
   hM_bin10->SetBinContent(27,97);
   hM_bin10->SetBinContent(28,130);
   hM_bin10->SetBinContent(29,145);
   hM_bin10->SetBinContent(30,137);
   hM_bin10->SetBinContent(31,122);
   hM_bin10->SetBinContent(32,128);
   hM_bin10->SetBinContent(33,121);
   hM_bin10->SetBinContent(34,139);
   hM_bin10->SetBinContent(35,119);
   hM_bin10->SetBinContent(36,139);
   hM_bin10->SetBinContent(37,154);
   hM_bin10->SetBinContent(38,206);
   hM_bin10->SetBinContent(39,195);
   hM_bin10->SetBinContent(40,220);
   hM_bin10->SetBinContent(41,331);
   hM_bin10->SetBinContent(42,299);
   hM_bin10->SetBinContent(43,392);
   hM_bin10->SetBinContent(44,428);
   hM_bin10->SetBinContent(45,504);
   hM_bin10->SetBinContent(46,565);
   hM_bin10->SetBinContent(47,636);
   hM_bin10->SetBinContent(48,634);
   hM_bin10->SetBinContent(49,656);
   hM_bin10->SetBinContent(50,629);
   hM_bin10->SetBinContent(51,681);
   hM_bin10->SetBinContent(52,641);
   hM_bin10->SetBinContent(53,623);
   hM_bin10->SetBinContent(54,550);
   hM_bin10->SetBinContent(55,511);
   hM_bin10->SetBinContent(56,468);
   hM_bin10->SetBinContent(57,381);
   hM_bin10->SetBinContent(58,358);
   hM_bin10->SetBinContent(59,326);
   hM_bin10->SetBinContent(60,258);
   hM_bin10->SetBinContent(61,239);
   hM_bin10->SetBinContent(62,183);
   hM_bin10->SetBinContent(63,183);
   hM_bin10->SetBinContent(64,178);
   hM_bin10->SetBinContent(65,159);
   hM_bin10->SetBinContent(66,160);
   hM_bin10->SetBinContent(67,130);
   hM_bin10->SetBinContent(68,154);
   hM_bin10->SetBinContent(69,117);
   hM_bin10->SetBinContent(70,115);
   hM_bin10->SetBinContent(71,126);
   hM_bin10->SetBinContent(72,134);
   hM_bin10->SetBinContent(73,97);
   hM_bin10->SetBinContent(74,124);
   hM_bin10->SetBinContent(75,131);
   hM_bin10->SetBinContent(76,106);
   hM_bin10->SetBinContent(77,110);
   hM_bin10->SetBinContent(78,132);
   hM_bin10->SetBinContent(79,99);
   hM_bin10->SetBinContent(80,124);
   hM_bin10->SetBinContent(81,119);
   hM_bin10->SetBinContent(82,114);
   hM_bin10->SetBinContent(83,119);
   hM_bin10->SetBinContent(84,93);
   hM_bin10->SetBinContent(85,93);
   hM_bin10->SetBinContent(86,89);
   hM_bin10->SetBinContent(87,110);
   hM_bin10->SetBinContent(88,90);
   hM_bin10->SetBinContent(89,100);
   hM_bin10->SetBinContent(90,83);
   hM_bin10->SetBinContent(91,87);
   hM_bin10->SetBinContent(92,106);
   hM_bin10->SetBinContent(93,103);
   hM_bin10->SetBinContent(94,84);
   hM_bin10->SetBinContent(95,89);
   hM_bin10->SetBinContent(96,71);
   hM_bin10->SetBinContent(97,85);
   hM_bin10->SetBinContent(98,67);
   hM_bin10->SetBinContent(99,90);
   hM_bin10->SetBinContent(100,96);
   hM_bin10->SetBinContent(101,4522);
   hM_bin10->SetEntries(21981);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.0733117,0.1952656);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(35.88827);
   fsig->SetNDF(29);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,93.35251);
   fsig->SetParError(0,11.14162);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,225.9442);
   fsig->SetParError(1,78.01737);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-43.58559);
   fsig->SetParError(2,167.9249);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,547.9831);
   fsig->SetParError(3,9.351766);
   fsig->SetParLimits(3,0,1362);
   fsig->SetParameter(4,0.1338911);
   fsig->SetParError(4,0.000382882);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.02031207);
   fsig->SetParError(5,0.0004620664);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin10->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin10");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 21981  ");
   text = ptstats->AddText("Mean  = 0.1488");
   text = ptstats->AddText("RMS   = 0.06042");
   text = ptstats->AddText("#chi^{2} / ndf = 35.89 / 29");
   text = ptstats->AddText("p0       = 93.35 #pm 11.14 ");
   text = ptstats->AddText("p1       = 225.9 #pm 78.0 ");
   text = ptstats->AddText("p2       = -43.59 #pm 167.92 ");
   text = ptstats->AddText("p3       =   548 #pm 9.4 ");
   text = ptstats->AddText("p4       = 0.1339 #pm 0.0004 ");
   text = ptstats->AddText("p5       = 0.02031 #pm 0.00046 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin10->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin10);

   ci = TColor::GetColor("#0000ff");
   hM_bin10->SetMarkerColor(ci);
   hM_bin10->SetMarkerStyle(24);
   hM_bin10->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin10->GetXaxis()->SetLabelFont(42);
   hM_bin10->GetXaxis()->SetLabelSize(0.035);
   hM_bin10->GetXaxis()->SetTitleSize(0.035);
   hM_bin10->GetXaxis()->SetTitleFont(42);
   hM_bin10->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin10->GetYaxis()->SetLabelFont(42);
   hM_bin10->GetYaxis()->SetLabelSize(0.035);
   hM_bin10->GetYaxis()->SetTitleSize(0.035);
   hM_bin10->GetYaxis()->SetTitleFont(42);
   hM_bin10->GetZaxis()->SetLabelFont(42);
   hM_bin10->GetZaxis()->SetLabelSize(0.035);
   hM_bin10->GetZaxis()->SetTitleSize(0.035);
   hM_bin10->GetZaxis()->SetTitleFont(42);
   hM_bin10->Draw("e");
   
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
   fmb->SetParameter(0,93.35251);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,225.9442);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-43.58559);
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
   fpeak->SetParameter(0,547.9831);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1338911);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.02031207);
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
