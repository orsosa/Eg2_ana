{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Sep 29 00:27:37 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.385,-0.2625,0.735,2.3625);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin11 = new TH1F("hM_bin11","M_{#gamma #gamma}",100,0.42,0.7);
   hM_bin11->SetBinContent(93,1);
   hM_bin11->SetBinContent(101,294);
   hM_bin11->SetEntries(295);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.755,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin11");
   text->SetTextSize(0.0552);
   text = ptstats->AddText("Entries = 295    ");
   text = ptstats->AddText("Mean  =  0.678");
   text = ptstats->AddText("RMS   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin11->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
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
   fmb->SetParameter(0,10);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,0);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.1);
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
   fpeak->SetParameter(0,0.8);
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
