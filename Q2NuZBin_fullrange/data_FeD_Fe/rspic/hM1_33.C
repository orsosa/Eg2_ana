{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr  4 12:37:24 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-13.88598,0.350906,124.9738);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin33 = new TH1F("hM_bin33","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin33->SetBinContent(0,3674);
   hM_bin33->SetBinContent(15,1);
   hM_bin33->SetBinContent(16,1);
   hM_bin33->SetBinContent(17,1);
   hM_bin33->SetBinContent(18,1);
   hM_bin33->SetBinContent(19,4);
   hM_bin33->SetBinContent(20,3);
   hM_bin33->SetBinContent(21,2);
   hM_bin33->SetBinContent(22,5);
   hM_bin33->SetBinContent(24,2);
   hM_bin33->SetBinContent(25,1);
   hM_bin33->SetBinContent(26,3);
   hM_bin33->SetBinContent(27,2);
   hM_bin33->SetBinContent(28,3);
   hM_bin33->SetBinContent(29,8);
   hM_bin33->SetBinContent(30,4);
   hM_bin33->SetBinContent(31,3);
   hM_bin33->SetBinContent(32,3);
   hM_bin33->SetBinContent(33,6);
   hM_bin33->SetBinContent(34,5);
   hM_bin33->SetBinContent(35,3);
   hM_bin33->SetBinContent(36,9);
   hM_bin33->SetBinContent(37,7);
   hM_bin33->SetBinContent(38,5);
   hM_bin33->SetBinContent(39,5);
   hM_bin33->SetBinContent(40,13);
   hM_bin33->SetBinContent(41,18);
   hM_bin33->SetBinContent(42,25);
   hM_bin33->SetBinContent(43,28);
   hM_bin33->SetBinContent(44,47);
   hM_bin33->SetBinContent(45,56);
   hM_bin33->SetBinContent(46,61);
   hM_bin33->SetBinContent(47,69);
   hM_bin33->SetBinContent(48,72);
   hM_bin33->SetBinContent(49,75);
   hM_bin33->SetBinContent(50,82);
   hM_bin33->SetBinContent(51,72);
   hM_bin33->SetBinContent(52,77);
   hM_bin33->SetBinContent(53,96);
   hM_bin33->SetBinContent(54,88);
   hM_bin33->SetBinContent(55,70);
   hM_bin33->SetBinContent(56,61);
   hM_bin33->SetBinContent(57,51);
   hM_bin33->SetBinContent(58,45);
   hM_bin33->SetBinContent(59,24);
   hM_bin33->SetBinContent(60,33);
   hM_bin33->SetBinContent(61,26);
   hM_bin33->SetBinContent(62,24);
   hM_bin33->SetBinContent(63,19);
   hM_bin33->SetBinContent(64,22);
   hM_bin33->SetBinContent(65,18);
   hM_bin33->SetBinContent(66,12);
   hM_bin33->SetBinContent(67,13);
   hM_bin33->SetBinContent(68,16);
   hM_bin33->SetBinContent(69,16);
   hM_bin33->SetBinContent(70,7);
   hM_bin33->SetBinContent(71,5);
   hM_bin33->SetBinContent(72,12);
   hM_bin33->SetBinContent(73,11);
   hM_bin33->SetBinContent(74,11);
   hM_bin33->SetBinContent(75,15);
   hM_bin33->SetBinContent(76,14);
   hM_bin33->SetBinContent(77,18);
   hM_bin33->SetBinContent(78,11);
   hM_bin33->SetBinContent(79,10);
   hM_bin33->SetBinContent(80,16);
   hM_bin33->SetBinContent(81,14);
   hM_bin33->SetBinContent(82,13);
   hM_bin33->SetBinContent(83,22);
   hM_bin33->SetBinContent(84,15);
   hM_bin33->SetBinContent(85,21);
   hM_bin33->SetBinContent(86,21);
   hM_bin33->SetBinContent(87,15);
   hM_bin33->SetBinContent(88,13);
   hM_bin33->SetBinContent(89,11);
   hM_bin33->SetBinContent(90,16);
   hM_bin33->SetBinContent(91,28);
   hM_bin33->SetBinContent(92,18);
   hM_bin33->SetBinContent(93,19);
   hM_bin33->SetBinContent(94,20);
   hM_bin33->SetBinContent(95,20);
   hM_bin33->SetBinContent(96,29);
   hM_bin33->SetBinContent(97,12);
   hM_bin33->SetBinContent(98,26);
   hM_bin33->SetBinContent(99,28);
   hM_bin33->SetBinContent(100,21);
   hM_bin33->SetBinContent(101,21342);
   hM_bin33->SetEntries(26944);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08026432,0.1961977);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(31.71507);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-8.100254);
   fsig->SetParError(0,2.705867);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,107.9609);
   fsig->SetParError(1,21.38641);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-3.644929e-06);
   fsig->SetParError(2,435.9952);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,76.8357);
   fsig->SetParError(3,3.139085);
   fsig->SetParLimits(3,0,192);
   fsig->SetParameter(4,0.1369763);
   fsig->SetParError(4,0.0008277546);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0003117977);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin33->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin33");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 26944  ");
   text = ptstats->AddText("Mean  = 0.1707");
   text = ptstats->AddText("RMS   = 0.0623");
   text = ptstats->AddText("#chi^{2} / ndf = 31.72 / 28");
   text = ptstats->AddText("p0       =  -8.1 #pm 2.7 ");
   text = ptstats->AddText("p1       =   108 #pm 21.4 ");
   text = ptstats->AddText("p2       = -3.645e-06 #pm 4.360e+02 ");
   text = ptstats->AddText("p3       = 76.84 #pm 3.14 ");
   text = ptstats->AddText("p4       = 0.137 #pm 0.001 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00031 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin33->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin33);

   ci = TColor::GetColor("#0000ff");
   hM_bin33->SetMarkerColor(ci);
   hM_bin33->SetMarkerStyle(24);
   hM_bin33->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin33->GetXaxis()->SetLabelFont(42);
   hM_bin33->GetXaxis()->SetLabelSize(0.035);
   hM_bin33->GetXaxis()->SetTitleSize(0.035);
   hM_bin33->GetXaxis()->SetTitleFont(42);
   hM_bin33->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin33->GetYaxis()->SetLabelFont(42);
   hM_bin33->GetYaxis()->SetLabelSize(0.035);
   hM_bin33->GetYaxis()->SetTitleSize(0.035);
   hM_bin33->GetYaxis()->SetTitleFont(42);
   hM_bin33->GetZaxis()->SetLabelFont(42);
   hM_bin33->GetZaxis()->SetLabelSize(0.035);
   hM_bin33->GetZaxis()->SetTitleSize(0.035);
   hM_bin33->GetZaxis()->SetTitleFont(42);
   hM_bin33->Draw("e");
   
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
   fmb->SetParameter(0,-8.100254);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,107.9609);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-3.644929e-06);
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
   fpeak->SetParameter(0,76.8357);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1369763);
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
