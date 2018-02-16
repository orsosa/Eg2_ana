{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Dec 20 13:35:55 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   c->SetHighLightColor(2);
   c->Range(0.425,-1.727549,0.675,15.54794);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *hM = new TH1F("hM","Mass, bin (q2,nu,z) = (2,0,4)",75,0.45,0.65);
   hM->SetBinContent(0,318);
   hM->SetBinContent(1,8);
   hM->SetBinContent(2,6);
   hM->SetBinContent(3,2);
   hM->SetBinContent(4,8);
   hM->SetBinContent(5,8);
   hM->SetBinContent(6,2);
   hM->SetBinContent(7,8);
   hM->SetBinContent(8,6);
   hM->SetBinContent(9,6);
   hM->SetBinContent(10,4);
   hM->SetBinContent(11,6);
   hM->SetBinContent(12,8);
   hM->SetBinContent(13,6);
   hM->SetBinContent(14,6);
   hM->SetBinContent(15,8);
   hM->SetBinContent(16,8);
   hM->SetBinContent(17,10);
   hM->SetBinContent(18,6);
   hM->SetBinContent(19,4);
   hM->SetBinContent(20,6);
   hM->SetBinContent(21,6);
   hM->SetBinContent(22,4);
   hM->SetBinContent(23,4);
   hM->SetBinContent(24,6);
   hM->SetBinContent(25,4);
   hM->SetBinContent(27,2);
   hM->SetBinContent(28,4);
   hM->SetBinContent(29,6);
   hM->SetEntries(480);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 480    ");
   text = ptstats->AddText("Mean  = 0.4855");
   text = ptstats->AddText("RMS   = 0.02104");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hM->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM);
   
   TF1 *fmb = new TF1("fmb","pol2",0.45,0.65);
   fmb->SetFillColor(19);
   fmb->SetFillStyle(0);
   fmb->SetLineColor(2);
   fmb->SetLineWidth(2);
   fmb->SetChisquare(22.95203);
   fmb->SetNDF(25);
   fmb->GetXaxis()->SetLabelFont(42);
   fmb->GetXaxis()->SetLabelSize(0.035);
   fmb->GetXaxis()->SetTitleSize(0.035);
   fmb->GetXaxis()->SetTitleFont(42);
   fmb->GetYaxis()->SetLabelFont(42);
   fmb->GetYaxis()->SetLabelSize(0.035);
   fmb->GetYaxis()->SetTitleSize(0.035);
   fmb->GetYaxis()->SetTitleFont(42);
   fmb->SetParameter(0,-438.2547);
   fmb->SetParError(0,229.5369);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1825.591);
   fmb->SetParError(1,940.5701);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1876.016);
   fmb->SetParError(2,961.6304);
   fmb->SetParLimits(2,0,0);
   hM->GetListOfFunctions()->Add(fmb);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hM->SetLineColor(ci);

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
   
   TPaveText *pt = new TPaveText(0.2544472,0.9341608,0.7455528,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("Mass, bin (q2,nu,z) = (2,0,4)");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
