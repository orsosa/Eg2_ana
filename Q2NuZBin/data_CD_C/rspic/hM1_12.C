{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Jan 31 05:36:04 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-78.34804,0.350906,705.1323);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin12 = new TH1F("hM_bin12","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin12->SetBinContent(0,3362);
   hM_bin12->SetBinContent(13,4);
   hM_bin12->SetBinContent(14,6);
   hM_bin12->SetBinContent(15,15);
   hM_bin12->SetBinContent(16,9);
   hM_bin12->SetBinContent(17,19);
   hM_bin12->SetBinContent(18,13);
   hM_bin12->SetBinContent(19,17);
   hM_bin12->SetBinContent(20,23);
   hM_bin12->SetBinContent(21,12);
   hM_bin12->SetBinContent(22,12);
   hM_bin12->SetBinContent(23,17);
   hM_bin12->SetBinContent(24,17);
   hM_bin12->SetBinContent(25,14);
   hM_bin12->SetBinContent(26,17);
   hM_bin12->SetBinContent(27,23);
   hM_bin12->SetBinContent(28,16);
   hM_bin12->SetBinContent(29,24);
   hM_bin12->SetBinContent(30,14);
   hM_bin12->SetBinContent(31,27);
   hM_bin12->SetBinContent(32,23);
   hM_bin12->SetBinContent(33,14);
   hM_bin12->SetBinContent(34,26);
   hM_bin12->SetBinContent(35,42);
   hM_bin12->SetBinContent(36,34);
   hM_bin12->SetBinContent(37,43);
   hM_bin12->SetBinContent(38,55);
   hM_bin12->SetBinContent(39,65);
   hM_bin12->SetBinContent(40,87);
   hM_bin12->SetBinContent(41,105);
   hM_bin12->SetBinContent(42,171);
   hM_bin12->SetBinContent(43,184);
   hM_bin12->SetBinContent(44,256);
   hM_bin12->SetBinContent(45,305);
   hM_bin12->SetBinContent(46,380);
   hM_bin12->SetBinContent(47,448);
   hM_bin12->SetBinContent(48,501);
   hM_bin12->SetBinContent(49,550);
   hM_bin12->SetBinContent(50,534);
   hM_bin12->SetBinContent(51,573);
   hM_bin12->SetBinContent(52,552);
   hM_bin12->SetBinContent(53,504);
   hM_bin12->SetBinContent(54,502);
   hM_bin12->SetBinContent(55,414);
   hM_bin12->SetBinContent(56,357);
   hM_bin12->SetBinContent(57,313);
   hM_bin12->SetBinContent(58,305);
   hM_bin12->SetBinContent(59,287);
   hM_bin12->SetBinContent(60,215);
   hM_bin12->SetBinContent(61,211);
   hM_bin12->SetBinContent(62,183);
   hM_bin12->SetBinContent(63,176);
   hM_bin12->SetBinContent(64,187);
   hM_bin12->SetBinContent(65,148);
   hM_bin12->SetBinContent(66,128);
   hM_bin12->SetBinContent(67,145);
   hM_bin12->SetBinContent(68,140);
   hM_bin12->SetBinContent(69,145);
   hM_bin12->SetBinContent(70,148);
   hM_bin12->SetBinContent(71,111);
   hM_bin12->SetBinContent(72,141);
   hM_bin12->SetBinContent(73,143);
   hM_bin12->SetBinContent(74,157);
   hM_bin12->SetBinContent(75,148);
   hM_bin12->SetBinContent(76,164);
   hM_bin12->SetBinContent(77,136);
   hM_bin12->SetBinContent(78,157);
   hM_bin12->SetBinContent(79,151);
   hM_bin12->SetBinContent(80,140);
   hM_bin12->SetBinContent(81,174);
   hM_bin12->SetBinContent(82,159);
   hM_bin12->SetBinContent(83,157);
   hM_bin12->SetBinContent(84,158);
   hM_bin12->SetBinContent(85,168);
   hM_bin12->SetBinContent(86,137);
   hM_bin12->SetBinContent(87,165);
   hM_bin12->SetBinContent(88,156);
   hM_bin12->SetBinContent(89,165);
   hM_bin12->SetBinContent(90,164);
   hM_bin12->SetBinContent(91,177);
   hM_bin12->SetBinContent(92,160);
   hM_bin12->SetBinContent(93,179);
   hM_bin12->SetBinContent(94,180);
   hM_bin12->SetBinContent(95,149);
   hM_bin12->SetBinContent(96,186);
   hM_bin12->SetBinContent(97,165);
   hM_bin12->SetBinContent(98,166);
   hM_bin12->SetBinContent(99,195);
   hM_bin12->SetBinContent(100,169);
   hM_bin12->SetBinContent(101,16161);
   hM_bin12->SetEntries(34055);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.0795825,0.1955159);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(63.83553);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-72.67539);
   fsig->SetParError(0,8.398983);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,1068.004);
   fsig->SetParError(1,69.52579);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.0001680615);
   fsig->SetParError(2,560.9249);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,461.8003);
   fsig->SetParError(3,8.478086);
   fsig->SetParLimits(3,0,1146);
   fsig->SetParameter(4,0.1369514);
   fsig->SetParError(4,0.0003624639);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,4.934116e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin12->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin12");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 34055  ");
   text = ptstats->AddText("Mean  = 0.1791");
   text = ptstats->AddText("RMS   = 0.06335");
   text = ptstats->AddText("#chi^{2} / ndf = 63.84 / 27");
   text = ptstats->AddText("p0       = -72.68 #pm 8.40 ");
   text = ptstats->AddText("p1       =  1068 #pm 69.5 ");
   text = ptstats->AddText("p2       = -0.0001681 #pm 560.9248657 ");
   text = ptstats->AddText("p3       = 461.8 #pm 8.5 ");
   text = ptstats->AddText("p4       = 0.137 #pm 0.000 ");
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
   fmb->SetParameter(0,-72.67539);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1068.004);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.0001680615);
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
   fpeak->SetParameter(0,461.8003);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1369514);
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
