{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:28:05 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-79.95577,0.350906,719.6019);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin49 = new TH1F("hM_bin49","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin49->SetBinContent(14,16);
   hM_bin49->SetBinContent(15,22);
   hM_bin49->SetBinContent(16,24);
   hM_bin49->SetBinContent(17,39);
   hM_bin49->SetBinContent(18,58);
   hM_bin49->SetBinContent(19,59);
   hM_bin49->SetBinContent(20,45);
   hM_bin49->SetBinContent(21,74);
   hM_bin49->SetBinContent(22,72);
   hM_bin49->SetBinContent(23,58);
   hM_bin49->SetBinContent(24,90);
   hM_bin49->SetBinContent(25,93);
   hM_bin49->SetBinContent(26,83);
   hM_bin49->SetBinContent(27,125);
   hM_bin49->SetBinContent(28,113);
   hM_bin49->SetBinContent(29,105);
   hM_bin49->SetBinContent(30,108);
   hM_bin49->SetBinContent(31,96);
   hM_bin49->SetBinContent(32,142);
   hM_bin49->SetBinContent(33,117);
   hM_bin49->SetBinContent(34,141);
   hM_bin49->SetBinContent(35,135);
   hM_bin49->SetBinContent(36,99);
   hM_bin49->SetBinContent(37,149);
   hM_bin49->SetBinContent(38,170);
   hM_bin49->SetBinContent(39,176);
   hM_bin49->SetBinContent(40,176);
   hM_bin49->SetBinContent(41,214);
   hM_bin49->SetBinContent(42,254);
   hM_bin49->SetBinContent(43,269);
   hM_bin49->SetBinContent(44,315);
   hM_bin49->SetBinContent(45,343);
   hM_bin49->SetBinContent(46,443);
   hM_bin49->SetBinContent(47,508);
   hM_bin49->SetBinContent(48,511);
   hM_bin49->SetBinContent(49,582);
   hM_bin49->SetBinContent(50,585);
   hM_bin49->SetBinContent(51,585);
   hM_bin49->SetBinContent(52,575);
   hM_bin49->SetBinContent(53,549);
   hM_bin49->SetBinContent(54,506);
   hM_bin49->SetBinContent(55,445);
   hM_bin49->SetBinContent(56,388);
   hM_bin49->SetBinContent(57,351);
   hM_bin49->SetBinContent(58,314);
   hM_bin49->SetBinContent(59,300);
   hM_bin49->SetBinContent(60,245);
   hM_bin49->SetBinContent(61,230);
   hM_bin49->SetBinContent(62,193);
   hM_bin49->SetBinContent(63,181);
   hM_bin49->SetBinContent(64,175);
   hM_bin49->SetBinContent(65,158);
   hM_bin49->SetBinContent(66,145);
   hM_bin49->SetBinContent(67,165);
   hM_bin49->SetBinContent(68,156);
   hM_bin49->SetBinContent(69,157);
   hM_bin49->SetBinContent(70,133);
   hM_bin49->SetBinContent(71,140);
   hM_bin49->SetBinContent(72,139);
   hM_bin49->SetBinContent(73,126);
   hM_bin49->SetBinContent(74,122);
   hM_bin49->SetBinContent(75,160);
   hM_bin49->SetBinContent(76,108);
   hM_bin49->SetBinContent(77,120);
   hM_bin49->SetBinContent(78,100);
   hM_bin49->SetBinContent(79,118);
   hM_bin49->SetBinContent(80,104);
   hM_bin49->SetBinContent(81,129);
   hM_bin49->SetBinContent(82,122);
   hM_bin49->SetBinContent(83,112);
   hM_bin49->SetBinContent(84,118);
   hM_bin49->SetBinContent(85,123);
   hM_bin49->SetBinContent(86,112);
   hM_bin49->SetBinContent(87,126);
   hM_bin49->SetBinContent(88,127);
   hM_bin49->SetBinContent(89,101);
   hM_bin49->SetBinContent(90,101);
   hM_bin49->SetBinContent(91,102);
   hM_bin49->SetBinContent(92,109);
   hM_bin49->SetBinContent(93,103);
   hM_bin49->SetBinContent(94,94);
   hM_bin49->SetBinContent(95,90);
   hM_bin49->SetBinContent(96,111);
   hM_bin49->SetBinContent(97,107);
   hM_bin49->SetBinContent(98,95);
   hM_bin49->SetBinContent(99,78);
   hM_bin49->SetBinContent(100,101);
   hM_bin49->SetBinContent(101,6471);
   hM_bin49->SetEntries(22429);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07829721,0.1942306);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(40.51917);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,94.14483);
   fsig->SetParError(0,11.08192);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,256.4088);
   fsig->SetParError(1,80.61259);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-4.386174e-05);
   fsig->SetParError(2,1322.263);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,439.2874);
   fsig->SetParError(3,9.072595);
   fsig->SetParLimits(3,0,1170);
   fsig->SetParameter(4,0.136237);
   fsig->SetParError(4,0.000427591);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0001113514);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin49->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin49");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 22429  ");
   text = ptstats->AddText("Mean  = 0.1549");
   text = ptstats->AddText("RMS   = 0.06357");
   text = ptstats->AddText("#chi^{2} / ndf = 40.52 / 28");
   text = ptstats->AddText("p0       = 94.14 #pm 11.08 ");
   text = ptstats->AddText("p1       = 256.4 #pm 80.6 ");
   text = ptstats->AddText("p2       = -4.386e-05 #pm 1.322e+03 ");
   text = ptstats->AddText("p3       = 439.3 #pm 9.1 ");
   text = ptstats->AddText("p4       = 0.1362 #pm 0.0004 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00011 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin49->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin49);

   ci = TColor::GetColor("#0000ff");
   hM_bin49->SetMarkerColor(ci);
   hM_bin49->SetMarkerStyle(24);
   hM_bin49->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin49->GetXaxis()->SetLabelFont(42);
   hM_bin49->GetXaxis()->SetLabelSize(0.035);
   hM_bin49->GetXaxis()->SetTitleSize(0.035);
   hM_bin49->GetXaxis()->SetTitleFont(42);
   hM_bin49->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin49->GetYaxis()->SetLabelFont(42);
   hM_bin49->GetYaxis()->SetLabelSize(0.035);
   hM_bin49->GetYaxis()->SetTitleSize(0.035);
   hM_bin49->GetYaxis()->SetTitleFont(42);
   hM_bin49->GetZaxis()->SetLabelFont(42);
   hM_bin49->GetZaxis()->SetLabelSize(0.035);
   hM_bin49->GetZaxis()->SetTitleSize(0.035);
   hM_bin49->GetZaxis()->SetTitleFont(42);
   hM_bin49->Draw("e");
   
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
   fmb->SetParameter(0,94.14483);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,256.4088);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-4.386174e-05);
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
   fpeak->SetParameter(0,439.2874);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.136237);
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
