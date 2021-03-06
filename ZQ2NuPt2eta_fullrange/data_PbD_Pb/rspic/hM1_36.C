{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 18 12:03:36 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.1901558,-19.24374,0.8890623,173.1936);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin36 = new TH1F("hM_bin36","M_{#gamma #gamma}",100,0.2600464,0.8191716);
   hM_bin36->SetBinContent(0,6109);
   hM_bin36->SetBinContent(1,114);
   hM_bin36->SetBinContent(2,115);
   hM_bin36->SetBinContent(3,114);
   hM_bin36->SetBinContent(4,112);
   hM_bin36->SetBinContent(5,120);
   hM_bin36->SetBinContent(6,126);
   hM_bin36->SetBinContent(7,116);
   hM_bin36->SetBinContent(8,103);
   hM_bin36->SetBinContent(9,106);
   hM_bin36->SetBinContent(10,89);
   hM_bin36->SetBinContent(11,124);
   hM_bin36->SetBinContent(12,129);
   hM_bin36->SetBinContent(13,119);
   hM_bin36->SetBinContent(14,120);
   hM_bin36->SetBinContent(15,111);
   hM_bin36->SetBinContent(16,135);
   hM_bin36->SetBinContent(17,118);
   hM_bin36->SetBinContent(18,113);
   hM_bin36->SetBinContent(19,108);
   hM_bin36->SetBinContent(20,109);
   hM_bin36->SetBinContent(21,104);
   hM_bin36->SetBinContent(22,99);
   hM_bin36->SetBinContent(23,101);
   hM_bin36->SetBinContent(24,107);
   hM_bin36->SetBinContent(25,90);
   hM_bin36->SetBinContent(26,84);
   hM_bin36->SetBinContent(27,89);
   hM_bin36->SetBinContent(28,94);
   hM_bin36->SetBinContent(29,97);
   hM_bin36->SetBinContent(30,83);
   hM_bin36->SetBinContent(31,81);
   hM_bin36->SetBinContent(32,84);
   hM_bin36->SetBinContent(33,74);
   hM_bin36->SetBinContent(34,66);
   hM_bin36->SetBinContent(35,72);
   hM_bin36->SetBinContent(36,79);
   hM_bin36->SetBinContent(37,81);
   hM_bin36->SetBinContent(38,81);
   hM_bin36->SetBinContent(39,59);
   hM_bin36->SetBinContent(40,52);
   hM_bin36->SetBinContent(41,63);
   hM_bin36->SetBinContent(42,52);
   hM_bin36->SetBinContent(43,52);
   hM_bin36->SetBinContent(44,53);
   hM_bin36->SetBinContent(45,44);
   hM_bin36->SetBinContent(46,43);
   hM_bin36->SetBinContent(47,45);
   hM_bin36->SetBinContent(48,47);
   hM_bin36->SetBinContent(49,31);
   hM_bin36->SetBinContent(50,51);
   hM_bin36->SetBinContent(51,38);
   hM_bin36->SetBinContent(52,40);
   hM_bin36->SetBinContent(53,32);
   hM_bin36->SetBinContent(54,37);
   hM_bin36->SetBinContent(55,40);
   hM_bin36->SetBinContent(56,27);
   hM_bin36->SetBinContent(57,24);
   hM_bin36->SetBinContent(58,20);
   hM_bin36->SetBinContent(59,18);
   hM_bin36->SetBinContent(60,23);
   hM_bin36->SetBinContent(61,24);
   hM_bin36->SetBinContent(62,15);
   hM_bin36->SetBinContent(63,19);
   hM_bin36->SetBinContent(64,12);
   hM_bin36->SetBinContent(65,13);
   hM_bin36->SetBinContent(66,11);
   hM_bin36->SetBinContent(67,15);
   hM_bin36->SetBinContent(68,14);
   hM_bin36->SetBinContent(69,9);
   hM_bin36->SetBinContent(70,8);
   hM_bin36->SetBinContent(71,6);
   hM_bin36->SetBinContent(72,5);
   hM_bin36->SetBinContent(73,6);
   hM_bin36->SetBinContent(74,6);
   hM_bin36->SetBinContent(75,12);
   hM_bin36->SetBinContent(76,5);
   hM_bin36->SetBinContent(77,7);
   hM_bin36->SetBinContent(78,5);
   hM_bin36->SetBinContent(79,4);
   hM_bin36->SetBinContent(80,6);
   hM_bin36->SetBinContent(81,6);
   hM_bin36->SetBinContent(82,3);
   hM_bin36->SetBinContent(83,5);
   hM_bin36->SetBinContent(84,1);
   hM_bin36->SetBinContent(85,1);
   hM_bin36->SetBinContent(86,2);
   hM_bin36->SetBinContent(87,5);
   hM_bin36->SetBinContent(88,1);
   hM_bin36->SetBinContent(89,2);
   hM_bin36->SetBinContent(90,2);
   hM_bin36->SetBinContent(91,4);
   hM_bin36->SetBinContent(92,6);
   hM_bin36->SetBinContent(93,3);
   hM_bin36->SetBinContent(94,2);
   hM_bin36->SetBinContent(95,3);
   hM_bin36->SetBinContent(96,3);
   hM_bin36->SetBinContent(97,5);
   hM_bin36->SetBinContent(98,3);
   hM_bin36->SetBinContent(99,4);
   hM_bin36->SetBinContent(100,1);
   hM_bin36->SetBinContent(101,81);
   hM_bin36->SetEntries(11212);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.1838198,0.6147701);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(48.69531);
   fsig->SetNDF(57);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,133.3903);
   fsig->SetParError(0,68.90332);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,-61.61497);
   fsig->SetParError(1,233.9608);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-215.975);
   fsig->SetParError(2,230.3461);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,27.02319);
   fsig->SetParError(3,18.29189);
   fsig->SetParLimits(3,0,270);
   fsig->SetParameter(4,0.3580168);
   fsig->SetParError(4,0.03061989);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.07077368);
   fsig->SetParError(5,0.02241899);
   fsig->SetParLimits(5,0.04788336,0.07182504);
   hM_bin36->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin36");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 11212  ");
   text = ptstats->AddText("Mean  = 0.4035");
   text = ptstats->AddText("RMS   = 0.1046");
   text = ptstats->AddText("#chi^{2} / ndf =  48.7 / 57");
   text = ptstats->AddText("p0       = 133.4 #pm 68.9 ");
   text = ptstats->AddText("p1       = -61.61 #pm 233.96 ");
   text = ptstats->AddText("p2       =  -216 #pm 230.3 ");
   text = ptstats->AddText("p3       = 27.02 #pm 18.29 ");
   text = ptstats->AddText("p4       = 0.358 #pm 0.031 ");
   text = ptstats->AddText("p5       = 0.07077 #pm 0.02242 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin36->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin36);

   ci = TColor::GetColor("#0000ff");
   hM_bin36->SetMarkerColor(ci);
   hM_bin36->SetMarkerStyle(24);
   hM_bin36->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin36->GetXaxis()->SetLabelFont(42);
   hM_bin36->GetXaxis()->SetLabelSize(0.035);
   hM_bin36->GetXaxis()->SetTitleSize(0.035);
   hM_bin36->GetXaxis()->SetTitleFont(42);
   hM_bin36->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin36->GetYaxis()->SetLabelFont(42);
   hM_bin36->GetYaxis()->SetLabelSize(0.035);
   hM_bin36->GetYaxis()->SetTitleSize(0.035);
   hM_bin36->GetYaxis()->SetTitleFont(42);
   hM_bin36->GetZaxis()->SetLabelFont(42);
   hM_bin36->GetZaxis()->SetLabelSize(0.035);
   hM_bin36->GetZaxis()->SetTitleSize(0.035);
   hM_bin36->GetZaxis()->SetTitleFont(42);
   hM_bin36->Draw("e");
   
   TF1 *fmb = new TF1("fmb","pol2",0.3600464,0.7191716);
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
   fmb->SetParameter(0,133.3903);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,-61.61497);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-215.975);
   fmb->SetParError(2,0);
   fmb->SetParLimits(2,0,0);
   fmb->Draw("same");
   
   TF1 *fpeak = new TF1("fpeak","gaus",0.3600464,0.7191716);
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
   fpeak->SetParameter(0,27.02319);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.3580168);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.07077368);
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
