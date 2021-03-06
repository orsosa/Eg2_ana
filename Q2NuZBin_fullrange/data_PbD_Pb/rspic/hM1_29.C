{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr  4 12:26:46 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-4.225745,0.350906,38.03171);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin29 = new TH1F("hM_bin29","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin29->SetBinContent(0,1224);
   hM_bin29->SetBinContent(16,1);
   hM_bin29->SetBinContent(17,1);
   hM_bin29->SetBinContent(18,1);
   hM_bin29->SetBinContent(19,3);
   hM_bin29->SetBinContent(21,1);
   hM_bin29->SetBinContent(23,2);
   hM_bin29->SetBinContent(25,1);
   hM_bin29->SetBinContent(26,1);
   hM_bin29->SetBinContent(27,1);
   hM_bin29->SetBinContent(29,1);
   hM_bin29->SetBinContent(30,2);
   hM_bin29->SetBinContent(33,4);
   hM_bin29->SetBinContent(34,1);
   hM_bin29->SetBinContent(35,1);
   hM_bin29->SetBinContent(37,1);
   hM_bin29->SetBinContent(38,1);
   hM_bin29->SetBinContent(39,3);
   hM_bin29->SetBinContent(40,5);
   hM_bin29->SetBinContent(41,6);
   hM_bin29->SetBinContent(42,1);
   hM_bin29->SetBinContent(43,3);
   hM_bin29->SetBinContent(44,1);
   hM_bin29->SetBinContent(45,9);
   hM_bin29->SetBinContent(46,16);
   hM_bin29->SetBinContent(47,15);
   hM_bin29->SetBinContent(48,10);
   hM_bin29->SetBinContent(49,20);
   hM_bin29->SetBinContent(50,14);
   hM_bin29->SetBinContent(51,22);
   hM_bin29->SetBinContent(52,19);
   hM_bin29->SetBinContent(53,22);
   hM_bin29->SetBinContent(54,23);
   hM_bin29->SetBinContent(55,23);
   hM_bin29->SetBinContent(56,27);
   hM_bin29->SetBinContent(57,13);
   hM_bin29->SetBinContent(58,17);
   hM_bin29->SetBinContent(59,13);
   hM_bin29->SetBinContent(60,12);
   hM_bin29->SetBinContent(61,8);
   hM_bin29->SetBinContent(62,11);
   hM_bin29->SetBinContent(63,7);
   hM_bin29->SetBinContent(64,3);
   hM_bin29->SetBinContent(65,2);
   hM_bin29->SetBinContent(66,8);
   hM_bin29->SetBinContent(67,1);
   hM_bin29->SetBinContent(68,3);
   hM_bin29->SetBinContent(69,1);
   hM_bin29->SetBinContent(70,3);
   hM_bin29->SetBinContent(71,2);
   hM_bin29->SetBinContent(73,2);
   hM_bin29->SetBinContent(74,2);
   hM_bin29->SetBinContent(75,1);
   hM_bin29->SetBinContent(76,1);
   hM_bin29->SetBinContent(77,3);
   hM_bin29->SetBinContent(78,3);
   hM_bin29->SetBinContent(79,3);
   hM_bin29->SetBinContent(80,2);
   hM_bin29->SetBinContent(81,3);
   hM_bin29->SetBinContent(82,6);
   hM_bin29->SetBinContent(83,2);
   hM_bin29->SetBinContent(84,7);
   hM_bin29->SetBinContent(85,5);
   hM_bin29->SetBinContent(86,2);
   hM_bin29->SetBinContent(87,1);
   hM_bin29->SetBinContent(90,7);
   hM_bin29->SetBinContent(91,3);
   hM_bin29->SetBinContent(92,2);
   hM_bin29->SetBinContent(93,1);
   hM_bin29->SetBinContent(94,5);
   hM_bin29->SetBinContent(95,4);
   hM_bin29->SetBinContent(96,3);
   hM_bin29->SetBinContent(97,2);
   hM_bin29->SetBinContent(98,5);
   hM_bin29->SetBinContent(99,2);
   hM_bin29->SetBinContent(100,5);
   hM_bin29->SetBinContent(101,7884);
   hM_bin29->SetEntries(9556);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.09040736,0.2063408);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(47.56599);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-0.3610485);
   fsig->SetParError(0,1.462213);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,5.062325);
   fsig->SetParError(1,9.193209);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-3.45608e-10);
   fsig->SetParError(2,119.6424);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,20.20616);
   fsig->SetParError(3,1.524844);
   fsig->SetParLimits(3,0,54);
   fsig->SetParameter(4,0.1475494);
   fsig->SetParError(4,0.001362415);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0002505775);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin29->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin29");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 9556   ");
   text = ptstats->AddText("Mean  = 0.1632");
   text = ptstats->AddText("RMS   = 0.05647");
   text = ptstats->AddText("#chi^{2} / ndf = 47.57 / 28");
   text = ptstats->AddText("p0       = -0.361 #pm 1.462 ");
   text = ptstats->AddText("p1       = 5.062 #pm 9.193 ");
   text = ptstats->AddText("p2       = -3.456e-10 #pm 1.196e+02 ");
   text = ptstats->AddText("p3       = 20.21 #pm 1.52 ");
   text = ptstats->AddText("p4       = 0.1475 #pm 0.0014 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00025 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin29->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin29);

   ci = TColor::GetColor("#0000ff");
   hM_bin29->SetMarkerColor(ci);
   hM_bin29->SetMarkerStyle(24);
   hM_bin29->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin29->GetXaxis()->SetLabelFont(42);
   hM_bin29->GetXaxis()->SetLabelSize(0.035);
   hM_bin29->GetXaxis()->SetTitleSize(0.035);
   hM_bin29->GetXaxis()->SetTitleFont(42);
   hM_bin29->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin29->GetYaxis()->SetLabelFont(42);
   hM_bin29->GetYaxis()->SetLabelSize(0.035);
   hM_bin29->GetYaxis()->SetTitleSize(0.035);
   hM_bin29->GetYaxis()->SetTitleFont(42);
   hM_bin29->GetZaxis()->SetLabelFont(42);
   hM_bin29->GetZaxis()->SetLabelSize(0.035);
   hM_bin29->GetZaxis()->SetTitleSize(0.035);
   hM_bin29->GetZaxis()->SetTitleFont(42);
   hM_bin29->Draw("e");
   
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
   fmb->SetParameter(0,-0.3610485);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,5.062325);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-3.45608e-10);
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
   fpeak->SetParameter(0,20.20616);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1475494);
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
