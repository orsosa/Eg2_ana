{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:35:30 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-140.4661,0.350906,1264.195);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin2 = new TH1F("hM_bin2","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin2->SetBinContent(13,2);
   hM_bin2->SetBinContent(14,10);
   hM_bin2->SetBinContent(15,23);
   hM_bin2->SetBinContent(16,34);
   hM_bin2->SetBinContent(17,44);
   hM_bin2->SetBinContent(18,58);
   hM_bin2->SetBinContent(19,71);
   hM_bin2->SetBinContent(20,79);
   hM_bin2->SetBinContent(21,86);
   hM_bin2->SetBinContent(22,84);
   hM_bin2->SetBinContent(23,109);
   hM_bin2->SetBinContent(24,130);
   hM_bin2->SetBinContent(25,110);
   hM_bin2->SetBinContent(26,106);
   hM_bin2->SetBinContent(27,137);
   hM_bin2->SetBinContent(28,125);
   hM_bin2->SetBinContent(29,136);
   hM_bin2->SetBinContent(30,140);
   hM_bin2->SetBinContent(31,116);
   hM_bin2->SetBinContent(32,153);
   hM_bin2->SetBinContent(33,175);
   hM_bin2->SetBinContent(34,150);
   hM_bin2->SetBinContent(35,186);
   hM_bin2->SetBinContent(36,140);
   hM_bin2->SetBinContent(37,182);
   hM_bin2->SetBinContent(38,170);
   hM_bin2->SetBinContent(39,231);
   hM_bin2->SetBinContent(40,263);
   hM_bin2->SetBinContent(41,266);
   hM_bin2->SetBinContent(42,324);
   hM_bin2->SetBinContent(43,394);
   hM_bin2->SetBinContent(44,476);
   hM_bin2->SetBinContent(45,561);
   hM_bin2->SetBinContent(46,705);
   hM_bin2->SetBinContent(47,712);
   hM_bin2->SetBinContent(48,884);
   hM_bin2->SetBinContent(49,924);
   hM_bin2->SetBinContent(50,996);
   hM_bin2->SetBinContent(51,981);
   hM_bin2->SetBinContent(52,1038);
   hM_bin2->SetBinContent(53,999);
   hM_bin2->SetBinContent(54,796);
   hM_bin2->SetBinContent(55,811);
   hM_bin2->SetBinContent(56,746);
   hM_bin2->SetBinContent(57,668);
   hM_bin2->SetBinContent(58,556);
   hM_bin2->SetBinContent(59,443);
   hM_bin2->SetBinContent(60,360);
   hM_bin2->SetBinContent(61,389);
   hM_bin2->SetBinContent(62,325);
   hM_bin2->SetBinContent(63,266);
   hM_bin2->SetBinContent(64,277);
   hM_bin2->SetBinContent(65,222);
   hM_bin2->SetBinContent(66,198);
   hM_bin2->SetBinContent(67,163);
   hM_bin2->SetBinContent(68,175);
   hM_bin2->SetBinContent(69,185);
   hM_bin2->SetBinContent(70,133);
   hM_bin2->SetBinContent(71,175);
   hM_bin2->SetBinContent(72,143);
   hM_bin2->SetBinContent(73,126);
   hM_bin2->SetBinContent(74,133);
   hM_bin2->SetBinContent(75,138);
   hM_bin2->SetBinContent(76,137);
   hM_bin2->SetBinContent(77,133);
   hM_bin2->SetBinContent(78,142);
   hM_bin2->SetBinContent(79,135);
   hM_bin2->SetBinContent(80,131);
   hM_bin2->SetBinContent(81,104);
   hM_bin2->SetBinContent(82,123);
   hM_bin2->SetBinContent(83,111);
   hM_bin2->SetBinContent(84,108);
   hM_bin2->SetBinContent(85,107);
   hM_bin2->SetBinContent(86,134);
   hM_bin2->SetBinContent(87,110);
   hM_bin2->SetBinContent(88,116);
   hM_bin2->SetBinContent(89,121);
   hM_bin2->SetBinContent(90,102);
   hM_bin2->SetBinContent(91,110);
   hM_bin2->SetBinContent(92,99);
   hM_bin2->SetBinContent(93,100);
   hM_bin2->SetBinContent(94,88);
   hM_bin2->SetBinContent(95,101);
   hM_bin2->SetBinContent(96,109);
   hM_bin2->SetBinContent(97,116);
   hM_bin2->SetBinContent(98,118);
   hM_bin2->SetBinContent(99,98);
   hM_bin2->SetBinContent(100,122);
   hM_bin2->SetBinContent(101,5602);
   hM_bin2->SetEntries(28415);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08052258,0.196456);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(80.25693);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,114.4623);
   fsig->SetParError(0,13.18467);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,283.9834);
   fsig->SetParError(1,91.30213);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.000546569);
   fsig->SetParError(2,6317.854);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,821.9922);
   fsig->SetParError(3,11.32445);
   fsig->SetParLimits(3,0,2076);
   fsig->SetParameter(4,0.1383329);
   fsig->SetParError(4,0.0002868894);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,8.171628e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin2->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin2");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 28415  ");
   text = ptstats->AddText("Mean  =   0.15");
   text = ptstats->AddText("RMS   = 0.05718");
   text = ptstats->AddText("#chi^{2} / ndf = 80.26 / 28");
   text = ptstats->AddText("p0       = 114.5 #pm 13.2 ");
   text = ptstats->AddText("p1       =   284 #pm 91.3 ");
   text = ptstats->AddText("p2       = -0.0005466 #pm 6317.8540039 ");
   text = ptstats->AddText("p3       =   822 #pm 11.3 ");
   text = ptstats->AddText("p4       = 0.1383 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00008 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin2);

   ci = TColor::GetColor("#0000ff");
   hM_bin2->SetMarkerColor(ci);
   hM_bin2->SetMarkerStyle(24);
   hM_bin2->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin2->GetXaxis()->SetLabelFont(42);
   hM_bin2->GetXaxis()->SetLabelSize(0.035);
   hM_bin2->GetXaxis()->SetTitleSize(0.035);
   hM_bin2->GetXaxis()->SetTitleFont(42);
   hM_bin2->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin2->GetYaxis()->SetLabelFont(42);
   hM_bin2->GetYaxis()->SetLabelSize(0.035);
   hM_bin2->GetYaxis()->SetTitleSize(0.035);
   hM_bin2->GetYaxis()->SetTitleFont(42);
   hM_bin2->GetZaxis()->SetLabelFont(42);
   hM_bin2->GetZaxis()->SetLabelSize(0.035);
   hM_bin2->GetZaxis()->SetTitleSize(0.035);
   hM_bin2->GetZaxis()->SetTitleFont(42);
   hM_bin2->Draw("e");
   
   TF1 *fmb = new TF1("fmb","pol2",0.0628746,0.2077914);
   fmb->SetFillColor(19);
   fmb->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   fmb->SetLineColor(ci);
   fmb->SetLineWidth(3);
   fmb->SetLineStyle(2);
   fmb->GetXaxis()->SetLabelFont(42);
   fmb->GetXaxis()->SetLabelSize(0.035);
   fmb->GetXaxis()->SetTitleSize(0.035);
   fmb->GetXaxis()->SetTitleFont(42);
   fmb->GetYaxis()->SetLabelFont(42);
   fmb->GetYaxis()->SetLabelSize(0.035);
   fmb->GetYaxis()->SetTitleSize(0.035);
   fmb->GetYaxis()->SetTitleFont(42);
   fmb->SetParameter(0,114.4623);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,283.9834);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.000546569);
   fmb->SetParError(2,0);
   fmb->SetParLimits(2,0,0);
   fmb->Draw("same");
   
   TF1 *fpeak = new TF1("fpeak","gaus",0.0628746,0.2077914);
   fpeak->SetFillColor(19);
   fpeak->SetFillStyle(0);
   fpeak->SetLineWidth(3);
   fpeak->SetLineStyle(2);
   fpeak->GetXaxis()->SetLabelFont(42);
   fpeak->GetXaxis()->SetLabelSize(0.035);
   fpeak->GetXaxis()->SetTitleSize(0.035);
   fpeak->GetXaxis()->SetTitleFont(42);
   fpeak->GetYaxis()->SetLabelFont(42);
   fpeak->GetYaxis()->SetLabelSize(0.035);
   fpeak->GetYaxis()->SetTitleSize(0.035);
   fpeak->GetYaxis()->SetTitleFont(42);
   fpeak->SetParameter(0,821.9922);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1383329);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.01932224);
   fpeak->SetParError(2,0);
   fpeak->SetParLimits(2,0,0);
   fpeak->Draw("same");
   
   TPaveText *pt = new TPaveText(0.01,0.9320629,0.08904523,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   text = pt->AddText("M_{#gamma #gamma}");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
