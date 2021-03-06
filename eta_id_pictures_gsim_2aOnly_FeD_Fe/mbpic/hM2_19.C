{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Dec 20 13:53:39 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   c->SetHighLightColor(2);
   c->Range(0.425,509.7956,0.675,1106.98);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *hM = new TH1F("hM","Mass, bin (q2,nu,z) = (2,0,4)",75,0.45,0.65);
   hM->SetBinContent(0,30037);
   hM->SetBinContent(1,958);
   hM->SetBinContent(2,888);
   hM->SetBinContent(3,859);
   hM->SetBinContent(4,989);
   hM->SetBinContent(5,925);
   hM->SetBinContent(6,969);
   hM->SetBinContent(7,916);
   hM->SetBinContent(8,923);
   hM->SetBinContent(9,858);
   hM->SetBinContent(10,993);
   hM->SetBinContent(11,893);
   hM->SetBinContent(12,852);
   hM->SetBinContent(13,876);
   hM->SetBinContent(14,912);
   hM->SetBinContent(15,908);
   hM->SetBinContent(16,902);
   hM->SetBinContent(17,882);
   hM->SetBinContent(18,988);
   hM->SetBinContent(19,884);
   hM->SetBinContent(20,880);
   hM->SetBinContent(21,864);
   hM->SetBinContent(22,912);
   hM->SetBinContent(23,858);
   hM->SetBinContent(24,955);
   hM->SetBinContent(25,865);
   hM->SetBinContent(26,896);
   hM->SetBinContent(27,874);
   hM->SetBinContent(28,860);
   hM->SetBinContent(29,859);
   hM->SetBinContent(30,804);
   hM->SetBinContent(31,894);
   hM->SetBinContent(32,916);
   hM->SetBinContent(33,833);
   hM->SetBinContent(34,854);
   hM->SetBinContent(35,932);
   hM->SetBinContent(36,869);
   hM->SetBinContent(37,873);
   hM->SetBinContent(38,848);
   hM->SetBinContent(39,803);
   hM->SetBinContent(40,838);
   hM->SetBinContent(41,886);
   hM->SetBinContent(42,845);
   hM->SetBinContent(43,843);
   hM->SetBinContent(44,782);
   hM->SetBinContent(45,842);
   hM->SetBinContent(46,692);
   hM->SetBinContent(47,781);
   hM->SetBinContent(48,750);
   hM->SetBinContent(49,799);
   hM->SetBinContent(50,901);
   hM->SetBinContent(51,834);
   hM->SetBinContent(52,731);
   hM->SetBinContent(53,716);
   hM->SetBinContent(54,792);
   hM->SetBinContent(55,751);
   hM->SetBinContent(56,786);
   hM->SetBinContent(57,727);
   hM->SetBinContent(58,713);
   hM->SetBinContent(59,774);
   hM->SetBinContent(60,756);
   hM->SetBinContent(61,703);
   hM->SetBinContent(62,691);
   hM->SetBinContent(63,724);
   hM->SetBinContent(64,718);
   hM->SetBinContent(65,729);
   hM->SetBinContent(66,750);
   hM->SetBinContent(67,739);
   hM->SetBinContent(68,677);
   hM->SetBinContent(69,708);
   hM->SetBinContent(70,730);
   hM->SetBinContent(71,616);
   hM->SetBinContent(72,706);
   hM->SetBinContent(73,677);
   hM->SetBinContent(74,689);
   hM->SetBinContent(75,685);
   hM->SetBinContent(76,14784);
   hM->SetEntries(106726);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 106726 ");
   text = ptstats->AddText("Mean  = 0.5445");
   text = ptstats->AddText("RMS   = 0.05704");
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
   fmb->SetChisquare(151.9366);
   fmb->SetNDF(72);
   fmb->GetXaxis()->SetLabelFont(42);
   fmb->GetXaxis()->SetLabelSize(0.035);
   fmb->GetXaxis()->SetTitleSize(0.035);
   fmb->GetXaxis()->SetTitleFont(42);
   fmb->GetYaxis()->SetLabelFont(42);
   fmb->GetYaxis()->SetLabelSize(0.035);
   fmb->GetYaxis()->SetTitleSize(0.035);
   fmb->GetYaxis()->SetTitleFont(42);
   fmb->SetParameter(0,264.9292);
   fmb->SetParError(0,334.4557);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,3436.624);
   fmb->SetParError(1,1220.963);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-4354.335);
   fmb->SetParError(2,1104.535);
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
