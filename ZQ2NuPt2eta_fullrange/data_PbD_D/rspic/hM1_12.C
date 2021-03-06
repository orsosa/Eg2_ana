{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 18 12:05:28 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.1901558,-73.12192,0.8890623,1221.59);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin12 = new TH1F("hM_bin12","M_{#gamma #gamma}",100,0.2600464,0.8191716);
   hM_bin12->SetBinContent(0,33850);
   hM_bin12->SetBinContent(1,717);
   hM_bin12->SetBinContent(2,710);
   hM_bin12->SetBinContent(3,727);
   hM_bin12->SetBinContent(4,729);
   hM_bin12->SetBinContent(5,827);
   hM_bin12->SetBinContent(6,761);
   hM_bin12->SetBinContent(7,813);
   hM_bin12->SetBinContent(8,806);
   hM_bin12->SetBinContent(9,830);
   hM_bin12->SetBinContent(10,883);
   hM_bin12->SetBinContent(11,798);
   hM_bin12->SetBinContent(12,857);
   hM_bin12->SetBinContent(13,888);
   hM_bin12->SetBinContent(14,890);
   hM_bin12->SetBinContent(15,901);
   hM_bin12->SetBinContent(16,912);
   hM_bin12->SetBinContent(17,864);
   hM_bin12->SetBinContent(18,908);
   hM_bin12->SetBinContent(19,891);
   hM_bin12->SetBinContent(20,891);
   hM_bin12->SetBinContent(21,921);
   hM_bin12->SetBinContent(22,978);
   hM_bin12->SetBinContent(23,879);
   hM_bin12->SetBinContent(24,879);
   hM_bin12->SetBinContent(25,874);
   hM_bin12->SetBinContent(26,903);
   hM_bin12->SetBinContent(27,942);
   hM_bin12->SetBinContent(28,1011);
   hM_bin12->SetBinContent(29,955);
   hM_bin12->SetBinContent(30,903);
   hM_bin12->SetBinContent(31,903);
   hM_bin12->SetBinContent(32,890);
   hM_bin12->SetBinContent(33,968);
   hM_bin12->SetBinContent(34,976);
   hM_bin12->SetBinContent(35,881);
   hM_bin12->SetBinContent(36,914);
   hM_bin12->SetBinContent(37,895);
   hM_bin12->SetBinContent(38,948);
   hM_bin12->SetBinContent(39,917);
   hM_bin12->SetBinContent(40,968);
   hM_bin12->SetBinContent(41,958);
   hM_bin12->SetBinContent(42,893);
   hM_bin12->SetBinContent(43,965);
   hM_bin12->SetBinContent(44,943);
   hM_bin12->SetBinContent(45,869);
   hM_bin12->SetBinContent(46,921);
   hM_bin12->SetBinContent(47,923);
   hM_bin12->SetBinContent(48,874);
   hM_bin12->SetBinContent(49,863);
   hM_bin12->SetBinContent(50,885);
   hM_bin12->SetBinContent(51,830);
   hM_bin12->SetBinContent(52,827);
   hM_bin12->SetBinContent(53,790);
   hM_bin12->SetBinContent(54,780);
   hM_bin12->SetBinContent(55,733);
   hM_bin12->SetBinContent(56,818);
   hM_bin12->SetBinContent(57,707);
   hM_bin12->SetBinContent(58,723);
   hM_bin12->SetBinContent(59,698);
   hM_bin12->SetBinContent(60,696);
   hM_bin12->SetBinContent(61,655);
   hM_bin12->SetBinContent(62,623);
   hM_bin12->SetBinContent(63,666);
   hM_bin12->SetBinContent(64,592);
   hM_bin12->SetBinContent(65,602);
   hM_bin12->SetBinContent(66,589);
   hM_bin12->SetBinContent(67,487);
   hM_bin12->SetBinContent(68,495);
   hM_bin12->SetBinContent(69,518);
   hM_bin12->SetBinContent(70,525);
   hM_bin12->SetBinContent(71,483);
   hM_bin12->SetBinContent(72,445);
   hM_bin12->SetBinContent(73,405);
   hM_bin12->SetBinContent(74,410);
   hM_bin12->SetBinContent(75,407);
   hM_bin12->SetBinContent(76,382);
   hM_bin12->SetBinContent(77,393);
   hM_bin12->SetBinContent(78,358);
   hM_bin12->SetBinContent(79,357);
   hM_bin12->SetBinContent(80,347);
   hM_bin12->SetBinContent(81,351);
   hM_bin12->SetBinContent(82,278);
   hM_bin12->SetBinContent(83,287);
   hM_bin12->SetBinContent(84,265);
   hM_bin12->SetBinContent(85,256);
   hM_bin12->SetBinContent(86,260);
   hM_bin12->SetBinContent(87,234);
   hM_bin12->SetBinContent(88,249);
   hM_bin12->SetBinContent(89,208);
   hM_bin12->SetBinContent(90,200);
   hM_bin12->SetBinContent(91,203);
   hM_bin12->SetBinContent(92,168);
   hM_bin12->SetBinContent(93,194);
   hM_bin12->SetBinContent(94,141);
   hM_bin12->SetBinContent(95,147);
   hM_bin12->SetBinContent(96,114);
   hM_bin12->SetBinContent(97,128);
   hM_bin12->SetBinContent(98,142);
   hM_bin12->SetBinContent(99,125);
   hM_bin12->SetBinContent(100,127);
   hM_bin12->SetBinContent(101,2686);
   hM_bin12->SetEntries(102156);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.297215,0.728165);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(100.6034);
   fsig->SetNDF(71);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,405.4379);
   fsig->SetParError(0,104.3945);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,2675.879);
   fsig->SetParError(1,448.3273);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-3956.674);
   fsig->SetParError(2,430.7802);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,170.0886);
   fsig->SetParError(3,17.60799);
   fsig->SetParLimits(3,0,2022);
   fsig->SetParameter(4,0.4999237);
   fsig->SetParError(4,0.004534381);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.07182504);
   fsig->SetParError(5,0.004670198);
   fsig->SetParLimits(5,0.04788336,0.07182504);
   hM_bin12->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin12");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 102156 ");
   text = ptstats->AddText("Mean  = 0.4802");
   text = ptstats->AddText("RMS   = 0.1337");
   text = ptstats->AddText("#chi^{2} / ndf = 100.6 / 71");
   text = ptstats->AddText("p0       = 405.4 #pm 104.4 ");
   text = ptstats->AddText("p1       =  2676 #pm 448.3 ");
   text = ptstats->AddText("p2       = -3957 #pm 430.8 ");
   text = ptstats->AddText("p3       = 170.1 #pm 17.6 ");
   text = ptstats->AddText("p4       = 0.4999 #pm 0.0045 ");
   text = ptstats->AddText("p5       = 0.07183 #pm 0.00467 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin12->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin12);

   ci = TColor::GetColor("#0000ff");
   hM_bin12->SetMarkerColor(ci);
   hM_bin12->SetMarkerStyle(24);
   hM_bin12->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin12->GetXaxis()->SetLabelFont(42);
   hM_bin12->GetXaxis()->SetLabelSize(0.035);
   hM_bin12->GetXaxis()->SetTitleSize(0.035);
   hM_bin12->GetXaxis()->SetTitleFont(42);
   hM_bin12->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin12->GetYaxis()->SetLabelFont(42);
   hM_bin12->GetYaxis()->SetLabelSize(0.035);
   hM_bin12->GetYaxis()->SetTitleSize(0.035);
   hM_bin12->GetYaxis()->SetTitleFont(42);
   hM_bin12->GetZaxis()->SetLabelFont(42);
   hM_bin12->GetZaxis()->SetLabelSize(0.035);
   hM_bin12->GetZaxis()->SetTitleSize(0.035);
   hM_bin12->GetZaxis()->SetTitleFont(42);
   hM_bin12->Draw("e");
   
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
   fmb->SetParameter(0,405.4379);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,2675.879);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-3956.674);
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
   fpeak->SetParameter(0,170.0886);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.4999237);
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
