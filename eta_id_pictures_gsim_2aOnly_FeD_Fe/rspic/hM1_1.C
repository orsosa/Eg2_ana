{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Dec 20 14:48:17 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.425,1.426898,0.675,4.329471);
   c->SetBorderSize(2);
   c->SetLogy();
   c->SetFrameFillColor(0);
   
   TH1F *hM = new TH1F("hM","Mass, bin (q2,nu,z) = (0,0,1)",75,0.45,0.65);
   hM->SetBinContent(0,37759);
   hM->SetBinContent(1,143);
   hM->SetBinContent(2,142);
   hM->SetBinContent(3,115);
   hM->SetBinContent(4,143);
   hM->SetBinContent(5,133);
   hM->SetBinContent(6,124);
   hM->SetBinContent(7,126);
   hM->SetBinContent(8,155);
   hM->SetBinContent(9,155);
   hM->SetBinContent(10,153);
   hM->SetBinContent(11,165);
   hM->SetBinContent(12,142);
   hM->SetBinContent(13,146);
   hM->SetBinContent(14,128);
   hM->SetBinContent(15,152);
   hM->SetBinContent(16,152);
   hM->SetBinContent(17,149);
   hM->SetBinContent(18,177);
   hM->SetBinContent(19,134);
   hM->SetBinContent(20,149);
   hM->SetBinContent(21,143);
   hM->SetBinContent(22,177);
   hM->SetBinContent(23,191);
   hM->SetBinContent(24,204);
   hM->SetBinContent(25,184);
   hM->SetBinContent(26,189);
   hM->SetBinContent(27,192);
   hM->SetBinContent(28,200);
   hM->SetBinContent(29,166);
   hM->SetBinContent(30,163);
   hM->SetBinContent(31,185);
   hM->SetBinContent(32,191);
   hM->SetBinContent(33,204);
   hM->SetBinContent(34,186);
   hM->SetBinContent(35,195);
   hM->SetBinContent(36,289);
   hM->SetBinContent(37,5701);
   hM->SetBinContent(38,384);
   hM->SetBinContent(39,222);
   hM->SetBinContent(40,216);
   hM->SetBinContent(41,198);
   hM->SetBinContent(42,237);
   hM->SetBinContent(43,219);
   hM->SetBinContent(44,218);
   hM->SetBinContent(45,243);
   hM->SetBinContent(46,248);
   hM->SetBinContent(47,248);
   hM->SetBinContent(48,239);
   hM->SetBinContent(49,259);
   hM->SetBinContent(50,249);
   hM->SetBinContent(51,273);
   hM->SetBinContent(52,255);
   hM->SetBinContent(53,276);
   hM->SetBinContent(54,254);
   hM->SetBinContent(55,292);
   hM->SetBinContent(56,255);
   hM->SetBinContent(57,268);
   hM->SetBinContent(58,271);
   hM->SetBinContent(59,269);
   hM->SetBinContent(60,287);
   hM->SetBinContent(61,303);
   hM->SetBinContent(62,294);
   hM->SetBinContent(63,268);
   hM->SetBinContent(64,300);
   hM->SetBinContent(65,310);
   hM->SetBinContent(66,337);
   hM->SetBinContent(67,336);
   hM->SetBinContent(68,333);
   hM->SetBinContent(69,322);
   hM->SetBinContent(70,338);
   hM->SetBinContent(71,375);
   hM->SetBinContent(72,360);
   hM->SetBinContent(73,371);
   hM->SetBinContent(74,387);
   hM->SetBinContent(75,399);
   hM->SetBinContent(76,53828);
   hM->SetEntries(114143);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 114143 ");
   text = ptstats->AddText("Mean  = 0.5627");
   text = ptstats->AddText("RMS   = 0.04967");
   text = ptstats->AddText("#chi^{2} / ndf =  5455 / 69");
   text = ptstats->AddText("p0       = 281.8 #pm 174.3 ");
   text = ptstats->AddText("p1       = -1378 #pm 648.5 ");
   text = ptstats->AddText("p2       =  2310 #pm 597.8 ");
   text = ptstats->AddText("p3       = -19.84 #pm 6.45 ");
   text = ptstats->AddText("p4       = 0.4962 #pm 0.0035 ");
   text = ptstats->AddText("p5       = 0.008552 #pm 0.002528 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.45,0.65);
   fsig->SetNpx(500);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(5455.155);
   fsig->SetNDF(69);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,281.8077);
   fsig->SetParError(0,174.2665);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,-1378.204);
   fsig->SetParError(1,648.5182);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,2309.57);
   fsig->SetParError(2,597.7628);
   fsig->SetParLimits(2,0,0);
   fsig->SetParameter(3,-19.83577);
   fsig->SetParError(3,6.451508);
   fsig->SetParLimits(3,0,0);
   fsig->SetParameter(4,0.4962315);
   fsig->SetParError(4,0.003490555);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.008551837);
   fsig->SetParError(5,0.002528409);
   fsig->SetParLimits(5,0,0);
   hM->GetListOfFunctions()->Add(fsig);

   ci = TColor::GetColor("#0000ff");
   hM->SetMarkerColor(ci);
   hM->SetMarkerStyle(24);
   hM->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM->GetXaxis()->SetLabelFont(42);
   hM->GetXaxis()->SetLabelSize(0.035);
   hM->GetXaxis()->SetTitleSize(0.035);
   hM->GetXaxis()->SetTitleFont(42);
   hM->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM->GetYaxis()->SetLabelFont(42);
   hM->GetYaxis()->SetLabelSize(0.035);
   hM->GetYaxis()->SetTitleSize(0.035);
   hM->GetYaxis()->SetTitleFont(42);
   hM->GetZaxis()->SetLabelFont(42);
   hM->GetZaxis()->SetLabelSize(0.035);
   hM->GetZaxis()->SetTitleSize(0.035);
   hM->GetZaxis()->SetTitleFont(42);
   hM->Draw("e");
   
   TF1 *fmb = new TF1("fmb","pol2",0.54,0.56);
   fmb->SetFillColor(19);
   fmb->SetFillStyle(0);

   ci = TColor::GetColor("#00ff00");
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
   fmb->SetParameter(0,281.8077);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,-1378.204);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,2309.57);
   fmb->SetParError(2,0);
   fmb->SetParLimits(2,0,0);
   fmb->Draw("same");
   
   TF1 *fpeak = new TF1("fpeak","gaus",0.54,0.56);
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
   fpeak->SetParameter(0,-19.83577);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.4962315);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.008551837);
   fpeak->SetParError(2,0);
   fpeak->SetParLimits(2,0,0);
   fpeak->Draw("same");
   
   TPaveText *pt = new TPaveText(0.01,0.9404546,0.4696985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   text = pt->AddText("Mass, bin (q2,nu,z) = (0,0,1)");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
