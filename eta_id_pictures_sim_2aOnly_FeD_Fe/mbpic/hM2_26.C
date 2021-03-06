{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Dec 20 13:35:56 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   c->SetHighLightColor(2);
   c->Range(0.425,-2.029663,0.675,18.26697);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *hM = new TH1F("hM","Mass, bin (q2,nu,z) = (2,0,4)",75,0.45,0.65);
   hM->SetBinContent(0,278);
   hM->SetBinContent(1,6);
   hM->SetBinContent(2,8);
   hM->SetBinContent(3,6);
   hM->SetBinContent(4,10);
   hM->SetBinContent(5,2);
   hM->SetBinContent(6,6);
   hM->SetBinContent(7,2);
   hM->SetBinContent(8,6);
   hM->SetBinContent(9,4);
   hM->SetBinContent(10,6);
   hM->SetBinContent(11,10);
   hM->SetBinContent(12,6);
   hM->SetBinContent(13,4);
   hM->SetBinContent(15,6);
   hM->SetBinContent(16,8);
   hM->SetBinContent(18,4);
   hM->SetBinContent(19,2);
   hM->SetBinContent(20,6);
   hM->SetBinContent(22,6);
   hM->SetBinContent(23,4);
   hM->SetBinContent(24,4);
   hM->SetBinContent(25,6);
   hM->SetBinContent(26,4);
   hM->SetBinContent(27,4);
   hM->SetBinContent(28,8);
   hM->SetBinContent(29,6);
   hM->SetBinContent(30,8);
   hM->SetBinContent(31,10);
   hM->SetBinContent(32,4);
   hM->SetBinContent(33,4);
   hM->SetBinContent(35,6);
   hM->SetBinContent(36,2);
   hM->SetBinContent(37,6);
   hM->SetBinContent(38,6);
   hM->SetBinContent(39,4);
   hM->SetBinContent(40,6);
   hM->SetBinContent(41,8);
   hM->SetBinContent(42,2);
   hM->SetBinContent(43,2);
   hM->SetBinContent(44,6);
   hM->SetBinContent(45,6);
   hM->SetBinContent(47,8);
   hM->SetBinContent(48,2);
   hM->SetBinContent(49,8);
   hM->SetBinContent(50,6);
   hM->SetBinContent(51,2);
   hM->SetBinContent(52,2);
   hM->SetBinContent(53,6);
   hM->SetBinContent(54,2);
   hM->SetBinContent(55,6);
   hM->SetBinContent(56,2);
   hM->SetBinContent(57,4);
   hM->SetBinContent(58,6);
   hM->SetBinContent(59,2);
   hM->SetBinContent(60,4);
   hM->SetBinContent(61,12);
   hM->SetBinContent(62,4);
   hM->SetBinContent(63,6);
   hM->SetBinContent(64,6);
   hM->SetBinContent(65,4);
   hM->SetBinContent(66,4);
   hM->SetBinContent(67,8);
   hM->SetBinContent(68,4);
   hM->SetBinContent(71,2);
   hM->SetBinContent(74,2);
   hM->SetBinContent(75,4);
   hM->SetBinContent(76,8);
   hM->SetEntries(626);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 626    ");
   text = ptstats->AddText("Mean  = 0.5418");
   text = ptstats->AddText("RMS   = 0.05587");
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
   fmb->SetChisquare(71.51374);
   fmb->SetNDF(63);
   fmb->GetXaxis()->SetLabelFont(42);
   fmb->GetXaxis()->SetLabelSize(0.035);
   fmb->GetXaxis()->SetTitleSize(0.035);
   fmb->GetXaxis()->SetTitleFont(42);
   fmb->GetYaxis()->SetLabelFont(42);
   fmb->GetYaxis()->SetLabelSize(0.035);
   fmb->GetYaxis()->SetTitleSize(0.035);
   fmb->GetYaxis()->SetTitleFont(42);
   fmb->SetParameter(0,4.981691);
   fmb->SetParError(0,25.06281);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,5.443316);
   fmb->SetParError(1,91.97416);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-12.86886);
   fmb->SetParError(2,83.69473);
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
