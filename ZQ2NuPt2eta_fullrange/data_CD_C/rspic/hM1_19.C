{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 18 12:09:16 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.1901558,-42.32344,0.8890623,380.9109);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin19 = new TH1F("hM_bin19","M_{#gamma #gamma}",100,0.2600464,0.8191716);
   hM_bin19->SetBinContent(0,13885);
   hM_bin19->SetBinContent(1,259);
   hM_bin19->SetBinContent(2,267);
   hM_bin19->SetBinContent(3,281);
   hM_bin19->SetBinContent(4,269);
   hM_bin19->SetBinContent(5,282);
   hM_bin19->SetBinContent(6,271);
   hM_bin19->SetBinContent(7,279);
   hM_bin19->SetBinContent(8,305);
   hM_bin19->SetBinContent(9,265);
   hM_bin19->SetBinContent(10,280);
   hM_bin19->SetBinContent(11,253);
   hM_bin19->SetBinContent(12,305);
   hM_bin19->SetBinContent(13,296);
   hM_bin19->SetBinContent(14,272);
   hM_bin19->SetBinContent(15,295);
   hM_bin19->SetBinContent(16,250);
   hM_bin19->SetBinContent(17,273);
   hM_bin19->SetBinContent(18,264);
   hM_bin19->SetBinContent(19,276);
   hM_bin19->SetBinContent(20,264);
   hM_bin19->SetBinContent(21,293);
   hM_bin19->SetBinContent(22,289);
   hM_bin19->SetBinContent(23,264);
   hM_bin19->SetBinContent(24,291);
   hM_bin19->SetBinContent(25,273);
   hM_bin19->SetBinContent(26,276);
   hM_bin19->SetBinContent(27,275);
   hM_bin19->SetBinContent(28,287);
   hM_bin19->SetBinContent(29,268);
   hM_bin19->SetBinContent(30,275);
   hM_bin19->SetBinContent(31,258);
   hM_bin19->SetBinContent(32,282);
   hM_bin19->SetBinContent(33,266);
   hM_bin19->SetBinContent(34,279);
   hM_bin19->SetBinContent(35,229);
   hM_bin19->SetBinContent(36,254);
   hM_bin19->SetBinContent(37,260);
   hM_bin19->SetBinContent(38,286);
   hM_bin19->SetBinContent(39,260);
   hM_bin19->SetBinContent(40,271);
   hM_bin19->SetBinContent(41,277);
   hM_bin19->SetBinContent(42,295);
   hM_bin19->SetBinContent(43,249);
   hM_bin19->SetBinContent(44,234);
   hM_bin19->SetBinContent(45,260);
   hM_bin19->SetBinContent(46,234);
   hM_bin19->SetBinContent(47,246);
   hM_bin19->SetBinContent(48,209);
   hM_bin19->SetBinContent(49,242);
   hM_bin19->SetBinContent(50,220);
   hM_bin19->SetBinContent(51,214);
   hM_bin19->SetBinContent(52,193);
   hM_bin19->SetBinContent(53,202);
   hM_bin19->SetBinContent(54,200);
   hM_bin19->SetBinContent(55,187);
   hM_bin19->SetBinContent(56,176);
   hM_bin19->SetBinContent(57,185);
   hM_bin19->SetBinContent(58,166);
   hM_bin19->SetBinContent(59,151);
   hM_bin19->SetBinContent(60,149);
   hM_bin19->SetBinContent(61,154);
   hM_bin19->SetBinContent(62,166);
   hM_bin19->SetBinContent(63,130);
   hM_bin19->SetBinContent(64,140);
   hM_bin19->SetBinContent(65,137);
   hM_bin19->SetBinContent(66,113);
   hM_bin19->SetBinContent(67,99);
   hM_bin19->SetBinContent(68,121);
   hM_bin19->SetBinContent(69,110);
   hM_bin19->SetBinContent(70,99);
   hM_bin19->SetBinContent(71,76);
   hM_bin19->SetBinContent(72,103);
   hM_bin19->SetBinContent(73,91);
   hM_bin19->SetBinContent(74,86);
   hM_bin19->SetBinContent(75,71);
   hM_bin19->SetBinContent(76,83);
   hM_bin19->SetBinContent(77,77);
   hM_bin19->SetBinContent(78,66);
   hM_bin19->SetBinContent(79,70);
   hM_bin19->SetBinContent(80,62);
   hM_bin19->SetBinContent(81,59);
   hM_bin19->SetBinContent(82,37);
   hM_bin19->SetBinContent(83,44);
   hM_bin19->SetBinContent(84,57);
   hM_bin19->SetBinContent(85,40);
   hM_bin19->SetBinContent(86,38);
   hM_bin19->SetBinContent(87,48);
   hM_bin19->SetBinContent(88,33);
   hM_bin19->SetBinContent(89,26);
   hM_bin19->SetBinContent(90,37);
   hM_bin19->SetBinContent(91,33);
   hM_bin19->SetBinContent(92,34);
   hM_bin19->SetBinContent(93,26);
   hM_bin19->SetBinContent(94,25);
   hM_bin19->SetBinContent(95,26);
   hM_bin19->SetBinContent(96,25);
   hM_bin19->SetBinContent(97,22);
   hM_bin19->SetBinContent(98,24);
   hM_bin19->SetBinContent(99,18);
   hM_bin19->SetBinContent(100,18);
   hM_bin19->SetBinContent(101,560);
   hM_bin19->SetEntries(32400);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.3288319,0.6692695);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(53.41765);
   fsig->SetNDF(55);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,370.8858);
   fsig->SetParError(0,130.3974);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,-136.0205);
   fsig->SetParError(1,567.922);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-448.796);
   fsig->SetParError(2,557.4143);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,61.71967);
   fsig->SetParError(3,15.84117);
   fsig->SetParLimits(3,0,610);
   fsig->SetParameter(4,0.4920666);
   fsig->SetParError(4,0.008394788);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.07182504);
   fsig->SetParError(5,0.01619004);
   fsig->SetParLimits(5,0.04788336,0.07182504);
   hM_bin19->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin19");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 32400  ");
   text = ptstats->AddText("Mean  = 0.4553");
   text = ptstats->AddText("RMS   = 0.1267");
   text = ptstats->AddText("#chi^{2} / ndf = 53.42 / 55");
   text = ptstats->AddText("p0       = 370.9 #pm 130.4 ");
   text = ptstats->AddText("p1       =  -136 #pm 567.9 ");
   text = ptstats->AddText("p2       = -448.8 #pm 557.4 ");
   text = ptstats->AddText("p3       = 61.72 #pm 15.84 ");
   text = ptstats->AddText("p4       = 0.4921 #pm 0.0084 ");
   text = ptstats->AddText("p5       = 0.07183 #pm 0.01619 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin19->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin19);

   ci = TColor::GetColor("#0000ff");
   hM_bin19->SetMarkerColor(ci);
   hM_bin19->SetMarkerStyle(24);
   hM_bin19->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin19->GetXaxis()->SetLabelFont(42);
   hM_bin19->GetXaxis()->SetLabelSize(0.035);
   hM_bin19->GetXaxis()->SetTitleSize(0.035);
   hM_bin19->GetXaxis()->SetTitleFont(42);
   hM_bin19->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin19->GetYaxis()->SetLabelFont(42);
   hM_bin19->GetYaxis()->SetLabelSize(0.035);
   hM_bin19->GetYaxis()->SetTitleSize(0.035);
   hM_bin19->GetYaxis()->SetTitleFont(42);
   hM_bin19->GetZaxis()->SetLabelFont(42);
   hM_bin19->GetZaxis()->SetLabelSize(0.035);
   hM_bin19->GetZaxis()->SetTitleSize(0.035);
   hM_bin19->GetZaxis()->SetTitleFont(42);
   hM_bin19->Draw("e");
   
   TF1 *fmb = new TF1("fmb","pol2",0.3600464,0.7191716);
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
   fmb->SetParameter(0,370.8858);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,-136.0205);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-448.796);
   fmb->SetParError(2,0);
   fmb->SetParLimits(2,0,0);
   fmb->Draw("same");
   
   TF1 *fpeak = new TF1("fpeak","gaus",0.3600464,0.7191716);
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
   fpeak->SetParameter(0,61.71967);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.4920666);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.07182504);
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
