{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 14:55:34 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-14.71306,0.350906,132.4175);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin53 = new TH1F("hM_bin53","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin53->SetBinContent(0,8978);
   hM_bin53->SetBinContent(15,1);
   hM_bin53->SetBinContent(16,1);
   hM_bin53->SetBinContent(17,1);
   hM_bin53->SetBinContent(19,1);
   hM_bin53->SetBinContent(20,3);
   hM_bin53->SetBinContent(21,1);
   hM_bin53->SetBinContent(22,1);
   hM_bin53->SetBinContent(24,2);
   hM_bin53->SetBinContent(25,2);
   hM_bin53->SetBinContent(26,2);
   hM_bin53->SetBinContent(27,1);
   hM_bin53->SetBinContent(29,1);
   hM_bin53->SetBinContent(30,1);
   hM_bin53->SetBinContent(31,3);
   hM_bin53->SetBinContent(32,3);
   hM_bin53->SetBinContent(33,1);
   hM_bin53->SetBinContent(34,1);
   hM_bin53->SetBinContent(35,3);
   hM_bin53->SetBinContent(36,4);
   hM_bin53->SetBinContent(37,2);
   hM_bin53->SetBinContent(38,5);
   hM_bin53->SetBinContent(39,4);
   hM_bin53->SetBinContent(40,9);
   hM_bin53->SetBinContent(41,7);
   hM_bin53->SetBinContent(42,9);
   hM_bin53->SetBinContent(43,9);
   hM_bin53->SetBinContent(44,13);
   hM_bin53->SetBinContent(45,23);
   hM_bin53->SetBinContent(46,28);
   hM_bin53->SetBinContent(47,31);
   hM_bin53->SetBinContent(48,31);
   hM_bin53->SetBinContent(49,46);
   hM_bin53->SetBinContent(50,49);
   hM_bin53->SetBinContent(51,50);
   hM_bin53->SetBinContent(52,65);
   hM_bin53->SetBinContent(53,57);
   hM_bin53->SetBinContent(54,102);
   hM_bin53->SetBinContent(55,62);
   hM_bin53->SetBinContent(56,69);
   hM_bin53->SetBinContent(57,64);
   hM_bin53->SetBinContent(58,65);
   hM_bin53->SetBinContent(59,58);
   hM_bin53->SetBinContent(60,44);
   hM_bin53->SetBinContent(61,36);
   hM_bin53->SetBinContent(62,31);
   hM_bin53->SetBinContent(63,34);
   hM_bin53->SetBinContent(64,23);
   hM_bin53->SetBinContent(65,30);
   hM_bin53->SetBinContent(66,21);
   hM_bin53->SetBinContent(67,25);
   hM_bin53->SetBinContent(68,15);
   hM_bin53->SetBinContent(69,19);
   hM_bin53->SetBinContent(70,11);
   hM_bin53->SetBinContent(71,9);
   hM_bin53->SetBinContent(72,15);
   hM_bin53->SetBinContent(73,15);
   hM_bin53->SetBinContent(74,16);
   hM_bin53->SetBinContent(75,18);
   hM_bin53->SetBinContent(76,16);
   hM_bin53->SetBinContent(77,9);
   hM_bin53->SetBinContent(78,14);
   hM_bin53->SetBinContent(79,19);
   hM_bin53->SetBinContent(80,19);
   hM_bin53->SetBinContent(81,11);
   hM_bin53->SetBinContent(82,14);
   hM_bin53->SetBinContent(83,16);
   hM_bin53->SetBinContent(84,13);
   hM_bin53->SetBinContent(85,21);
   hM_bin53->SetBinContent(86,10);
   hM_bin53->SetBinContent(87,13);
   hM_bin53->SetBinContent(88,17);
   hM_bin53->SetBinContent(89,15);
   hM_bin53->SetBinContent(90,14);
   hM_bin53->SetBinContent(91,16);
   hM_bin53->SetBinContent(92,12);
   hM_bin53->SetBinContent(93,8);
   hM_bin53->SetBinContent(94,12);
   hM_bin53->SetBinContent(95,17);
   hM_bin53->SetBinContent(96,20);
   hM_bin53->SetBinContent(97,22);
   hM_bin53->SetBinContent(98,13);
   hM_bin53->SetBinContent(99,23);
   hM_bin53->SetBinContent(100,29);
   hM_bin53->SetBinContent(101,25152);
   hM_bin53->SetEntries(35776);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.09058206,0.2094958);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(31.64658);
   fsig->SetNDF(29);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-11.62445);
   fsig->SetParError(0,29.30541);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,200.0051);
   fsig->SetParError(1,443.0285);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-412.7512);
   fsig->SetParError(2,1347.326);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,59.53287);
   fsig->SetParError(3,5.963391);
   fsig->SetParLimits(3,0,204);
   fsig->SetParameter(4,0.1499646);
   fsig->SetParError(4,0.0009954351);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.001934284);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin53->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin53");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 35776  ");
   text = ptstats->AddText("Mean  = 0.1803");
   text = ptstats->AddText("RMS   = 0.05725");
   text = ptstats->AddText("#chi^{2} / ndf = 31.65 / 29");
   text = ptstats->AddText("p0       = -11.62 #pm 29.31 ");
   text = ptstats->AddText("p1       =   200 #pm 443.0 ");
   text = ptstats->AddText("p2       = -412.8 #pm 1347.3 ");
   text = ptstats->AddText("p3       = 59.53 #pm 5.96 ");
   text = ptstats->AddText("p4       =  0.15 #pm 0.00 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00193 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin53->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin53);

   ci = TColor::GetColor("#0000ff");
   hM_bin53->SetMarkerColor(ci);
   hM_bin53->SetMarkerStyle(24);
   hM_bin53->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin53->GetXaxis()->SetLabelFont(42);
   hM_bin53->GetXaxis()->SetLabelSize(0.035);
   hM_bin53->GetXaxis()->SetTitleSize(0.035);
   hM_bin53->GetXaxis()->SetTitleFont(42);
   hM_bin53->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin53->GetYaxis()->SetLabelFont(42);
   hM_bin53->GetYaxis()->SetLabelSize(0.035);
   hM_bin53->GetYaxis()->SetTitleSize(0.035);
   hM_bin53->GetYaxis()->SetTitleFont(42);
   hM_bin53->GetZaxis()->SetLabelFont(42);
   hM_bin53->GetZaxis()->SetLabelSize(0.035);
   hM_bin53->GetZaxis()->SetTitleSize(0.035);
   hM_bin53->GetZaxis()->SetTitleFont(42);
   hM_bin53->Draw("e");
   
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
   fmb->SetParameter(0,-11.62445);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,200.0051);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-412.7512);
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
   fpeak->SetParameter(0,59.53287);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1499646);
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
