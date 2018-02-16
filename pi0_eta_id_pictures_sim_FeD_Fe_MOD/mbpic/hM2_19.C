{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon Jun  6 21:14:05 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   c->SetHighLightColor(2);
   c->Range(0.06625,-0.7875001,0.20375,7.0875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *hM = new TH1F("hM","Mass, bin (q2,nu,z) = (2,0,4)",75,0.08,0.19);
   hM->SetBinContent(7,2);
   hM->SetBinContent(14,2);
   hM->SetBinContent(15,2);
   hM->SetBinContent(20,2);
   hM->SetBinContent(21,2);
   hM->SetBinContent(22,4);
   hM->SetBinContent(23,2);
   hM->SetBinContent(24,2);
   hM->SetBinContent(32,2);
   hM->SetBinContent(33,2);
   hM->SetBinContent(34,2);
   hM->SetBinContent(38,4);
   hM->SetBinContent(41,2);
   hM->SetBinContent(42,2);
   hM->SetBinContent(44,2);
   hM->SetBinContent(46,2);
   hM->SetBinContent(50,2);
   hM->SetBinContent(51,2);
   hM->SetBinContent(54,2);
   hM->SetBinContent(55,2);
   hM->SetBinContent(60,2);
   hM->SetBinContent(61,2);
   hM->SetBinContent(64,2);
   hM->SetBinContent(67,2);
   hM->SetBinContent(68,4);
   hM->SetBinContent(71,2);
   hM->SetBinContent(72,2);
   hM->SetBinContent(74,2);
   hM->SetBinContent(75,2);
   hM->SetEntries(64);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 64     ");
   text = ptstats->AddText("Mean  = 0.1438");
   text = ptstats->AddText("RMS   = 0.02933");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hM->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM);
   
   TF1 *fmb = new TF1("fmb","pol2",0.08,0.19);
   fmb->SetFillColor(19);
   fmb->SetFillStyle(0);
   fmb->SetLineColor(2);
   fmb->SetLineWidth(2);
   fmb->SetChisquare(2.833269);
   fmb->SetNDF(26);
   fmb->GetXaxis()->SetLabelFont(42);
   fmb->GetXaxis()->SetLabelSize(0.035);
   fmb->GetXaxis()->SetTitleSize(0.035);
   fmb->GetXaxis()->SetTitleFont(42);
   fmb->GetYaxis()->SetLabelFont(42);
   fmb->GetYaxis()->SetLabelSize(0.035);
   fmb->GetYaxis()->SetTitleSize(0.035);
   fmb->GetYaxis()->SetTitleFont(42);
   fmb->SetParameter(0,1.833012);
   fmb->SetParError(0,6.835734);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,4.349265);
   fmb->SetParError(1,98.68681);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-16.20797);
   fmb->SetParError(2,344.6681);
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
