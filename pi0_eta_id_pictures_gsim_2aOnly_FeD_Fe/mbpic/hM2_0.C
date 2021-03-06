{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Oct 11 11:07:09 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   c->SetHighLightColor(2);
   c->Range(0.06625,1269.338,0.20375,2561.805);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *hM = new TH1F("hM","Mass, bin (q2,nu,z) = (2,0,4)",75,0.08,0.19);
   hM->SetBinContent(0,5320);
   hM->SetBinContent(1,1484);
   hM->SetBinContent(2,1580);
   hM->SetBinContent(3,1611);
   hM->SetBinContent(4,1589);
   hM->SetBinContent(5,1733);
   hM->SetBinContent(6,1813);
   hM->SetBinContent(7,1791);
   hM->SetBinContent(8,1782);
   hM->SetBinContent(9,1778);
   hM->SetBinContent(10,1816);
   hM->SetBinContent(11,1792);
   hM->SetBinContent(12,1822);
   hM->SetBinContent(13,1850);
   hM->SetBinContent(14,1886);
   hM->SetBinContent(15,1862);
   hM->SetBinContent(16,1862);
   hM->SetBinContent(17,1925);
   hM->SetBinContent(18,1911);
   hM->SetBinContent(19,1941);
   hM->SetBinContent(20,2066);
   hM->SetBinContent(21,2061);
   hM->SetBinContent(22,2061);
   hM->SetBinContent(23,2047);
   hM->SetBinContent(24,2168);
   hM->SetBinContent(25,2207);
   hM->SetBinContent(26,2090);
   hM->SetBinContent(27,2216);
   hM->SetBinContent(28,2131);
   hM->SetBinContent(29,2082);
   hM->SetBinContent(30,2071);
   hM->SetBinContent(31,2214);
   hM->SetBinContent(32,2178);
   hM->SetBinContent(33,2140);
   hM->SetBinContent(34,2251);
   hM->SetBinContent(35,2292);
   hM->SetBinContent(36,2251);
   hM->SetBinContent(37,2315);
   hM->SetBinContent(38,2112);
   hM->SetBinContent(39,2285);
   hM->SetBinContent(40,2290);
   hM->SetBinContent(41,2151);
   hM->SetBinContent(42,2156);
   hM->SetBinContent(43,2184);
   hM->SetBinContent(44,2300);
   hM->SetBinContent(45,2260);
   hM->SetBinContent(46,2183);
   hM->SetBinContent(47,2187);
   hM->SetBinContent(48,2224);
   hM->SetBinContent(49,2099);
   hM->SetBinContent(50,2220);
   hM->SetBinContent(51,2335);
   hM->SetBinContent(52,2166);
   hM->SetBinContent(53,2152);
   hM->SetBinContent(54,2204);
   hM->SetBinContent(55,2211);
   hM->SetBinContent(56,2214);
   hM->SetBinContent(57,2058);
   hM->SetBinContent(58,2193);
   hM->SetBinContent(59,2197);
   hM->SetBinContent(60,2129);
   hM->SetBinContent(61,2089);
   hM->SetBinContent(62,2158);
   hM->SetBinContent(63,2047);
   hM->SetBinContent(64,2136);
   hM->SetBinContent(65,2064);
   hM->SetBinContent(66,2067);
   hM->SetBinContent(67,2126);
   hM->SetBinContent(68,2163);
   hM->SetBinContent(69,2061);
   hM->SetBinContent(70,2084);
   hM->SetBinContent(71,2012);
   hM->SetBinContent(72,1938);
   hM->SetBinContent(73,1956);
   hM->SetBinContent(74,2035);
   hM->SetBinContent(75,1965);
   hM->SetBinContent(76,1834);
   hM->SetEntries(161234);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 161234 ");
   text = ptstats->AddText("Mean  = 0.1367");
   text = ptstats->AddText("RMS   = 0.03071");
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
   fmb->SetChisquare(127.3592);
   fmb->SetNDF(72);
   fmb->GetXaxis()->SetLabelFont(42);
   fmb->GetXaxis()->SetLabelSize(0.035);
   fmb->GetXaxis()->SetTitleSize(0.035);
   fmb->GetXaxis()->SetTitleFont(42);
   fmb->GetYaxis()->SetLabelFont(42);
   fmb->GetYaxis()->SetLabelSize(0.035);
   fmb->GetYaxis()->SetTitleSize(0.035);
   fmb->GetYaxis()->SetTitleFont(42);
   fmb->SetParameter(0,-1116.34);
   fmb->SetParError(0,98.26502);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,45796.65);
   fmb->SetParError(1,1527.378);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-156682.9);
   fmb->SetParError(2,5661.419);
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
