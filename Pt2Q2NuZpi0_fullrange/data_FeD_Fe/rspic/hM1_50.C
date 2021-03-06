{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:43:17 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-186.3998,0.350906,1677.598);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin50 = new TH1F("hM_bin50","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin50->SetBinContent(13,1);
   hM_bin50->SetBinContent(14,6);
   hM_bin50->SetBinContent(15,32);
   hM_bin50->SetBinContent(16,42);
   hM_bin50->SetBinContent(17,77);
   hM_bin50->SetBinContent(18,103);
   hM_bin50->SetBinContent(19,106);
   hM_bin50->SetBinContent(20,111);
   hM_bin50->SetBinContent(21,152);
   hM_bin50->SetBinContent(22,157);
   hM_bin50->SetBinContent(23,156);
   hM_bin50->SetBinContent(24,165);
   hM_bin50->SetBinContent(25,193);
   hM_bin50->SetBinContent(26,163);
   hM_bin50->SetBinContent(27,165);
   hM_bin50->SetBinContent(28,192);
   hM_bin50->SetBinContent(29,192);
   hM_bin50->SetBinContent(30,250);
   hM_bin50->SetBinContent(31,188);
   hM_bin50->SetBinContent(32,227);
   hM_bin50->SetBinContent(33,239);
   hM_bin50->SetBinContent(34,256);
   hM_bin50->SetBinContent(35,261);
   hM_bin50->SetBinContent(36,243);
   hM_bin50->SetBinContent(37,307);
   hM_bin50->SetBinContent(38,333);
   hM_bin50->SetBinContent(39,371);
   hM_bin50->SetBinContent(40,445);
   hM_bin50->SetBinContent(41,490);
   hM_bin50->SetBinContent(42,603);
   hM_bin50->SetBinContent(43,729);
   hM_bin50->SetBinContent(44,882);
   hM_bin50->SetBinContent(45,925);
   hM_bin50->SetBinContent(46,1049);
   hM_bin50->SetBinContent(47,1146);
   hM_bin50->SetBinContent(48,1348);
   hM_bin50->SetBinContent(49,1383);
   hM_bin50->SetBinContent(50,1265);
   hM_bin50->SetBinContent(51,1227);
   hM_bin50->SetBinContent(52,1115);
   hM_bin50->SetBinContent(53,1089);
   hM_bin50->SetBinContent(54,1026);
   hM_bin50->SetBinContent(55,896);
   hM_bin50->SetBinContent(56,709);
   hM_bin50->SetBinContent(57,588);
   hM_bin50->SetBinContent(58,568);
   hM_bin50->SetBinContent(59,509);
   hM_bin50->SetBinContent(60,429);
   hM_bin50->SetBinContent(61,406);
   hM_bin50->SetBinContent(62,327);
   hM_bin50->SetBinContent(63,316);
   hM_bin50->SetBinContent(64,287);
   hM_bin50->SetBinContent(65,286);
   hM_bin50->SetBinContent(66,253);
   hM_bin50->SetBinContent(67,270);
   hM_bin50->SetBinContent(68,258);
   hM_bin50->SetBinContent(69,247);
   hM_bin50->SetBinContent(70,238);
   hM_bin50->SetBinContent(71,239);
   hM_bin50->SetBinContent(72,247);
   hM_bin50->SetBinContent(73,226);
   hM_bin50->SetBinContent(74,245);
   hM_bin50->SetBinContent(75,224);
   hM_bin50->SetBinContent(76,216);
   hM_bin50->SetBinContent(77,192);
   hM_bin50->SetBinContent(78,213);
   hM_bin50->SetBinContent(79,225);
   hM_bin50->SetBinContent(80,226);
   hM_bin50->SetBinContent(81,172);
   hM_bin50->SetBinContent(82,172);
   hM_bin50->SetBinContent(83,195);
   hM_bin50->SetBinContent(84,187);
   hM_bin50->SetBinContent(85,179);
   hM_bin50->SetBinContent(86,181);
   hM_bin50->SetBinContent(87,174);
   hM_bin50->SetBinContent(88,168);
   hM_bin50->SetBinContent(89,172);
   hM_bin50->SetBinContent(90,177);
   hM_bin50->SetBinContent(91,211);
   hM_bin50->SetBinContent(92,161);
   hM_bin50->SetBinContent(93,182);
   hM_bin50->SetBinContent(94,143);
   hM_bin50->SetBinContent(95,139);
   hM_bin50->SetBinContent(96,156);
   hM_bin50->SetBinContent(97,128);
   hM_bin50->SetBinContent(98,140);
   hM_bin50->SetBinContent(99,139);
   hM_bin50->SetBinContent(100,153);
   hM_bin50->SetBinContent(101,9808);
   hM_bin50->SetEntries(41387);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07430406,0.1902375);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(67.91055);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,183.3815);
   fsig->SetParError(0,15.0472);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,348.7048);
   fsig->SetParError(1,110.238);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.0004373955);
   fsig->SetParError(2,1306.695);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,1030.752);
   fsig->SetParError(3,13.1307);
   fsig->SetParLimits(3,0,2766);
   fsig->SetParameter(4,0.1321717);
   fsig->SetParError(4,0.000263341);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,4.369066e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin50->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin50");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 41387  ");
   text = ptstats->AddText("Mean  = 0.1486");
   text = ptstats->AddText("RMS   = 0.05994");
   text = ptstats->AddText("#chi^{2} / ndf = 67.91 / 28");
   text = ptstats->AddText("p0       = 183.4 #pm 15.0 ");
   text = ptstats->AddText("p1       = 348.7 #pm 110.2 ");
   text = ptstats->AddText("p2       = -0.0004374 #pm 1306.6948242 ");
   text = ptstats->AddText("p3       =  1031 #pm 13.1 ");
   text = ptstats->AddText("p4       = 0.1322 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00004 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin50->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin50);

   ci = TColor::GetColor("#0000ff");
   hM_bin50->SetMarkerColor(ci);
   hM_bin50->SetMarkerStyle(24);
   hM_bin50->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin50->GetXaxis()->SetLabelFont(42);
   hM_bin50->GetXaxis()->SetLabelSize(0.035);
   hM_bin50->GetXaxis()->SetTitleSize(0.035);
   hM_bin50->GetXaxis()->SetTitleFont(42);
   hM_bin50->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin50->GetYaxis()->SetLabelFont(42);
   hM_bin50->GetYaxis()->SetLabelSize(0.035);
   hM_bin50->GetYaxis()->SetTitleSize(0.035);
   hM_bin50->GetYaxis()->SetTitleFont(42);
   hM_bin50->GetZaxis()->SetLabelFont(42);
   hM_bin50->GetZaxis()->SetLabelSize(0.035);
   hM_bin50->GetZaxis()->SetTitleSize(0.035);
   hM_bin50->GetZaxis()->SetTitleFont(42);
   hM_bin50->Draw("e");
   
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
   fmb->SetParameter(0,183.3815);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,348.7048);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.0004373955);
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
   fpeak->SetParameter(0,1030.752);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1321717);
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
