{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Sep 13 13:41:38 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   c->SetHighLightColor(2);
   c->Range(0.06625,59.43566,0.20375,388.4652);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *hM = new TH1F("hM","Mass, bin (q2,nu,z) = (2,0,4)",75,0.08,0.19);
   hM->SetBinContent(0,381);
   hM->SetBinContent(1,162);
   hM->SetBinContent(2,151);
   hM->SetBinContent(3,166);
   hM->SetBinContent(4,167);
   hM->SetBinContent(5,115);
   hM->SetBinContent(6,135);
   hM->SetBinContent(7,170);
   hM->SetBinContent(8,152);
   hM->SetBinContent(9,151);
   hM->SetBinContent(10,158);
   hM->SetBinContent(11,192);
   hM->SetBinContent(12,191);
   hM->SetBinContent(13,199);
   hM->SetBinContent(14,173);
   hM->SetBinContent(15,157);
   hM->SetBinContent(16,174);
   hM->SetBinContent(17,174);
   hM->SetBinContent(18,246);
   hM->SetBinContent(19,195);
   hM->SetBinContent(20,212);
   hM->SetBinContent(21,195);
   hM->SetBinContent(22,168);
   hM->SetBinContent(23,226);
   hM->SetBinContent(24,171);
   hM->SetBinContent(25,209);
   hM->SetBinContent(26,208);
   hM->SetBinContent(27,216);
   hM->SetBinContent(28,195);
   hM->SetBinContent(29,235);
   hM->SetBinContent(30,213);
   hM->SetBinContent(31,231);
   hM->SetBinContent(32,235);
   hM->SetBinContent(33,225);
   hM->SetBinContent(34,242);
   hM->SetBinContent(35,243);
   hM->SetBinContent(36,233);
   hM->SetBinContent(37,233);
   hM->SetBinContent(38,268);
   hM->SetBinContent(39,247);
   hM->SetBinContent(40,280);
   hM->SetBinContent(41,252);
   hM->SetBinContent(42,229);
   hM->SetBinContent(43,215);
   hM->SetBinContent(44,244);
   hM->SetBinContent(45,241);
   hM->SetBinContent(46,256);
   hM->SetBinContent(47,236);
   hM->SetBinContent(48,246);
   hM->SetBinContent(49,223);
   hM->SetBinContent(50,263);
   hM->SetBinContent(51,276);
   hM->SetBinContent(52,280);
   hM->SetBinContent(53,259);
   hM->SetBinContent(54,266);
   hM->SetBinContent(55,286);
   hM->SetBinContent(56,272);
   hM->SetBinContent(57,287);
   hM->SetBinContent(58,282);
   hM->SetBinContent(59,282);
   hM->SetBinContent(60,243);
   hM->SetBinContent(61,272);
   hM->SetBinContent(62,245);
   hM->SetBinContent(63,315);
   hM->SetBinContent(64,270);
   hM->SetBinContent(65,311);
   hM->SetBinContent(66,325);
   hM->SetBinContent(67,287);
   hM->SetBinContent(68,260);
   hM->SetBinContent(69,264);
   hM->SetBinContent(70,274);
   hM->SetBinContent(71,256);
   hM->SetBinContent(72,325);
   hM->SetBinContent(73,248);
   hM->SetBinContent(74,287);
   hM->SetBinContent(75,289);
   hM->SetBinContent(76,240);
   hM->SetEntries(17900);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 17900  ");
   text = ptstats->AddText("Mean  = 0.1409");
   text = ptstats->AddText("RMS   = 0.03073");
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
   fmb->SetChisquare(142.0783);
   fmb->SetNDF(72);
   fmb->GetXaxis()->SetLabelFont(42);
   fmb->GetXaxis()->SetLabelSize(0.035);
   fmb->GetXaxis()->SetTitleSize(0.035);
   fmb->GetXaxis()->SetTitleFont(42);
   fmb->GetYaxis()->SetLabelFont(42);
   fmb->GetYaxis()->SetLabelSize(0.035);
   fmb->GetYaxis()->SetTitleSize(0.035);
   fmb->GetYaxis()->SetTitleFont(42);
   fmb->SetParameter(0,-100.2511);
   fmb->SetParError(0,32.04619);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,3646.516);
   fmb->SetParError(1,504.2982);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-8502.832);
   fmb->SetParError(2,1891.49);
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
