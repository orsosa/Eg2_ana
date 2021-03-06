{
//=========Macro generated from canvas: c/The canvas
//=========  (Wed Sep 14 17:45:36 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.06625,-1.135979,0.20375,4.890908);
   c->SetBorderSize(2);
   c->SetLogy();
   c->SetFrameFillColor(0);
   
   TH1F *hM = new TH1F("hM","Mass bin (pt2,nu,z) = (3,0,4)",75,0.08,0.19);
   hM->SetBinContent(1,2);
   hM->SetBinContent(2,1);
   hM->SetBinContent(4,2);
   hM->SetBinContent(5,1);
   hM->SetBinContent(7,2);
   hM->SetBinContent(8,1);
   hM->SetBinContent(9,3);
   hM->SetBinContent(10,1);
   hM->SetBinContent(12,1);
   hM->SetBinContent(16,2);
   hM->SetBinContent(17,2);
   hM->SetBinContent(18,3);
   hM->SetBinContent(19,4);
   hM->SetBinContent(20,1);
   hM->SetBinContent(21,4);
   hM->SetBinContent(22,1);
   hM->SetBinContent(23,1);
   hM->SetBinContent(25,2);
   hM->SetBinContent(26,2);
   hM->SetBinContent(28,2);
   hM->SetBinContent(30,2);
   hM->SetBinContent(31,4);
   hM->SetBinContent(32,3);
   hM->SetBinContent(33,6);
   hM->SetBinContent(34,12);
   hM->SetBinContent(35,37);
   hM->SetBinContent(36,125);
   hM->SetBinContent(37,1665);
   hM->SetBinContent(38,10148);
   hM->SetBinContent(39,1651);
   hM->SetBinContent(40,133);
   hM->SetBinContent(41,38);
   hM->SetBinContent(42,13);
   hM->SetBinContent(43,2);
   hM->SetBinContent(44,2);
   hM->SetBinContent(46,1);
   hM->SetBinContent(47,4);
   hM->SetBinContent(48,2);
   hM->SetBinContent(49,1);
   hM->SetBinContent(50,3);
   hM->SetBinContent(51,1);
   hM->SetBinContent(52,2);
   hM->SetBinContent(53,2);
   hM->SetBinContent(54,4);
   hM->SetBinContent(56,3);
   hM->SetBinContent(58,2);
   hM->SetBinContent(59,2);
   hM->SetBinContent(60,3);
   hM->SetBinContent(61,1);
   hM->SetBinContent(62,3);
   hM->SetBinContent(63,3);
   hM->SetBinContent(64,3);
   hM->SetBinContent(65,4);
   hM->SetBinContent(66,1);
   hM->SetBinContent(68,2);
   hM->SetBinContent(69,2);
   hM->SetBinContent(70,2);
   hM->SetBinContent(71,2);
   hM->SetBinContent(72,2);
   hM->SetBinContent(73,2);
   hM->SetBinContent(74,3);
   hM->SetBinContent(76,2);
   hM->SetEntries(13941);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 13941  ");
   text = ptstats->AddText("Mean  =  0.135");
   text = ptstats->AddText("RMS   = 0.003065");
   text = ptstats->AddText("#chi^{2} / ndf = 326.7 / 55");
   text = ptstats->AddText("p0       = -5.042 #pm 3.607 ");
   text = ptstats->AddText("p1       = 104.9 #pm 56.8 ");
   text = ptstats->AddText("p2       = -367.9 #pm 212.0 ");
   text = ptstats->AddText("p3       = 1.01e+04 #pm 1.02e+02 ");
   text = ptstats->AddText("p4       = 0.135 #pm 0.000 ");
   text = ptstats->AddText("p5       = 0.0007748 #pm 0.0000044 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08,0.19);
   fsig->SetNpx(500);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(326.715);
   fsig->SetNDF(55);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-5.041943);
   fsig->SetParError(0,3.606942);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,104.9059);
   fsig->SetParError(1,56.83194);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-367.8643);
   fsig->SetParError(2,211.9712);
   fsig->SetParLimits(2,0,0);
   fsig->SetParameter(3,10102.32);
   fsig->SetParError(3,101.619);
   fsig->SetParLimits(3,0,0);
   fsig->SetParameter(4,0.1349983);
   fsig->SetParError(4,6.994716e-06);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.0007747959);
   fsig->SetParError(5,4.420652e-06);
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
   
   TF1 *fmb = new TF1("fmb","pol2",0.13,0.14);
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
   fmb->SetParameter(0,-5.041943);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,104.9059);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-367.8643);
   fmb->SetParError(2,0);
   fmb->SetParLimits(2,0,0);
   fmb->Draw("same");
   
   TF1 *fpeak = new TF1("fpeak","gaus",0.13,0.14);
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
   fpeak->SetParameter(0,10102.32);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1349983);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.0007747959);
   fpeak->SetParError(2,0);
   fpeak->SetParLimits(2,0,0);
   fpeak->Draw("same");
   
   TPaveText *pt = new TPaveText(0.01,0.9404546,0.4709548,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   text = pt->AddText("Mass bin (pt2,nu,z) = (3,0,4)");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
