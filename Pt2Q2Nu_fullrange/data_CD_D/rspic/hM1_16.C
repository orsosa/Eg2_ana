{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 14:56:21 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-18.9699,0.350906,170.7291);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin16 = new TH1F("hM_bin16","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin16->SetBinContent(0,3372);
   hM_bin16->SetBinContent(14,1);
   hM_bin16->SetBinContent(15,2);
   hM_bin16->SetBinContent(17,4);
   hM_bin16->SetBinContent(18,5);
   hM_bin16->SetBinContent(19,2);
   hM_bin16->SetBinContent(20,3);
   hM_bin16->SetBinContent(21,3);
   hM_bin16->SetBinContent(22,2);
   hM_bin16->SetBinContent(23,1);
   hM_bin16->SetBinContent(24,3);
   hM_bin16->SetBinContent(25,1);
   hM_bin16->SetBinContent(26,4);
   hM_bin16->SetBinContent(27,6);
   hM_bin16->SetBinContent(28,2);
   hM_bin16->SetBinContent(29,5);
   hM_bin16->SetBinContent(30,3);
   hM_bin16->SetBinContent(31,6);
   hM_bin16->SetBinContent(32,4);
   hM_bin16->SetBinContent(33,4);
   hM_bin16->SetBinContent(34,2);
   hM_bin16->SetBinContent(35,2);
   hM_bin16->SetBinContent(36,3);
   hM_bin16->SetBinContent(37,6);
   hM_bin16->SetBinContent(38,9);
   hM_bin16->SetBinContent(39,8);
   hM_bin16->SetBinContent(40,5);
   hM_bin16->SetBinContent(41,10);
   hM_bin16->SetBinContent(42,15);
   hM_bin16->SetBinContent(43,20);
   hM_bin16->SetBinContent(44,32);
   hM_bin16->SetBinContent(45,47);
   hM_bin16->SetBinContent(46,40);
   hM_bin16->SetBinContent(47,46);
   hM_bin16->SetBinContent(48,83);
   hM_bin16->SetBinContent(49,82);
   hM_bin16->SetBinContent(50,103);
   hM_bin16->SetBinContent(51,112);
   hM_bin16->SetBinContent(52,133);
   hM_bin16->SetBinContent(53,119);
   hM_bin16->SetBinContent(54,125);
   hM_bin16->SetBinContent(55,103);
   hM_bin16->SetBinContent(56,115);
   hM_bin16->SetBinContent(57,94);
   hM_bin16->SetBinContent(58,80);
   hM_bin16->SetBinContent(59,68);
   hM_bin16->SetBinContent(60,78);
   hM_bin16->SetBinContent(61,61);
   hM_bin16->SetBinContent(62,44);
   hM_bin16->SetBinContent(63,49);
   hM_bin16->SetBinContent(64,30);
   hM_bin16->SetBinContent(65,30);
   hM_bin16->SetBinContent(66,33);
   hM_bin16->SetBinContent(67,28);
   hM_bin16->SetBinContent(68,19);
   hM_bin16->SetBinContent(69,27);
   hM_bin16->SetBinContent(70,16);
   hM_bin16->SetBinContent(71,30);
   hM_bin16->SetBinContent(72,21);
   hM_bin16->SetBinContent(73,21);
   hM_bin16->SetBinContent(74,23);
   hM_bin16->SetBinContent(75,21);
   hM_bin16->SetBinContent(76,23);
   hM_bin16->SetBinContent(77,11);
   hM_bin16->SetBinContent(78,29);
   hM_bin16->SetBinContent(79,25);
   hM_bin16->SetBinContent(80,20);
   hM_bin16->SetBinContent(81,29);
   hM_bin16->SetBinContent(82,13);
   hM_bin16->SetBinContent(83,26);
   hM_bin16->SetBinContent(84,29);
   hM_bin16->SetBinContent(85,25);
   hM_bin16->SetBinContent(86,34);
   hM_bin16->SetBinContent(87,21);
   hM_bin16->SetBinContent(88,30);
   hM_bin16->SetBinContent(89,35);
   hM_bin16->SetBinContent(90,33);
   hM_bin16->SetBinContent(91,38);
   hM_bin16->SetBinContent(92,25);
   hM_bin16->SetBinContent(93,26);
   hM_bin16->SetBinContent(94,28);
   hM_bin16->SetBinContent(95,35);
   hM_bin16->SetBinContent(96,30);
   hM_bin16->SetBinContent(97,38);
   hM_bin16->SetBinContent(98,32);
   hM_bin16->SetBinContent(99,36);
   hM_bin16->SetBinContent(100,29);
   hM_bin16->SetBinContent(101,18635);
   hM_bin16->SetEntries(24761);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08869168,0.2046251);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(37.19292);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-10.69397);
   fsig->SetParError(0,3.355498);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,143.9806);
   fsig->SetParError(1,25.53168);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-4.614954e-06);
   fsig->SetParError(2,523.1469);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,105.8807);
   fsig->SetParError(3,3.707593);
   fsig->SetParLimits(3,0,266);
   fsig->SetParameter(4,0.1461835);
   fsig->SetParError(4,0.000701119);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.000254556);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin16->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin16");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 24761  ");
   text = ptstats->AddText("Mean  = 0.1796");
   text = ptstats->AddText("RMS   = 0.05996");
   text = ptstats->AddText("#chi^{2} / ndf = 37.19 / 28");
   text = ptstats->AddText("p0       = -10.69 #pm 3.36 ");
   text = ptstats->AddText("p1       =   144 #pm 25.5 ");
   text = ptstats->AddText("p2       = -4.615e-06 #pm 5.231e+02 ");
   text = ptstats->AddText("p3       = 105.9 #pm 3.7 ");
   text = ptstats->AddText("p4       = 0.1462 #pm 0.0007 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00025 ");
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
   fmb->SetParameter(0,-10.69397);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,143.9806);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-4.614954e-06);
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
   fpeak->SetParameter(0,105.8807);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1461835);
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
