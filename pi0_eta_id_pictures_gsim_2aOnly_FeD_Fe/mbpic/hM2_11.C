{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Oct 11 11:07:10 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   c->SetHighLightColor(2);
   c->Range(0.06625,129.6706,0.20375,464.1383);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *hM = new TH1F("hM","Mass, bin (q2,nu,z) = (2,0,4)",75,0.08,0.19);
   hM->SetBinContent(0,709);
   hM->SetBinContent(1,193);
   hM->SetBinContent(2,217);
   hM->SetBinContent(3,236);
   hM->SetBinContent(4,240);
   hM->SetBinContent(5,245);
   hM->SetBinContent(6,236);
   hM->SetBinContent(7,243);
   hM->SetBinContent(8,217);
   hM->SetBinContent(9,242);
   hM->SetBinContent(10,225);
   hM->SetBinContent(11,232);
   hM->SetBinContent(12,189);
   hM->SetBinContent(13,227);
   hM->SetBinContent(14,231);
   hM->SetBinContent(15,309);
   hM->SetBinContent(16,258);
   hM->SetBinContent(17,281);
   hM->SetBinContent(18,283);
   hM->SetBinContent(19,272);
   hM->SetBinContent(20,253);
   hM->SetBinContent(21,292);
   hM->SetBinContent(22,265);
   hM->SetBinContent(23,275);
   hM->SetBinContent(24,290);
   hM->SetBinContent(25,280);
   hM->SetBinContent(26,292);
   hM->SetBinContent(27,280);
   hM->SetBinContent(28,310);
   hM->SetBinContent(29,346);
   hM->SetBinContent(30,325);
   hM->SetBinContent(31,274);
   hM->SetBinContent(32,294);
   hM->SetBinContent(33,276);
   hM->SetBinContent(34,339);
   hM->SetBinContent(35,323);
   hM->SetBinContent(36,282);
   hM->SetBinContent(37,291);
   hM->SetBinContent(38,289);
   hM->SetBinContent(39,326);
   hM->SetBinContent(40,297);
   hM->SetBinContent(41,348);
   hM->SetBinContent(42,305);
   hM->SetBinContent(43,360);
   hM->SetBinContent(44,315);
   hM->SetBinContent(45,316);
   hM->SetBinContent(46,288);
   hM->SetBinContent(47,346);
   hM->SetBinContent(48,337);
   hM->SetBinContent(49,281);
   hM->SetBinContent(50,278);
   hM->SetBinContent(51,285);
   hM->SetBinContent(52,311);
   hM->SetBinContent(53,320);
   hM->SetBinContent(54,361);
   hM->SetBinContent(55,311);
   hM->SetBinContent(56,306);
   hM->SetBinContent(57,334);
   hM->SetBinContent(58,373);
   hM->SetBinContent(59,306);
   hM->SetBinContent(60,349);
   hM->SetBinContent(61,398);
   hM->SetBinContent(62,369);
   hM->SetBinContent(63,312);
   hM->SetBinContent(64,353);
   hM->SetBinContent(65,373);
   hM->SetBinContent(66,306);
   hM->SetBinContent(67,326);
   hM->SetBinContent(68,348);
   hM->SetBinContent(69,319);
   hM->SetBinContent(70,308);
   hM->SetBinContent(71,334);
   hM->SetBinContent(72,316);
   hM->SetBinContent(73,316);
   hM->SetBinContent(74,348);
   hM->SetBinContent(75,332);
   hM->SetBinContent(76,387);
   hM->SetEntries(23359);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 23359  ");
   text = ptstats->AddText("Mean  = 0.1388");
   text = ptstats->AddText("RMS   = 0.03095");
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
   fmb->SetChisquare(154.7431);
   fmb->SetNDF(72);
   fmb->GetXaxis()->SetLabelFont(42);
   fmb->GetXaxis()->SetLabelSize(0.035);
   fmb->GetXaxis()->SetTitleSize(0.035);
   fmb->GetXaxis()->SetTitleFont(42);
   fmb->GetYaxis()->SetLabelFont(42);
   fmb->GetYaxis()->SetLabelSize(0.035);
   fmb->GetYaxis()->SetTitleSize(0.035);
   fmb->GetYaxis()->SetTitleFont(42);
   fmb->SetParameter(0,-78.33308);
   fmb->SetParError(0,37.06666);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,4614.62);
   fmb->SetParError(1,579.1782);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-12991.31);
   fmb->SetParError(2,2159.225);
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
