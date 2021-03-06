{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 14:56:30 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-87.45424,0.350906,787.0881);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin20 = new TH1F("hM_bin20","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin20->SetBinContent(0,2326);
   hM_bin20->SetBinContent(12,1);
   hM_bin20->SetBinContent(13,6);
   hM_bin20->SetBinContent(14,10);
   hM_bin20->SetBinContent(15,8);
   hM_bin20->SetBinContent(16,15);
   hM_bin20->SetBinContent(17,14);
   hM_bin20->SetBinContent(18,16);
   hM_bin20->SetBinContent(19,10);
   hM_bin20->SetBinContent(20,11);
   hM_bin20->SetBinContent(21,11);
   hM_bin20->SetBinContent(22,10);
   hM_bin20->SetBinContent(23,12);
   hM_bin20->SetBinContent(24,14);
   hM_bin20->SetBinContent(25,16);
   hM_bin20->SetBinContent(26,14);
   hM_bin20->SetBinContent(27,13);
   hM_bin20->SetBinContent(28,9);
   hM_bin20->SetBinContent(29,20);
   hM_bin20->SetBinContent(30,19);
   hM_bin20->SetBinContent(31,20);
   hM_bin20->SetBinContent(32,18);
   hM_bin20->SetBinContent(33,16);
   hM_bin20->SetBinContent(34,20);
   hM_bin20->SetBinContent(35,31);
   hM_bin20->SetBinContent(36,26);
   hM_bin20->SetBinContent(37,33);
   hM_bin20->SetBinContent(38,36);
   hM_bin20->SetBinContent(39,46);
   hM_bin20->SetBinContent(40,58);
   hM_bin20->SetBinContent(41,77);
   hM_bin20->SetBinContent(42,118);
   hM_bin20->SetBinContent(43,145);
   hM_bin20->SetBinContent(44,185);
   hM_bin20->SetBinContent(45,304);
   hM_bin20->SetBinContent(46,363);
   hM_bin20->SetBinContent(47,406);
   hM_bin20->SetBinContent(48,458);
   hM_bin20->SetBinContent(49,520);
   hM_bin20->SetBinContent(50,629);
   hM_bin20->SetBinContent(51,641);
   hM_bin20->SetBinContent(52,585);
   hM_bin20->SetBinContent(53,557);
   hM_bin20->SetBinContent(54,548);
   hM_bin20->SetBinContent(55,462);
   hM_bin20->SetBinContent(56,429);
   hM_bin20->SetBinContent(57,394);
   hM_bin20->SetBinContent(58,319);
   hM_bin20->SetBinContent(59,292);
   hM_bin20->SetBinContent(60,268);
   hM_bin20->SetBinContent(61,210);
   hM_bin20->SetBinContent(62,179);
   hM_bin20->SetBinContent(63,148);
   hM_bin20->SetBinContent(64,141);
   hM_bin20->SetBinContent(65,136);
   hM_bin20->SetBinContent(66,123);
   hM_bin20->SetBinContent(67,140);
   hM_bin20->SetBinContent(68,93);
   hM_bin20->SetBinContent(69,112);
   hM_bin20->SetBinContent(70,90);
   hM_bin20->SetBinContent(71,97);
   hM_bin20->SetBinContent(72,75);
   hM_bin20->SetBinContent(73,120);
   hM_bin20->SetBinContent(74,89);
   hM_bin20->SetBinContent(75,117);
   hM_bin20->SetBinContent(76,90);
   hM_bin20->SetBinContent(77,91);
   hM_bin20->SetBinContent(78,99);
   hM_bin20->SetBinContent(79,95);
   hM_bin20->SetBinContent(80,99);
   hM_bin20->SetBinContent(81,99);
   hM_bin20->SetBinContent(82,110);
   hM_bin20->SetBinContent(83,120);
   hM_bin20->SetBinContent(84,107);
   hM_bin20->SetBinContent(85,114);
   hM_bin20->SetBinContent(86,104);
   hM_bin20->SetBinContent(87,102);
   hM_bin20->SetBinContent(88,104);
   hM_bin20->SetBinContent(89,108);
   hM_bin20->SetBinContent(90,112);
   hM_bin20->SetBinContent(91,112);
   hM_bin20->SetBinContent(92,114);
   hM_bin20->SetBinContent(93,87);
   hM_bin20->SetBinContent(94,102);
   hM_bin20->SetBinContent(95,109);
   hM_bin20->SetBinContent(96,111);
   hM_bin20->SetBinContent(97,105);
   hM_bin20->SetBinContent(98,89);
   hM_bin20->SetBinContent(99,112);
   hM_bin20->SetBinContent(100,100);
   hM_bin20->SetBinContent(101,24047);
   hM_bin20->SetEntries(39071);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08286458,0.198798);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(85.73704);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-67.66096);
   fsig->SetParError(0,7.654426);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,850.7175);
   fsig->SetParError(1,60.81972);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-2.058558e-05);
   fsig->SetParError(2,446.1108);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,519.4951);
   fsig->SetParError(3,8.348143);
   fsig->SetParLimits(3,0,1282);
   fsig->SetParameter(4,0.1399883);
   fsig->SetParError(4,0.0003158106);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,3.621705e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin20->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin20");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 39071  ");
   text = ptstats->AddText("Mean  = 0.1695");
   text = ptstats->AddText("RMS   = 0.05747");
   text = ptstats->AddText("#chi^{2} / ndf = 85.74 / 27");
   text = ptstats->AddText("p0       = -67.66 #pm 7.65 ");
   text = ptstats->AddText("p1       = 850.7 #pm 60.8 ");
   text = ptstats->AddText("p2       = -2.059e-05 #pm 4.461e+02 ");
   text = ptstats->AddText("p3       = 519.5 #pm 8.3 ");
   text = ptstats->AddText("p4       =  0.14 #pm 0.00 ");
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
   fmb->SetParameter(0,-67.66096);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,850.7175);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-2.058558e-05);
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
   fpeak->SetParameter(0,519.4951);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1399883);
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
