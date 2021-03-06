{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Sep 13 13:41:37 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   c->SetHighLightColor(2);
   c->Range(0.06625,344.6571,0.20375,897.5061);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *hM = new TH1F("hM","Mass, bin (q2,nu,z) = (2,0,4)",75,0.08,0.19);
   hM->SetBinContent(0,1201);
   hM->SetBinContent(1,441);
   hM->SetBinContent(2,467);
   hM->SetBinContent(3,497);
   hM->SetBinContent(4,456);
   hM->SetBinContent(5,488);
   hM->SetBinContent(6,474);
   hM->SetBinContent(7,496);
   hM->SetBinContent(8,484);
   hM->SetBinContent(9,445);
   hM->SetBinContent(10,503);
   hM->SetBinContent(11,522);
   hM->SetBinContent(12,504);
   hM->SetBinContent(13,538);
   hM->SetBinContent(14,574);
   hM->SetBinContent(15,543);
   hM->SetBinContent(16,566);
   hM->SetBinContent(17,573);
   hM->SetBinContent(18,561);
   hM->SetBinContent(19,620);
   hM->SetBinContent(20,568);
   hM->SetBinContent(21,595);
   hM->SetBinContent(22,569);
   hM->SetBinContent(23,538);
   hM->SetBinContent(24,581);
   hM->SetBinContent(25,637);
   hM->SetBinContent(26,617);
   hM->SetBinContent(27,651);
   hM->SetBinContent(28,593);
   hM->SetBinContent(29,629);
   hM->SetBinContent(30,635);
   hM->SetBinContent(31,599);
   hM->SetBinContent(32,671);
   hM->SetBinContent(33,605);
   hM->SetBinContent(34,673);
   hM->SetBinContent(35,641);
   hM->SetBinContent(36,655);
   hM->SetBinContent(37,702);
   hM->SetBinContent(38,677);
   hM->SetBinContent(39,651);
   hM->SetBinContent(40,662);
   hM->SetBinContent(41,640);
   hM->SetBinContent(42,712);
   hM->SetBinContent(43,615);
   hM->SetBinContent(44,640);
   hM->SetBinContent(45,684);
   hM->SetBinContent(46,793);
   hM->SetBinContent(47,707);
   hM->SetBinContent(48,741);
   hM->SetBinContent(49,680);
   hM->SetBinContent(50,659);
   hM->SetBinContent(51,624);
   hM->SetBinContent(52,752);
   hM->SetBinContent(53,704);
   hM->SetBinContent(54,741);
   hM->SetBinContent(55,641);
   hM->SetBinContent(56,705);
   hM->SetBinContent(57,684);
   hM->SetBinContent(58,675);
   hM->SetBinContent(59,697);
   hM->SetBinContent(60,741);
   hM->SetBinContent(61,717);
   hM->SetBinContent(62,690);
   hM->SetBinContent(63,671);
   hM->SetBinContent(64,686);
   hM->SetBinContent(65,683);
   hM->SetBinContent(66,724);
   hM->SetBinContent(67,687);
   hM->SetBinContent(68,733);
   hM->SetBinContent(69,642);
   hM->SetBinContent(70,698);
   hM->SetBinContent(71,730);
   hM->SetBinContent(72,667);
   hM->SetBinContent(73,694);
   hM->SetBinContent(74,701);
   hM->SetBinContent(75,697);
   hM->SetBinContent(76,623);
   hM->SetEntries(48980);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 48980  ");
   text = ptstats->AddText("Mean  = 0.1386");
   text = ptstats->AddText("RMS   = 0.03086");
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
   fmb->SetChisquare(113.456);
   fmb->SetNDF(72);
   fmb->GetXaxis()->SetLabelFont(42);
   fmb->GetXaxis()->SetLabelSize(0.035);
   fmb->GetXaxis()->SetTitleSize(0.035);
   fmb->GetXaxis()->SetTitleFont(42);
   fmb->GetYaxis()->SetLabelFont(42);
   fmb->GetYaxis()->SetLabelSize(0.035);
   fmb->GetYaxis()->SetTitleSize(0.035);
   fmb->GetYaxis()->SetTitleFont(42);
   fmb->SetParameter(0,-232.6376);
   fmb->SetParError(0,54.05403);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,10955.05);
   fmb->SetParError(1,844.4749);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-32187.14);
   fmb->SetParError(2,3146.763);
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
