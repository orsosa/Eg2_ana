{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 14:50:11 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-16.77594,0.350906,150.9834);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin38 = new TH1F("hM_bin38","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin38->SetBinContent(0,461);
   hM_bin38->SetBinContent(13,1);
   hM_bin38->SetBinContent(14,3);
   hM_bin38->SetBinContent(15,1);
   hM_bin38->SetBinContent(16,8);
   hM_bin38->SetBinContent(17,3);
   hM_bin38->SetBinContent(18,4);
   hM_bin38->SetBinContent(20,1);
   hM_bin38->SetBinContent(21,3);
   hM_bin38->SetBinContent(22,3);
   hM_bin38->SetBinContent(24,1);
   hM_bin38->SetBinContent(25,2);
   hM_bin38->SetBinContent(26,2);
   hM_bin38->SetBinContent(29,2);
   hM_bin38->SetBinContent(30,2);
   hM_bin38->SetBinContent(31,3);
   hM_bin38->SetBinContent(32,2);
   hM_bin38->SetBinContent(33,7);
   hM_bin38->SetBinContent(34,4);
   hM_bin38->SetBinContent(35,2);
   hM_bin38->SetBinContent(36,6);
   hM_bin38->SetBinContent(37,8);
   hM_bin38->SetBinContent(38,11);
   hM_bin38->SetBinContent(39,10);
   hM_bin38->SetBinContent(40,19);
   hM_bin38->SetBinContent(41,19);
   hM_bin38->SetBinContent(42,29);
   hM_bin38->SetBinContent(43,29);
   hM_bin38->SetBinContent(44,47);
   hM_bin38->SetBinContent(45,61);
   hM_bin38->SetBinContent(46,89);
   hM_bin38->SetBinContent(47,102);
   hM_bin38->SetBinContent(48,86);
   hM_bin38->SetBinContent(49,108);
   hM_bin38->SetBinContent(50,109);
   hM_bin38->SetBinContent(51,117);
   hM_bin38->SetBinContent(52,110);
   hM_bin38->SetBinContent(53,97);
   hM_bin38->SetBinContent(54,102);
   hM_bin38->SetBinContent(55,87);
   hM_bin38->SetBinContent(56,75);
   hM_bin38->SetBinContent(57,73);
   hM_bin38->SetBinContent(58,57);
   hM_bin38->SetBinContent(59,51);
   hM_bin38->SetBinContent(60,44);
   hM_bin38->SetBinContent(61,37);
   hM_bin38->SetBinContent(62,38);
   hM_bin38->SetBinContent(63,35);
   hM_bin38->SetBinContent(64,19);
   hM_bin38->SetBinContent(65,25);
   hM_bin38->SetBinContent(66,10);
   hM_bin38->SetBinContent(67,23);
   hM_bin38->SetBinContent(68,22);
   hM_bin38->SetBinContent(69,17);
   hM_bin38->SetBinContent(70,22);
   hM_bin38->SetBinContent(71,26);
   hM_bin38->SetBinContent(72,16);
   hM_bin38->SetBinContent(73,18);
   hM_bin38->SetBinContent(74,27);
   hM_bin38->SetBinContent(75,23);
   hM_bin38->SetBinContent(76,17);
   hM_bin38->SetBinContent(77,17);
   hM_bin38->SetBinContent(78,25);
   hM_bin38->SetBinContent(79,21);
   hM_bin38->SetBinContent(80,19);
   hM_bin38->SetBinContent(81,21);
   hM_bin38->SetBinContent(82,18);
   hM_bin38->SetBinContent(83,27);
   hM_bin38->SetBinContent(84,21);
   hM_bin38->SetBinContent(85,23);
   hM_bin38->SetBinContent(86,16);
   hM_bin38->SetBinContent(87,20);
   hM_bin38->SetBinContent(88,16);
   hM_bin38->SetBinContent(89,16);
   hM_bin38->SetBinContent(90,17);
   hM_bin38->SetBinContent(91,20);
   hM_bin38->SetBinContent(92,21);
   hM_bin38->SetBinContent(93,18);
   hM_bin38->SetBinContent(94,17);
   hM_bin38->SetBinContent(95,24);
   hM_bin38->SetBinContent(96,22);
   hM_bin38->SetBinContent(97,26);
   hM_bin38->SetBinContent(98,23);
   hM_bin38->SetBinContent(99,32);
   hM_bin38->SetBinContent(100,25);
   hM_bin38->SetBinContent(101,3972);
   hM_bin38->SetEntries(6913);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.0803343,0.1962677);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(33.11857);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-9.763234);
   fsig->SetParError(0,2.656225);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,133.0742);
   fsig->SetParError(1,22.13695);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.0004774046);
   fsig->SetParError(2,6448.866);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,101.9325);
   fsig->SetParError(3,3.511214);
   fsig->SetParLimits(3,0,234);
   fsig->SetParameter(4,0.1379391);
   fsig->SetParError(4,0.0007004244);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0008731727);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin38->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin38");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 6913   ");
   text = ptstats->AddText("Mean  = 0.1696");
   text = ptstats->AddText("RMS   = 0.05909");
   text = ptstats->AddText("#chi^{2} / ndf = 33.12 / 28");
   text = ptstats->AddText("p0       = -9.763 #pm 2.656 ");
   text = ptstats->AddText("p1       = 133.1 #pm 22.1 ");
   text = ptstats->AddText("p2       = -0.0004774 #pm 6448.8662109 ");
   text = ptstats->AddText("p3       = 101.9 #pm 3.5 ");
   text = ptstats->AddText("p4       = 0.1379 #pm 0.0007 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00087 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin38->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin38);

   ci = TColor::GetColor("#0000ff");
   hM_bin38->SetMarkerColor(ci);
   hM_bin38->SetMarkerStyle(24);
   hM_bin38->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin38->GetXaxis()->SetLabelFont(42);
   hM_bin38->GetXaxis()->SetLabelSize(0.035);
   hM_bin38->GetXaxis()->SetTitleSize(0.035);
   hM_bin38->GetXaxis()->SetTitleFont(42);
   hM_bin38->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin38->GetYaxis()->SetLabelFont(42);
   hM_bin38->GetYaxis()->SetLabelSize(0.035);
   hM_bin38->GetYaxis()->SetTitleSize(0.035);
   hM_bin38->GetYaxis()->SetTitleFont(42);
   hM_bin38->GetZaxis()->SetLabelFont(42);
   hM_bin38->GetZaxis()->SetLabelSize(0.035);
   hM_bin38->GetZaxis()->SetTitleSize(0.035);
   hM_bin38->GetZaxis()->SetTitleFont(42);
   hM_bin38->Draw("e");
   
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
   fmb->SetParameter(0,-9.763234);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,133.0742);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.0004774046);
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
   fpeak->SetParameter(0,101.9325);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1379391);
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
