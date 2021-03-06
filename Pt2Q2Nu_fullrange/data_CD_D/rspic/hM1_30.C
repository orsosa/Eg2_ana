{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 14:56:55 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-329.65,0.350906,2966.849);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin30 = new TH1F("hM_bin30","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin30->SetBinContent(0,1792);
   hM_bin30->SetBinContent(12,115);
   hM_bin30->SetBinContent(13,282);
   hM_bin30->SetBinContent(14,260);
   hM_bin30->SetBinContent(15,199);
   hM_bin30->SetBinContent(16,215);
   hM_bin30->SetBinContent(17,239);
   hM_bin30->SetBinContent(18,242);
   hM_bin30->SetBinContent(19,262);
   hM_bin30->SetBinContent(20,268);
   hM_bin30->SetBinContent(21,316);
   hM_bin30->SetBinContent(22,343);
   hM_bin30->SetBinContent(23,368);
   hM_bin30->SetBinContent(24,399);
   hM_bin30->SetBinContent(25,437);
   hM_bin30->SetBinContent(26,446);
   hM_bin30->SetBinContent(27,509);
   hM_bin30->SetBinContent(28,525);
   hM_bin30->SetBinContent(29,548);
   hM_bin30->SetBinContent(30,584);
   hM_bin30->SetBinContent(31,629);
   hM_bin30->SetBinContent(32,675);
   hM_bin30->SetBinContent(33,693);
   hM_bin30->SetBinContent(34,750);
   hM_bin30->SetBinContent(35,734);
   hM_bin30->SetBinContent(36,904);
   hM_bin30->SetBinContent(37,972);
   hM_bin30->SetBinContent(38,1045);
   hM_bin30->SetBinContent(39,1116);
   hM_bin30->SetBinContent(40,1275);
   hM_bin30->SetBinContent(41,1423);
   hM_bin30->SetBinContent(42,1549);
   hM_bin30->SetBinContent(43,1775);
   hM_bin30->SetBinContent(44,1874);
   hM_bin30->SetBinContent(45,2098);
   hM_bin30->SetBinContent(46,2169);
   hM_bin30->SetBinContent(47,2392);
   hM_bin30->SetBinContent(48,2399);
   hM_bin30->SetBinContent(49,2462);
   hM_bin30->SetBinContent(50,2460);
   hM_bin30->SetBinContent(51,2308);
   hM_bin30->SetBinContent(52,2311);
   hM_bin30->SetBinContent(53,2162);
   hM_bin30->SetBinContent(54,2027);
   hM_bin30->SetBinContent(55,1983);
   hM_bin30->SetBinContent(56,1755);
   hM_bin30->SetBinContent(57,1636);
   hM_bin30->SetBinContent(58,1643);
   hM_bin30->SetBinContent(59,1473);
   hM_bin30->SetBinContent(60,1430);
   hM_bin30->SetBinContent(61,1363);
   hM_bin30->SetBinContent(62,1186);
   hM_bin30->SetBinContent(63,1228);
   hM_bin30->SetBinContent(64,1194);
   hM_bin30->SetBinContent(65,1176);
   hM_bin30->SetBinContent(66,1166);
   hM_bin30->SetBinContent(67,1075);
   hM_bin30->SetBinContent(68,1111);
   hM_bin30->SetBinContent(69,1159);
   hM_bin30->SetBinContent(70,1040);
   hM_bin30->SetBinContent(71,1150);
   hM_bin30->SetBinContent(72,1108);
   hM_bin30->SetBinContent(73,1074);
   hM_bin30->SetBinContent(74,1048);
   hM_bin30->SetBinContent(75,1048);
   hM_bin30->SetBinContent(76,1014);
   hM_bin30->SetBinContent(77,1008);
   hM_bin30->SetBinContent(78,996);
   hM_bin30->SetBinContent(79,1002);
   hM_bin30->SetBinContent(80,948);
   hM_bin30->SetBinContent(81,983);
   hM_bin30->SetBinContent(82,996);
   hM_bin30->SetBinContent(83,969);
   hM_bin30->SetBinContent(84,898);
   hM_bin30->SetBinContent(85,1006);
   hM_bin30->SetBinContent(86,980);
   hM_bin30->SetBinContent(87,947);
   hM_bin30->SetBinContent(88,924);
   hM_bin30->SetBinContent(89,911);
   hM_bin30->SetBinContent(90,905);
   hM_bin30->SetBinContent(91,931);
   hM_bin30->SetBinContent(92,940);
   hM_bin30->SetBinContent(93,885);
   hM_bin30->SetBinContent(94,891);
   hM_bin30->SetBinContent(95,844);
   hM_bin30->SetBinContent(96,891);
   hM_bin30->SetBinContent(97,846);
   hM_bin30->SetBinContent(98,808);
   hM_bin30->SetBinContent(99,851);
   hM_bin30->SetBinContent(100,843);
   hM_bin30->SetBinContent(101,78655);
   hM_bin30->SetEntries(175469);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.06396755,0.1974496);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(47.12944);
   fsig->SetNDF(33);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,318.8555);
   fsig->SetParError(0,37.93075);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,4119.443);
   fsig->SetParError(1,656.297);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-39.02624);
   fsig->SetParError(2,8998.372);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,1558.456);
   fsig->SetParError(3,20.67798);
   fsig->SetParLimits(3,0,4924);
   fsig->SetParameter(4,0.1305534);
   fsig->SetParError(4,0.0002923944);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.02197842);
   fsig->SetParError(5,0.0003784917);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin30->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin30");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 175469 ");
   text = ptstats->AddText("Mean  = 0.1659");
   text = ptstats->AddText("RMS   = 0.07008");
   text = ptstats->AddText("#chi^{2} / ndf = 47.13 / 33");
   text = ptstats->AddText("p0       = 318.9 #pm 37.9 ");
   text = ptstats->AddText("p1       =  4119 #pm 656.3 ");
   text = ptstats->AddText("p2       = -39.03 #pm 8998.37 ");
   text = ptstats->AddText("p3       =  1558 #pm 20.7 ");
   text = ptstats->AddText("p4       = 0.1306 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.02198 #pm 0.00038 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin30->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin30);

   ci = TColor::GetColor("#0000ff");
   hM_bin30->SetMarkerColor(ci);
   hM_bin30->SetMarkerStyle(24);
   hM_bin30->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin30->GetXaxis()->SetLabelFont(42);
   hM_bin30->GetXaxis()->SetLabelSize(0.035);
   hM_bin30->GetXaxis()->SetTitleSize(0.035);
   hM_bin30->GetXaxis()->SetTitleFont(42);
   hM_bin30->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin30->GetYaxis()->SetLabelFont(42);
   hM_bin30->GetYaxis()->SetLabelSize(0.035);
   hM_bin30->GetYaxis()->SetTitleSize(0.035);
   hM_bin30->GetYaxis()->SetTitleFont(42);
   hM_bin30->GetZaxis()->SetLabelFont(42);
   hM_bin30->GetZaxis()->SetLabelSize(0.035);
   hM_bin30->GetZaxis()->SetTitleSize(0.035);
   hM_bin30->GetZaxis()->SetTitleFont(42);
   hM_bin30->Draw("e");
   
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
   fmb->SetParameter(0,318.8555);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,4119.443);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-39.02624);
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
   fpeak->SetParameter(0,1558.456);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1305534);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.02197842);
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
