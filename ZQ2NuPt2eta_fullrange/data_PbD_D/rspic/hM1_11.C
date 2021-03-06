{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 18 12:05:25 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.1901558,-31.71971,0.8890623,295.52);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin11 = new TH1F("hM_bin11","M_{#gamma #gamma}",100,0.2600464,0.8191716);
   hM_bin11->SetBinContent(0,3267);
   hM_bin11->SetBinContent(1,19);
   hM_bin11->SetBinContent(2,22);
   hM_bin11->SetBinContent(3,17);
   hM_bin11->SetBinContent(4,20);
   hM_bin11->SetBinContent(5,34);
   hM_bin11->SetBinContent(6,27);
   hM_bin11->SetBinContent(7,38);
   hM_bin11->SetBinContent(8,22);
   hM_bin11->SetBinContent(9,29);
   hM_bin11->SetBinContent(10,30);
   hM_bin11->SetBinContent(11,31);
   hM_bin11->SetBinContent(12,46);
   hM_bin11->SetBinContent(13,37);
   hM_bin11->SetBinContent(14,40);
   hM_bin11->SetBinContent(15,46);
   hM_bin11->SetBinContent(16,44);
   hM_bin11->SetBinContent(17,41);
   hM_bin11->SetBinContent(18,57);
   hM_bin11->SetBinContent(19,59);
   hM_bin11->SetBinContent(20,57);
   hM_bin11->SetBinContent(21,57);
   hM_bin11->SetBinContent(22,65);
   hM_bin11->SetBinContent(23,54);
   hM_bin11->SetBinContent(24,60);
   hM_bin11->SetBinContent(25,67);
   hM_bin11->SetBinContent(26,63);
   hM_bin11->SetBinContent(27,74);
   hM_bin11->SetBinContent(28,68);
   hM_bin11->SetBinContent(29,64);
   hM_bin11->SetBinContent(30,66);
   hM_bin11->SetBinContent(31,73);
   hM_bin11->SetBinContent(32,84);
   hM_bin11->SetBinContent(33,69);
   hM_bin11->SetBinContent(34,76);
   hM_bin11->SetBinContent(35,87);
   hM_bin11->SetBinContent(36,70);
   hM_bin11->SetBinContent(37,85);
   hM_bin11->SetBinContent(38,90);
   hM_bin11->SetBinContent(39,95);
   hM_bin11->SetBinContent(40,90);
   hM_bin11->SetBinContent(41,81);
   hM_bin11->SetBinContent(42,109);
   hM_bin11->SetBinContent(43,107);
   hM_bin11->SetBinContent(44,103);
   hM_bin11->SetBinContent(45,120);
   hM_bin11->SetBinContent(46,110);
   hM_bin11->SetBinContent(47,116);
   hM_bin11->SetBinContent(48,138);
   hM_bin11->SetBinContent(49,144);
   hM_bin11->SetBinContent(50,142);
   hM_bin11->SetBinContent(51,141);
   hM_bin11->SetBinContent(52,144);
   hM_bin11->SetBinContent(53,137);
   hM_bin11->SetBinContent(54,147);
   hM_bin11->SetBinContent(55,169);
   hM_bin11->SetBinContent(56,162);
   hM_bin11->SetBinContent(57,135);
   hM_bin11->SetBinContent(58,152);
   hM_bin11->SetBinContent(59,164);
   hM_bin11->SetBinContent(60,151);
   hM_bin11->SetBinContent(61,149);
   hM_bin11->SetBinContent(62,170);
   hM_bin11->SetBinContent(63,157);
   hM_bin11->SetBinContent(64,162);
   hM_bin11->SetBinContent(65,140);
   hM_bin11->SetBinContent(66,150);
   hM_bin11->SetBinContent(67,159);
   hM_bin11->SetBinContent(68,144);
   hM_bin11->SetBinContent(69,184);
   hM_bin11->SetBinContent(70,140);
   hM_bin11->SetBinContent(71,165);
   hM_bin11->SetBinContent(72,155);
   hM_bin11->SetBinContent(73,156);
   hM_bin11->SetBinContent(74,167);
   hM_bin11->SetBinContent(75,144);
   hM_bin11->SetBinContent(76,173);
   hM_bin11->SetBinContent(77,177);
   hM_bin11->SetBinContent(78,172);
   hM_bin11->SetBinContent(79,204);
   hM_bin11->SetBinContent(80,173);
   hM_bin11->SetBinContent(81,178);
   hM_bin11->SetBinContent(82,211);
   hM_bin11->SetBinContent(83,159);
   hM_bin11->SetBinContent(84,165);
   hM_bin11->SetBinContent(85,163);
   hM_bin11->SetBinContent(86,184);
   hM_bin11->SetBinContent(87,197);
   hM_bin11->SetBinContent(88,195);
   hM_bin11->SetBinContent(89,171);
   hM_bin11->SetBinContent(90,164);
   hM_bin11->SetBinContent(91,235);
   hM_bin11->SetBinContent(92,188);
   hM_bin11->SetBinContent(93,181);
   hM_bin11->SetBinContent(94,186);
   hM_bin11->SetBinContent(95,218);
   hM_bin11->SetBinContent(96,219);
   hM_bin11->SetBinContent(97,212);
   hM_bin11->SetBinContent(98,192);
   hM_bin11->SetBinContent(99,190);
   hM_bin11->SetBinContent(100,183);
   hM_bin11->SetBinContent(101,28639);
   hM_bin11->SetEntries(43783);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.4236087,0.7109088);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(40.88543);
   fsig->SetNDF(46);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-100.1017);
   fsig->SetParError(0,11.88877);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,389.1523);
   fsig->SetParError(1,21.65928);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-2.368324e-09);
   fsig->SetParError(2,160.0892);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,30.60042);
   fsig->SetParError(3,4.625442);
   fsig->SetParLimits(3,0,470);
   fsig->SetParameter(4,0.5612408);
   fsig->SetParError(4,0.007525754);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.04788336);
   fsig->SetParError(5,0.002860092);
   fsig->SetParLimits(5,0.04788336,0.07182504);
   hM_bin11->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin11");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 43783  ");
   text = ptstats->AddText("Mean  = 0.6174");
   text = ptstats->AddText("RMS   = 0.1371");
   text = ptstats->AddText("#chi^{2} / ndf = 40.89 / 46");
   text = ptstats->AddText("p0       = -100.1 #pm 11.9 ");
   text = ptstats->AddText("p1       = 389.2 #pm 21.7 ");
   text = ptstats->AddText("p2       = -2.368e-09 #pm 1.601e+02 ");
   text = ptstats->AddText("p3       =  30.6 #pm 4.6 ");
   text = ptstats->AddText("p4       = 0.5612 #pm 0.0075 ");
   text = ptstats->AddText("p5       = 0.04788 #pm 0.00286 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin11->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin11);

   ci = TColor::GetColor("#0000ff");
   hM_bin11->SetMarkerColor(ci);
   hM_bin11->SetMarkerStyle(24);
   hM_bin11->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin11->GetXaxis()->SetLabelFont(42);
   hM_bin11->GetXaxis()->SetLabelSize(0.035);
   hM_bin11->GetXaxis()->SetTitleSize(0.035);
   hM_bin11->GetXaxis()->SetTitleFont(42);
   hM_bin11->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin11->GetYaxis()->SetLabelFont(42);
   hM_bin11->GetYaxis()->SetLabelSize(0.035);
   hM_bin11->GetYaxis()->SetTitleSize(0.035);
   hM_bin11->GetYaxis()->SetTitleFont(42);
   hM_bin11->GetZaxis()->SetLabelFont(42);
   hM_bin11->GetZaxis()->SetLabelSize(0.035);
   hM_bin11->GetZaxis()->SetTitleSize(0.035);
   hM_bin11->GetZaxis()->SetTitleFont(42);
   hM_bin11->Draw("e");
   
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
   fmb->SetParameter(0,-100.1017);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,389.1523);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-2.368324e-09);
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
   fpeak->SetParameter(0,30.60042);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.5612408);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.04788336);
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
