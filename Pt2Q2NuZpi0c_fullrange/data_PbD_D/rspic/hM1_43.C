{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue May  9 16:19:55 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-520.9977,0.350906,4688.979);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin43 = new TH1F("hM_bin43","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin43->SetBinContent(14,2);
   hM_bin43->SetBinContent(15,44);
   hM_bin43->SetBinContent(16,95);
   hM_bin43->SetBinContent(17,190);
   hM_bin43->SetBinContent(18,215);
   hM_bin43->SetBinContent(19,258);
   hM_bin43->SetBinContent(20,327);
   hM_bin43->SetBinContent(21,355);
   hM_bin43->SetBinContent(22,386);
   hM_bin43->SetBinContent(23,419);
   hM_bin43->SetBinContent(24,504);
   hM_bin43->SetBinContent(25,415);
   hM_bin43->SetBinContent(26,514);
   hM_bin43->SetBinContent(27,472);
   hM_bin43->SetBinContent(28,501);
   hM_bin43->SetBinContent(29,516);
   hM_bin43->SetBinContent(30,554);
   hM_bin43->SetBinContent(31,583);
   hM_bin43->SetBinContent(32,573);
   hM_bin43->SetBinContent(33,587);
   hM_bin43->SetBinContent(34,596);
   hM_bin43->SetBinContent(35,590);
   hM_bin43->SetBinContent(36,637);
   hM_bin43->SetBinContent(37,724);
   hM_bin43->SetBinContent(38,786);
   hM_bin43->SetBinContent(39,856);
   hM_bin43->SetBinContent(40,976);
   hM_bin43->SetBinContent(41,1186);
   hM_bin43->SetBinContent(42,1431);
   hM_bin43->SetBinContent(43,1783);
   hM_bin43->SetBinContent(44,2065);
   hM_bin43->SetBinContent(45,2482);
   hM_bin43->SetBinContent(46,2858);
   hM_bin43->SetBinContent(47,3281);
   hM_bin43->SetBinContent(48,3544);
   hM_bin43->SetBinContent(49,3907);
   hM_bin43->SetBinContent(50,3768);
   hM_bin43->SetBinContent(51,3825);
   hM_bin43->SetBinContent(52,3692);
   hM_bin43->SetBinContent(53,3369);
   hM_bin43->SetBinContent(54,3113);
   hM_bin43->SetBinContent(55,2756);
   hM_bin43->SetBinContent(56,2421);
   hM_bin43->SetBinContent(57,2081);
   hM_bin43->SetBinContent(58,1916);
   hM_bin43->SetBinContent(59,1670);
   hM_bin43->SetBinContent(60,1512);
   hM_bin43->SetBinContent(61,1376);
   hM_bin43->SetBinContent(62,1219);
   hM_bin43->SetBinContent(63,1154);
   hM_bin43->SetBinContent(64,1041);
   hM_bin43->SetBinContent(65,954);
   hM_bin43->SetBinContent(66,989);
   hM_bin43->SetBinContent(67,934);
   hM_bin43->SetBinContent(68,853);
   hM_bin43->SetBinContent(69,884);
   hM_bin43->SetBinContent(70,800);
   hM_bin43->SetBinContent(71,780);
   hM_bin43->SetBinContent(72,838);
   hM_bin43->SetBinContent(73,767);
   hM_bin43->SetBinContent(74,767);
   hM_bin43->SetBinContent(75,798);
   hM_bin43->SetBinContent(76,763);
   hM_bin43->SetBinContent(77,788);
   hM_bin43->SetBinContent(78,709);
   hM_bin43->SetBinContent(79,763);
   hM_bin43->SetBinContent(80,731);
   hM_bin43->SetBinContent(81,725);
   hM_bin43->SetBinContent(82,675);
   hM_bin43->SetBinContent(83,709);
   hM_bin43->SetBinContent(84,655);
   hM_bin43->SetBinContent(85,640);
   hM_bin43->SetBinContent(86,729);
   hM_bin43->SetBinContent(87,694);
   hM_bin43->SetBinContent(88,687);
   hM_bin43->SetBinContent(89,653);
   hM_bin43->SetBinContent(90,635);
   hM_bin43->SetBinContent(91,574);
   hM_bin43->SetBinContent(92,627);
   hM_bin43->SetBinContent(93,609);
   hM_bin43->SetBinContent(94,619);
   hM_bin43->SetBinContent(95,623);
   hM_bin43->SetBinContent(96,560);
   hM_bin43->SetBinContent(97,606);
   hM_bin43->SetBinContent(98,533);
   hM_bin43->SetBinContent(99,585);
   hM_bin43->SetBinContent(100,616);
   hM_bin43->SetBinContent(101,36414);
   hM_bin43->SetEntries(132411);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07750052,0.193434);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(161.4664);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,179.7877);
   fsig->SetParError(0,25.48445);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,3746.237);
   fsig->SetParError(1,188.0983);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-6.632617e-06);
   fsig->SetParError(2,872.3949);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,2996.722);
   fsig->SetParError(3,22.55279);
   fsig->SetParLimits(3,0,7814);
   fsig->SetParameter(4,0.1349359);
   fsig->SetParError(4,0.0001537614);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,1.042264e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin43->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin43");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 132411 ");
   text = ptstats->AddText("Mean  = 0.1569");
   text = ptstats->AddText("RMS   = 0.06157");
   text = ptstats->AddText("#chi^{2} / ndf = 161.5 / 28");
   text = ptstats->AddText("p0       = 179.8 #pm 25.5 ");
   text = ptstats->AddText("p1       =  3746 #pm 188.1 ");
   text = ptstats->AddText("p2       = -6.633e-06 #pm 8.724e+02 ");
   text = ptstats->AddText("p3       =  2997 #pm 22.6 ");
   text = ptstats->AddText("p4       = 0.1349 #pm 0.0002 ");
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
   fmb->SetParameter(0,179.7877);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,3746.237);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-6.632617e-06);
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
   fpeak->SetParameter(0,2996.722);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1349359);
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
