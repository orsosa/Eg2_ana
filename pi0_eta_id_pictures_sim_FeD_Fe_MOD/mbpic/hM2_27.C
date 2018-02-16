{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon Jun  6 21:14:05 2016) by ROOT version5.34/19
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
   hM->SetBinContent(7,2);
   hM->SetBinContent(10,4);
   hM->SetBinContent(15,2);
   hM->SetBinContent(18,2);
   hM->SetBinContent(22,2);
   hM->SetBinContent(23,2);
   hM->SetBinContent(24,2);
   hM->SetBinContent(26,4);
   hM->SetBinContent(32,2);
   hM->SetBinContent(35,2);
   hM->SetBinContent(36,2);
   hM->SetBinContent(37,2);
   hM->SetBinContent(41,4);
   hM->SetBinContent(42,4);
   hM->SetBinContent(44,4);
   hM->SetBinContent(48,2);
   hM->SetBinContent(49,2);
   hM->SetBinContent(52,2);
   hM->SetBinContent(53,4);
   hM->SetBinContent(54,6);
   hM->SetBinContent(57,2);
   hM->SetBinContent(59,2);
   hM->SetBinContent(60,2);
   hM->SetBinContent(61,2);
   hM->SetBinContent(62,2);
   hM->SetBinContent(64,2);
   hM->SetBinContent(65,2);
   hM->SetBinContent(66,2);
   hM->SetBinContent(68,4);
   hM->SetBinContent(69,2);
   hM->SetBinContent(71,4);
   hM->SetBinContent(74,2);
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
   text = ptstats->AddText("Mean  = 0.1459");
   text = ptstats->AddText("RMS   = 0.02737");
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
   fmb->SetChisquare(9.035475);
   fmb->SetNDF(29);
   fmb->GetXaxis()->SetLabelFont(42);
   fmb->GetXaxis()->SetLabelSize(0.035);
   fmb->GetXaxis()->SetTitleSize(0.035);
   fmb->GetXaxis()->SetTitleFont(42);
   fmb->GetYaxis()->SetLabelFont(42);
   fmb->GetYaxis()->SetLabelSize(0.035);
   fmb->GetYaxis()->SetTitleSize(0.035);
   fmb->GetYaxis()->SetTitleFont(42);
   fmb->SetParameter(0,0.9010465);
   fmb->SetParError(0,7.43775);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,20.89378);
   fmb->SetParError(1,109.0259);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-72.79934);
   fmb->SetParError(2,386.8598);
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
