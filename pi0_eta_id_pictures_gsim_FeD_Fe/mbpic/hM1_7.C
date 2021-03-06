{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Sep 13 13:38:41 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   c->SetHighLightColor(2);
   c->Range(0.06625,49.86411,0.20375,295.6224);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *hM = new TH1F("hM","Mass, bin (q2,nu,z) = (1,0,2)",75,0.08,0.19);
   hM->SetBinContent(0,306);
   hM->SetBinContent(1,121);
   hM->SetBinContent(2,115);
   hM->SetBinContent(3,110);
   hM->SetBinContent(4,127);
   hM->SetBinContent(5,120);
   hM->SetBinContent(6,138);
   hM->SetBinContent(7,110);
   hM->SetBinContent(8,135);
   hM->SetBinContent(9,116);
   hM->SetBinContent(10,93);
   hM->SetBinContent(11,131);
   hM->SetBinContent(12,130);
   hM->SetBinContent(13,119);
   hM->SetBinContent(14,110);
   hM->SetBinContent(15,119);
   hM->SetBinContent(16,147);
   hM->SetBinContent(17,134);
   hM->SetBinContent(18,97);
   hM->SetBinContent(19,127);
   hM->SetBinContent(20,157);
   hM->SetBinContent(21,123);
   hM->SetBinContent(22,142);
   hM->SetBinContent(23,135);
   hM->SetBinContent(24,147);
   hM->SetBinContent(25,139);
   hM->SetBinContent(26,135);
   hM->SetBinContent(27,130);
   hM->SetBinContent(28,131);
   hM->SetBinContent(29,156);
   hM->SetBinContent(30,134);
   hM->SetBinContent(31,143);
   hM->SetBinContent(32,164);
   hM->SetBinContent(33,112);
   hM->SetBinContent(34,187);
   hM->SetBinContent(35,144);
   hM->SetBinContent(36,171);
   hM->SetBinContent(37,160);
   hM->SetBinContent(38,176);
   hM->SetBinContent(39,142);
   hM->SetBinContent(40,205);
   hM->SetBinContent(41,175);
   hM->SetBinContent(42,194);
   hM->SetBinContent(43,161);
   hM->SetBinContent(44,167);
   hM->SetBinContent(45,177);
   hM->SetBinContent(46,160);
   hM->SetBinContent(47,202);
   hM->SetBinContent(48,192);
   hM->SetBinContent(49,180);
   hM->SetBinContent(50,165);
   hM->SetBinContent(51,180);
   hM->SetBinContent(52,202);
   hM->SetBinContent(53,155);
   hM->SetBinContent(54,185);
   hM->SetBinContent(55,158);
   hM->SetBinContent(56,174);
   hM->SetBinContent(57,174);
   hM->SetBinContent(58,201);
   hM->SetBinContent(59,188);
   hM->SetBinContent(60,164);
   hM->SetBinContent(61,157);
   hM->SetBinContent(62,204);
   hM->SetBinContent(63,180);
   hM->SetBinContent(64,194);
   hM->SetBinContent(65,181);
   hM->SetBinContent(66,169);
   hM->SetBinContent(67,190);
   hM->SetBinContent(68,209);
   hM->SetBinContent(69,220);
   hM->SetBinContent(70,192);
   hM->SetBinContent(71,217);
   hM->SetBinContent(72,167);
   hM->SetBinContent(73,246);
   hM->SetBinContent(74,166);
   hM->SetBinContent(75,187);
   hM->SetBinContent(76,176);
   hM->SetEntries(12347);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 12347  ");
   text = ptstats->AddText("Mean  = 0.1404");
   text = ptstats->AddText("RMS   = 0.03112");
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
   fmb->SetChisquare(154.9536);
   fmb->SetNDF(72);
   fmb->GetXaxis()->SetLabelFont(42);
   fmb->GetXaxis()->SetLabelSize(0.035);
   fmb->GetXaxis()->SetTitleSize(0.035);
   fmb->GetXaxis()->SetTitleFont(42);
   fmb->GetYaxis()->SetLabelFont(42);
   fmb->GetYaxis()->SetLabelSize(0.035);
   fmb->GetYaxis()->SetTitleSize(0.035);
   fmb->GetYaxis()->SetTitleFont(42);
   fmb->SetParameter(0,19.55728);
   fmb->SetParError(0,27.23204);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1210.987);
   fmb->SetParError(1,425.8636);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1398.966);
   fmb->SetParError(2,1590.564);
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
   text = pt->AddText("Mass, bin (q2,nu,z) = (1,0,2)");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
