{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Oct 11 11:03:54 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   c->SetHighLightColor(2);
   c->Range(0.06625,-2.919347,0.20375,26.27412);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *hM = new TH1F("hM","Mass, bin (q2,nu,z) = (2,0,4)",75,0.08,0.19);
   hM->SetBinContent(0,18);
   hM->SetBinContent(1,4);
   hM->SetBinContent(2,2);
   hM->SetBinContent(3,2);
   hM->SetBinContent(4,4);
   hM->SetBinContent(6,8);
   hM->SetBinContent(7,4);
   hM->SetBinContent(8,2);
   hM->SetBinContent(9,2);
   hM->SetBinContent(10,4);
   hM->SetBinContent(11,2);
   hM->SetBinContent(12,10);
   hM->SetBinContent(13,4);
   hM->SetBinContent(14,6);
   hM->SetBinContent(15,2);
   hM->SetBinContent(16,4);
   hM->SetBinContent(17,4);
   hM->SetBinContent(18,2);
   hM->SetBinContent(19,4);
   hM->SetBinContent(20,4);
   hM->SetBinContent(21,6);
   hM->SetBinContent(22,4);
   hM->SetBinContent(23,6);
   hM->SetBinContent(24,2);
   hM->SetBinContent(25,6);
   hM->SetBinContent(26,8);
   hM->SetBinContent(27,14);
   hM->SetBinContent(28,4);
   hM->SetBinContent(29,4);
   hM->SetBinContent(30,4);
   hM->SetBinContent(31,8);
   hM->SetBinContent(32,6);
   hM->SetBinContent(33,4);
   hM->SetBinContent(34,14);
   hM->SetBinContent(35,10);
   hM->SetBinContent(36,10);
   hM->SetBinContent(37,2);
   hM->SetBinContent(38,12);
   hM->SetBinContent(39,6);
   hM->SetBinContent(40,8);
   hM->SetBinContent(41,12);
   hM->SetBinContent(42,8);
   hM->SetBinContent(43,4);
   hM->SetBinContent(44,18);
   hM->SetBinContent(45,10);
   hM->SetBinContent(46,6);
   hM->SetBinContent(47,4);
   hM->SetBinContent(48,14);
   hM->SetBinContent(49,8);
   hM->SetBinContent(50,12);
   hM->SetBinContent(51,12);
   hM->SetBinContent(52,6);
   hM->SetBinContent(53,2);
   hM->SetBinContent(54,4);
   hM->SetBinContent(55,2);
   hM->SetBinContent(56,12);
   hM->SetBinContent(57,6);
   hM->SetBinContent(58,2);
   hM->SetBinContent(59,8);
   hM->SetBinContent(60,10);
   hM->SetBinContent(61,4);
   hM->SetBinContent(62,10);
   hM->SetBinContent(63,2);
   hM->SetBinContent(64,12);
   hM->SetBinContent(65,8);
   hM->SetBinContent(66,6);
   hM->SetBinContent(68,8);
   hM->SetBinContent(69,4);
   hM->SetBinContent(70,12);
   hM->SetBinContent(71,10);
   hM->SetBinContent(72,8);
   hM->SetBinContent(73,8);
   hM->SetBinContent(74,6);
   hM->SetBinContent(75,6);
   hM->SetBinContent(76,12);
   hM->SetEntries(506);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 506    ");
   text = ptstats->AddText("Mean  = 0.1414");
   text = ptstats->AddText("RMS   = 0.02868");
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
   fmb->SetChisquare(128.1183);
   fmb->SetNDF(70);
   fmb->GetXaxis()->SetLabelFont(42);
   fmb->GetXaxis()->SetLabelSize(0.035);
   fmb->GetXaxis()->SetTitleSize(0.035);
   fmb->GetXaxis()->SetTitleFont(42);
   fmb->GetYaxis()->SetLabelFont(42);
   fmb->GetYaxis()->SetLabelSize(0.035);
   fmb->GetYaxis()->SetTitleSize(0.035);
   fmb->GetYaxis()->SetTitleFont(42);
   fmb->SetParameter(0,-5.773732);
   fmb->SetParError(0,4.848419);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,132.4147);
   fmb->SetParError(1,76.91368);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-382.1673);
   fmb->SetParError(2,290.1702);
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
