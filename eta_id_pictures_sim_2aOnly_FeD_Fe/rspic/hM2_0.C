{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Dec 20 13:45:36 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.425,-6.395626,0.675,84.56063);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM = new TH1F("hM","Mass bin (pt2,nu,z) = (0,0,0)",75,0.45,0.65);
   hM->SetBinContent(0,10238);
   hM->SetBinContent(1,42);
   hM->SetBinContent(2,64);
   hM->SetBinContent(3,40);
   hM->SetBinContent(4,58);
   hM->SetBinContent(5,47);
   hM->SetBinContent(6,41);
   hM->SetBinContent(7,50);
   hM->SetBinContent(8,52);
   hM->SetBinContent(9,44);
   hM->SetBinContent(10,48);
   hM->SetBinContent(11,41);
   hM->SetBinContent(12,47);
   hM->SetBinContent(13,40);
   hM->SetBinContent(14,38);
   hM->SetBinContent(15,48);
   hM->SetBinContent(16,52);
   hM->SetBinContent(17,50);
   hM->SetBinContent(18,50);
   hM->SetBinContent(19,40);
   hM->SetBinContent(20,43);
   hM->SetBinContent(21,36);
   hM->SetBinContent(22,38);
   hM->SetBinContent(23,38);
   hM->SetBinContent(24,38);
   hM->SetBinContent(25,37);
   hM->SetBinContent(26,57);
   hM->SetBinContent(27,38);
   hM->SetBinContent(28,49);
   hM->SetBinContent(29,32);
   hM->SetBinContent(30,31);
   hM->SetBinContent(31,44);
   hM->SetBinContent(32,38);
   hM->SetBinContent(33,36);
   hM->SetBinContent(34,43);
   hM->SetBinContent(35,40);
   hM->SetBinContent(36,31);
   hM->SetBinContent(37,42);
   hM->SetBinContent(38,28);
   hM->SetBinContent(39,27);
   hM->SetBinContent(40,28);
   hM->SetBinContent(41,36);
   hM->SetBinContent(42,31);
   hM->SetBinContent(43,32);
   hM->SetBinContent(44,29);
   hM->SetBinContent(45,20);
   hM->SetBinContent(46,29);
   hM->SetBinContent(47,43);
   hM->SetBinContent(48,29);
   hM->SetBinContent(49,30);
   hM->SetBinContent(50,24);
   hM->SetBinContent(51,25);
   hM->SetBinContent(52,25);
   hM->SetBinContent(53,11);
   hM->SetBinContent(54,23);
   hM->SetBinContent(55,27);
   hM->SetBinContent(56,20);
   hM->SetBinContent(57,19);
   hM->SetBinContent(58,24);
   hM->SetBinContent(59,26);
   hM->SetBinContent(60,20);
   hM->SetBinContent(61,27);
   hM->SetBinContent(62,18);
   hM->SetBinContent(63,18);
   hM->SetBinContent(64,27);
   hM->SetBinContent(65,20);
   hM->SetBinContent(66,22);
   hM->SetBinContent(67,25);
   hM->SetBinContent(68,28);
   hM->SetBinContent(69,24);
   hM->SetBinContent(70,21);
   hM->SetBinContent(71,17);
   hM->SetBinContent(72,21);
   hM->SetBinContent(73,17);
   hM->SetBinContent(74,23);
   hM->SetBinContent(75,9);
   hM->SetBinContent(76,837);
   hM->SetEntries(13601);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 13601  ");
   text = ptstats->AddText("Mean  = 0.5327");
   text = ptstats->AddText("RMS   = 0.05523");
   text = ptstats->AddText("#chi^{2} / ndf = 88.46 / 69");
   text = ptstats->AddText("p0       = 129.4 #pm 6.7 ");
   text = ptstats->AddText("p1       =  -176 #pm 13.6 ");
   text = ptstats->AddText("p2       = -0.3459 #pm 39.5851 ");
   text = ptstats->AddText("p3       = -2.575e+04 #pm 1.437e+03 ");
   text = ptstats->AddText("p4       = -4.402 #pm 0.028 ");
   text = ptstats->AddText("p5       = 0.05209 #pm 0.00671 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.45,0.65);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(88.45915);
   fsig->SetNDF(69);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,129.4149);
   fsig->SetParError(0,6.656793);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,-176.0101);
   fsig->SetParError(1,13.60816);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.3458938);
   fsig->SetParError(2,39.58514);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,-25752.57);
   fsig->SetParError(3,1436.975);
   fsig->SetParLimits(3,0,0);
   fsig->SetParameter(4,-4.401742);
   fsig->SetParError(4,0.02750027);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.05209355);
   fsig->SetParError(5,0.006711838);
   fsig->SetParLimits(5,0.04788336,0.07182504);
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
   
   TF1 *fmb = new TF1("fmb","pol2",0.45,0.65);
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
   fmb->SetParameter(0,129.4149);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,-176.0101);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.3458938);
   fmb->SetParError(2,0);
   fmb->SetParLimits(2,0,0);
   fmb->Draw("same");
   
   TF1 *fpeak = new TF1("fpeak","gaus",0.45,0.65);
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
   fpeak->SetParameter(0,-25752.57);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,-4.401742);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.05209355);
   fpeak->SetParError(2,0);
   fpeak->SetParLimits(2,0,0);
   fpeak->Draw("same");
   
   TPaveText *pt = new TPaveText(0.01,0.9404546,0.4709548,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   text = pt->AddText("Mass bin (pt2,nu,z) = (0,0,0)");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
