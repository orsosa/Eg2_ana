{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 14:54:36 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-14.4375,0.350906,129.9375);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin28 = new TH1F("hM_bin28","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin28->SetBinContent(0,1792);
   hM_bin28->SetBinContent(14,1);
   hM_bin28->SetBinContent(15,1);
   hM_bin28->SetBinContent(16,1);
   hM_bin28->SetBinContent(17,1);
   hM_bin28->SetBinContent(18,2);
   hM_bin28->SetBinContent(19,4);
   hM_bin28->SetBinContent(20,1);
   hM_bin28->SetBinContent(21,3);
   hM_bin28->SetBinContent(23,3);
   hM_bin28->SetBinContent(24,3);
   hM_bin28->SetBinContent(25,3);
   hM_bin28->SetBinContent(26,3);
   hM_bin28->SetBinContent(27,2);
   hM_bin28->SetBinContent(28,3);
   hM_bin28->SetBinContent(29,3);
   hM_bin28->SetBinContent(30,3);
   hM_bin28->SetBinContent(31,4);
   hM_bin28->SetBinContent(33,4);
   hM_bin28->SetBinContent(34,3);
   hM_bin28->SetBinContent(35,2);
   hM_bin28->SetBinContent(36,4);
   hM_bin28->SetBinContent(37,6);
   hM_bin28->SetBinContent(38,8);
   hM_bin28->SetBinContent(39,8);
   hM_bin28->SetBinContent(40,4);
   hM_bin28->SetBinContent(41,5);
   hM_bin28->SetBinContent(42,9);
   hM_bin28->SetBinContent(43,17);
   hM_bin28->SetBinContent(44,23);
   hM_bin28->SetBinContent(45,29);
   hM_bin28->SetBinContent(46,40);
   hM_bin28->SetBinContent(47,56);
   hM_bin28->SetBinContent(48,61);
   hM_bin28->SetBinContent(49,67);
   hM_bin28->SetBinContent(50,79);
   hM_bin28->SetBinContent(51,90);
   hM_bin28->SetBinContent(52,76);
   hM_bin28->SetBinContent(53,100);
   hM_bin28->SetBinContent(54,99);
   hM_bin28->SetBinContent(55,87);
   hM_bin28->SetBinContent(56,86);
   hM_bin28->SetBinContent(57,70);
   hM_bin28->SetBinContent(58,71);
   hM_bin28->SetBinContent(59,58);
   hM_bin28->SetBinContent(60,41);
   hM_bin28->SetBinContent(61,36);
   hM_bin28->SetBinContent(62,33);
   hM_bin28->SetBinContent(63,31);
   hM_bin28->SetBinContent(64,24);
   hM_bin28->SetBinContent(65,20);
   hM_bin28->SetBinContent(66,26);
   hM_bin28->SetBinContent(67,17);
   hM_bin28->SetBinContent(68,19);
   hM_bin28->SetBinContent(69,19);
   hM_bin28->SetBinContent(70,14);
   hM_bin28->SetBinContent(71,19);
   hM_bin28->SetBinContent(72,22);
   hM_bin28->SetBinContent(73,26);
   hM_bin28->SetBinContent(74,13);
   hM_bin28->SetBinContent(75,19);
   hM_bin28->SetBinContent(76,16);
   hM_bin28->SetBinContent(77,17);
   hM_bin28->SetBinContent(78,11);
   hM_bin28->SetBinContent(79,25);
   hM_bin28->SetBinContent(80,21);
   hM_bin28->SetBinContent(81,16);
   hM_bin28->SetBinContent(82,14);
   hM_bin28->SetBinContent(83,12);
   hM_bin28->SetBinContent(84,16);
   hM_bin28->SetBinContent(85,19);
   hM_bin28->SetBinContent(86,14);
   hM_bin28->SetBinContent(87,19);
   hM_bin28->SetBinContent(88,20);
   hM_bin28->SetBinContent(89,19);
   hM_bin28->SetBinContent(90,16);
   hM_bin28->SetBinContent(91,23);
   hM_bin28->SetBinContent(92,19);
   hM_bin28->SetBinContent(93,19);
   hM_bin28->SetBinContent(94,18);
   hM_bin28->SetBinContent(95,19);
   hM_bin28->SetBinContent(96,23);
   hM_bin28->SetBinContent(97,17);
   hM_bin28->SetBinContent(98,21);
   hM_bin28->SetBinContent(99,10);
   hM_bin28->SetBinContent(100,24);
   hM_bin28->SetBinContent(101,10609);
   hM_bin28->SetEntries(14431);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08791375,0.2038472);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(29.65179);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-10.27846);
   fsig->SetParError(0,3.075898);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,121.529);
   fsig->SetParError(1,22.9745);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.0001010988);
   fsig->SetParError(2,227.7823);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,81.86949);
   fsig->SetParError(3,3.148165);
   fsig->SetParLimits(3,0,200);
   fsig->SetParameter(4,0.1450168);
   fsig->SetParError(4,0.0007821387);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0001256328);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin28->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin28");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 14431  ");
   text = ptstats->AddText("Mean  = 0.1748");
   text = ptstats->AddText("RMS   = 0.05747");
   text = ptstats->AddText("#chi^{2} / ndf = 29.65 / 28");
   text = ptstats->AddText("p0       = -10.28 #pm 3.08 ");
   text = ptstats->AddText("p1       = 121.5 #pm 23.0 ");
   text = ptstats->AddText("p2       = -0.0001011 #pm 227.7822571 ");
   text = ptstats->AddText("p3       = 81.87 #pm 3.15 ");
   text = ptstats->AddText("p4       = 0.145 #pm 0.001 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00013 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin28->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin28);

   ci = TColor::GetColor("#0000ff");
   hM_bin28->SetMarkerColor(ci);
   hM_bin28->SetMarkerStyle(24);
   hM_bin28->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin28->GetXaxis()->SetLabelFont(42);
   hM_bin28->GetXaxis()->SetLabelSize(0.035);
   hM_bin28->GetXaxis()->SetTitleSize(0.035);
   hM_bin28->GetXaxis()->SetTitleFont(42);
   hM_bin28->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin28->GetYaxis()->SetLabelFont(42);
   hM_bin28->GetYaxis()->SetLabelSize(0.035);
   hM_bin28->GetYaxis()->SetTitleSize(0.035);
   hM_bin28->GetYaxis()->SetTitleFont(42);
   hM_bin28->GetZaxis()->SetLabelFont(42);
   hM_bin28->GetZaxis()->SetLabelSize(0.035);
   hM_bin28->GetZaxis()->SetTitleSize(0.035);
   hM_bin28->GetZaxis()->SetTitleFont(42);
   hM_bin28->Draw("e");
   
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
   fmb->SetParameter(0,-10.27846);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,121.529);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.0001010988);
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
   fpeak->SetParameter(0,81.86949);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1450168);
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
