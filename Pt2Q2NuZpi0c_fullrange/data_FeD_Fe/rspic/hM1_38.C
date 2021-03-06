{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue May  9 16:31:00 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-89.19402,0.350906,802.7461);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin38 = new TH1F("hM_bin38","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin38->SetBinContent(14,2);
   hM_bin38->SetBinContent(15,6);
   hM_bin38->SetBinContent(16,12);
   hM_bin38->SetBinContent(17,21);
   hM_bin38->SetBinContent(18,30);
   hM_bin38->SetBinContent(19,50);
   hM_bin38->SetBinContent(20,39);
   hM_bin38->SetBinContent(21,41);
   hM_bin38->SetBinContent(22,56);
   hM_bin38->SetBinContent(23,55);
   hM_bin38->SetBinContent(24,59);
   hM_bin38->SetBinContent(25,67);
   hM_bin38->SetBinContent(26,52);
   hM_bin38->SetBinContent(27,60);
   hM_bin38->SetBinContent(28,62);
   hM_bin38->SetBinContent(29,59);
   hM_bin38->SetBinContent(30,73);
   hM_bin38->SetBinContent(31,60);
   hM_bin38->SetBinContent(32,90);
   hM_bin38->SetBinContent(33,58);
   hM_bin38->SetBinContent(34,95);
   hM_bin38->SetBinContent(35,69);
   hM_bin38->SetBinContent(36,103);
   hM_bin38->SetBinContent(37,97);
   hM_bin38->SetBinContent(38,120);
   hM_bin38->SetBinContent(39,140);
   hM_bin38->SetBinContent(40,194);
   hM_bin38->SetBinContent(41,177);
   hM_bin38->SetBinContent(42,229);
   hM_bin38->SetBinContent(43,273);
   hM_bin38->SetBinContent(44,339);
   hM_bin38->SetBinContent(45,380);
   hM_bin38->SetBinContent(46,477);
   hM_bin38->SetBinContent(47,572);
   hM_bin38->SetBinContent(48,620);
   hM_bin38->SetBinContent(49,654);
   hM_bin38->SetBinContent(50,640);
   hM_bin38->SetBinContent(51,614);
   hM_bin38->SetBinContent(52,585);
   hM_bin38->SetBinContent(53,567);
   hM_bin38->SetBinContent(54,465);
   hM_bin38->SetBinContent(55,407);
   hM_bin38->SetBinContent(56,311);
   hM_bin38->SetBinContent(57,262);
   hM_bin38->SetBinContent(58,243);
   hM_bin38->SetBinContent(59,204);
   hM_bin38->SetBinContent(60,180);
   hM_bin38->SetBinContent(61,136);
   hM_bin38->SetBinContent(62,117);
   hM_bin38->SetBinContent(63,129);
   hM_bin38->SetBinContent(64,109);
   hM_bin38->SetBinContent(65,111);
   hM_bin38->SetBinContent(66,96);
   hM_bin38->SetBinContent(67,85);
   hM_bin38->SetBinContent(68,87);
   hM_bin38->SetBinContent(69,90);
   hM_bin38->SetBinContent(70,78);
   hM_bin38->SetBinContent(71,74);
   hM_bin38->SetBinContent(72,87);
   hM_bin38->SetBinContent(73,78);
   hM_bin38->SetBinContent(74,63);
   hM_bin38->SetBinContent(75,69);
   hM_bin38->SetBinContent(76,64);
   hM_bin38->SetBinContent(77,76);
   hM_bin38->SetBinContent(78,75);
   hM_bin38->SetBinContent(79,71);
   hM_bin38->SetBinContent(80,78);
   hM_bin38->SetBinContent(81,77);
   hM_bin38->SetBinContent(82,54);
   hM_bin38->SetBinContent(83,75);
   hM_bin38->SetBinContent(84,84);
   hM_bin38->SetBinContent(85,54);
   hM_bin38->SetBinContent(86,55);
   hM_bin38->SetBinContent(87,56);
   hM_bin38->SetBinContent(88,62);
   hM_bin38->SetBinContent(89,74);
   hM_bin38->SetBinContent(90,70);
   hM_bin38->SetBinContent(91,77);
   hM_bin38->SetBinContent(92,58);
   hM_bin38->SetBinContent(93,69);
   hM_bin38->SetBinContent(94,66);
   hM_bin38->SetBinContent(95,70);
   hM_bin38->SetBinContent(96,61);
   hM_bin38->SetBinContent(97,64);
   hM_bin38->SetBinContent(98,50);
   hM_bin38->SetBinContent(99,52);
   hM_bin38->SetBinContent(100,54);
   hM_bin38->SetBinContent(101,3040);
   hM_bin38->SetEntries(16064);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07541474,0.1913482);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(90.32107);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,47.40187);
   fsig->SetParError(0,9.884866);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,173.9126);
   fsig->SetParError(1,71.6784);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-4.63242e-08);
   fsig->SetParError(2,485.4642);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,521.0723);
   fsig->SetParError(3,8.868399);
   fsig->SetParLimits(3,0,1308);
   fsig->SetParameter(4,0.1332538);
   fsig->SetParError(4,0.0003332214);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,3.059501e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin38->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin38");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 16064  ");
   text = ptstats->AddText("Mean  = 0.1481");
   text = ptstats->AddText("RMS   = 0.05648");
   text = ptstats->AddText("#chi^{2} / ndf = 90.32 / 27");
   text = ptstats->AddText("p0       =  47.4 #pm 9.9 ");
   text = ptstats->AddText("p1       = 173.9 #pm 71.7 ");
   text = ptstats->AddText("p2       = -4.632e-08 #pm 4.855e+02 ");
   text = ptstats->AddText("p3       = 521.1 #pm 8.9 ");
   text = ptstats->AddText("p4       = 0.1333 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00003 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin38->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin38);

   ci = TColor::GetColor("#0000ff");
   hM_bin38->SetMarkerColor(ci);
   hM_bin38->SetMarkerStyle(24);
   hM_bin38->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin38->GetXaxis()->SetLabelFont(42);
   hM_bin38->GetXaxis()->SetLabelSize(0.035);
   hM_bin38->GetXaxis()->SetTitleSize(0.035);
   hM_bin38->GetXaxis()->SetTitleFont(42);
   hM_bin38->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin38->GetYaxis()->SetLabelFont(42);
   hM_bin38->GetYaxis()->SetLabelSize(0.035);
   hM_bin38->GetYaxis()->SetTitleSize(0.035);
   hM_bin38->GetYaxis()->SetTitleFont(42);
   hM_bin38->GetZaxis()->SetLabelFont(42);
   hM_bin38->GetZaxis()->SetLabelSize(0.035);
   hM_bin38->GetZaxis()->SetTitleSize(0.035);
   hM_bin38->GetZaxis()->SetTitleFont(42);
   hM_bin38->Draw("e");
   
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
   fmb->SetParameter(0,47.40187);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,173.9126);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-4.63242e-08);
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
   fpeak->SetParameter(0,521.0723);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1332538);
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
