{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Sep 29 00:27:36 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.385,-0.2625,0.735,2.3625);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin10 = new TH1F("hM_bin10","M_{#gamma #gamma}",100,0.42,0.7);
   hM_bin10->SetBinContent(55,1);
   hM_bin10->SetBinContent(62,1);
   hM_bin10->SetBinContent(89,1);
   hM_bin10->SetBinContent(95,1);
   hM_bin10->SetBinContent(96,1);
   hM_bin10->SetBinContent(101,341);
   hM_bin10->SetEntries(346);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.52,0.6);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(6.231214e-06);
   fsig->SetNDF(0);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-0.9640305);
   fsig->SetParError(0,0.7071068);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,6.908904);
   fsig->SetParError(1,1.213954);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-6.072841);
   fsig->SetParError(2,2.082707);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,0.3547443);
   fsig->SetParError(3,1.166656);
   fsig->SetParLimits(3,0,2);
   fsig->SetParameter(4,0.135333);
   fsig->SetParError(4,1.414214);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.0241528);
   fsig->SetParError(5,0.007216291);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin10->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin10");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 346    ");
   text = ptstats->AddText("Mean  = 0.6415");
   text = ptstats->AddText("RMS   = 0.04853");
   text = ptstats->AddText("#chi^{2} / ndf = 6.231e-06 / 0");
   text = ptstats->AddText("p0       = -0.964 #pm 0.707 ");
   text = ptstats->AddText("p1       = 6.909 #pm 1.214 ");
   text = ptstats->AddText("p2       = -6.073 #pm 2.083 ");
   text = ptstats->AddText("p3       = 0.3547 #pm 1.1667 ");
   text = ptstats->AddText("p4       = 0.1353 #pm 1.4142 ");
   text = ptstats->AddText("p5       = 0.02415 #pm 0.00722 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin10->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin10);

   ci = TColor::GetColor("#0000ff");
   hM_bin10->SetMarkerColor(ci);
   hM_bin10->SetMarkerStyle(24);
   hM_bin10->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin10->GetXaxis()->SetLabelFont(42);
   hM_bin10->GetXaxis()->SetLabelSize(0.035);
   hM_bin10->GetXaxis()->SetTitleSize(0.035);
   hM_bin10->GetXaxis()->SetTitleFont(42);
   hM_bin10->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin10->GetYaxis()->SetLabelFont(42);
   hM_bin10->GetYaxis()->SetLabelSize(0.035);
   hM_bin10->GetYaxis()->SetTitleSize(0.035);
   hM_bin10->GetYaxis()->SetTitleFont(42);
   hM_bin10->GetZaxis()->SetLabelFont(42);
   hM_bin10->GetZaxis()->SetLabelSize(0.035);
   hM_bin10->GetZaxis()->SetTitleSize(0.035);
   hM_bin10->GetZaxis()->SetTitleFont(42);
   hM_bin10->Draw("e");
   
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
   fmb->SetParameter(0,-0.9640305);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,6.908904);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-6.072841);
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
