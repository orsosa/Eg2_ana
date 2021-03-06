{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 18 12:07:58 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.1901558,-19.47386,0.8890623,263.5797);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin52 = new TH1F("hM_bin52","M_{#gamma #gamma}",100,0.2600464,0.8191716);
   hM_bin52->SetBinContent(0,4118);
   hM_bin52->SetBinContent(1,27);
   hM_bin52->SetBinContent(2,24);
   hM_bin52->SetBinContent(3,26);
   hM_bin52->SetBinContent(4,32);
   hM_bin52->SetBinContent(5,28);
   hM_bin52->SetBinContent(6,26);
   hM_bin52->SetBinContent(7,39);
   hM_bin52->SetBinContent(8,29);
   hM_bin52->SetBinContent(9,36);
   hM_bin52->SetBinContent(10,33);
   hM_bin52->SetBinContent(11,39);
   hM_bin52->SetBinContent(12,34);
   hM_bin52->SetBinContent(13,40);
   hM_bin52->SetBinContent(14,47);
   hM_bin52->SetBinContent(15,52);
   hM_bin52->SetBinContent(16,48);
   hM_bin52->SetBinContent(17,48);
   hM_bin52->SetBinContent(18,57);
   hM_bin52->SetBinContent(19,67);
   hM_bin52->SetBinContent(20,63);
   hM_bin52->SetBinContent(21,54);
   hM_bin52->SetBinContent(22,69);
   hM_bin52->SetBinContent(23,68);
   hM_bin52->SetBinContent(24,64);
   hM_bin52->SetBinContent(25,77);
   hM_bin52->SetBinContent(26,68);
   hM_bin52->SetBinContent(27,87);
   hM_bin52->SetBinContent(28,69);
   hM_bin52->SetBinContent(29,80);
   hM_bin52->SetBinContent(30,81);
   hM_bin52->SetBinContent(31,90);
   hM_bin52->SetBinContent(32,88);
   hM_bin52->SetBinContent(33,83);
   hM_bin52->SetBinContent(34,75);
   hM_bin52->SetBinContent(35,101);
   hM_bin52->SetBinContent(36,94);
   hM_bin52->SetBinContent(37,123);
   hM_bin52->SetBinContent(38,99);
   hM_bin52->SetBinContent(39,111);
   hM_bin52->SetBinContent(40,107);
   hM_bin52->SetBinContent(41,125);
   hM_bin52->SetBinContent(42,111);
   hM_bin52->SetBinContent(43,110);
   hM_bin52->SetBinContent(44,126);
   hM_bin52->SetBinContent(45,113);
   hM_bin52->SetBinContent(46,163);
   hM_bin52->SetBinContent(47,133);
   hM_bin52->SetBinContent(48,124);
   hM_bin52->SetBinContent(49,140);
   hM_bin52->SetBinContent(50,136);
   hM_bin52->SetBinContent(51,155);
   hM_bin52->SetBinContent(52,151);
   hM_bin52->SetBinContent(53,136);
   hM_bin52->SetBinContent(54,140);
   hM_bin52->SetBinContent(55,175);
   hM_bin52->SetBinContent(56,168);
   hM_bin52->SetBinContent(57,176);
   hM_bin52->SetBinContent(58,172);
   hM_bin52->SetBinContent(59,169);
   hM_bin52->SetBinContent(60,174);
   hM_bin52->SetBinContent(61,175);
   hM_bin52->SetBinContent(62,168);
   hM_bin52->SetBinContent(63,176);
   hM_bin52->SetBinContent(64,151);
   hM_bin52->SetBinContent(65,160);
   hM_bin52->SetBinContent(66,190);
   hM_bin52->SetBinContent(67,185);
   hM_bin52->SetBinContent(68,169);
   hM_bin52->SetBinContent(69,168);
   hM_bin52->SetBinContent(70,172);
   hM_bin52->SetBinContent(71,176);
   hM_bin52->SetBinContent(72,155);
   hM_bin52->SetBinContent(73,161);
   hM_bin52->SetBinContent(74,159);
   hM_bin52->SetBinContent(75,153);
   hM_bin52->SetBinContent(76,159);
   hM_bin52->SetBinContent(77,159);
   hM_bin52->SetBinContent(78,175);
   hM_bin52->SetBinContent(79,190);
   hM_bin52->SetBinContent(80,159);
   hM_bin52->SetBinContent(81,184);
   hM_bin52->SetBinContent(82,194);
   hM_bin52->SetBinContent(83,199);
   hM_bin52->SetBinContent(84,183);
   hM_bin52->SetBinContent(85,175);
   hM_bin52->SetBinContent(86,164);
   hM_bin52->SetBinContent(87,188);
   hM_bin52->SetBinContent(88,206);
   hM_bin52->SetBinContent(89,186);
   hM_bin52->SetBinContent(90,192);
   hM_bin52->SetBinContent(91,173);
   hM_bin52->SetBinContent(92,209);
   hM_bin52->SetBinContent(93,210);
   hM_bin52->SetBinContent(94,181);
   hM_bin52->SetBinContent(95,193);
   hM_bin52->SetBinContent(96,171);
   hM_bin52->SetBinContent(97,198);
   hM_bin52->SetBinContent(98,193);
   hM_bin52->SetBinContent(99,207);
   hM_bin52->SetBinContent(100,202);
   hM_bin52->SetBinContent(101,22522);
   hM_bin52->SetEntries(39188);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.4022865,0.748698);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(55.66366);
   fsig->SetNDF(56);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-150.1486);
   fsig->SetParError(0,96.13977);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,679.6037);
   fsig->SetParError(1,356.4069);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-315.0329);
   fsig->SetParError(2,311.2781);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,28.67508);
   fsig->SetParError(3,8.159439);
   fsig->SetParLimits(3,0,420);
   fsig->SetParameter(4,0.5783552);
   fsig->SetParError(4,0.008449443);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.04788336);
   fsig->SetParError(5,0.0235423);
   fsig->SetParLimits(5,0.04788336,0.07182504);
   hM_bin52->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin52");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 39188  ");
   text = ptstats->AddText("Mean  = 0.6107");
   text = ptstats->AddText("RMS   = 0.1379");
   text = ptstats->AddText("#chi^{2} / ndf = 55.66 / 56");
   text = ptstats->AddText("p0       = -150.1 #pm 96.1 ");
   text = ptstats->AddText("p1       = 679.6 #pm 356.4 ");
   text = ptstats->AddText("p2       =  -315 #pm 311.3 ");
   text = ptstats->AddText("p3       = 28.68 #pm 8.16 ");
   text = ptstats->AddText("p4       = 0.5784 #pm 0.0084 ");
   text = ptstats->AddText("p5       = 0.04788 #pm 0.02354 ");
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
   fmb->SetParameter(0,-150.1486);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,679.6037);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-315.0329);
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
   fpeak->SetParameter(0,28.67508);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.5783552);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.04788336);
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
