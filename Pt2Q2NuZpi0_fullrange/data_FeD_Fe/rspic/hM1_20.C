{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:40:30 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-137.4003,0.350906,1236.602);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin20 = new TH1F("hM_bin20","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin20->SetBinContent(14,9);
   hM_bin20->SetBinContent(15,14);
   hM_bin20->SetBinContent(16,36);
   hM_bin20->SetBinContent(17,62);
   hM_bin20->SetBinContent(18,44);
   hM_bin20->SetBinContent(19,53);
   hM_bin20->SetBinContent(20,83);
   hM_bin20->SetBinContent(21,60);
   hM_bin20->SetBinContent(22,85);
   hM_bin20->SetBinContent(23,96);
   hM_bin20->SetBinContent(24,96);
   hM_bin20->SetBinContent(25,91);
   hM_bin20->SetBinContent(26,125);
   hM_bin20->SetBinContent(27,106);
   hM_bin20->SetBinContent(28,118);
   hM_bin20->SetBinContent(29,112);
   hM_bin20->SetBinContent(30,125);
   hM_bin20->SetBinContent(31,136);
   hM_bin20->SetBinContent(32,121);
   hM_bin20->SetBinContent(33,120);
   hM_bin20->SetBinContent(34,146);
   hM_bin20->SetBinContent(35,157);
   hM_bin20->SetBinContent(36,183);
   hM_bin20->SetBinContent(37,184);
   hM_bin20->SetBinContent(38,236);
   hM_bin20->SetBinContent(39,237);
   hM_bin20->SetBinContent(40,304);
   hM_bin20->SetBinContent(41,344);
   hM_bin20->SetBinContent(42,413);
   hM_bin20->SetBinContent(43,490);
   hM_bin20->SetBinContent(44,597);
   hM_bin20->SetBinContent(45,710);
   hM_bin20->SetBinContent(46,839);
   hM_bin20->SetBinContent(47,950);
   hM_bin20->SetBinContent(48,959);
   hM_bin20->SetBinContent(49,994);
   hM_bin20->SetBinContent(50,1015);
   hM_bin20->SetBinContent(51,1013);
   hM_bin20->SetBinContent(52,921);
   hM_bin20->SetBinContent(53,772);
   hM_bin20->SetBinContent(54,751);
   hM_bin20->SetBinContent(55,635);
   hM_bin20->SetBinContent(56,510);
   hM_bin20->SetBinContent(57,484);
   hM_bin20->SetBinContent(58,387);
   hM_bin20->SetBinContent(59,334);
   hM_bin20->SetBinContent(60,298);
   hM_bin20->SetBinContent(61,219);
   hM_bin20->SetBinContent(62,204);
   hM_bin20->SetBinContent(63,199);
   hM_bin20->SetBinContent(64,173);
   hM_bin20->SetBinContent(65,145);
   hM_bin20->SetBinContent(66,170);
   hM_bin20->SetBinContent(67,147);
   hM_bin20->SetBinContent(68,126);
   hM_bin20->SetBinContent(69,118);
   hM_bin20->SetBinContent(70,132);
   hM_bin20->SetBinContent(71,134);
   hM_bin20->SetBinContent(72,131);
   hM_bin20->SetBinContent(73,113);
   hM_bin20->SetBinContent(74,120);
   hM_bin20->SetBinContent(75,126);
   hM_bin20->SetBinContent(76,104);
   hM_bin20->SetBinContent(77,121);
   hM_bin20->SetBinContent(78,121);
   hM_bin20->SetBinContent(79,118);
   hM_bin20->SetBinContent(80,103);
   hM_bin20->SetBinContent(81,121);
   hM_bin20->SetBinContent(82,139);
   hM_bin20->SetBinContent(83,102);
   hM_bin20->SetBinContent(84,101);
   hM_bin20->SetBinContent(85,105);
   hM_bin20->SetBinContent(86,123);
   hM_bin20->SetBinContent(87,100);
   hM_bin20->SetBinContent(88,98);
   hM_bin20->SetBinContent(89,105);
   hM_bin20->SetBinContent(90,90);
   hM_bin20->SetBinContent(91,88);
   hM_bin20->SetBinContent(92,96);
   hM_bin20->SetBinContent(93,79);
   hM_bin20->SetBinContent(94,66);
   hM_bin20->SetBinContent(95,84);
   hM_bin20->SetBinContent(96,68);
   hM_bin20->SetBinContent(97,113);
   hM_bin20->SetBinContent(98,81);
   hM_bin20->SetBinContent(99,80);
   hM_bin20->SetBinContent(100,74);
   hM_bin20->SetBinContent(101,4680);
   hM_bin20->SetEntries(25972);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07454082,0.1904743);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(61.04897);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,104.1943);
   fsig->SetParError(0,11.61457);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,167.2903);
   fsig->SetParError(1,85.30519);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.001164125);
   fsig->SetParError(2,941.3634);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,837.9964);
   fsig->SetParError(3,11.10265);
   fsig->SetParLimits(3,0,2030);
   fsig->SetParameter(4,0.1323531);
   fsig->SetParError(4,0.0002681529);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,3.502269e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin20->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin20");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 25972  ");
   text = ptstats->AddText("Mean  = 0.1453");
   text = ptstats->AddText("RMS   = 0.05567");
   text = ptstats->AddText("#chi^{2} / ndf = 61.05 / 28");
   text = ptstats->AddText("p0       = 104.2 #pm 11.6 ");
   text = ptstats->AddText("p1       = 167.3 #pm 85.3 ");
   text = ptstats->AddText("p2       = -0.001164 #pm 941.363403 ");
   text = ptstats->AddText("p3       =   838 #pm 11.1 ");
   text = ptstats->AddText("p4       = 0.1324 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00004 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin20->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin20);

   ci = TColor::GetColor("#0000ff");
   hM_bin20->SetMarkerColor(ci);
   hM_bin20->SetMarkerStyle(24);
   hM_bin20->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin20->GetXaxis()->SetLabelFont(42);
   hM_bin20->GetXaxis()->SetLabelSize(0.035);
   hM_bin20->GetXaxis()->SetTitleSize(0.035);
   hM_bin20->GetXaxis()->SetTitleFont(42);
   hM_bin20->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin20->GetYaxis()->SetLabelFont(42);
   hM_bin20->GetYaxis()->SetLabelSize(0.035);
   hM_bin20->GetYaxis()->SetTitleSize(0.035);
   hM_bin20->GetYaxis()->SetTitleFont(42);
   hM_bin20->GetZaxis()->SetLabelFont(42);
   hM_bin20->GetZaxis()->SetLabelSize(0.035);
   hM_bin20->GetZaxis()->SetTitleSize(0.035);
   hM_bin20->GetZaxis()->SetTitleFont(42);
   hM_bin20->Draw("e");
   
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
   fmb->SetParameter(0,104.1943);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,167.2903);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.001164125);
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
   fpeak->SetParameter(0,837.9964);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1323531);
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
