{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Dec 20 13:35:37 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.425,-5.79658,0.675,52.16921);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *hM = new TH1F("hM","Mass, bin (q2,nu,z) = (0,0,0)",75,0.45,0.65);
   hM->SetBinContent(0,2506);
   hM->SetBinContent(1,38);
   hM->SetBinContent(2,36);
   hM->SetBinContent(3,14);
   hM->SetBinContent(4,32);
   hM->SetBinContent(5,34);
   hM->SetBinContent(6,20);
   hM->SetBinContent(7,24);
   hM->SetBinContent(8,24);
   hM->SetBinContent(9,6);
   hM->SetBinContent(10,2);
   hM->SetEntries(2736);
   
   TF1 *fmb = new TF1("fmb","pol2",0.45,0.65);
   fmb->SetFillColor(19);
   fmb->SetFillStyle(0);
   fmb->SetLineColor(2);
   fmb->SetLineWidth(2);
   fmb->SetChisquare(28.54295);
   fmb->SetNDF(7);
   fmb->GetXaxis()->SetLabelFont(42);
   fmb->GetXaxis()->SetLabelSize(0.035);
   fmb->GetXaxis()->SetTitleSize(0.035);
   fmb->GetXaxis()->SetTitleFont(42);
   fmb->GetYaxis()->SetLabelFont(42);
   fmb->GetYaxis()->SetLabelSize(0.035);
   fmb->GetYaxis()->SetTitleSize(0.035);
   fmb->GetYaxis()->SetTitleFont(42);
   fmb->SetParameter(0,-12903.03);
   fmb->SetParError(0,5407.755);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,56863.61);
   fmb->SetParError(1,23234.93);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-62512.09);
   fmb->SetParError(2,24950.2);
   fmb->SetParLimits(2,0,0);
   hM->GetListOfFunctions()->Add(fmb);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 2736   ");
   text = ptstats->AddText("Mean  = 0.4602");
   text = ptstats->AddText("RMS   = 0.006627");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hM->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM);

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
   text = pt->AddText("Mass, bin (q2,nu,z) = (0,0,0)");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
