{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Dec 20 13:35:37 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   c->SetHighLightColor(2);
   c->Range(0.425,2.818663,0.675,83.0843);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *hM = new TH1F("hM","Mass, bin (q2,nu,z) = (1,0,2)",75,0.45,0.65);
   hM->SetBinContent(0,1620);
   hM->SetBinContent(1,64);
   hM->SetBinContent(2,60);
   hM->SetBinContent(3,54);
   hM->SetBinContent(4,44);
   hM->SetBinContent(5,62);
   hM->SetBinContent(6,40);
   hM->SetBinContent(7,40);
   hM->SetBinContent(8,44);
   hM->SetBinContent(9,36);
   hM->SetBinContent(10,36);
   hM->SetBinContent(11,44);
   hM->SetBinContent(12,36);
   hM->SetBinContent(13,50);
   hM->SetBinContent(14,54);
   hM->SetBinContent(15,40);
   hM->SetBinContent(16,48);
   hM->SetBinContent(17,42);
   hM->SetBinContent(18,60);
   hM->SetBinContent(19,46);
   hM->SetBinContent(20,48);
   hM->SetBinContent(21,40);
   hM->SetBinContent(22,48);
   hM->SetBinContent(23,48);
   hM->SetBinContent(24,32);
   hM->SetBinContent(25,28);
   hM->SetBinContent(26,42);
   hM->SetBinContent(27,22);
   hM->SetBinContent(28,40);
   hM->SetBinContent(29,42);
   hM->SetBinContent(30,30);
   hM->SetBinContent(31,54);
   hM->SetBinContent(32,46);
   hM->SetBinContent(33,20);
   hM->SetBinContent(34,34);
   hM->SetBinContent(35,32);
   hM->SetBinContent(36,46);
   hM->SetBinContent(37,48);
   hM->SetBinContent(38,64);
   hM->SetBinContent(39,18);
   hM->SetBinContent(40,46);
   hM->SetBinContent(41,34);
   hM->SetBinContent(42,42);
   hM->SetBinContent(43,38);
   hM->SetBinContent(44,38);
   hM->SetBinContent(45,46);
   hM->SetBinContent(46,38);
   hM->SetBinContent(47,44);
   hM->SetBinContent(48,38);
   hM->SetBinContent(49,44);
   hM->SetBinContent(50,32);
   hM->SetBinContent(51,28);
   hM->SetBinContent(52,28);
   hM->SetBinContent(53,26);
   hM->SetBinContent(54,38);
   hM->SetBinContent(55,28);
   hM->SetBinContent(56,32);
   hM->SetBinContent(57,32);
   hM->SetBinContent(58,30);
   hM->SetBinContent(59,38);
   hM->SetBinContent(60,44);
   hM->SetBinContent(61,26);
   hM->SetBinContent(62,36);
   hM->SetBinContent(63,26);
   hM->SetBinContent(64,24);
   hM->SetBinContent(65,34);
   hM->SetBinContent(66,34);
   hM->SetBinContent(67,20);
   hM->SetBinContent(68,20);
   hM->SetBinContent(69,32);
   hM->SetBinContent(70,34);
   hM->SetBinContent(71,24);
   hM->SetBinContent(72,34);
   hM->SetBinContent(73,32);
   hM->SetBinContent(74,32);
   hM->SetBinContent(75,22);
   hM->SetBinContent(76,516);
   hM->SetEntries(5012);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 5012   ");
   text = ptstats->AddText("Mean  = 0.5403");
   text = ptstats->AddText("RMS   = 0.05721");
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
   fmb->SetChisquare(153.7381);
   fmb->SetNDF(72);
   fmb->GetXaxis()->SetLabelFont(42);
   fmb->GetXaxis()->SetLabelSize(0.035);
   fmb->GetXaxis()->SetTitleSize(0.035);
   fmb->GetXaxis()->SetTitleFont(42);
   fmb->GetYaxis()->SetLabelFont(42);
   fmb->GetYaxis()->SetLabelSize(0.035);
   fmb->GetYaxis()->SetTitleSize(0.035);
   fmb->GetYaxis()->SetTitleFont(42);
   fmb->SetParameter(0,186.2609);
   fmb->SetParError(0,71.79943);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,-442.3553);
   fmb->SetParError(1,260.8328);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,305.1712);
   fmb->SetParError(2,234.9082);
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
