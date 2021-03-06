{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Sep 29 00:28:12 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.385,-0.6210817,0.735,5.589735);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin38 = new TH1F("hM_bin38","M_{#gamma #gamma}",100,0.42,0.7);
   hM_bin38->SetBinContent(26,1);
   hM_bin38->SetBinContent(31,1);
   hM_bin38->SetBinContent(37,2);
   hM_bin38->SetBinContent(38,1);
   hM_bin38->SetBinContent(42,1);
   hM_bin38->SetBinContent(44,1);
   hM_bin38->SetBinContent(48,1);
   hM_bin38->SetBinContent(58,1);
   hM_bin38->SetBinContent(69,1);
   hM_bin38->SetBinContent(78,3);
   hM_bin38->SetBinContent(82,1);
   hM_bin38->SetBinContent(84,1);
   hM_bin38->SetBinContent(89,1);
   hM_bin38->SetBinContent(90,1);
   hM_bin38->SetBinContent(97,1);
   hM_bin38->SetBinContent(99,2);
   hM_bin38->SetBinContent(101,234);
   hM_bin38->SetEntries(254);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.52,0.6);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(0.3932394);
   fsig->SetNDF(0);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,3.42217);
   fsig->SetParError(0,0.4264014);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,-3.236355);
   fsig->SetParError(1,0.7817275);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.906108);
   fsig->SetParError(2,1.429323);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,1.064233);
   fsig->SetParError(3,3.467971);
   fsig->SetParLimits(3,0,6);
   fsig->SetParameter(4,0.135333);
   fsig->SetParError(4,1.414214);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.0241528);
   fsig->SetParError(5,0.007216291);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin38->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin38");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 254    ");
   text = ptstats->AddText("Mean  =  0.601");
   text = ptstats->AddText("RMS   = 0.06856");
   text = ptstats->AddText("#chi^{2} / ndf = 0.3932 / 0");
   text = ptstats->AddText("p0       = 3.422 #pm 0.426 ");
   text = ptstats->AddText("p1       = -3.236 #pm 0.782 ");
   text = ptstats->AddText("p2       = -1.906 #pm 1.429 ");
   text = ptstats->AddText("p3       = 1.064 #pm 3.468 ");
   text = ptstats->AddText("p4       = 0.1353 #pm 1.4142 ");
   text = ptstats->AddText("p5       = 0.02415 #pm 0.00722 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin38->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin38);

   ci = TColor::GetColor("#0000ff");
   hM_bin38->SetMarkerColor(ci);
   hM_bin38->SetMarkerStyle(24);
   hM_bin38->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin38->GetXaxis()->SetLabelFont(42);
   hM_bin38->GetXaxis()->SetLabelSize(0.035);
   hM_bin38->GetXaxis()->SetTitleSize(0.035);
   hM_bin38->GetXaxis()->SetTitleFont(42);
   hM_bin38->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin38->GetYaxis()->SetLabelFont(42);
   hM_bin38->GetYaxis()->SetLabelSize(0.035);
   hM_bin38->GetYaxis()->SetTitleSize(0.035);
   hM_bin38->GetYaxis()->SetTitleFont(42);
   hM_bin38->GetZaxis()->SetLabelFont(42);
   hM_bin38->GetZaxis()->SetLabelSize(0.035);
   hM_bin38->GetZaxis()->SetTitleSize(0.035);
   hM_bin38->GetZaxis()->SetTitleFont(42);
   hM_bin38->Draw("e");
   
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
   fmb->SetParameter(0,3.42217);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,-3.236355);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.906108);
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
   fpeak->SetParameter(0,1.064233);
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
