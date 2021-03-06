{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Dec 20 13:45:34 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.425,-1.937372,0.675,32.55972);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM = new TH1F("hM","Mass, bin (q2,nu,z) = (1,0,2), tot: 2.574877,partial: 0.241683",75,0.45,0.65);
   hM->SetBinContent(0,4359);
   hM->SetBinContent(1,12);
   hM->SetBinContent(2,16);
   hM->SetBinContent(3,13);
   hM->SetBinContent(4,16);
   hM->SetBinContent(5,18);
   hM->SetBinContent(6,22);
   hM->SetBinContent(7,17);
   hM->SetBinContent(8,8);
   hM->SetBinContent(9,14);
   hM->SetBinContent(10,13);
   hM->SetBinContent(11,12);
   hM->SetBinContent(12,14);
   hM->SetBinContent(13,19);
   hM->SetBinContent(14,23);
   hM->SetBinContent(15,19);
   hM->SetBinContent(16,15);
   hM->SetBinContent(17,13);
   hM->SetBinContent(18,15);
   hM->SetBinContent(19,13);
   hM->SetBinContent(20,18);
   hM->SetBinContent(21,15);
   hM->SetBinContent(22,14);
   hM->SetBinContent(23,14);
   hM->SetBinContent(24,18);
   hM->SetBinContent(25,17);
   hM->SetBinContent(26,21);
   hM->SetBinContent(27,14);
   hM->SetBinContent(28,14);
   hM->SetBinContent(29,10);
   hM->SetBinContent(30,17);
   hM->SetBinContent(31,21);
   hM->SetBinContent(32,19);
   hM->SetBinContent(33,23);
   hM->SetBinContent(34,18);
   hM->SetBinContent(35,19);
   hM->SetBinContent(36,11);
   hM->SetBinContent(37,13);
   hM->SetBinContent(38,11);
   hM->SetBinContent(39,13);
   hM->SetBinContent(40,16);
   hM->SetBinContent(41,19);
   hM->SetBinContent(42,19);
   hM->SetBinContent(43,9);
   hM->SetBinContent(44,9);
   hM->SetBinContent(45,13);
   hM->SetBinContent(46,16);
   hM->SetBinContent(47,14);
   hM->SetBinContent(48,14);
   hM->SetBinContent(49,14);
   hM->SetBinContent(50,8);
   hM->SetBinContent(51,18);
   hM->SetBinContent(52,13);
   hM->SetBinContent(53,17);
   hM->SetBinContent(54,9);
   hM->SetBinContent(55,5);
   hM->SetBinContent(56,7);
   hM->SetBinContent(57,10);
   hM->SetBinContent(58,10);
   hM->SetBinContent(59,11);
   hM->SetBinContent(60,7);
   hM->SetBinContent(61,10);
   hM->SetBinContent(62,13);
   hM->SetBinContent(63,17);
   hM->SetBinContent(64,11);
   hM->SetBinContent(65,9);
   hM->SetBinContent(66,11);
   hM->SetBinContent(67,15);
   hM->SetBinContent(68,11);
   hM->SetBinContent(69,11);
   hM->SetBinContent(70,9);
   hM->SetBinContent(71,15);
   hM->SetBinContent(72,7);
   hM->SetBinContent(73,12);
   hM->SetBinContent(74,6);
   hM->SetBinContent(75,9);
   hM->SetBinContent(76,888);
   hM->SetEntries(6283);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 6283   ");
   text = ptstats->AddText("Mean  = 0.5416");
   text = ptstats->AddText("RMS   = 0.05537");
   text = ptstats->AddText("#chi^{2} / ndf = 70.29 / 69");
   text = ptstats->AddText("p0       = -145.5 #pm 77.3 ");
   text = ptstats->AddText("p1       = 642.5 #pm 294.7 ");
   text = ptstats->AddText("p2       = -641.4 #pm 278.9 ");
   text = ptstats->AddText("p3       = 115.5 #pm 97.4 ");
   text = ptstats->AddText("p4       = 0.8129 #pm 0.0171 ");
   text = ptstats->AddText("p5       = 0.0718 #pm 0.0214 ");
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
   fsig->SetChisquare(70.29365);
   fsig->SetNDF(69);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-145.521);
   fsig->SetParError(0,77.25047);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,642.4792);
   fsig->SetParError(1,294.7428);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-641.4494);
   fsig->SetParError(2,278.9159);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,115.4519);
   fsig->SetParError(3,97.41633);
   fsig->SetParLimits(3,0,0);
   fsig->SetParameter(4,0.8129199);
   fsig->SetParError(4,0.01711963);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.07179987);
   fsig->SetParError(5,0.02135485);
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
   fmb->SetParameter(0,-145.521);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,642.4792);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-641.4494);
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
   fpeak->SetParameter(0,115.4519);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.8129199);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.07179987);
   fpeak->SetParError(2,0);
   fpeak->SetParLimits(2,0,0);
   fpeak->Draw("same");
   
   TPaveText *pt = new TPaveText(0.01,0.9404546,0.71,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   text = pt->AddText("Mass, bin (q2,nu,z) = (1,0,2), tot: 2.574877,partial: 0.241683");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
