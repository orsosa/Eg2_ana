{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Sep 29 00:27:47 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.385,-0.6210817,0.735,5.589735);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin19 = new TH1F("hM_bin19","M_{#gamma #gamma}",100,0.42,0.7);
   hM_bin19->SetBinContent(24,1);
   hM_bin19->SetBinContent(37,1);
   hM_bin19->SetBinContent(42,1);
   hM_bin19->SetBinContent(43,1);
   hM_bin19->SetBinContent(44,1);
   hM_bin19->SetBinContent(55,1);
   hM_bin19->SetBinContent(57,2);
   hM_bin19->SetBinContent(60,1);
   hM_bin19->SetBinContent(64,2);
   hM_bin19->SetBinContent(66,1);
   hM_bin19->SetBinContent(67,1);
   hM_bin19->SetBinContent(69,1);
   hM_bin19->SetBinContent(72,1);
   hM_bin19->SetBinContent(74,1);
   hM_bin19->SetBinContent(75,2);
   hM_bin19->SetBinContent(76,1);
   hM_bin19->SetBinContent(78,1);
   hM_bin19->SetBinContent(81,1);
   hM_bin19->SetBinContent(82,2);
   hM_bin19->SetBinContent(83,1);
   hM_bin19->SetBinContent(84,1);
   hM_bin19->SetBinContent(87,2);
   hM_bin19->SetBinContent(88,1);
   hM_bin19->SetBinContent(89,3);
   hM_bin19->SetBinContent(91,1);
   hM_bin19->SetBinContent(92,2);
   hM_bin19->SetBinContent(94,2);
   hM_bin19->SetBinContent(96,1);
   hM_bin19->SetBinContent(98,1);
   hM_bin19->SetBinContent(99,3);
   hM_bin19->SetBinContent(101,236);
   hM_bin19->SetEntries(277);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.52,0.6);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(0.6101304);
   fsig->SetNDF(2);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-3.103926);
   fsig->SetParError(0,9.028509);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,7.77041);
   fsig->SetParError(1,19.56874);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.2233339);
   fsig->SetParError(2,119.0215);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,2.4);
   fsig->SetParError(3,4.198497);
   fsig->SetParLimits(3,0,6);
   fsig->SetParameter(4,0.135333);
   fsig->SetParError(4,1.414214);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.0241528);
   fsig->SetParError(5,0.007216291);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin19->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin19");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 277    ");
   text = ptstats->AddText("Mean  = 0.6299");
   text = ptstats->AddText("RMS   = 0.0525");
   text = ptstats->AddText("#chi^{2} / ndf = 0.6101 / 2");
   text = ptstats->AddText("p0       = -3.104 #pm 9.029 ");
   text = ptstats->AddText("p1       =  7.77 #pm 19.57 ");
   text = ptstats->AddText("p2       = -0.2233 #pm 119.0215 ");
   text = ptstats->AddText("p3       =   2.4 #pm 4.2 ");
   text = ptstats->AddText("p4       = 0.1353 #pm 1.4142 ");
   text = ptstats->AddText("p5       = 0.02415 #pm 0.00722 ");
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
   
   TF1 *fmb = new TF1("fmb","pol2",0.52,0.6);
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
   fmb->SetParameter(0,-3.103926);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,7.77041);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.2233339);
   fmb->SetParError(2,0);
   fmb->SetParLimits(2,0,0);
   fmb->Draw("same");
   
   TF1 *fpeak = new TF1("fpeak","gaus",0.52,0.6);
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
   fpeak->SetParameter(0,2.4);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.135333);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.0241528);
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
