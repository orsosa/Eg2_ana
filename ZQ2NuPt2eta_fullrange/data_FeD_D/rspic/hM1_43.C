{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 18 12:22:21 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.1901558,53.36474,0.8890623,1110.554);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin43 = new TH1F("hM_bin43","M_{#gamma #gamma}",100,0.2600464,0.8191716);
   hM_bin43->SetBinContent(0,34942);
   hM_bin43->SetBinContent(1,694);
   hM_bin43->SetBinContent(2,628);
   hM_bin43->SetBinContent(3,720);
   hM_bin43->SetBinContent(4,665);
   hM_bin43->SetBinContent(5,706);
   hM_bin43->SetBinContent(6,716);
   hM_bin43->SetBinContent(7,730);
   hM_bin43->SetBinContent(8,780);
   hM_bin43->SetBinContent(9,747);
   hM_bin43->SetBinContent(10,757);
   hM_bin43->SetBinContent(11,778);
   hM_bin43->SetBinContent(12,828);
   hM_bin43->SetBinContent(13,738);
   hM_bin43->SetBinContent(14,850);
   hM_bin43->SetBinContent(15,812);
   hM_bin43->SetBinContent(16,809);
   hM_bin43->SetBinContent(17,814);
   hM_bin43->SetBinContent(18,809);
   hM_bin43->SetBinContent(19,849);
   hM_bin43->SetBinContent(20,834);
   hM_bin43->SetBinContent(21,806);
   hM_bin43->SetBinContent(22,818);
   hM_bin43->SetBinContent(23,822);
   hM_bin43->SetBinContent(24,894);
   hM_bin43->SetBinContent(25,934);
   hM_bin43->SetBinContent(26,842);
   hM_bin43->SetBinContent(27,850);
   hM_bin43->SetBinContent(28,860);
   hM_bin43->SetBinContent(29,862);
   hM_bin43->SetBinContent(30,865);
   hM_bin43->SetBinContent(31,889);
   hM_bin43->SetBinContent(32,877);
   hM_bin43->SetBinContent(33,879);
   hM_bin43->SetBinContent(34,868);
   hM_bin43->SetBinContent(35,825);
   hM_bin43->SetBinContent(36,902);
   hM_bin43->SetBinContent(37,892);
   hM_bin43->SetBinContent(38,929);
   hM_bin43->SetBinContent(39,873);
   hM_bin43->SetBinContent(40,880);
   hM_bin43->SetBinContent(41,873);
   hM_bin43->SetBinContent(42,868);
   hM_bin43->SetBinContent(43,907);
   hM_bin43->SetBinContent(44,843);
   hM_bin43->SetBinContent(45,914);
   hM_bin43->SetBinContent(46,874);
   hM_bin43->SetBinContent(47,875);
   hM_bin43->SetBinContent(48,857);
   hM_bin43->SetBinContent(49,864);
   hM_bin43->SetBinContent(50,845);
   hM_bin43->SetBinContent(51,837);
   hM_bin43->SetBinContent(52,881);
   hM_bin43->SetBinContent(53,857);
   hM_bin43->SetBinContent(54,894);
   hM_bin43->SetBinContent(55,786);
   hM_bin43->SetBinContent(56,798);
   hM_bin43->SetBinContent(57,790);
   hM_bin43->SetBinContent(58,798);
   hM_bin43->SetBinContent(59,680);
   hM_bin43->SetBinContent(60,759);
   hM_bin43->SetBinContent(61,741);
   hM_bin43->SetBinContent(62,647);
   hM_bin43->SetBinContent(63,681);
   hM_bin43->SetBinContent(64,657);
   hM_bin43->SetBinContent(65,657);
   hM_bin43->SetBinContent(66,639);
   hM_bin43->SetBinContent(67,635);
   hM_bin43->SetBinContent(68,621);
   hM_bin43->SetBinContent(69,623);
   hM_bin43->SetBinContent(70,627);
   hM_bin43->SetBinContent(71,609);
   hM_bin43->SetBinContent(72,550);
   hM_bin43->SetBinContent(73,569);
   hM_bin43->SetBinContent(74,566);
   hM_bin43->SetBinContent(75,518);
   hM_bin43->SetBinContent(76,501);
   hM_bin43->SetBinContent(77,499);
   hM_bin43->SetBinContent(78,497);
   hM_bin43->SetBinContent(79,459);
   hM_bin43->SetBinContent(80,466);
   hM_bin43->SetBinContent(81,403);
   hM_bin43->SetBinContent(82,397);
   hM_bin43->SetBinContent(83,441);
   hM_bin43->SetBinContent(84,394);
   hM_bin43->SetBinContent(85,393);
   hM_bin43->SetBinContent(86,383);
   hM_bin43->SetBinContent(87,319);
   hM_bin43->SetBinContent(88,313);
   hM_bin43->SetBinContent(89,334);
   hM_bin43->SetBinContent(90,312);
   hM_bin43->SetBinContent(91,305);
   hM_bin43->SetBinContent(92,302);
   hM_bin43->SetBinContent(93,298);
   hM_bin43->SetBinContent(94,241);
   hM_bin43->SetBinContent(95,287);
   hM_bin43->SetBinContent(96,215);
   hM_bin43->SetBinContent(97,242);
   hM_bin43->SetBinContent(98,236);
   hM_bin43->SetBinContent(99,216);
   hM_bin43->SetBinContent(100,212);
   hM_bin43->SetBinContent(101,4284);
   hM_bin43->SetEntries(106662);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.3828921,0.6701922);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(50.69966);
   fsig->SetNDF(45);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,457.1914);
   fsig->SetParError(0,402.9217);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,2334.137);
   fsig->SetParError(1,1598.54);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-3273.22);
   fsig->SetParError(2,1485.235);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,98.70503);
   fsig->SetParError(3,26.72914);
   fsig->SetParLimits(3,0,1868);
   fsig->SetParameter(4,0.529687);
   fsig->SetParError(4,0.006323681);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.0478836);
   fsig->SetParError(5,0.0230911);
   fsig->SetParLimits(5,0.04788336,0.07182504);
   hM_bin43->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin43");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 106662 ");
   text = ptstats->AddText("Mean  = 0.4993");
   text = ptstats->AddText("RMS   = 0.1416");
   text = ptstats->AddText("#chi^{2} / ndf =  50.7 / 45");
   text = ptstats->AddText("p0       = 457.2 #pm 402.9 ");
   text = ptstats->AddText("p1       =  2334 #pm 1598.5 ");
   text = ptstats->AddText("p2       = -3273 #pm 1485.2 ");
   text = ptstats->AddText("p3       = 98.71 #pm 26.73 ");
   text = ptstats->AddText("p4       = 0.5297 #pm 0.0063 ");
   text = ptstats->AddText("p5       = 0.04788 #pm 0.02309 ");
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
   fmb->SetParameter(0,457.1914);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,2334.137);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-3273.22);
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
   fpeak->SetParameter(0,98.70503);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.529687);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.0478836);
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
