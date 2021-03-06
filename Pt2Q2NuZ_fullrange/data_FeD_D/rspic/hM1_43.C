{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 16:08:16 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-265.5826,0.350906,2390.243);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin43 = new TH1F("hM_bin43","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin43->SetBinContent(0,5878);
   hM_bin43->SetBinContent(13,2);
   hM_bin43->SetBinContent(14,25);
   hM_bin43->SetBinContent(15,30);
   hM_bin43->SetBinContent(16,34);
   hM_bin43->SetBinContent(17,46);
   hM_bin43->SetBinContent(18,36);
   hM_bin43->SetBinContent(19,44);
   hM_bin43->SetBinContent(20,50);
   hM_bin43->SetBinContent(21,31);
   hM_bin43->SetBinContent(22,39);
   hM_bin43->SetBinContent(23,48);
   hM_bin43->SetBinContent(24,33);
   hM_bin43->SetBinContent(25,49);
   hM_bin43->SetBinContent(26,50);
   hM_bin43->SetBinContent(27,50);
   hM_bin43->SetBinContent(28,63);
   hM_bin43->SetBinContent(29,69);
   hM_bin43->SetBinContent(30,69);
   hM_bin43->SetBinContent(31,78);
   hM_bin43->SetBinContent(32,84);
   hM_bin43->SetBinContent(33,103);
   hM_bin43->SetBinContent(34,91);
   hM_bin43->SetBinContent(35,120);
   hM_bin43->SetBinContent(36,158);
   hM_bin43->SetBinContent(37,198);
   hM_bin43->SetBinContent(38,215);
   hM_bin43->SetBinContent(39,289);
   hM_bin43->SetBinContent(40,358);
   hM_bin43->SetBinContent(41,518);
   hM_bin43->SetBinContent(42,658);
   hM_bin43->SetBinContent(43,900);
   hM_bin43->SetBinContent(44,1052);
   hM_bin43->SetBinContent(45,1274);
   hM_bin43->SetBinContent(46,1528);
   hM_bin43->SetBinContent(47,1784);
   hM_bin43->SetBinContent(48,1978);
   hM_bin43->SetBinContent(49,1916);
   hM_bin43->SetBinContent(50,1979);
   hM_bin43->SetBinContent(51,1883);
   hM_bin43->SetBinContent(52,1861);
   hM_bin43->SetBinContent(53,1558);
   hM_bin43->SetBinContent(54,1368);
   hM_bin43->SetBinContent(55,1188);
   hM_bin43->SetBinContent(56,992);
   hM_bin43->SetBinContent(57,804);
   hM_bin43->SetBinContent(58,708);
   hM_bin43->SetBinContent(59,643);
   hM_bin43->SetBinContent(60,568);
   hM_bin43->SetBinContent(61,508);
   hM_bin43->SetBinContent(62,476);
   hM_bin43->SetBinContent(63,447);
   hM_bin43->SetBinContent(64,420);
   hM_bin43->SetBinContent(65,415);
   hM_bin43->SetBinContent(66,380);
   hM_bin43->SetBinContent(67,411);
   hM_bin43->SetBinContent(68,409);
   hM_bin43->SetBinContent(69,398);
   hM_bin43->SetBinContent(70,436);
   hM_bin43->SetBinContent(71,445);
   hM_bin43->SetBinContent(72,458);
   hM_bin43->SetBinContent(73,467);
   hM_bin43->SetBinContent(74,463);
   hM_bin43->SetBinContent(75,487);
   hM_bin43->SetBinContent(76,478);
   hM_bin43->SetBinContent(77,466);
   hM_bin43->SetBinContent(78,478);
   hM_bin43->SetBinContent(79,504);
   hM_bin43->SetBinContent(80,496);
   hM_bin43->SetBinContent(81,502);
   hM_bin43->SetBinContent(82,495);
   hM_bin43->SetBinContent(83,503);
   hM_bin43->SetBinContent(84,499);
   hM_bin43->SetBinContent(85,529);
   hM_bin43->SetBinContent(86,501);
   hM_bin43->SetBinContent(87,524);
   hM_bin43->SetBinContent(88,517);
   hM_bin43->SetBinContent(89,502);
   hM_bin43->SetBinContent(90,571);
   hM_bin43->SetBinContent(91,561);
   hM_bin43->SetBinContent(92,498);
   hM_bin43->SetBinContent(93,548);
   hM_bin43->SetBinContent(94,590);
   hM_bin43->SetBinContent(95,587);
   hM_bin43->SetBinContent(96,561);
   hM_bin43->SetBinContent(97,553);
   hM_bin43->SetBinContent(98,545);
   hM_bin43->SetBinContent(99,562);
   hM_bin43->SetBinContent(100,554);
   hM_bin43->SetBinContent(101,96628);
   hM_bin43->SetEntries(149872);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07483778,0.1907712);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(286.4532);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-155.5772);
   fsig->SetParError(0,12.36005);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,2593.186);
   fsig->SetParError(1,107.1029);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-9.386258e-07);
   fsig->SetParError(2,289.842);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,1621.387);
   fsig->SetParError(3,15.05567);
   fsig->SetParLimits(3,0,3958);
   fsig->SetParameter(4,0.1326464);
   fsig->SetParError(4,0.0001731374);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,6.176875e-06);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin43->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin43");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 149872 ");
   text = ptstats->AddText("Mean  = 0.1762");
   text = ptstats->AddText("RMS   = 0.06441");
   text = ptstats->AddText("#chi^{2} / ndf = 286.5 / 28");
   text = ptstats->AddText("p0       = -155.6 #pm 12.4 ");
   text = ptstats->AddText("p1       =  2593 #pm 107.1 ");
   text = ptstats->AddText("p2       = -9.386e-07 #pm 2.898e+02 ");
   text = ptstats->AddText("p3       =  1621 #pm 15.1 ");
   text = ptstats->AddText("p4       = 0.1326 #pm 0.0002 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00001 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin43->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin43);

   ci = TColor::GetColor("#0000ff");
   hM_bin43->SetMarkerColor(ci);
   hM_bin43->SetMarkerStyle(24);
   hM_bin43->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin43->GetXaxis()->SetLabelFont(42);
   hM_bin43->GetXaxis()->SetLabelSize(0.035);
   hM_bin43->GetXaxis()->SetTitleSize(0.035);
   hM_bin43->GetXaxis()->SetTitleFont(42);
   hM_bin43->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin43->GetYaxis()->SetLabelFont(42);
   hM_bin43->GetYaxis()->SetLabelSize(0.035);
   hM_bin43->GetYaxis()->SetTitleSize(0.035);
   hM_bin43->GetYaxis()->SetTitleFont(42);
   hM_bin43->GetZaxis()->SetLabelFont(42);
   hM_bin43->GetZaxis()->SetLabelSize(0.035);
   hM_bin43->GetZaxis()->SetTitleSize(0.035);
   hM_bin43->GetZaxis()->SetTitleFont(42);
   hM_bin43->Draw("e");
   
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
   fmb->SetParameter(0,-155.5772);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,2593.186);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-9.386258e-07);
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
   fpeak->SetParameter(0,1621.387);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1326464);
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
