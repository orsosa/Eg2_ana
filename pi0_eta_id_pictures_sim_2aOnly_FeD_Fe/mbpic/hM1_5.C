{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Oct 11 11:03:49 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   c->SetHighLightColor(2);
   c->Range(0.06625,-6.50132,0.20375,67.2567);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *hM = new TH1F("hM","Mass, bin (q2,nu,z) = (1,0,0)",75,0.08,0.19);
   hM->SetBinContent(0,64);
   hM->SetBinContent(1,26);
   hM->SetBinContent(2,24);
   hM->SetBinContent(3,22);
   hM->SetBinContent(4,16);
   hM->SetBinContent(5,20);
   hM->SetBinContent(6,22);
   hM->SetBinContent(7,24);
   hM->SetBinContent(8,6);
   hM->SetBinContent(9,24);
   hM->SetBinContent(10,20);
   hM->SetBinContent(11,18);
   hM->SetBinContent(12,20);
   hM->SetBinContent(13,26);
   hM->SetBinContent(14,28);
   hM->SetBinContent(15,18);
   hM->SetBinContent(16,30);
   hM->SetBinContent(17,32);
   hM->SetBinContent(18,20);
   hM->SetBinContent(19,20);
   hM->SetBinContent(20,32);
   hM->SetBinContent(21,20);
   hM->SetBinContent(22,34);
   hM->SetBinContent(23,22);
   hM->SetBinContent(24,22);
   hM->SetBinContent(25,18);
   hM->SetBinContent(26,32);
   hM->SetBinContent(27,22);
   hM->SetBinContent(28,28);
   hM->SetBinContent(29,20);
   hM->SetBinContent(30,24);
   hM->SetBinContent(31,30);
   hM->SetBinContent(32,22);
   hM->SetBinContent(33,36);
   hM->SetBinContent(34,30);
   hM->SetBinContent(35,26);
   hM->SetBinContent(36,20);
   hM->SetBinContent(37,34);
   hM->SetBinContent(38,28);
   hM->SetBinContent(39,26);
   hM->SetBinContent(40,32);
   hM->SetBinContent(41,38);
   hM->SetBinContent(42,36);
   hM->SetBinContent(43,30);
   hM->SetBinContent(44,38);
   hM->SetBinContent(45,14);
   hM->SetBinContent(46,28);
   hM->SetBinContent(47,34);
   hM->SetBinContent(48,22);
   hM->SetBinContent(49,24);
   hM->SetBinContent(50,36);
   hM->SetBinContent(51,32);
   hM->SetBinContent(52,20);
   hM->SetBinContent(53,38);
   hM->SetBinContent(54,36);
   hM->SetBinContent(55,28);
   hM->SetBinContent(56,34);
   hM->SetBinContent(57,50);
   hM->SetBinContent(58,24);
   hM->SetBinContent(59,26);
   hM->SetBinContent(60,36);
   hM->SetBinContent(61,30);
   hM->SetBinContent(62,28);
   hM->SetBinContent(63,30);
   hM->SetBinContent(64,38);
   hM->SetBinContent(65,16);
   hM->SetBinContent(66,38);
   hM->SetBinContent(67,26);
   hM->SetBinContent(68,24);
   hM->SetBinContent(69,36);
   hM->SetBinContent(70,34);
   hM->SetBinContent(71,32);
   hM->SetBinContent(72,24);
   hM->SetBinContent(73,40);
   hM->SetBinContent(74,36);
   hM->SetBinContent(75,20);
   hM->SetBinContent(76,40);
   hM->SetEntries(2154);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 2154   ");
   text = ptstats->AddText("Mean  =  0.139");
   text = ptstats->AddText("RMS   = 0.03088");
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
   fmb->SetChisquare(144.8699);
   fmb->SetNDF(72);
   fmb->GetXaxis()->SetLabelFont(42);
   fmb->GetXaxis()->SetLabelSize(0.035);
   fmb->GetXaxis()->SetTitleSize(0.035);
   fmb->GetXaxis()->SetTitleFont(42);
   fmb->GetYaxis()->SetLabelFont(42);
   fmb->GetYaxis()->SetLabelSize(0.035);
   fmb->GetYaxis()->SetTitleSize(0.035);
   fmb->GetYaxis()->SetTitleFont(42);
   fmb->SetParameter(0,-16.54587);
   fmb->SetParError(0,10.92989);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,532.3179);
   fmb->SetParError(1,171.0658);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1555.403);
   fmb->SetParError(2,637.8696);
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
   text = pt->AddText("Mass, bin (q2,nu,z) = (1,0,0)");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
