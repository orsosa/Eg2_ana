{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Dec 20 13:35:53 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   c->SetHighLightColor(2);
   c->Range(0.425,-3.46516,0.675,36.63693);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *hM = new TH1F("hM","Mass, bin (q2,nu,z) = (2,0,4)",75,0.45,0.65);
   hM->SetBinContent(0,594);
   hM->SetBinContent(1,14);
   hM->SetBinContent(2,14);
   hM->SetBinContent(3,14);
   hM->SetBinContent(4,12);
   hM->SetBinContent(5,16);
   hM->SetBinContent(6,12);
   hM->SetBinContent(7,18);
   hM->SetBinContent(8,4);
   hM->SetBinContent(9,22);
   hM->SetBinContent(10,20);
   hM->SetBinContent(11,22);
   hM->SetBinContent(12,16);
   hM->SetBinContent(13,14);
   hM->SetBinContent(14,22);
   hM->SetBinContent(15,26);
   hM->SetBinContent(16,18);
   hM->SetBinContent(17,16);
   hM->SetBinContent(18,18);
   hM->SetBinContent(19,14);
   hM->SetBinContent(20,12);
   hM->SetBinContent(21,14);
   hM->SetBinContent(22,22);
   hM->SetBinContent(23,12);
   hM->SetBinContent(24,22);
   hM->SetBinContent(25,14);
   hM->SetBinContent(26,10);
   hM->SetBinContent(27,22);
   hM->SetBinContent(28,10);
   hM->SetBinContent(29,18);
   hM->SetBinContent(30,10);
   hM->SetBinContent(31,18);
   hM->SetBinContent(32,14);
   hM->SetBinContent(33,8);
   hM->SetBinContent(34,22);
   hM->SetBinContent(35,20);
   hM->SetBinContent(36,14);
   hM->SetBinContent(37,10);
   hM->SetBinContent(38,12);
   hM->SetBinContent(39,22);
   hM->SetBinContent(40,18);
   hM->SetBinContent(41,24);
   hM->SetBinContent(42,12);
   hM->SetBinContent(43,10);
   hM->SetBinContent(44,8);
   hM->SetBinContent(45,8);
   hM->SetBinContent(46,12);
   hM->SetBinContent(47,16);
   hM->SetBinContent(48,8);
   hM->SetBinContent(49,10);
   hM->SetBinContent(50,18);
   hM->SetBinContent(51,16);
   hM->SetBinContent(52,16);
   hM->SetBinContent(53,6);
   hM->SetBinContent(54,18);
   hM->SetBinContent(55,12);
   hM->SetBinContent(56,10);
   hM->SetBinContent(57,20);
   hM->SetBinContent(58,14);
   hM->SetBinContent(59,18);
   hM->SetBinContent(60,18);
   hM->SetBinContent(61,16);
   hM->SetBinContent(62,12);
   hM->SetBinContent(63,8);
   hM->SetBinContent(64,16);
   hM->SetBinContent(65,8);
   hM->SetBinContent(66,16);
   hM->SetBinContent(67,8);
   hM->SetBinContent(68,6);
   hM->SetBinContent(69,6);
   hM->SetBinContent(70,4);
   hM->SetBinContent(71,12);
   hM->SetBinContent(72,8);
   hM->SetBinContent(73,18);
   hM->SetBinContent(74,12);
   hM->SetBinContent(75,10);
   hM->SetBinContent(76,210);
   hM->SetEntries(1874);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 1874   ");
   text = ptstats->AddText("Mean  =  0.543");
   text = ptstats->AddText("RMS   = 0.05586");
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
   fmb->SetChisquare(138.6577);
   fmb->SetNDF(72);
   fmb->GetXaxis()->SetLabelFont(42);
   fmb->GetXaxis()->SetLabelSize(0.035);
   fmb->GetXaxis()->SetTitleSize(0.035);
   fmb->GetXaxis()->SetTitleFont(42);
   fmb->GetYaxis()->SetLabelFont(42);
   fmb->GetYaxis()->SetLabelSize(0.035);
   fmb->GetYaxis()->SetTitleSize(0.035);
   fmb->GetYaxis()->SetTitleFont(42);
   fmb->SetParameter(0,-64.58196);
   fmb->SetParError(0,39.90629);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,311.0291);
   fmb->SetParError(1,145.6259);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-307.5738);
   fmb->SetParError(2,131.6116);
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
