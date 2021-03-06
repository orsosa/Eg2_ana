{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 14:58:45 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-228.6694,0.350906,2058.025);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin13 = new TH1F("hM_bin13","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin13->SetBinContent(0,2176);
   hM_bin13->SetBinContent(12,2);
   hM_bin13->SetBinContent(13,33);
   hM_bin13->SetBinContent(14,52);
   hM_bin13->SetBinContent(15,48);
   hM_bin13->SetBinContent(16,68);
   hM_bin13->SetBinContent(17,53);
   hM_bin13->SetBinContent(18,53);
   hM_bin13->SetBinContent(19,61);
   hM_bin13->SetBinContent(20,80);
   hM_bin13->SetBinContent(21,72);
   hM_bin13->SetBinContent(22,79);
   hM_bin13->SetBinContent(23,82);
   hM_bin13->SetBinContent(24,106);
   hM_bin13->SetBinContent(25,127);
   hM_bin13->SetBinContent(26,132);
   hM_bin13->SetBinContent(27,114);
   hM_bin13->SetBinContent(28,127);
   hM_bin13->SetBinContent(29,122);
   hM_bin13->SetBinContent(30,165);
   hM_bin13->SetBinContent(31,157);
   hM_bin13->SetBinContent(32,184);
   hM_bin13->SetBinContent(33,174);
   hM_bin13->SetBinContent(34,193);
   hM_bin13->SetBinContent(35,214);
   hM_bin13->SetBinContent(36,243);
   hM_bin13->SetBinContent(37,302);
   hM_bin13->SetBinContent(38,360);
   hM_bin13->SetBinContent(39,435);
   hM_bin13->SetBinContent(40,579);
   hM_bin13->SetBinContent(41,762);
   hM_bin13->SetBinContent(42,871);
   hM_bin13->SetBinContent(43,1034);
   hM_bin13->SetBinContent(44,1210);
   hM_bin13->SetBinContent(45,1337);
   hM_bin13->SetBinContent(46,1517);
   hM_bin13->SetBinContent(47,1627);
   hM_bin13->SetBinContent(48,1698);
   hM_bin13->SetBinContent(49,1701);
   hM_bin13->SetBinContent(50,1680);
   hM_bin13->SetBinContent(51,1596);
   hM_bin13->SetBinContent(52,1490);
   hM_bin13->SetBinContent(53,1339);
   hM_bin13->SetBinContent(54,1208);
   hM_bin13->SetBinContent(55,1044);
   hM_bin13->SetBinContent(56,861);
   hM_bin13->SetBinContent(57,813);
   hM_bin13->SetBinContent(58,732);
   hM_bin13->SetBinContent(59,664);
   hM_bin13->SetBinContent(60,566);
   hM_bin13->SetBinContent(61,617);
   hM_bin13->SetBinContent(62,562);
   hM_bin13->SetBinContent(63,517);
   hM_bin13->SetBinContent(64,491);
   hM_bin13->SetBinContent(65,508);
   hM_bin13->SetBinContent(66,500);
   hM_bin13->SetBinContent(67,508);
   hM_bin13->SetBinContent(68,448);
   hM_bin13->SetBinContent(69,456);
   hM_bin13->SetBinContent(70,443);
   hM_bin13->SetBinContent(71,489);
   hM_bin13->SetBinContent(72,478);
   hM_bin13->SetBinContent(73,462);
   hM_bin13->SetBinContent(74,504);
   hM_bin13->SetBinContent(75,452);
   hM_bin13->SetBinContent(76,461);
   hM_bin13->SetBinContent(77,443);
   hM_bin13->SetBinContent(78,462);
   hM_bin13->SetBinContent(79,464);
   hM_bin13->SetBinContent(80,462);
   hM_bin13->SetBinContent(81,459);
   hM_bin13->SetBinContent(82,473);
   hM_bin13->SetBinContent(83,451);
   hM_bin13->SetBinContent(84,483);
   hM_bin13->SetBinContent(85,467);
   hM_bin13->SetBinContent(86,416);
   hM_bin13->SetBinContent(87,462);
   hM_bin13->SetBinContent(88,412);
   hM_bin13->SetBinContent(89,462);
   hM_bin13->SetBinContent(90,415);
   hM_bin13->SetBinContent(91,447);
   hM_bin13->SetBinContent(92,465);
   hM_bin13->SetBinContent(93,393);
   hM_bin13->SetBinContent(94,430);
   hM_bin13->SetBinContent(95,462);
   hM_bin13->SetBinContent(96,406);
   hM_bin13->SetBinContent(97,415);
   hM_bin13->SetBinContent(98,428);
   hM_bin13->SetBinContent(99,439);
   hM_bin13->SetBinContent(100,406);
   hM_bin13->SetBinContent(101,57107);
   hM_bin13->SetEntries(105968);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07171964,0.1876531);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(54.40735);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-125.9018);
   fsig->SetParError(0,16.28797);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,3253.17);
   fsig->SetParError(1,133.1492);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.0002667667);
   fsig->SetParError(2,992.9343);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,1362.616);
   fsig->SetParError(3,15.11992);
   fsig->SetParLimits(3,0,3402);
   fsig->SetParameter(4,0.1290672);
   fsig->SetParError(4,0.0002290525);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,2.679788e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin13->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin13");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 105968 ");
   text = ptstats->AddText("Mean  = 0.1681");
   text = ptstats->AddText("RMS   = 0.06474");
   text = ptstats->AddText("#chi^{2} / ndf = 54.41 / 27");
   text = ptstats->AddText("p0       = -125.9 #pm 16.3 ");
   text = ptstats->AddText("p1       =  3253 #pm 133.1 ");
   text = ptstats->AddText("p2       = -0.0002668 #pm 992.9343262 ");
   text = ptstats->AddText("p3       =  1363 #pm 15.1 ");
   text = ptstats->AddText("p4       = 0.1291 #pm 0.0002 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00003 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin13->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin13);

   ci = TColor::GetColor("#0000ff");
   hM_bin13->SetMarkerColor(ci);
   hM_bin13->SetMarkerStyle(24);
   hM_bin13->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin13->GetXaxis()->SetLabelFont(42);
   hM_bin13->GetXaxis()->SetLabelSize(0.035);
   hM_bin13->GetXaxis()->SetTitleSize(0.035);
   hM_bin13->GetXaxis()->SetTitleFont(42);
   hM_bin13->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin13->GetYaxis()->SetLabelFont(42);
   hM_bin13->GetYaxis()->SetLabelSize(0.035);
   hM_bin13->GetYaxis()->SetTitleSize(0.035);
   hM_bin13->GetYaxis()->SetTitleFont(42);
   hM_bin13->GetZaxis()->SetLabelFont(42);
   hM_bin13->GetZaxis()->SetLabelSize(0.035);
   hM_bin13->GetZaxis()->SetTitleSize(0.035);
   hM_bin13->GetZaxis()->SetTitleFont(42);
   hM_bin13->Draw("e");
   
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
   fmb->SetParameter(0,-125.9018);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,3253.17);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.0002667667);
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
   fpeak->SetParameter(0,1362.616);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1290672);
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
