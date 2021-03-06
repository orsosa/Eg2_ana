{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue May  9 16:25:07 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-88.79256,0.350906,799.133);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin17 = new TH1F("hM_bin17","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin17->SetBinContent(14,4);
   hM_bin17->SetBinContent(15,7);
   hM_bin17->SetBinContent(16,11);
   hM_bin17->SetBinContent(17,32);
   hM_bin17->SetBinContent(18,34);
   hM_bin17->SetBinContent(19,56);
   hM_bin17->SetBinContent(20,76);
   hM_bin17->SetBinContent(21,68);
   hM_bin17->SetBinContent(22,73);
   hM_bin17->SetBinContent(23,73);
   hM_bin17->SetBinContent(24,86);
   hM_bin17->SetBinContent(25,116);
   hM_bin17->SetBinContent(26,84);
   hM_bin17->SetBinContent(27,120);
   hM_bin17->SetBinContent(28,94);
   hM_bin17->SetBinContent(29,119);
   hM_bin17->SetBinContent(30,120);
   hM_bin17->SetBinContent(31,166);
   hM_bin17->SetBinContent(32,146);
   hM_bin17->SetBinContent(33,125);
   hM_bin17->SetBinContent(34,137);
   hM_bin17->SetBinContent(35,128);
   hM_bin17->SetBinContent(36,169);
   hM_bin17->SetBinContent(37,148);
   hM_bin17->SetBinContent(38,121);
   hM_bin17->SetBinContent(39,172);
   hM_bin17->SetBinContent(40,179);
   hM_bin17->SetBinContent(41,221);
   hM_bin17->SetBinContent(42,225);
   hM_bin17->SetBinContent(43,249);
   hM_bin17->SetBinContent(44,277);
   hM_bin17->SetBinContent(45,369);
   hM_bin17->SetBinContent(46,458);
   hM_bin17->SetBinContent(47,521);
   hM_bin17->SetBinContent(48,555);
   hM_bin17->SetBinContent(49,549);
   hM_bin17->SetBinContent(50,651);
   hM_bin17->SetBinContent(51,609);
   hM_bin17->SetBinContent(52,624);
   hM_bin17->SetBinContent(53,586);
   hM_bin17->SetBinContent(54,557);
   hM_bin17->SetBinContent(55,544);
   hM_bin17->SetBinContent(56,553);
   hM_bin17->SetBinContent(57,450);
   hM_bin17->SetBinContent(58,433);
   hM_bin17->SetBinContent(59,423);
   hM_bin17->SetBinContent(60,339);
   hM_bin17->SetBinContent(61,282);
   hM_bin17->SetBinContent(62,276);
   hM_bin17->SetBinContent(63,317);
   hM_bin17->SetBinContent(64,218);
   hM_bin17->SetBinContent(65,235);
   hM_bin17->SetBinContent(66,201);
   hM_bin17->SetBinContent(67,209);
   hM_bin17->SetBinContent(68,201);
   hM_bin17->SetBinContent(69,189);
   hM_bin17->SetBinContent(70,178);
   hM_bin17->SetBinContent(71,203);
   hM_bin17->SetBinContent(72,169);
   hM_bin17->SetBinContent(73,166);
   hM_bin17->SetBinContent(74,195);
   hM_bin17->SetBinContent(75,155);
   hM_bin17->SetBinContent(76,170);
   hM_bin17->SetBinContent(77,175);
   hM_bin17->SetBinContent(78,125);
   hM_bin17->SetBinContent(79,165);
   hM_bin17->SetBinContent(80,163);
   hM_bin17->SetBinContent(81,139);
   hM_bin17->SetBinContent(82,154);
   hM_bin17->SetBinContent(83,121);
   hM_bin17->SetBinContent(84,152);
   hM_bin17->SetBinContent(85,130);
   hM_bin17->SetBinContent(86,114);
   hM_bin17->SetBinContent(87,131);
   hM_bin17->SetBinContent(88,120);
   hM_bin17->SetBinContent(89,142);
   hM_bin17->SetBinContent(90,118);
   hM_bin17->SetBinContent(91,105);
   hM_bin17->SetBinContent(92,129);
   hM_bin17->SetBinContent(93,116);
   hM_bin17->SetBinContent(94,117);
   hM_bin17->SetBinContent(95,116);
   hM_bin17->SetBinContent(96,136);
   hM_bin17->SetBinContent(97,118);
   hM_bin17->SetBinContent(98,116);
   hM_bin17->SetBinContent(99,100);
   hM_bin17->SetBinContent(100,94);
   hM_bin17->SetBinContent(101,6019);
   hM_bin17->SetEntries(24336);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08243351,0.198367);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(72.64638);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,64.36856);
   fsig->SetParError(0,13.7029);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,695.5269);
   fsig->SetParError(1,96.58976);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.005259997);
   fsig->SetParError(2,6815.39);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,464.3254);
   fsig->SetParError(3,9.801999);
   fsig->SetParLimits(3,0,1302);
   fsig->SetParameter(4,0.1398326);
   fsig->SetParError(4,0.0004565485);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0007706389);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin17->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin17");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 24336  ");
   text = ptstats->AddText("Mean  = 0.1593");
   text = ptstats->AddText("RMS   = 0.06239");
   text = ptstats->AddText("#chi^{2} / ndf = 72.65 / 27");
   text = ptstats->AddText("p0       = 64.37 #pm 13.70 ");
   text = ptstats->AddText("p1       = 695.5 #pm 96.6 ");
   text = ptstats->AddText("p2       = -0.00526 #pm 6815.38965 ");
   text = ptstats->AddText("p3       = 464.3 #pm 9.8 ");
   text = ptstats->AddText("p4       = 0.1398 #pm 0.0005 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00077 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin17->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin17);

   ci = TColor::GetColor("#0000ff");
   hM_bin17->SetMarkerColor(ci);
   hM_bin17->SetMarkerStyle(24);
   hM_bin17->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin17->GetXaxis()->SetLabelFont(42);
   hM_bin17->GetXaxis()->SetLabelSize(0.035);
   hM_bin17->GetXaxis()->SetTitleSize(0.035);
   hM_bin17->GetXaxis()->SetTitleFont(42);
   hM_bin17->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin17->GetYaxis()->SetLabelFont(42);
   hM_bin17->GetYaxis()->SetLabelSize(0.035);
   hM_bin17->GetYaxis()->SetTitleSize(0.035);
   hM_bin17->GetYaxis()->SetTitleFont(42);
   hM_bin17->GetZaxis()->SetLabelFont(42);
   hM_bin17->GetZaxis()->SetLabelSize(0.035);
   hM_bin17->GetZaxis()->SetTitleSize(0.035);
   hM_bin17->GetZaxis()->SetTitleFont(42);
   hM_bin17->Draw("e");
   
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
   fmb->SetParameter(0,64.36856);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,695.5269);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.005259997);
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
   fpeak->SetParameter(0,464.3254);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1398326);
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
