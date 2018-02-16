{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Dec 20 13:53:38 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   c->SetHighLightColor(2);
   c->Range(0.425,-51.08715,0.675,459.7843);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *hM = new TH1F("hM","Mass, bin (q2,nu,z) = (2,0,4)",75,0.45,0.65);
   hM->SetBinContent(0,15064);
   hM->SetBinContent(1,350);
   hM->SetBinContent(2,358);
   hM->SetBinContent(3,321);
   hM->SetBinContent(4,370);
   hM->SetBinContent(5,308);
   hM->SetBinContent(6,334);
   hM->SetBinContent(7,293);
   hM->SetBinContent(8,362);
   hM->SetBinContent(9,321);
   hM->SetBinContent(10,298);
   hM->SetBinContent(11,277);
   hM->SetBinContent(12,235);
   hM->SetBinContent(13,264);
   hM->SetBinContent(14,330);
   hM->SetBinContent(15,259);
   hM->SetBinContent(16,255);
   hM->SetBinContent(17,256);
   hM->SetBinContent(18,219);
   hM->SetBinContent(19,239);
   hM->SetBinContent(20,198);
   hM->SetBinContent(21,204);
   hM->SetBinContent(22,197);
   hM->SetBinContent(23,184);
   hM->SetBinContent(24,166);
   hM->SetBinContent(25,160);
   hM->SetBinContent(26,118);
   hM->SetBinContent(27,113);
   hM->SetBinContent(28,114);
   hM->SetBinContent(29,91);
   hM->SetBinContent(30,84);
   hM->SetBinContent(31,36);
   hM->SetEntries(22378);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 22378  ");
   text = ptstats->AddText("Mean  = 0.4825");
   text = ptstats->AddText("RMS   = 0.02134");
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
   fmb->SetChisquare(60.0161);
   fmb->SetNDF(28);
   fmb->GetXaxis()->SetLabelFont(42);
   fmb->GetXaxis()->SetLabelSize(0.035);
   fmb->GetXaxis()->SetTitleSize(0.035);
   fmb->GetXaxis()->SetTitleFont(42);
   fmb->GetYaxis()->SetLabelFont(42);
   fmb->GetYaxis()->SetLabelSize(0.035);
   fmb->GetYaxis()->SetTitleSize(0.035);
   fmb->GetYaxis()->SetTitleFont(42);
   fmb->SetParameter(0,-7052.409);
   fmb->SetParError(0,1159.803);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,33397.4);
   fmb->SetParError(1,4678.472);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-37701.25);
   fmb->SetParError(2,4707.829);
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
