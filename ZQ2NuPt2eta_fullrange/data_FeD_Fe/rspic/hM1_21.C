{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 18 12:15:58 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.1901558,38.05444,0.8890623,266.3604);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin21 = new TH1F("hM_bin21","M_{#gamma #gamma}",100,0.2600464,0.8191716);
   hM_bin21->SetBinContent(0,5727);
   hM_bin21->SetBinContent(1,78);
   hM_bin21->SetBinContent(2,90);
   hM_bin21->SetBinContent(3,89);
   hM_bin21->SetBinContent(4,97);
   hM_bin21->SetBinContent(5,98);
   hM_bin21->SetBinContent(6,87);
   hM_bin21->SetBinContent(7,98);
   hM_bin21->SetBinContent(8,106);
   hM_bin21->SetBinContent(9,115);
   hM_bin21->SetBinContent(10,113);
   hM_bin21->SetBinContent(11,109);
   hM_bin21->SetBinContent(12,113);
   hM_bin21->SetBinContent(13,131);
   hM_bin21->SetBinContent(14,118);
   hM_bin21->SetBinContent(15,124);
   hM_bin21->SetBinContent(16,135);
   hM_bin21->SetBinContent(17,127);
   hM_bin21->SetBinContent(18,128);
   hM_bin21->SetBinContent(19,125);
   hM_bin21->SetBinContent(20,141);
   hM_bin21->SetBinContent(21,159);
   hM_bin21->SetBinContent(22,140);
   hM_bin21->SetBinContent(23,133);
   hM_bin21->SetBinContent(24,148);
   hM_bin21->SetBinContent(25,172);
   hM_bin21->SetBinContent(26,128);
   hM_bin21->SetBinContent(27,128);
   hM_bin21->SetBinContent(28,143);
   hM_bin21->SetBinContent(29,177);
   hM_bin21->SetBinContent(30,165);
   hM_bin21->SetBinContent(31,154);
   hM_bin21->SetBinContent(32,162);
   hM_bin21->SetBinContent(33,153);
   hM_bin21->SetBinContent(34,164);
   hM_bin21->SetBinContent(35,177);
   hM_bin21->SetBinContent(36,143);
   hM_bin21->SetBinContent(37,165);
   hM_bin21->SetBinContent(38,146);
   hM_bin21->SetBinContent(39,167);
   hM_bin21->SetBinContent(40,189);
   hM_bin21->SetBinContent(41,174);
   hM_bin21->SetBinContent(42,176);
   hM_bin21->SetBinContent(43,185);
   hM_bin21->SetBinContent(44,180);
   hM_bin21->SetBinContent(45,187);
   hM_bin21->SetBinContent(46,218);
   hM_bin21->SetBinContent(47,184);
   hM_bin21->SetBinContent(48,194);
   hM_bin21->SetBinContent(49,200);
   hM_bin21->SetBinContent(50,183);
   hM_bin21->SetBinContent(51,220);
   hM_bin21->SetBinContent(52,188);
   hM_bin21->SetBinContent(53,178);
   hM_bin21->SetBinContent(54,179);
   hM_bin21->SetBinContent(55,190);
   hM_bin21->SetBinContent(56,183);
   hM_bin21->SetBinContent(57,164);
   hM_bin21->SetBinContent(58,201);
   hM_bin21->SetBinContent(59,171);
   hM_bin21->SetBinContent(60,185);
   hM_bin21->SetBinContent(61,176);
   hM_bin21->SetBinContent(62,192);
   hM_bin21->SetBinContent(63,140);
   hM_bin21->SetBinContent(64,158);
   hM_bin21->SetBinContent(65,194);
   hM_bin21->SetBinContent(66,163);
   hM_bin21->SetBinContent(67,142);
   hM_bin21->SetBinContent(68,155);
   hM_bin21->SetBinContent(69,165);
   hM_bin21->SetBinContent(70,150);
   hM_bin21->SetBinContent(71,146);
   hM_bin21->SetBinContent(72,138);
   hM_bin21->SetBinContent(73,154);
   hM_bin21->SetBinContent(74,159);
   hM_bin21->SetBinContent(75,183);
   hM_bin21->SetBinContent(76,160);
   hM_bin21->SetBinContent(77,141);
   hM_bin21->SetBinContent(78,146);
   hM_bin21->SetBinContent(79,161);
   hM_bin21->SetBinContent(80,127);
   hM_bin21->SetBinContent(81,140);
   hM_bin21->SetBinContent(82,125);
   hM_bin21->SetBinContent(83,139);
   hM_bin21->SetBinContent(84,126);
   hM_bin21->SetBinContent(85,137);
   hM_bin21->SetBinContent(86,135);
   hM_bin21->SetBinContent(87,138);
   hM_bin21->SetBinContent(88,128);
   hM_bin21->SetBinContent(89,115);
   hM_bin21->SetBinContent(90,115);
   hM_bin21->SetBinContent(91,104);
   hM_bin21->SetBinContent(92,100);
   hM_bin21->SetBinContent(93,122);
   hM_bin21->SetBinContent(94,121);
   hM_bin21->SetBinContent(95,107);
   hM_bin21->SetBinContent(96,116);
   hM_bin21->SetBinContent(97,102);
   hM_bin21->SetBinContent(98,100);
   hM_bin21->SetBinContent(99,101);
   hM_bin21->SetBinContent(100,96);
   hM_bin21->SetBinContent(101,2862);
   hM_bin21->SetEntries(23181);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.3921862,0.6794863);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(63.53031);
   fsig->SetNDF(45);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,137.0383);
   fsig->SetParError(0,15.44788);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,25.55606);
   fsig->SetParError(1,27.30298);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-9.230197e-05);
   fsig->SetParError(2,1277.611);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,43.57754);
   fsig->SetParError(3,5.418619);
   fsig->SetParLimits(3,0,440);
   fsig->SetParameter(4,0.5339898);
   fsig->SetParError(4,0.006679044);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.04804907);
   fsig->SetParError(5,0.020435);
   fsig->SetParLimits(5,0.04788336,0.07182504);
   hM_bin21->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin21");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 23181  ");
   text = ptstats->AddText("Mean  = 0.5422");
   text = ptstats->AddText("RMS   = 0.1463");
   text = ptstats->AddText("#chi^{2} / ndf = 63.53 / 45");
   text = ptstats->AddText("p0       =   137 #pm 15.4 ");
   text = ptstats->AddText("p1       = 25.56 #pm 27.30 ");
   text = ptstats->AddText("p2       = -9.23e-05 #pm 1.28e+03 ");
   text = ptstats->AddText("p3       = 43.58 #pm 5.42 ");
   text = ptstats->AddText("p4       = 0.534 #pm 0.007 ");
   text = ptstats->AddText("p5       = 0.04805 #pm 0.02044 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin21->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin21);

   ci = TColor::GetColor("#0000ff");
   hM_bin21->SetMarkerColor(ci);
   hM_bin21->SetMarkerStyle(24);
   hM_bin21->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin21->GetXaxis()->SetLabelFont(42);
   hM_bin21->GetXaxis()->SetLabelSize(0.035);
   hM_bin21->GetXaxis()->SetTitleSize(0.035);
   hM_bin21->GetXaxis()->SetTitleFont(42);
   hM_bin21->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin21->GetYaxis()->SetLabelFont(42);
   hM_bin21->GetYaxis()->SetLabelSize(0.035);
   hM_bin21->GetYaxis()->SetTitleSize(0.035);
   hM_bin21->GetYaxis()->SetTitleFont(42);
   hM_bin21->GetZaxis()->SetLabelFont(42);
   hM_bin21->GetZaxis()->SetLabelSize(0.035);
   hM_bin21->GetZaxis()->SetTitleSize(0.035);
   hM_bin21->GetZaxis()->SetTitleFont(42);
   hM_bin21->Draw("e");
   
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
   fmb->SetParameter(0,137.0383);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,25.55606);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-9.230197e-05);
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
   fpeak->SetParameter(0,43.57754);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.5339898);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.04804907);
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
