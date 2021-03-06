{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue May  9 16:34:29 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-76.06984,0.350906,684.6285);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin22 = new TH1F("hM_bin22","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin22->SetBinContent(15,1);
   hM_bin22->SetBinContent(16,5);
   hM_bin22->SetBinContent(17,21);
   hM_bin22->SetBinContent(18,26);
   hM_bin22->SetBinContent(19,36);
   hM_bin22->SetBinContent(20,31);
   hM_bin22->SetBinContent(21,43);
   hM_bin22->SetBinContent(22,56);
   hM_bin22->SetBinContent(23,48);
   hM_bin22->SetBinContent(24,61);
   hM_bin22->SetBinContent(25,75);
   hM_bin22->SetBinContent(26,58);
   hM_bin22->SetBinContent(27,56);
   hM_bin22->SetBinContent(28,68);
   hM_bin22->SetBinContent(29,79);
   hM_bin22->SetBinContent(30,69);
   hM_bin22->SetBinContent(31,61);
   hM_bin22->SetBinContent(32,76);
   hM_bin22->SetBinContent(33,72);
   hM_bin22->SetBinContent(34,80);
   hM_bin22->SetBinContent(35,83);
   hM_bin22->SetBinContent(36,83);
   hM_bin22->SetBinContent(37,112);
   hM_bin22->SetBinContent(38,96);
   hM_bin22->SetBinContent(39,143);
   hM_bin22->SetBinContent(40,157);
   hM_bin22->SetBinContent(41,153);
   hM_bin22->SetBinContent(42,189);
   hM_bin22->SetBinContent(43,202);
   hM_bin22->SetBinContent(44,285);
   hM_bin22->SetBinContent(45,330);
   hM_bin22->SetBinContent(46,407);
   hM_bin22->SetBinContent(47,471);
   hM_bin22->SetBinContent(48,495);
   hM_bin22->SetBinContent(49,556);
   hM_bin22->SetBinContent(50,521);
   hM_bin22->SetBinContent(51,521);
   hM_bin22->SetBinContent(52,515);
   hM_bin22->SetBinContent(53,446);
   hM_bin22->SetBinContent(54,388);
   hM_bin22->SetBinContent(55,288);
   hM_bin22->SetBinContent(56,296);
   hM_bin22->SetBinContent(57,220);
   hM_bin22->SetBinContent(58,232);
   hM_bin22->SetBinContent(59,183);
   hM_bin22->SetBinContent(60,192);
   hM_bin22->SetBinContent(61,165);
   hM_bin22->SetBinContent(62,142);
   hM_bin22->SetBinContent(63,120);
   hM_bin22->SetBinContent(64,103);
   hM_bin22->SetBinContent(65,82);
   hM_bin22->SetBinContent(66,131);
   hM_bin22->SetBinContent(67,122);
   hM_bin22->SetBinContent(68,103);
   hM_bin22->SetBinContent(69,110);
   hM_bin22->SetBinContent(70,89);
   hM_bin22->SetBinContent(71,92);
   hM_bin22->SetBinContent(72,93);
   hM_bin22->SetBinContent(73,90);
   hM_bin22->SetBinContent(74,91);
   hM_bin22->SetBinContent(75,86);
   hM_bin22->SetBinContent(76,70);
   hM_bin22->SetBinContent(77,74);
   hM_bin22->SetBinContent(78,77);
   hM_bin22->SetBinContent(79,75);
   hM_bin22->SetBinContent(80,61);
   hM_bin22->SetBinContent(81,81);
   hM_bin22->SetBinContent(82,91);
   hM_bin22->SetBinContent(83,42);
   hM_bin22->SetBinContent(84,57);
   hM_bin22->SetBinContent(85,78);
   hM_bin22->SetBinContent(86,68);
   hM_bin22->SetBinContent(87,59);
   hM_bin22->SetBinContent(88,62);
   hM_bin22->SetBinContent(89,54);
   hM_bin22->SetBinContent(90,70);
   hM_bin22->SetBinContent(91,60);
   hM_bin22->SetBinContent(92,56);
   hM_bin22->SetBinContent(93,57);
   hM_bin22->SetBinContent(94,43);
   hM_bin22->SetBinContent(95,62);
   hM_bin22->SetBinContent(96,55);
   hM_bin22->SetBinContent(97,44);
   hM_bin22->SetBinContent(98,51);
   hM_bin22->SetBinContent(99,45);
   hM_bin22->SetBinContent(100,41);
   hM_bin22->SetBinContent(101,2451);
   hM_bin22->SetEntries(14189);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07572462,0.1916581);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(114.2079);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,45.11126);
   fsig->SetParError(0,9.63277);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,237.3615);
   fsig->SetParError(1,70.57015);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.278077e-05);
   fsig->SetParError(2,628.7739);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,409.9029);
   fsig->SetParError(3,8.259011);
   fsig->SetParLimits(3,0,1112);
   fsig->SetParameter(4,0.1336926);
   fsig->SetParError(4,0.0003949773);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,4.424611e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin22->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin22");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 14189  ");
   text = ptstats->AddText("Mean  = 0.1498");
   text = ptstats->AddText("RMS   = 0.05738");
   text = ptstats->AddText("#chi^{2} / ndf = 114.2 / 27");
   text = ptstats->AddText("p0       = 45.11 #pm 9.63 ");
   text = ptstats->AddText("p1       = 237.4 #pm 70.6 ");
   text = ptstats->AddText("p2       = -1.278e-05 #pm 6.288e+02 ");
   text = ptstats->AddText("p3       = 409.9 #pm 8.3 ");
   text = ptstats->AddText("p4       = 0.1337 #pm 0.0004 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00004 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin22->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin22);

   ci = TColor::GetColor("#0000ff");
   hM_bin22->SetMarkerColor(ci);
   hM_bin22->SetMarkerStyle(24);
   hM_bin22->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin22->GetXaxis()->SetLabelFont(42);
   hM_bin22->GetXaxis()->SetLabelSize(0.035);
   hM_bin22->GetXaxis()->SetTitleSize(0.035);
   hM_bin22->GetXaxis()->SetTitleFont(42);
   hM_bin22->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin22->GetYaxis()->SetLabelFont(42);
   hM_bin22->GetYaxis()->SetLabelSize(0.035);
   hM_bin22->GetYaxis()->SetTitleSize(0.035);
   hM_bin22->GetYaxis()->SetTitleFont(42);
   hM_bin22->GetZaxis()->SetLabelFont(42);
   hM_bin22->GetZaxis()->SetLabelSize(0.035);
   hM_bin22->GetZaxis()->SetTitleSize(0.035);
   hM_bin22->GetZaxis()->SetTitleFont(42);
   hM_bin22->Draw("e");
   
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
   fmb->SetParameter(0,45.11126);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,237.3615);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.278077e-05);
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
   fpeak->SetParameter(0,409.9029);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1336926);
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
