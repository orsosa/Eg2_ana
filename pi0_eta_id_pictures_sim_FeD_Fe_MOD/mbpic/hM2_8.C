{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon Jun  6 21:14:04 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   c->SetHighLightColor(2);
   c->Range(0.06625,-1.108996,0.20375,9.98096);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *hM = new TH1F("hM","Mass, bin (q2,nu,z) = (2,0,4)",75,0.08,0.19);
   hM->SetBinContent(0,2);
   hM->SetBinContent(1,4);
   hM->SetBinContent(3,4);
   hM->SetBinContent(6,2);
   hM->SetBinContent(11,2);
   hM->SetBinContent(14,2);
   hM->SetBinContent(15,2);
   hM->SetBinContent(18,2);
   hM->SetBinContent(19,2);
   hM->SetBinContent(20,4);
   hM->SetBinContent(22,2);
   hM->SetBinContent(23,2);
   hM->SetBinContent(24,4);
   hM->SetBinContent(27,2);
   hM->SetBinContent(32,2);
   hM->SetBinContent(33,2);
   hM->SetBinContent(38,2);
   hM->SetBinContent(43,2);
   hM->SetBinContent(47,4);
   hM->SetBinContent(48,2);
   hM->SetBinContent(49,4);
   hM->SetBinContent(50,2);
   hM->SetBinContent(53,2);
   hM->SetBinContent(55,2);
   hM->SetBinContent(58,2);
   hM->SetBinContent(60,2);
   hM->SetBinContent(61,4);
   hM->SetBinContent(63,2);
   hM->SetBinContent(66,2);
   hM->SetBinContent(67,2);
   hM->SetBinContent(71,2);
   hM->SetBinContent(72,2);
   hM->SetBinContent(74,6);
   hM->SetBinContent(75,2);
   hM->SetBinContent(76,2);
   hM->SetEntries(88);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 88     ");
   text = ptstats->AddText("Mean  = 0.1376");
   text = ptstats->AddText("RMS   = 0.03452");
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
   fmb->SetChisquare(8.143222);
   fmb->SetNDF(30);
   fmb->GetXaxis()->SetLabelFont(42);
   fmb->GetXaxis()->SetLabelSize(0.035);
   fmb->GetXaxis()->SetTitleSize(0.035);
   fmb->GetXaxis()->SetTitleFont(42);
   fmb->GetYaxis()->SetLabelFont(42);
   fmb->GetYaxis()->SetLabelSize(0.035);
   fmb->GetYaxis()->SetTitleSize(0.035);
   fmb->GetYaxis()->SetTitleFont(42);
   fmb->SetParameter(0,5.419797);
   fmb->SetParError(0,5.617618);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,-46.27415);
   fmb->SetParError(1,84.85873);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,162.081);
   fmb->SetParError(2,306.6285);
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
