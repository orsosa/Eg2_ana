{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:30:41 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-133.9339,0.350906,1205.405);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin33 = new TH1F("hM_bin33","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin33->SetBinContent(13,2);
   hM_bin33->SetBinContent(14,14);
   hM_bin33->SetBinContent(15,41);
   hM_bin33->SetBinContent(16,33);
   hM_bin33->SetBinContent(17,54);
   hM_bin33->SetBinContent(18,78);
   hM_bin33->SetBinContent(19,97);
   hM_bin33->SetBinContent(20,108);
   hM_bin33->SetBinContent(21,117);
   hM_bin33->SetBinContent(22,141);
   hM_bin33->SetBinContent(23,130);
   hM_bin33->SetBinContent(24,138);
   hM_bin33->SetBinContent(25,125);
   hM_bin33->SetBinContent(26,148);
   hM_bin33->SetBinContent(27,152);
   hM_bin33->SetBinContent(28,140);
   hM_bin33->SetBinContent(29,197);
   hM_bin33->SetBinContent(30,183);
   hM_bin33->SetBinContent(31,174);
   hM_bin33->SetBinContent(32,179);
   hM_bin33->SetBinContent(33,174);
   hM_bin33->SetBinContent(34,190);
   hM_bin33->SetBinContent(35,174);
   hM_bin33->SetBinContent(36,201);
   hM_bin33->SetBinContent(37,204);
   hM_bin33->SetBinContent(38,268);
   hM_bin33->SetBinContent(39,268);
   hM_bin33->SetBinContent(40,275);
   hM_bin33->SetBinContent(41,342);
   hM_bin33->SetBinContent(42,429);
   hM_bin33->SetBinContent(43,399);
   hM_bin33->SetBinContent(44,526);
   hM_bin33->SetBinContent(45,564);
   hM_bin33->SetBinContent(46,647);
   hM_bin33->SetBinContent(47,719);
   hM_bin33->SetBinContent(48,835);
   hM_bin33->SetBinContent(49,914);
   hM_bin33->SetBinContent(50,959);
   hM_bin33->SetBinContent(51,989);
   hM_bin33->SetBinContent(52,977);
   hM_bin33->SetBinContent(53,944);
   hM_bin33->SetBinContent(54,904);
   hM_bin33->SetBinContent(55,718);
   hM_bin33->SetBinContent(56,668);
   hM_bin33->SetBinContent(57,616);
   hM_bin33->SetBinContent(58,561);
   hM_bin33->SetBinContent(59,477);
   hM_bin33->SetBinContent(60,429);
   hM_bin33->SetBinContent(61,343);
   hM_bin33->SetBinContent(62,358);
   hM_bin33->SetBinContent(63,326);
   hM_bin33->SetBinContent(64,279);
   hM_bin33->SetBinContent(65,252);
   hM_bin33->SetBinContent(66,237);
   hM_bin33->SetBinContent(67,263);
   hM_bin33->SetBinContent(68,200);
   hM_bin33->SetBinContent(69,192);
   hM_bin33->SetBinContent(70,220);
   hM_bin33->SetBinContent(71,183);
   hM_bin33->SetBinContent(72,198);
   hM_bin33->SetBinContent(73,165);
   hM_bin33->SetBinContent(74,194);
   hM_bin33->SetBinContent(75,180);
   hM_bin33->SetBinContent(76,171);
   hM_bin33->SetBinContent(77,218);
   hM_bin33->SetBinContent(78,166);
   hM_bin33->SetBinContent(79,176);
   hM_bin33->SetBinContent(80,158);
   hM_bin33->SetBinContent(81,154);
   hM_bin33->SetBinContent(82,169);
   hM_bin33->SetBinContent(83,163);
   hM_bin33->SetBinContent(84,172);
   hM_bin33->SetBinContent(85,186);
   hM_bin33->SetBinContent(86,136);
   hM_bin33->SetBinContent(87,118);
   hM_bin33->SetBinContent(88,128);
   hM_bin33->SetBinContent(89,161);
   hM_bin33->SetBinContent(90,156);
   hM_bin33->SetBinContent(91,144);
   hM_bin33->SetBinContent(92,154);
   hM_bin33->SetBinContent(93,138);
   hM_bin33->SetBinContent(94,138);
   hM_bin33->SetBinContent(95,147);
   hM_bin33->SetBinContent(96,148);
   hM_bin33->SetBinContent(97,138);
   hM_bin33->SetBinContent(98,143);
   hM_bin33->SetBinContent(99,130);
   hM_bin33->SetBinContent(100,111);
   hM_bin33->SetBinContent(101,7874);
   hM_bin33->SetEntries(32909);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07966659,0.195941);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(63.67689);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,147.3108);
   fsig->SetParError(0,14.47249);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,383.1308);
   fsig->SetParError(1,100.1173);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.1658542);
   fsig->SetParError(2,54.37619);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,741.3603);
   fsig->SetParError(3,11.51508);
   fsig->SetParLimits(3,0,1978);
   fsig->SetParameter(4,0.1375586);
   fsig->SetParError(4,0.0003256552);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0001682624);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin33->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin33");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 32909  ");
   text = ptstats->AddText("Mean  = 0.1524");
   text = ptstats->AddText("RMS   = 0.06147");
   text = ptstats->AddText("#chi^{2} / ndf = 63.68 / 28");
   text = ptstats->AddText("p0       = 147.3 #pm 14.5 ");
   text = ptstats->AddText("p1       = 383.1 #pm 100.1 ");
   text = ptstats->AddText("p2       = -0.1659 #pm 54.3762 ");
   text = ptstats->AddText("p3       = 741.4 #pm 11.5 ");
   text = ptstats->AddText("p4       = 0.1376 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00017 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin33->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin33);

   ci = TColor::GetColor("#0000ff");
   hM_bin33->SetMarkerColor(ci);
   hM_bin33->SetMarkerStyle(24);
   hM_bin33->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin33->GetXaxis()->SetLabelFont(42);
   hM_bin33->GetXaxis()->SetLabelSize(0.035);
   hM_bin33->GetXaxis()->SetTitleSize(0.035);
   hM_bin33->GetXaxis()->SetTitleFont(42);
   hM_bin33->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin33->GetYaxis()->SetLabelFont(42);
   hM_bin33->GetYaxis()->SetLabelSize(0.035);
   hM_bin33->GetYaxis()->SetTitleSize(0.035);
   hM_bin33->GetYaxis()->SetTitleFont(42);
   hM_bin33->GetZaxis()->SetLabelFont(42);
   hM_bin33->GetZaxis()->SetLabelSize(0.035);
   hM_bin33->GetZaxis()->SetTitleSize(0.035);
   hM_bin33->GetZaxis()->SetTitleFont(42);
   hM_bin33->Draw("e");
   
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
   fmb->SetParameter(0,147.3108);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,383.1308);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.1658542);
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
   fpeak->SetParameter(0,741.3603);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1375586);
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
