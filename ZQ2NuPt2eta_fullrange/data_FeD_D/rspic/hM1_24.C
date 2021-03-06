{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 18 12:20:46 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.1901558,-160.7152,0.8890623,1446.436);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin24 = new TH1F("hM_bin24","M_{#gamma #gamma}",100,0.2600464,0.8191716);
   hM_bin24->SetBinContent(0,49177);
   hM_bin24->SetBinContent(1,1032);
   hM_bin24->SetBinContent(2,1040);
   hM_bin24->SetBinContent(3,1048);
   hM_bin24->SetBinContent(4,1045);
   hM_bin24->SetBinContent(5,1070);
   hM_bin24->SetBinContent(6,1053);
   hM_bin24->SetBinContent(7,1086);
   hM_bin24->SetBinContent(8,1134);
   hM_bin24->SetBinContent(9,1136);
   hM_bin24->SetBinContent(10,1094);
   hM_bin24->SetBinContent(11,1149);
   hM_bin24->SetBinContent(12,1068);
   hM_bin24->SetBinContent(13,1094);
   hM_bin24->SetBinContent(14,1117);
   hM_bin24->SetBinContent(15,1081);
   hM_bin24->SetBinContent(16,1145);
   hM_bin24->SetBinContent(17,1190);
   hM_bin24->SetBinContent(18,1109);
   hM_bin24->SetBinContent(19,1050);
   hM_bin24->SetBinContent(20,1084);
   hM_bin24->SetBinContent(21,1106);
   hM_bin24->SetBinContent(22,1084);
   hM_bin24->SetBinContent(23,1131);
   hM_bin24->SetBinContent(24,1071);
   hM_bin24->SetBinContent(25,1085);
   hM_bin24->SetBinContent(26,1064);
   hM_bin24->SetBinContent(27,1077);
   hM_bin24->SetBinContent(28,1060);
   hM_bin24->SetBinContent(29,1104);
   hM_bin24->SetBinContent(30,997);
   hM_bin24->SetBinContent(31,1081);
   hM_bin24->SetBinContent(32,1069);
   hM_bin24->SetBinContent(33,1017);
   hM_bin24->SetBinContent(34,1040);
   hM_bin24->SetBinContent(35,1017);
   hM_bin24->SetBinContent(36,981);
   hM_bin24->SetBinContent(37,978);
   hM_bin24->SetBinContent(38,987);
   hM_bin24->SetBinContent(39,971);
   hM_bin24->SetBinContent(40,931);
   hM_bin24->SetBinContent(41,910);
   hM_bin24->SetBinContent(42,895);
   hM_bin24->SetBinContent(43,919);
   hM_bin24->SetBinContent(44,861);
   hM_bin24->SetBinContent(45,832);
   hM_bin24->SetBinContent(46,810);
   hM_bin24->SetBinContent(47,819);
   hM_bin24->SetBinContent(48,768);
   hM_bin24->SetBinContent(49,718);
   hM_bin24->SetBinContent(50,718);
   hM_bin24->SetBinContent(51,715);
   hM_bin24->SetBinContent(52,687);
   hM_bin24->SetBinContent(53,606);
   hM_bin24->SetBinContent(54,583);
   hM_bin24->SetBinContent(55,646);
   hM_bin24->SetBinContent(56,544);
   hM_bin24->SetBinContent(57,573);
   hM_bin24->SetBinContent(58,506);
   hM_bin24->SetBinContent(59,465);
   hM_bin24->SetBinContent(60,464);
   hM_bin24->SetBinContent(61,462);
   hM_bin24->SetBinContent(62,386);
   hM_bin24->SetBinContent(63,378);
   hM_bin24->SetBinContent(64,365);
   hM_bin24->SetBinContent(65,349);
   hM_bin24->SetBinContent(66,306);
   hM_bin24->SetBinContent(67,312);
   hM_bin24->SetBinContent(68,304);
   hM_bin24->SetBinContent(69,284);
   hM_bin24->SetBinContent(70,248);
   hM_bin24->SetBinContent(71,237);
   hM_bin24->SetBinContent(72,219);
   hM_bin24->SetBinContent(73,227);
   hM_bin24->SetBinContent(74,191);
   hM_bin24->SetBinContent(75,180);
   hM_bin24->SetBinContent(76,185);
   hM_bin24->SetBinContent(77,171);
   hM_bin24->SetBinContent(78,177);
   hM_bin24->SetBinContent(79,143);
   hM_bin24->SetBinContent(80,136);
   hM_bin24->SetBinContent(81,128);
   hM_bin24->SetBinContent(82,123);
   hM_bin24->SetBinContent(83,111);
   hM_bin24->SetBinContent(84,109);
   hM_bin24->SetBinContent(85,73);
   hM_bin24->SetBinContent(86,108);
   hM_bin24->SetBinContent(87,88);
   hM_bin24->SetBinContent(88,94);
   hM_bin24->SetBinContent(89,84);
   hM_bin24->SetBinContent(90,54);
   hM_bin24->SetBinContent(91,75);
   hM_bin24->SetBinContent(92,56);
   hM_bin24->SetBinContent(93,57);
   hM_bin24->SetBinContent(94,59);
   hM_bin24->SetBinContent(95,54);
   hM_bin24->SetBinContent(96,46);
   hM_bin24->SetBinContent(97,50);
   hM_bin24->SetBinContent(98,36);
   hM_bin24->SetBinContent(99,42);
   hM_bin24->SetBinContent(100,38);
   hM_bin24->SetBinContent(101,972);
   hM_bin24->SetEntries(113609);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.246853,0.6778032);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(93.43279);
   fsig->SetNDF(69);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,1042.234);
   fsig->SetParError(0,95.59879);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,1085.233);
   fsig->SetParError(1,447.1076);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-3536.96);
   fsig->SetParError(2,464.0572);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,221.3081);
   fsig->SetParError(3,18.442);
   fsig->SetParLimits(3,0,2380);
   fsig->SetParameter(4,0.4441668);
   fsig->SetParError(4,0.004471655);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.07182504);
   fsig->SetParError(5,0.0008277548);
   fsig->SetParLimits(5,0.04788336,0.07182504);
   hM_bin24->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin24");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 113609 ");
   text = ptstats->AddText("Mean  = 0.4376");
   text = ptstats->AddText("RMS   = 0.1176");
   text = ptstats->AddText("#chi^{2} / ndf = 93.43 / 69");
   text = ptstats->AddText("p0       =  1042 #pm 95.6 ");
   text = ptstats->AddText("p1       =  1085 #pm 447.1 ");
   text = ptstats->AddText("p2       = -3537 #pm 464.1 ");
   text = ptstats->AddText("p3       = 221.3 #pm 18.4 ");
   text = ptstats->AddText("p4       = 0.4442 #pm 0.0045 ");
   text = ptstats->AddText("p5       = 0.07183 #pm 0.00083 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin24->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin24);

   ci = TColor::GetColor("#0000ff");
   hM_bin24->SetMarkerColor(ci);
   hM_bin24->SetMarkerStyle(24);
   hM_bin24->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin24->GetXaxis()->SetLabelFont(42);
   hM_bin24->GetXaxis()->SetLabelSize(0.035);
   hM_bin24->GetXaxis()->SetTitleSize(0.035);
   hM_bin24->GetXaxis()->SetTitleFont(42);
   hM_bin24->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin24->GetYaxis()->SetLabelFont(42);
   hM_bin24->GetYaxis()->SetLabelSize(0.035);
   hM_bin24->GetYaxis()->SetTitleSize(0.035);
   hM_bin24->GetYaxis()->SetTitleFont(42);
   hM_bin24->GetZaxis()->SetLabelFont(42);
   hM_bin24->GetZaxis()->SetLabelSize(0.035);
   hM_bin24->GetZaxis()->SetTitleSize(0.035);
   hM_bin24->GetZaxis()->SetTitleFont(42);
   hM_bin24->Draw("e");
   
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
   fmb->SetParameter(0,1042.234);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1085.233);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-3536.96);
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
   fpeak->SetParameter(0,221.3081);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.4441668);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.07182504);
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
