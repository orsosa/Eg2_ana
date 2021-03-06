{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 18 12:23:08 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.1901558,-23.83006,0.8890623,311.0211);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin52 = new TH1F("hM_bin52","M_{#gamma #gamma}",100,0.2600464,0.8191716);
   hM_bin52->SetBinContent(0,4412);
   hM_bin52->SetBinContent(1,27);
   hM_bin52->SetBinContent(2,28);
   hM_bin52->SetBinContent(3,28);
   hM_bin52->SetBinContent(4,41);
   hM_bin52->SetBinContent(5,32);
   hM_bin52->SetBinContent(6,33);
   hM_bin52->SetBinContent(7,39);
   hM_bin52->SetBinContent(8,37);
   hM_bin52->SetBinContent(9,35);
   hM_bin52->SetBinContent(10,36);
   hM_bin52->SetBinContent(11,38);
   hM_bin52->SetBinContent(12,30);
   hM_bin52->SetBinContent(13,46);
   hM_bin52->SetBinContent(14,54);
   hM_bin52->SetBinContent(15,60);
   hM_bin52->SetBinContent(16,51);
   hM_bin52->SetBinContent(17,70);
   hM_bin52->SetBinContent(18,56);
   hM_bin52->SetBinContent(19,87);
   hM_bin52->SetBinContent(20,67);
   hM_bin52->SetBinContent(21,75);
   hM_bin52->SetBinContent(22,70);
   hM_bin52->SetBinContent(23,60);
   hM_bin52->SetBinContent(24,66);
   hM_bin52->SetBinContent(25,81);
   hM_bin52->SetBinContent(26,83);
   hM_bin52->SetBinContent(27,84);
   hM_bin52->SetBinContent(28,81);
   hM_bin52->SetBinContent(29,97);
   hM_bin52->SetBinContent(30,96);
   hM_bin52->SetBinContent(31,97);
   hM_bin52->SetBinContent(32,104);
   hM_bin52->SetBinContent(33,90);
   hM_bin52->SetBinContent(34,112);
   hM_bin52->SetBinContent(35,100);
   hM_bin52->SetBinContent(36,116);
   hM_bin52->SetBinContent(37,126);
   hM_bin52->SetBinContent(38,105);
   hM_bin52->SetBinContent(39,140);
   hM_bin52->SetBinContent(40,128);
   hM_bin52->SetBinContent(41,123);
   hM_bin52->SetBinContent(42,120);
   hM_bin52->SetBinContent(43,156);
   hM_bin52->SetBinContent(44,143);
   hM_bin52->SetBinContent(45,142);
   hM_bin52->SetBinContent(46,157);
   hM_bin52->SetBinContent(47,143);
   hM_bin52->SetBinContent(48,172);
   hM_bin52->SetBinContent(49,142);
   hM_bin52->SetBinContent(50,162);
   hM_bin52->SetBinContent(51,162);
   hM_bin52->SetBinContent(52,162);
   hM_bin52->SetBinContent(53,162);
   hM_bin52->SetBinContent(54,182);
   hM_bin52->SetBinContent(55,177);
   hM_bin52->SetBinContent(56,174);
   hM_bin52->SetBinContent(57,190);
   hM_bin52->SetBinContent(58,185);
   hM_bin52->SetBinContent(59,167);
   hM_bin52->SetBinContent(60,172);
   hM_bin52->SetBinContent(61,157);
   hM_bin52->SetBinContent(62,173);
   hM_bin52->SetBinContent(63,171);
   hM_bin52->SetBinContent(64,184);
   hM_bin52->SetBinContent(65,179);
   hM_bin52->SetBinContent(66,171);
   hM_bin52->SetBinContent(67,190);
   hM_bin52->SetBinContent(68,188);
   hM_bin52->SetBinContent(69,171);
   hM_bin52->SetBinContent(70,171);
   hM_bin52->SetBinContent(71,191);
   hM_bin52->SetBinContent(72,166);
   hM_bin52->SetBinContent(73,158);
   hM_bin52->SetBinContent(74,178);
   hM_bin52->SetBinContent(75,161);
   hM_bin52->SetBinContent(76,206);
   hM_bin52->SetBinContent(77,179);
   hM_bin52->SetBinContent(78,203);
   hM_bin52->SetBinContent(79,193);
   hM_bin52->SetBinContent(80,174);
   hM_bin52->SetBinContent(81,175);
   hM_bin52->SetBinContent(82,187);
   hM_bin52->SetBinContent(83,179);
   hM_bin52->SetBinContent(84,198);
   hM_bin52->SetBinContent(85,194);
   hM_bin52->SetBinContent(86,185);
   hM_bin52->SetBinContent(87,225);
   hM_bin52->SetBinContent(88,201);
   hM_bin52->SetBinContent(89,171);
   hM_bin52->SetBinContent(90,187);
   hM_bin52->SetBinContent(91,199);
   hM_bin52->SetBinContent(92,199);
   hM_bin52->SetBinContent(93,204);
   hM_bin52->SetBinContent(94,212);
   hM_bin52->SetBinContent(95,249);
   hM_bin52->SetBinContent(96,218);
   hM_bin52->SetBinContent(97,213);
   hM_bin52->SetBinContent(98,203);
   hM_bin52->SetBinContent(99,223);
   hM_bin52->SetBinContent(100,211);
   hM_bin52->SetBinContent(101,23201);
   hM_bin52->SetEntries(41209);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.3555999,0.752305);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(57.20931);
   fsig->SetNDF(65);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-62.8449);
   fsig->SetParError(0,7.59325);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,349.0731);
   fsig->SetParError(1,14.477);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.0001831037);
   fsig->SetParError(2,346.8457);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,38.09545);
   fsig->SetParError(3,4.040907);
   fsig->SetParLimits(3,0,498);
   fsig->SetParameter(4,0.5506576);
   fsig->SetParError(4,0.007906152);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.06493607);
   fsig->SetParError(5,0.00820473);
   fsig->SetParLimits(5,0.04788336,0.07182504);
   hM_bin52->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin52");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 41209  ");
   text = ptstats->AddText("Mean  = 0.6079");
   text = ptstats->AddText("RMS   = 0.1391");
   text = ptstats->AddText("#chi^{2} / ndf = 57.21 / 65");
   text = ptstats->AddText("p0       = -62.84 #pm 7.59 ");
   text = ptstats->AddText("p1       = 349.1 #pm 14.5 ");
   text = ptstats->AddText("p2       = -0.0001831 #pm 346.8456726 ");
   text = ptstats->AddText("p3       =  38.1 #pm 4.0 ");
   text = ptstats->AddText("p4       = 0.5507 #pm 0.0079 ");
   text = ptstats->AddText("p5       = 0.06494 #pm 0.00820 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin52->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin52);

   ci = TColor::GetColor("#0000ff");
   hM_bin52->SetMarkerColor(ci);
   hM_bin52->SetMarkerStyle(24);
   hM_bin52->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin52->GetXaxis()->SetLabelFont(42);
   hM_bin52->GetXaxis()->SetLabelSize(0.035);
   hM_bin52->GetXaxis()->SetTitleSize(0.035);
   hM_bin52->GetXaxis()->SetTitleFont(42);
   hM_bin52->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin52->GetYaxis()->SetLabelFont(42);
   hM_bin52->GetYaxis()->SetLabelSize(0.035);
   hM_bin52->GetYaxis()->SetTitleSize(0.035);
   hM_bin52->GetYaxis()->SetTitleFont(42);
   hM_bin52->GetZaxis()->SetLabelFont(42);
   hM_bin52->GetZaxis()->SetLabelSize(0.035);
   hM_bin52->GetZaxis()->SetTitleSize(0.035);
   hM_bin52->GetZaxis()->SetTitleFont(42);
   hM_bin52->Draw("e");
   
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
   fmb->SetParameter(0,-62.8449);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,349.0731);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.0001831037);
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
   fpeak->SetParameter(0,38.09545);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.5506576);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.06493607);
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
