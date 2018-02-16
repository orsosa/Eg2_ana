{
//=========Macro generated from canvas: c/The canvas
//=========  (Wed Oct  4 11:57:51 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.605,-0.2625,0.955,2.3625);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin16 = new TH1F("hM_bin16","M_{#gamma #gamma}",100,0.64,0.92);
   hM_bin16->SetBinContent(0,1);
   hM_bin16->SetBinContent(46,1);
   hM_bin16->SetBinContent(96,1);
   hM_bin16->SetBinContent(100,1);
   hM_bin16->SetBinContent(101,14);
   hM_bin16->SetEntries(18);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.74,0.82);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(1.160249e-10);
   fsig->SetNDF(0);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,9.260787);
   fsig->SetParError(0,1);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,-0.9632695);
   fsig->SetParError(1,1.303101);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-12.77216);
   fsig->SetParError(2,1.698067);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,0.3547443);
   fsig->SetParError(3,1.151122);
   fsig->SetParLimits(3,0,2);
   fsig->SetParameter(4,0.135333);
   fsig->SetParError(4,1.414214);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.0241528);
   fsig->SetParError(5,0.007216291);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin16->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin16");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 18     ");
   text = ptstats->AddText("Mean  = 0.8645");
   text = ptstats->AddText("RMS   = 0.06853");
   text = ptstats->AddText("#chi^{2} / ndf = 1.16e-10 / 0");
   text = ptstats->AddText("p0       = 9.261 #pm 1.000 ");
   text = ptstats->AddText("p1       = -0.9633 #pm 1.3031 ");
   text = ptstats->AddText("p2       = -12.77 #pm 1.70 ");
   text = ptstats->AddText("p3       = 0.3547 #pm 1.1511 ");
   text = ptstats->AddText("p4       = 0.1353 #pm 1.4142 ");
   text = ptstats->AddText("p5       = 0.02415 #pm 0.00722 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin16->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin16);

   ci = TColor::GetColor("#0000ff");
   hM_bin16->SetMarkerColor(ci);
   hM_bin16->SetMarkerStyle(24);
   hM_bin16->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin16->GetXaxis()->SetLabelFont(42);
   hM_bin16->GetXaxis()->SetLabelSize(0.035);
   hM_bin16->GetXaxis()->SetTitleSize(0.035);
   hM_bin16->GetXaxis()->SetTitleFont(42);
   hM_bin16->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin16->GetYaxis()->SetLabelFont(42);
   hM_bin16->GetYaxis()->SetLabelSize(0.035);
   hM_bin16->GetYaxis()->SetTitleSize(0.035);
   hM_bin16->GetYaxis()->SetTitleFont(42);
   hM_bin16->GetZaxis()->SetLabelFont(42);
   hM_bin16->GetZaxis()->SetLabelSize(0.035);
   hM_bin16->GetZaxis()->SetTitleSize(0.035);
   hM_bin16->GetZaxis()->SetTitleFont(42);
   hM_bin16->Draw("e");
   
   TF1 *fmb = new TF1("fmb","pol2",0.74,0.82);
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
   fmb->SetParameter(0,9.260787);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,-0.9632695);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-12.77216);
   fmb->SetParError(2,0);
   fmb->SetParLimits(2,0,0);
   fmb->Draw("same");
   
   TF1 *fpeak = new TF1("fpeak","gaus",0.74,0.82);
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
   fpeak->SetParameter(0,0.3547443);
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
