{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue May  9 16:31:21 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-281.6397,0.350906,2534.757);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin42 = new TH1F("hM_bin42","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin42->SetBinContent(13,4);
   hM_bin42->SetBinContent(14,13);
   hM_bin42->SetBinContent(15,61);
   hM_bin42->SetBinContent(16,74);
   hM_bin42->SetBinContent(17,117);
   hM_bin42->SetBinContent(18,123);
   hM_bin42->SetBinContent(19,161);
   hM_bin42->SetBinContent(20,214);
   hM_bin42->SetBinContent(21,213);
   hM_bin42->SetBinContent(22,233);
   hM_bin42->SetBinContent(23,327);
   hM_bin42->SetBinContent(24,288);
   hM_bin42->SetBinContent(25,317);
   hM_bin42->SetBinContent(26,285);
   hM_bin42->SetBinContent(27,315);
   hM_bin42->SetBinContent(28,345);
   hM_bin42->SetBinContent(29,388);
   hM_bin42->SetBinContent(30,423);
   hM_bin42->SetBinContent(31,344);
   hM_bin42->SetBinContent(32,388);
   hM_bin42->SetBinContent(33,422);
   hM_bin42->SetBinContent(34,438);
   hM_bin42->SetBinContent(35,465);
   hM_bin42->SetBinContent(36,428);
   hM_bin42->SetBinContent(37,602);
   hM_bin42->SetBinContent(38,585);
   hM_bin42->SetBinContent(39,696);
   hM_bin42->SetBinContent(40,826);
   hM_bin42->SetBinContent(41,857);
   hM_bin42->SetBinContent(42,1057);
   hM_bin42->SetBinContent(43,1174);
   hM_bin42->SetBinContent(44,1460);
   hM_bin42->SetBinContent(45,1557);
   hM_bin42->SetBinContent(46,1762);
   hM_bin42->SetBinContent(47,1921);
   hM_bin42->SetBinContent(48,2006);
   hM_bin42->SetBinContent(49,1977);
   hM_bin42->SetBinContent(50,2100);
   hM_bin42->SetBinContent(51,1891);
   hM_bin42->SetBinContent(52,1805);
   hM_bin42->SetBinContent(53,1723);
   hM_bin42->SetBinContent(54,1543);
   hM_bin42->SetBinContent(55,1380);
   hM_bin42->SetBinContent(56,1098);
   hM_bin42->SetBinContent(57,1021);
   hM_bin42->SetBinContent(58,920);
   hM_bin42->SetBinContent(59,832);
   hM_bin42->SetBinContent(60,732);
   hM_bin42->SetBinContent(61,676);
   hM_bin42->SetBinContent(62,629);
   hM_bin42->SetBinContent(63,621);
   hM_bin42->SetBinContent(64,612);
   hM_bin42->SetBinContent(65,574);
   hM_bin42->SetBinContent(66,521);
   hM_bin42->SetBinContent(67,549);
   hM_bin42->SetBinContent(68,532);
   hM_bin42->SetBinContent(69,581);
   hM_bin42->SetBinContent(70,534);
   hM_bin42->SetBinContent(71,529);
   hM_bin42->SetBinContent(72,525);
   hM_bin42->SetBinContent(73,508);
   hM_bin42->SetBinContent(74,549);
   hM_bin42->SetBinContent(75,461);
   hM_bin42->SetBinContent(76,524);
   hM_bin42->SetBinContent(77,495);
   hM_bin42->SetBinContent(78,494);
   hM_bin42->SetBinContent(79,463);
   hM_bin42->SetBinContent(80,542);
   hM_bin42->SetBinContent(81,439);
   hM_bin42->SetBinContent(82,490);
   hM_bin42->SetBinContent(83,479);
   hM_bin42->SetBinContent(84,462);
   hM_bin42->SetBinContent(85,479);
   hM_bin42->SetBinContent(86,421);
   hM_bin42->SetBinContent(87,424);
   hM_bin42->SetBinContent(88,455);
   hM_bin42->SetBinContent(89,420);
   hM_bin42->SetBinContent(90,420);
   hM_bin42->SetBinContent(91,458);
   hM_bin42->SetBinContent(92,399);
   hM_bin42->SetBinContent(93,388);
   hM_bin42->SetBinContent(94,367);
   hM_bin42->SetBinContent(95,358);
   hM_bin42->SetBinContent(96,402);
   hM_bin42->SetBinContent(97,378);
   hM_bin42->SetBinContent(98,379);
   hM_bin42->SetBinContent(99,397);
   hM_bin42->SetBinContent(100,377);
   hM_bin42->SetBinContent(101,28315);
   hM_bin42->SetEntries(85537);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07292466,0.1888581);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(69.83771);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,272.5318);
   fsig->SetParError(0,20.48638);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,1371.346);
   fsig->SetParError(1,150.4872);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.0002761771);
   fsig->SetParError(2,1716.233);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,1529.514);
   fsig->SetParError(3,16.91719);
   fsig->SetParLimits(3,0,4200);
   fsig->SetParameter(4,0.1308287);
   fsig->SetParError(4,0.0002303848);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,3.559069e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin42->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin42");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 85537  ");
   text = ptstats->AddText("Mean  = 0.1567");
   text = ptstats->AddText("RMS   = 0.06493");
   text = ptstats->AddText("#chi^{2} / ndf = 69.84 / 28");
   text = ptstats->AddText("p0       = 272.5 #pm 20.5 ");
   text = ptstats->AddText("p1       =  1371 #pm 150.5 ");
   text = ptstats->AddText("p2       = -0.0002762 #pm 1716.2325439 ");
   text = ptstats->AddText("p3       =  1530 #pm 16.9 ");
   text = ptstats->AddText("p4       = 0.1308 #pm 0.0002 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00004 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin42->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin42);

   ci = TColor::GetColor("#0000ff");
   hM_bin42->SetMarkerColor(ci);
   hM_bin42->SetMarkerStyle(24);
   hM_bin42->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin42->GetXaxis()->SetLabelFont(42);
   hM_bin42->GetXaxis()->SetLabelSize(0.035);
   hM_bin42->GetXaxis()->SetTitleSize(0.035);
   hM_bin42->GetXaxis()->SetTitleFont(42);
   hM_bin42->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin42->GetYaxis()->SetLabelFont(42);
   hM_bin42->GetYaxis()->SetLabelSize(0.035);
   hM_bin42->GetYaxis()->SetTitleSize(0.035);
   hM_bin42->GetYaxis()->SetTitleFont(42);
   hM_bin42->GetZaxis()->SetLabelFont(42);
   hM_bin42->GetZaxis()->SetLabelSize(0.035);
   hM_bin42->GetZaxis()->SetTitleSize(0.035);
   hM_bin42->GetZaxis()->SetTitleFont(42);
   hM_bin42->Draw("e");
   
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
   fmb->SetParameter(0,272.5318);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1371.346);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.0002761771);
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
   fpeak->SetParameter(0,1529.514);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1308287);
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
