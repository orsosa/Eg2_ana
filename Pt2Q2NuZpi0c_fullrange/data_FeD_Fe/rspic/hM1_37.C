{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue May  9 16:30:55 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-167.638,0.350906,1508.742);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin37 = new TH1F("hM_bin37","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin37->SetBinContent(14,3);
   hM_bin37->SetBinContent(15,19);
   hM_bin37->SetBinContent(16,38);
   hM_bin37->SetBinContent(17,40);
   hM_bin37->SetBinContent(18,50);
   hM_bin37->SetBinContent(19,85);
   hM_bin37->SetBinContent(20,98);
   hM_bin37->SetBinContent(21,94);
   hM_bin37->SetBinContent(22,123);
   hM_bin37->SetBinContent(23,131);
   hM_bin37->SetBinContent(24,130);
   hM_bin37->SetBinContent(25,128);
   hM_bin37->SetBinContent(26,121);
   hM_bin37->SetBinContent(27,159);
   hM_bin37->SetBinContent(28,133);
   hM_bin37->SetBinContent(29,142);
   hM_bin37->SetBinContent(30,147);
   hM_bin37->SetBinContent(31,165);
   hM_bin37->SetBinContent(32,176);
   hM_bin37->SetBinContent(33,161);
   hM_bin37->SetBinContent(34,207);
   hM_bin37->SetBinContent(35,175);
   hM_bin37->SetBinContent(36,236);
   hM_bin37->SetBinContent(37,237);
   hM_bin37->SetBinContent(38,259);
   hM_bin37->SetBinContent(39,297);
   hM_bin37->SetBinContent(40,416);
   hM_bin37->SetBinContent(41,441);
   hM_bin37->SetBinContent(42,590);
   hM_bin37->SetBinContent(43,644);
   hM_bin37->SetBinContent(44,770);
   hM_bin37->SetBinContent(45,847);
   hM_bin37->SetBinContent(46,1012);
   hM_bin37->SetBinContent(47,1125);
   hM_bin37->SetBinContent(48,1073);
   hM_bin37->SetBinContent(49,1242);
   hM_bin37->SetBinContent(50,1187);
   hM_bin37->SetBinContent(51,1170);
   hM_bin37->SetBinContent(52,1045);
   hM_bin37->SetBinContent(53,1011);
   hM_bin37->SetBinContent(54,843);
   hM_bin37->SetBinContent(55,780);
   hM_bin37->SetBinContent(56,628);
   hM_bin37->SetBinContent(57,501);
   hM_bin37->SetBinContent(58,498);
   hM_bin37->SetBinContent(59,422);
   hM_bin37->SetBinContent(60,346);
   hM_bin37->SetBinContent(61,274);
   hM_bin37->SetBinContent(62,262);
   hM_bin37->SetBinContent(63,226);
   hM_bin37->SetBinContent(64,198);
   hM_bin37->SetBinContent(65,228);
   hM_bin37->SetBinContent(66,178);
   hM_bin37->SetBinContent(67,185);
   hM_bin37->SetBinContent(68,207);
   hM_bin37->SetBinContent(69,151);
   hM_bin37->SetBinContent(70,197);
   hM_bin37->SetBinContent(71,168);
   hM_bin37->SetBinContent(72,190);
   hM_bin37->SetBinContent(73,191);
   hM_bin37->SetBinContent(74,153);
   hM_bin37->SetBinContent(75,165);
   hM_bin37->SetBinContent(76,145);
   hM_bin37->SetBinContent(77,167);
   hM_bin37->SetBinContent(78,160);
   hM_bin37->SetBinContent(79,159);
   hM_bin37->SetBinContent(80,151);
   hM_bin37->SetBinContent(81,167);
   hM_bin37->SetBinContent(82,156);
   hM_bin37->SetBinContent(83,159);
   hM_bin37->SetBinContent(84,178);
   hM_bin37->SetBinContent(85,167);
   hM_bin37->SetBinContent(86,155);
   hM_bin37->SetBinContent(87,158);
   hM_bin37->SetBinContent(88,129);
   hM_bin37->SetBinContent(89,155);
   hM_bin37->SetBinContent(90,140);
   hM_bin37->SetBinContent(91,143);
   hM_bin37->SetBinContent(92,152);
   hM_bin37->SetBinContent(93,132);
   hM_bin37->SetBinContent(94,130);
   hM_bin37->SetBinContent(95,144);
   hM_bin37->SetBinContent(96,159);
   hM_bin37->SetBinContent(97,139);
   hM_bin37->SetBinContent(98,145);
   hM_bin37->SetBinContent(99,152);
   hM_bin37->SetBinContent(100,124);
   hM_bin37->SetBinContent(101,8046);
   hM_bin37->SetEntries(34930);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07377081,0.1897043);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(61.34022);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,135.244);
   fsig->SetParError(0,13.20973);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,205.6731);
   fsig->SetParError(1,95.6999);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-3.262012e-07);
   fsig->SetParError(2,1539.267);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,995.5997);
   fsig->SetParError(3,12.23267);
   fsig->SetParLimits(3,0,2484);
   fsig->SetParameter(4,0.1316888);
   fsig->SetParError(4,0.0002527);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,4.772066e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin37->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin37");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 34930  ");
   text = ptstats->AddText("Mean  = 0.1488");
   text = ptstats->AddText("RMS   = 0.05917");
   text = ptstats->AddText("#chi^{2} / ndf = 61.34 / 28");
   text = ptstats->AddText("p0       = 135.2 #pm 13.2 ");
   text = ptstats->AddText("p1       = 205.7 #pm 95.7 ");
   text = ptstats->AddText("p2       = -3.262e-07 #pm 1.539e+03 ");
   text = ptstats->AddText("p3       = 995.6 #pm 12.2 ");
   text = ptstats->AddText("p4       = 0.1317 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00005 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin37->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin37);

   ci = TColor::GetColor("#0000ff");
   hM_bin37->SetMarkerColor(ci);
   hM_bin37->SetMarkerStyle(24);
   hM_bin37->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin37->GetXaxis()->SetLabelFont(42);
   hM_bin37->GetXaxis()->SetLabelSize(0.035);
   hM_bin37->GetXaxis()->SetTitleSize(0.035);
   hM_bin37->GetXaxis()->SetTitleFont(42);
   hM_bin37->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin37->GetYaxis()->SetLabelFont(42);
   hM_bin37->GetYaxis()->SetLabelSize(0.035);
   hM_bin37->GetYaxis()->SetTitleSize(0.035);
   hM_bin37->GetYaxis()->SetTitleFont(42);
   hM_bin37->GetZaxis()->SetLabelFont(42);
   hM_bin37->GetZaxis()->SetLabelSize(0.035);
   hM_bin37->GetZaxis()->SetTitleSize(0.035);
   hM_bin37->GetZaxis()->SetTitleFont(42);
   hM_bin37->Draw("e");
   
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
   fmb->SetParameter(0,135.244);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,205.6731);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-3.262012e-07);
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
   fpeak->SetParameter(0,995.5997);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1316888);
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
