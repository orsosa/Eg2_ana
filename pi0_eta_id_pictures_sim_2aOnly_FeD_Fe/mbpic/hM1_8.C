{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Oct 11 11:03:50 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   c->SetHighLightColor(2);
   c->Range(0.06625,-2.029663,0.20375,18.26697);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *hM = new TH1F("hM","Mass, bin (q2,nu,z) = (1,0,3)",75,0.08,0.19);
   hM->SetBinContent(0,6);
   hM->SetBinContent(1,4);
   hM->SetBinContent(2,4);
   hM->SetBinContent(3,4);
   hM->SetBinContent(4,6);
   hM->SetBinContent(5,4);
   hM->SetBinContent(6,4);
   hM->SetBinContent(7,8);
   hM->SetBinContent(8,6);
   hM->SetBinContent(9,4);
   hM->SetBinContent(10,2);
   hM->SetBinContent(13,8);
   hM->SetBinContent(15,8);
   hM->SetBinContent(16,4);
   hM->SetBinContent(17,6);
   hM->SetBinContent(18,8);
   hM->SetBinContent(19,2);
   hM->SetBinContent(20,2);
   hM->SetBinContent(21,8);
   hM->SetBinContent(22,12);
   hM->SetBinContent(23,10);
   hM->SetBinContent(25,4);
   hM->SetBinContent(26,10);
   hM->SetBinContent(28,4);
   hM->SetBinContent(29,4);
   hM->SetBinContent(30,4);
   hM->SetBinContent(31,2);
   hM->SetBinContent(32,6);
   hM->SetBinContent(33,4);
   hM->SetBinContent(34,6);
   hM->SetBinContent(35,10);
   hM->SetBinContent(36,8);
   hM->SetBinContent(37,6);
   hM->SetBinContent(38,2);
   hM->SetBinContent(39,10);
   hM->SetBinContent(40,2);
   hM->SetBinContent(41,8);
   hM->SetBinContent(42,4);
   hM->SetBinContent(43,4);
   hM->SetBinContent(44,4);
   hM->SetBinContent(45,2);
   hM->SetBinContent(46,2);
   hM->SetBinContent(47,4);
   hM->SetBinContent(48,2);
   hM->SetBinContent(49,8);
   hM->SetBinContent(50,10);
   hM->SetBinContent(51,2);
   hM->SetBinContent(52,12);
   hM->SetBinContent(53,2);
   hM->SetBinContent(54,8);
   hM->SetBinContent(55,6);
   hM->SetBinContent(56,6);
   hM->SetBinContent(57,6);
   hM->SetBinContent(58,6);
   hM->SetBinContent(59,10);
   hM->SetBinContent(60,2);
   hM->SetBinContent(61,6);
   hM->SetBinContent(62,6);
   hM->SetBinContent(63,2);
   hM->SetBinContent(64,2);
   hM->SetBinContent(65,10);
   hM->SetBinContent(66,4);
   hM->SetBinContent(67,4);
   hM->SetBinContent(69,8);
   hM->SetBinContent(70,6);
   hM->SetBinContent(71,12);
   hM->SetBinContent(72,6);
   hM->SetBinContent(73,8);
   hM->SetBinContent(74,6);
   hM->SetBinContent(75,10);
   hM->SetBinContent(76,2);
   hM->SetEntries(402);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 402    ");
   text = ptstats->AddText("Mean  = 0.1387");
   text = ptstats->AddText("RMS   = 0.03191");
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
   fmb->SetChisquare(100.1372);
   fmb->SetNDF(66);
   fmb->GetXaxis()->SetLabelFont(42);
   fmb->GetXaxis()->SetLabelSize(0.035);
   fmb->GetXaxis()->SetTitleSize(0.035);
   fmb->GetXaxis()->SetTitleFont(42);
   fmb->GetYaxis()->SetLabelFont(42);
   fmb->GetYaxis()->SetLabelSize(0.035);
   fmb->GetYaxis()->SetTitleSize(0.035);
   fmb->GetYaxis()->SetTitleFont(42);
   fmb->SetParameter(0,13.07478);
   fmb->SetParError(0,4.916389);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,-144.6421);
   fmb->SetParError(1,76.2209);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,556.7877);
   fmb->SetParError(2,284.8386);
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
   text = pt->AddText("Mass, bin (q2,nu,z) = (1,0,3)");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
