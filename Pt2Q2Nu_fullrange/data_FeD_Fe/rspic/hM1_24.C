{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 14:59:23 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-491.0944,0.350906,4419.849);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin24 = new TH1F("hM_bin24","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin24->SetBinContent(0,1830);
   hM_bin24->SetBinContent(12,149);
   hM_bin24->SetBinContent(13,407);
   hM_bin24->SetBinContent(14,301);
   hM_bin24->SetBinContent(15,309);
   hM_bin24->SetBinContent(16,272);
   hM_bin24->SetBinContent(17,272);
   hM_bin24->SetBinContent(18,311);
   hM_bin24->SetBinContent(19,322);
   hM_bin24->SetBinContent(20,351);
   hM_bin24->SetBinContent(21,451);
   hM_bin24->SetBinContent(22,436);
   hM_bin24->SetBinContent(23,480);
   hM_bin24->SetBinContent(24,563);
   hM_bin24->SetBinContent(25,585);
   hM_bin24->SetBinContent(26,638);
   hM_bin24->SetBinContent(27,677);
   hM_bin24->SetBinContent(28,778);
   hM_bin24->SetBinContent(29,761);
   hM_bin24->SetBinContent(30,807);
   hM_bin24->SetBinContent(31,890);
   hM_bin24->SetBinContent(32,948);
   hM_bin24->SetBinContent(33,944);
   hM_bin24->SetBinContent(34,1048);
   hM_bin24->SetBinContent(35,1227);
   hM_bin24->SetBinContent(36,1306);
   hM_bin24->SetBinContent(37,1452);
   hM_bin24->SetBinContent(38,1600);
   hM_bin24->SetBinContent(39,1885);
   hM_bin24->SetBinContent(40,2188);
   hM_bin24->SetBinContent(41,2357);
   hM_bin24->SetBinContent(42,2659);
   hM_bin24->SetBinContent(43,3025);
   hM_bin24->SetBinContent(44,3228);
   hM_bin24->SetBinContent(45,3441);
   hM_bin24->SetBinContent(46,3681);
   hM_bin24->SetBinContent(47,3648);
   hM_bin24->SetBinContent(48,3560);
   hM_bin24->SetBinContent(49,3463);
   hM_bin24->SetBinContent(50,3377);
   hM_bin24->SetBinContent(51,3200);
   hM_bin24->SetBinContent(52,2899);
   hM_bin24->SetBinContent(53,2649);
   hM_bin24->SetBinContent(54,2472);
   hM_bin24->SetBinContent(55,2162);
   hM_bin24->SetBinContent(56,2019);
   hM_bin24->SetBinContent(57,1926);
   hM_bin24->SetBinContent(58,1790);
   hM_bin24->SetBinContent(59,1647);
   hM_bin24->SetBinContent(60,1639);
   hM_bin24->SetBinContent(61,1547);
   hM_bin24->SetBinContent(62,1473);
   hM_bin24->SetBinContent(63,1466);
   hM_bin24->SetBinContent(64,1465);
   hM_bin24->SetBinContent(65,1363);
   hM_bin24->SetBinContent(66,1337);
   hM_bin24->SetBinContent(67,1357);
   hM_bin24->SetBinContent(68,1399);
   hM_bin24->SetBinContent(69,1395);
   hM_bin24->SetBinContent(70,1312);
   hM_bin24->SetBinContent(71,1339);
   hM_bin24->SetBinContent(72,1306);
   hM_bin24->SetBinContent(73,1238);
   hM_bin24->SetBinContent(74,1307);
   hM_bin24->SetBinContent(75,1301);
   hM_bin24->SetBinContent(76,1270);
   hM_bin24->SetBinContent(77,1225);
   hM_bin24->SetBinContent(78,1248);
   hM_bin24->SetBinContent(79,1197);
   hM_bin24->SetBinContent(80,1224);
   hM_bin24->SetBinContent(81,1161);
   hM_bin24->SetBinContent(82,1160);
   hM_bin24->SetBinContent(83,1185);
   hM_bin24->SetBinContent(84,1169);
   hM_bin24->SetBinContent(85,1125);
   hM_bin24->SetBinContent(86,1092);
   hM_bin24->SetBinContent(87,1109);
   hM_bin24->SetBinContent(88,1083);
   hM_bin24->SetBinContent(89,1039);
   hM_bin24->SetBinContent(90,1064);
   hM_bin24->SetBinContent(91,1031);
   hM_bin24->SetBinContent(92,1054);
   hM_bin24->SetBinContent(93,1040);
   hM_bin24->SetBinContent(94,1076);
   hM_bin24->SetBinContent(95,1059);
   hM_bin24->SetBinContent(96,921);
   hM_bin24->SetBinContent(97,951);
   hM_bin24->SetBinContent(98,907);
   hM_bin24->SetBinContent(99,980);
   hM_bin24->SetBinContent(100,872);
   hM_bin24->SetBinContent(101,72214);
   hM_bin24->SetEntries(199091);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.06254242,0.1856513);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(39.61814);
   fsig->SetNDF(30);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,338.0486);
   fsig->SetParError(0,27.23126);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,7830.902);
   fsig->SetParError(1,201.2232);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-10000);
   fsig->SetParError(2,6994.281);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,2466.846);
   fsig->SetParError(3,23.12548);
   fsig->SetParLimits(3,0,7362);
   fsig->SetParameter(4,0.123627);
   fsig->SetParError(4,0.0002034483);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01960482);
   fsig->SetParError(5,0.0002466924);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin24->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin24");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 199091 ");
   text = ptstats->AddText("Mean  = 0.1593");
   text = ptstats->AddText("RMS   = 0.06905");
   text = ptstats->AddText("#chi^{2} / ndf = 39.62 / 30");
   text = ptstats->AddText("p0       =   338 #pm 27.2 ");
   text = ptstats->AddText("p1       =  7831 #pm 201.2 ");
   text = ptstats->AddText("p2       = -1e+04 #pm 6.99e+03 ");
   text = ptstats->AddText("p3       =  2467 #pm 23.1 ");
   text = ptstats->AddText("p4       = 0.1236 #pm 0.0002 ");
   text = ptstats->AddText("p5       = 0.0196 #pm 0.0002 ");
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
   fmb->SetParameter(0,338.0486);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,7830.902);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-10000);
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
   fpeak->SetParameter(0,2466.846);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.123627);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.01960482);
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
