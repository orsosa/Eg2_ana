{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Dec 20 13:48:38 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   c->SetHighLightColor(2);
   c->Range(0.425,-69.3649,0.675,624.2841);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *hM = new TH1F("hM","Mass, bin (q2,nu,z) = (0,0,1)",75,0.45,0.65);
   hM->SetBinContent(0,17313);
   hM->SetBinContent(1,478);
   hM->SetBinContent(2,506);
   hM->SetBinContent(3,468);
   hM->SetBinContent(4,388);
   hM->SetBinContent(5,456);
   hM->SetBinContent(6,482);
   hM->SetBinContent(7,420);
   hM->SetBinContent(8,454);
   hM->SetBinContent(9,401);
   hM->SetBinContent(10,384);
   hM->SetBinContent(11,395);
   hM->SetBinContent(12,384);
   hM->SetBinContent(13,357);
   hM->SetBinContent(14,410);
   hM->SetBinContent(15,375);
   hM->SetBinContent(16,358);
   hM->SetBinContent(17,356);
   hM->SetBinContent(18,314);
   hM->SetBinContent(19,314);
   hM->SetBinContent(20,271);
   hM->SetBinContent(21,321);
   hM->SetBinContent(22,254);
   hM->SetBinContent(23,274);
   hM->SetBinContent(24,231);
   hM->SetBinContent(25,242);
   hM->SetBinContent(26,197);
   hM->SetBinContent(27,215);
   hM->SetBinContent(28,170);
   hM->SetBinContent(29,154);
   hM->SetBinContent(30,119);
   hM->SetBinContent(31,90);
   hM->SetBinContent(32,38);
   hM->SetEntries(27589);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 27589  ");
   text = ptstats->AddText("Mean  = 0.4838");
   text = ptstats->AddText("RMS   = 0.02207");
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
   fmb->SetChisquare(73.84674);
   fmb->SetNDF(29);
   fmb->GetXaxis()->SetLabelFont(42);
   fmb->GetXaxis()->SetLabelSize(0.035);
   fmb->GetXaxis()->SetTitleSize(0.035);
   fmb->GetXaxis()->SetTitleFont(42);
   fmb->GetYaxis()->SetLabelFont(42);
   fmb->GetYaxis()->SetLabelSize(0.035);
   fmb->GetYaxis()->SetTitleSize(0.035);
   fmb->GetYaxis()->SetTitleFont(42);
   fmb->SetParameter(0,-11506);
   fmb->SetParError(0,1230.778);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,52912.41);
   fmb->SetParError(1,4944.771);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-58535.97);
   fmb->SetParError(2,4954.659);
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
   text = pt->AddText("Mass, bin (q2,nu,z) = (0,0,1)");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
