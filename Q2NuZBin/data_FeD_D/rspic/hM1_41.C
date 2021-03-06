{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Jan 31 05:44:46 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-11.53533,0.350906,103.8179);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin41 = new TH1F("hM_bin41","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin41->SetBinContent(0,4905);
   hM_bin41->SetBinContent(15,1);
   hM_bin41->SetBinContent(16,1);
   hM_bin41->SetBinContent(17,1);
   hM_bin41->SetBinContent(18,2);
   hM_bin41->SetBinContent(19,4);
   hM_bin41->SetBinContent(20,3);
   hM_bin41->SetBinContent(22,2);
   hM_bin41->SetBinContent(23,1);
   hM_bin41->SetBinContent(24,4);
   hM_bin41->SetBinContent(25,3);
   hM_bin41->SetBinContent(27,1);
   hM_bin41->SetBinContent(28,2);
   hM_bin41->SetBinContent(29,2);
   hM_bin41->SetBinContent(30,4);
   hM_bin41->SetBinContent(31,4);
   hM_bin41->SetBinContent(32,4);
   hM_bin41->SetBinContent(33,7);
   hM_bin41->SetBinContent(34,1);
   hM_bin41->SetBinContent(35,5);
   hM_bin41->SetBinContent(36,5);
   hM_bin41->SetBinContent(37,8);
   hM_bin41->SetBinContent(38,6);
   hM_bin41->SetBinContent(39,10);
   hM_bin41->SetBinContent(40,7);
   hM_bin41->SetBinContent(41,9);
   hM_bin41->SetBinContent(42,23);
   hM_bin41->SetBinContent(43,25);
   hM_bin41->SetBinContent(44,25);
   hM_bin41->SetBinContent(45,31);
   hM_bin41->SetBinContent(46,43);
   hM_bin41->SetBinContent(47,33);
   hM_bin41->SetBinContent(48,65);
   hM_bin41->SetBinContent(49,63);
   hM_bin41->SetBinContent(50,69);
   hM_bin41->SetBinContent(51,45);
   hM_bin41->SetBinContent(52,79);
   hM_bin41->SetBinContent(53,65);
   hM_bin41->SetBinContent(54,57);
   hM_bin41->SetBinContent(55,73);
   hM_bin41->SetBinContent(56,50);
   hM_bin41->SetBinContent(57,39);
   hM_bin41->SetBinContent(58,42);
   hM_bin41->SetBinContent(59,37);
   hM_bin41->SetBinContent(60,30);
   hM_bin41->SetBinContent(61,21);
   hM_bin41->SetBinContent(62,18);
   hM_bin41->SetBinContent(63,13);
   hM_bin41->SetBinContent(64,16);
   hM_bin41->SetBinContent(65,11);
   hM_bin41->SetBinContent(66,12);
   hM_bin41->SetBinContent(67,7);
   hM_bin41->SetBinContent(68,13);
   hM_bin41->SetBinContent(69,8);
   hM_bin41->SetBinContent(70,7);
   hM_bin41->SetBinContent(71,8);
   hM_bin41->SetBinContent(72,8);
   hM_bin41->SetBinContent(73,12);
   hM_bin41->SetBinContent(74,7);
   hM_bin41->SetBinContent(75,6);
   hM_bin41->SetBinContent(76,12);
   hM_bin41->SetBinContent(77,7);
   hM_bin41->SetBinContent(78,11);
   hM_bin41->SetBinContent(79,7);
   hM_bin41->SetBinContent(80,10);
   hM_bin41->SetBinContent(81,8);
   hM_bin41->SetBinContent(82,14);
   hM_bin41->SetBinContent(83,11);
   hM_bin41->SetBinContent(84,15);
   hM_bin41->SetBinContent(85,17);
   hM_bin41->SetBinContent(86,7);
   hM_bin41->SetBinContent(87,12);
   hM_bin41->SetBinContent(88,8);
   hM_bin41->SetBinContent(89,15);
   hM_bin41->SetBinContent(90,8);
   hM_bin41->SetBinContent(91,15);
   hM_bin41->SetBinContent(92,9);
   hM_bin41->SetBinContent(93,20);
   hM_bin41->SetBinContent(94,14);
   hM_bin41->SetBinContent(95,18);
   hM_bin41->SetBinContent(96,16);
   hM_bin41->SetBinContent(97,10);
   hM_bin41->SetBinContent(98,13);
   hM_bin41->SetBinContent(99,13);
   hM_bin41->SetBinContent(100,13);
   hM_bin41->SetBinContent(101,31299);
   hM_bin41->SetEntries(37665);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.0825909,0.1985244);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(36.06879);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,0.541093);
   fsig->SetParError(0,2.976788);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,37.3558);
   fsig->SetParError(1,21.51642);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.0006197072);
   fsig->SetParError(2,1013.31);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,58.78728);
   fsig->SetParError(3,2.814871);
   fsig->SetParLimits(3,0,158);
   fsig->SetParameter(4,0.1405534);
   fsig->SetParError(4,0.001007151);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.001109093);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin41->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin41");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 37665  ");
   text = ptstats->AddText("Mean  = 0.1673");
   text = ptstats->AddText("RMS   = 0.05984");
   text = ptstats->AddText("#chi^{2} / ndf = 36.07 / 27");
   text = ptstats->AddText("p0       = 0.5411 #pm 2.9768 ");
   text = ptstats->AddText("p1       = 37.36 #pm 21.52 ");
   text = ptstats->AddText("p2       = -0.0006197 #pm 1013.3098755 ");
   text = ptstats->AddText("p3       = 58.79 #pm 2.81 ");
   text = ptstats->AddText("p4       = 0.1406 #pm 0.0010 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00111 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin41->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin41);

   ci = TColor::GetColor("#0000ff");
   hM_bin41->SetMarkerColor(ci);
   hM_bin41->SetMarkerStyle(24);
   hM_bin41->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin41->GetXaxis()->SetLabelFont(42);
   hM_bin41->GetXaxis()->SetLabelSize(0.035);
   hM_bin41->GetXaxis()->SetTitleSize(0.035);
   hM_bin41->GetXaxis()->SetTitleFont(42);
   hM_bin41->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin41->GetYaxis()->SetLabelFont(42);
   hM_bin41->GetYaxis()->SetLabelSize(0.035);
   hM_bin41->GetYaxis()->SetTitleSize(0.035);
   hM_bin41->GetYaxis()->SetTitleFont(42);
   hM_bin41->GetZaxis()->SetLabelFont(42);
   hM_bin41->GetZaxis()->SetLabelSize(0.035);
   hM_bin41->GetZaxis()->SetTitleSize(0.035);
   hM_bin41->GetZaxis()->SetTitleFont(42);
   hM_bin41->Draw("e");
   
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
   fmb->SetParameter(0,0.541093);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,37.3558);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.0006197072);
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
   fpeak->SetParameter(0,58.78728);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1405534);
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
