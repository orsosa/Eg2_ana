{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:25:57 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-25.52204,0.350906,229.6983);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin16 = new TH1F("hM_bin16","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin16->SetBinContent(14,4);
   hM_bin16->SetBinContent(15,5);
   hM_bin16->SetBinContent(16,5);
   hM_bin16->SetBinContent(17,16);
   hM_bin16->SetBinContent(18,8);
   hM_bin16->SetBinContent(19,26);
   hM_bin16->SetBinContent(20,10);
   hM_bin16->SetBinContent(21,15);
   hM_bin16->SetBinContent(22,28);
   hM_bin16->SetBinContent(23,21);
   hM_bin16->SetBinContent(24,30);
   hM_bin16->SetBinContent(25,18);
   hM_bin16->SetBinContent(26,37);
   hM_bin16->SetBinContent(27,23);
   hM_bin16->SetBinContent(28,37);
   hM_bin16->SetBinContent(29,32);
   hM_bin16->SetBinContent(30,42);
   hM_bin16->SetBinContent(31,39);
   hM_bin16->SetBinContent(32,29);
   hM_bin16->SetBinContent(33,31);
   hM_bin16->SetBinContent(34,28);
   hM_bin16->SetBinContent(35,34);
   hM_bin16->SetBinContent(36,43);
   hM_bin16->SetBinContent(37,37);
   hM_bin16->SetBinContent(38,57);
   hM_bin16->SetBinContent(39,50);
   hM_bin16->SetBinContent(40,44);
   hM_bin16->SetBinContent(41,76);
   hM_bin16->SetBinContent(42,81);
   hM_bin16->SetBinContent(43,79);
   hM_bin16->SetBinContent(44,79);
   hM_bin16->SetBinContent(45,111);
   hM_bin16->SetBinContent(46,122);
   hM_bin16->SetBinContent(47,146);
   hM_bin16->SetBinContent(48,140);
   hM_bin16->SetBinContent(49,162);
   hM_bin16->SetBinContent(50,168);
   hM_bin16->SetBinContent(51,167);
   hM_bin16->SetBinContent(52,159);
   hM_bin16->SetBinContent(53,176);
   hM_bin16->SetBinContent(54,181);
   hM_bin16->SetBinContent(55,142);
   hM_bin16->SetBinContent(56,152);
   hM_bin16->SetBinContent(57,106);
   hM_bin16->SetBinContent(58,95);
   hM_bin16->SetBinContent(59,104);
   hM_bin16->SetBinContent(60,91);
   hM_bin16->SetBinContent(61,69);
   hM_bin16->SetBinContent(62,59);
   hM_bin16->SetBinContent(63,65);
   hM_bin16->SetBinContent(64,35);
   hM_bin16->SetBinContent(65,47);
   hM_bin16->SetBinContent(66,39);
   hM_bin16->SetBinContent(67,42);
   hM_bin16->SetBinContent(68,42);
   hM_bin16->SetBinContent(69,37);
   hM_bin16->SetBinContent(70,31);
   hM_bin16->SetBinContent(71,36);
   hM_bin16->SetBinContent(72,35);
   hM_bin16->SetBinContent(73,33);
   hM_bin16->SetBinContent(74,43);
   hM_bin16->SetBinContent(75,42);
   hM_bin16->SetBinContent(76,32);
   hM_bin16->SetBinContent(77,50);
   hM_bin16->SetBinContent(78,24);
   hM_bin16->SetBinContent(79,34);
   hM_bin16->SetBinContent(80,31);
   hM_bin16->SetBinContent(81,25);
   hM_bin16->SetBinContent(82,49);
   hM_bin16->SetBinContent(83,27);
   hM_bin16->SetBinContent(84,38);
   hM_bin16->SetBinContent(85,22);
   hM_bin16->SetBinContent(86,31);
   hM_bin16->SetBinContent(87,29);
   hM_bin16->SetBinContent(88,31);
   hM_bin16->SetBinContent(89,36);
   hM_bin16->SetBinContent(90,23);
   hM_bin16->SetBinContent(91,28);
   hM_bin16->SetBinContent(92,25);
   hM_bin16->SetBinContent(93,16);
   hM_bin16->SetBinContent(94,20);
   hM_bin16->SetBinContent(95,25);
   hM_bin16->SetBinContent(96,27);
   hM_bin16->SetBinContent(97,15);
   hM_bin16->SetBinContent(98,17);
   hM_bin16->SetBinContent(99,20);
   hM_bin16->SetBinContent(100,26);
   hM_bin16->SetBinContent(101,1389);
   hM_bin16->SetEntries(6031);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07820196,0.1991772);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(37.12589);
   fsig->SetNDF(30);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,30.81854);
   fsig->SetParError(0,0.9292846);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,23.0968);
   fsig->SetParError(1,0.9873112);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.603778e-05);
   fsig->SetParError(2,7179.227);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,137.0219);
   fsig->SetParError(3,4.586654);
   fsig->SetParLimits(3,0,362);
   fsig->SetParameter(4,0.1384937);
   fsig->SetParError(4,0.0006376147);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.02015608);
   fsig->SetParError(5,0.0006063944);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin16->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin16");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 6031   ");
   text = ptstats->AddText("Mean  =  0.152");
   text = ptstats->AddText("RMS   = 0.06078");
   text = ptstats->AddText("#chi^{2} / ndf = 37.13 / 30");
   text = ptstats->AddText("p0       = 30.82 #pm 0.93 ");
   text = ptstats->AddText("p1       =  23.1 #pm 1.0 ");
   text = ptstats->AddText("p2       = -1.604e-05 #pm 7.179e+03 ");
   text = ptstats->AddText("p3       =   137 #pm 4.6 ");
   text = ptstats->AddText("p4       = 0.1385 #pm 0.0006 ");
   text = ptstats->AddText("p5       = 0.02016 #pm 0.00061 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin16->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin16);

   ci = TColor::GetColor("#0000ff");
   hM_bin16->SetMarkerColor(ci);
   hM_bin16->SetMarkerStyle(24);
   hM_bin16->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin16->GetXaxis()->SetLabelFont(42);
   hM_bin16->GetXaxis()->SetLabelSize(0.035);
   hM_bin16->GetXaxis()->SetTitleSize(0.035);
   hM_bin16->GetXaxis()->SetTitleFont(42);
   hM_bin16->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin16->GetYaxis()->SetLabelFont(42);
   hM_bin16->GetYaxis()->SetLabelSize(0.035);
   hM_bin16->GetYaxis()->SetTitleSize(0.035);
   hM_bin16->GetYaxis()->SetTitleFont(42);
   hM_bin16->GetZaxis()->SetLabelFont(42);
   hM_bin16->GetZaxis()->SetLabelSize(0.035);
   hM_bin16->GetZaxis()->SetTitleSize(0.035);
   hM_bin16->GetZaxis()->SetTitleFont(42);
   hM_bin16->Draw("e");
   
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
   fmb->SetParameter(0,30.81854);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,23.0968);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.603778e-05);
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
   fpeak->SetParameter(0,137.0219);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1384937);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.02015608);
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
