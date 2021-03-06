{
//=========Macro generated from canvas: c/The canvas
//=========  (Wed Dec 14 17:13:22 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.06625,-3.357713,0.20375,30.21942);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin18 = new TH1F("hM_bin18","M_{#gamma #gamma}",75,0.08,0.19);
   hM_bin18->SetBinContent(0,2);
   hM_bin18->SetBinContent(2,1);
   hM_bin18->SetBinContent(6,1);
   hM_bin18->SetBinContent(11,1);
   hM_bin18->SetBinContent(12,1);
   hM_bin18->SetBinContent(14,1);
   hM_bin18->SetBinContent(15,3);
   hM_bin18->SetBinContent(16,1);
   hM_bin18->SetBinContent(17,3);
   hM_bin18->SetBinContent(18,3);
   hM_bin18->SetBinContent(20,5);
   hM_bin18->SetBinContent(21,8);
   hM_bin18->SetBinContent(22,2);
   hM_bin18->SetBinContent(23,6);
   hM_bin18->SetBinContent(24,4);
   hM_bin18->SetBinContent(25,8);
   hM_bin18->SetBinContent(26,8);
   hM_bin18->SetBinContent(27,11);
   hM_bin18->SetBinContent(28,18);
   hM_bin18->SetBinContent(29,14);
   hM_bin18->SetBinContent(30,11);
   hM_bin18->SetBinContent(31,11);
   hM_bin18->SetBinContent(32,13);
   hM_bin18->SetBinContent(33,16);
   hM_bin18->SetBinContent(34,13);
   hM_bin18->SetBinContent(35,18);
   hM_bin18->SetBinContent(36,16);
   hM_bin18->SetBinContent(37,17);
   hM_bin18->SetBinContent(38,11);
   hM_bin18->SetBinContent(39,21);
   hM_bin18->SetBinContent(40,10);
   hM_bin18->SetBinContent(41,18);
   hM_bin18->SetBinContent(42,18);
   hM_bin18->SetBinContent(43,12);
   hM_bin18->SetBinContent(44,10);
   hM_bin18->SetBinContent(45,11);
   hM_bin18->SetBinContent(46,14);
   hM_bin18->SetBinContent(47,12);
   hM_bin18->SetBinContent(48,10);
   hM_bin18->SetBinContent(49,15);
   hM_bin18->SetBinContent(50,7);
   hM_bin18->SetBinContent(51,10);
   hM_bin18->SetBinContent(52,8);
   hM_bin18->SetBinContent(53,6);
   hM_bin18->SetBinContent(54,3);
   hM_bin18->SetBinContent(55,6);
   hM_bin18->SetBinContent(56,5);
   hM_bin18->SetBinContent(57,13);
   hM_bin18->SetBinContent(58,3);
   hM_bin18->SetBinContent(59,4);
   hM_bin18->SetBinContent(61,3);
   hM_bin18->SetBinContent(62,2);
   hM_bin18->SetBinContent(63,4);
   hM_bin18->SetBinContent(64,1);
   hM_bin18->SetBinContent(65,1);
   hM_bin18->SetBinContent(66,2);
   hM_bin18->SetBinContent(67,3);
   hM_bin18->SetBinContent(68,2);
   hM_bin18->SetBinContent(70,4);
   hM_bin18->SetBinContent(72,1);
   hM_bin18->SetBinContent(73,1);
   hM_bin18->SetBinContent(74,1);
   hM_bin18->SetBinContent(75,2);
   hM_bin18->SetEntries(470);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08,0.19);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(44.19084);
   fsig->SetNDF(56);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-0.3000969);
   fsig->SetParError(0,0.9932652);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,8.157584);
   fsig->SetParError(1,6.694305);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.144508e-08);
   fsig->SetParError(2,296.0159);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,14.27283);
   fsig->SetParError(3,0.9340549);
   fsig->SetParLimits(3,0,0);
   fsig->SetParameter(4,0.1355708);
   fsig->SetParError(4,0.001051895);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01552272);
   fsig->SetParError(5,0.000868551);
   fsig->SetParLimits(5,0.01552272,0.02328408);
   hM_bin18->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin18");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 470    ");
   text = ptstats->AddText("Mean  = 0.1375");
   text = ptstats->AddText("RMS   = 0.01798");
   text = ptstats->AddText("#chi^{2} / ndf = 44.19 / 56");
   text = ptstats->AddText("p0       = -0.3001 #pm 0.9933 ");
   text = ptstats->AddText("p1       = 8.158 #pm 6.694 ");
   text = ptstats->AddText("p2       = -1.145e-08 #pm 2.960e+02 ");
   text = ptstats->AddText("p3       = 14.27 #pm 0.93 ");
   text = ptstats->AddText("p4       = 0.1356 #pm 0.0011 ");
   text = ptstats->AddText("p5       = 0.01552 #pm 0.00087 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin18->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin18);

   ci = TColor::GetColor("#0000ff");
   hM_bin18->SetMarkerColor(ci);
   hM_bin18->SetMarkerStyle(24);
   hM_bin18->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin18->GetXaxis()->SetLabelFont(42);
   hM_bin18->GetXaxis()->SetLabelSize(0.035);
   hM_bin18->GetXaxis()->SetTitleSize(0.035);
   hM_bin18->GetXaxis()->SetTitleFont(42);
   hM_bin18->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin18->GetYaxis()->SetLabelFont(42);
   hM_bin18->GetYaxis()->SetLabelSize(0.035);
   hM_bin18->GetYaxis()->SetTitleSize(0.035);
   hM_bin18->GetYaxis()->SetTitleFont(42);
   hM_bin18->GetZaxis()->SetLabelFont(42);
   hM_bin18->GetZaxis()->SetLabelSize(0.035);
   hM_bin18->GetZaxis()->SetTitleSize(0.035);
   hM_bin18->GetZaxis()->SetTitleFont(42);
   hM_bin18->Draw("e");
   
   TF1 *fmb = new TF1("fmb","pol2",0.08,0.19);
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
   fmb->SetParameter(0,-0.3000969);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,8.157584);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.144508e-08);
   fmb->SetParError(2,0);
   fmb->SetParLimits(2,0,0);
   fmb->Draw("same");
   
   TF1 *fpeak = new TF1("fpeak","gaus",0.08,0.19);
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
   fpeak->SetParameter(0,14.27283);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1355708);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.01552272);
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
