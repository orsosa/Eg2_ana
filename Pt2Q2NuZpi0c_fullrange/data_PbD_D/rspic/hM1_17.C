{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue May  9 16:18:03 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-146.996,0.350906,1322.964);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin17 = new TH1F("hM_bin17","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin17->SetBinContent(15,8);
   hM_bin17->SetBinContent(16,18);
   hM_bin17->SetBinContent(17,47);
   hM_bin17->SetBinContent(18,56);
   hM_bin17->SetBinContent(19,91);
   hM_bin17->SetBinContent(20,101);
   hM_bin17->SetBinContent(21,120);
   hM_bin17->SetBinContent(22,117);
   hM_bin17->SetBinContent(23,142);
   hM_bin17->SetBinContent(24,169);
   hM_bin17->SetBinContent(25,170);
   hM_bin17->SetBinContent(26,197);
   hM_bin17->SetBinContent(27,198);
   hM_bin17->SetBinContent(28,169);
   hM_bin17->SetBinContent(29,189);
   hM_bin17->SetBinContent(30,200);
   hM_bin17->SetBinContent(31,206);
   hM_bin17->SetBinContent(32,182);
   hM_bin17->SetBinContent(33,219);
   hM_bin17->SetBinContent(34,219);
   hM_bin17->SetBinContent(35,223);
   hM_bin17->SetBinContent(36,238);
   hM_bin17->SetBinContent(37,234);
   hM_bin17->SetBinContent(38,273);
   hM_bin17->SetBinContent(39,239);
   hM_bin17->SetBinContent(40,294);
   hM_bin17->SetBinContent(41,351);
   hM_bin17->SetBinContent(42,376);
   hM_bin17->SetBinContent(43,433);
   hM_bin17->SetBinContent(44,485);
   hM_bin17->SetBinContent(45,635);
   hM_bin17->SetBinContent(46,694);
   hM_bin17->SetBinContent(47,865);
   hM_bin17->SetBinContent(48,893);
   hM_bin17->SetBinContent(49,1035);
   hM_bin17->SetBinContent(50,1038);
   hM_bin17->SetBinContent(51,1087);
   hM_bin17->SetBinContent(52,1056);
   hM_bin17->SetBinContent(53,936);
   hM_bin17->SetBinContent(54,882);
   hM_bin17->SetBinContent(55,878);
   hM_bin17->SetBinContent(56,813);
   hM_bin17->SetBinContent(57,657);
   hM_bin17->SetBinContent(58,649);
   hM_bin17->SetBinContent(59,548);
   hM_bin17->SetBinContent(60,526);
   hM_bin17->SetBinContent(61,422);
   hM_bin17->SetBinContent(62,439);
   hM_bin17->SetBinContent(63,350);
   hM_bin17->SetBinContent(64,325);
   hM_bin17->SetBinContent(65,352);
   hM_bin17->SetBinContent(66,317);
   hM_bin17->SetBinContent(67,315);
   hM_bin17->SetBinContent(68,320);
   hM_bin17->SetBinContent(69,268);
   hM_bin17->SetBinContent(70,262);
   hM_bin17->SetBinContent(71,236);
   hM_bin17->SetBinContent(72,252);
   hM_bin17->SetBinContent(73,253);
   hM_bin17->SetBinContent(74,285);
   hM_bin17->SetBinContent(75,231);
   hM_bin17->SetBinContent(76,224);
   hM_bin17->SetBinContent(77,296);
   hM_bin17->SetBinContent(78,215);
   hM_bin17->SetBinContent(79,255);
   hM_bin17->SetBinContent(80,248);
   hM_bin17->SetBinContent(81,207);
   hM_bin17->SetBinContent(82,249);
   hM_bin17->SetBinContent(83,210);
   hM_bin17->SetBinContent(84,225);
   hM_bin17->SetBinContent(85,211);
   hM_bin17->SetBinContent(86,192);
   hM_bin17->SetBinContent(87,204);
   hM_bin17->SetBinContent(88,179);
   hM_bin17->SetBinContent(89,215);
   hM_bin17->SetBinContent(90,196);
   hM_bin17->SetBinContent(91,208);
   hM_bin17->SetBinContent(92,188);
   hM_bin17->SetBinContent(93,172);
   hM_bin17->SetBinContent(94,178);
   hM_bin17->SetBinContent(95,191);
   hM_bin17->SetBinContent(96,198);
   hM_bin17->SetBinContent(97,180);
   hM_bin17->SetBinContent(98,121);
   hM_bin17->SetBinContent(99,179);
   hM_bin17->SetBinContent(100,146);
   hM_bin17->SetBinContent(101,9090);
   hM_bin17->SetEntries(37960);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08069281,0.1966263);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(74.35632);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,114.8669);
   fsig->SetParError(0,15.5694);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,928.2526);
   fsig->SetParError(1,110.3311);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-6.352639e-08);
   fsig->SetParError(2,898.9843);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,772.2503);
   fsig->SetParError(3,12.22862);
   fsig->SetParLimits(3,0,2174);
   fsig->SetParameter(4,0.1381322);
   fsig->SetParError(4,0.000325603);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,4.585595e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin17->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin17");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 37960  ");
   text = ptstats->AddText("Mean  = 0.1575");
   text = ptstats->AddText("RMS   = 0.06244");
   text = ptstats->AddText("#chi^{2} / ndf = 74.36 / 28");
   text = ptstats->AddText("p0       = 114.9 #pm 15.6 ");
   text = ptstats->AddText("p1       = 928.3 #pm 110.3 ");
   text = ptstats->AddText("p2       = -6.353e-08 #pm 8.990e+02 ");
   text = ptstats->AddText("p3       = 772.3 #pm 12.2 ");
   text = ptstats->AddText("p4       = 0.1381 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00005 ");
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
   fmb->SetParameter(0,114.8669);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,928.2526);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-6.352639e-08);
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
   fpeak->SetParameter(0,772.2503);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1381322);
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
