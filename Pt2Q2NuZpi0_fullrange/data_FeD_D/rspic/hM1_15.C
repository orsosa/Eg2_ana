{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:45:10 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-152.8577,0.350906,1375.72);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin15 = new TH1F("hM_bin15","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin15->SetBinContent(14,13);
   hM_bin15->SetBinContent(15,17);
   hM_bin15->SetBinContent(16,57);
   hM_bin15->SetBinContent(17,62);
   hM_bin15->SetBinContent(18,93);
   hM_bin15->SetBinContent(19,97);
   hM_bin15->SetBinContent(20,117);
   hM_bin15->SetBinContent(21,127);
   hM_bin15->SetBinContent(22,113);
   hM_bin15->SetBinContent(23,127);
   hM_bin15->SetBinContent(24,150);
   hM_bin15->SetBinContent(25,145);
   hM_bin15->SetBinContent(26,161);
   hM_bin15->SetBinContent(27,171);
   hM_bin15->SetBinContent(28,149);
   hM_bin15->SetBinContent(29,166);
   hM_bin15->SetBinContent(30,218);
   hM_bin15->SetBinContent(31,187);
   hM_bin15->SetBinContent(32,194);
   hM_bin15->SetBinContent(33,210);
   hM_bin15->SetBinContent(34,218);
   hM_bin15->SetBinContent(35,224);
   hM_bin15->SetBinContent(36,268);
   hM_bin15->SetBinContent(37,272);
   hM_bin15->SetBinContent(38,313);
   hM_bin15->SetBinContent(39,327);
   hM_bin15->SetBinContent(40,357);
   hM_bin15->SetBinContent(41,439);
   hM_bin15->SetBinContent(42,537);
   hM_bin15->SetBinContent(43,607);
   hM_bin15->SetBinContent(44,692);
   hM_bin15->SetBinContent(45,841);
   hM_bin15->SetBinContent(46,860);
   hM_bin15->SetBinContent(47,930);
   hM_bin15->SetBinContent(48,1060);
   hM_bin15->SetBinContent(49,1091);
   hM_bin15->SetBinContent(50,1131);
   hM_bin15->SetBinContent(51,1109);
   hM_bin15->SetBinContent(52,996);
   hM_bin15->SetBinContent(53,915);
   hM_bin15->SetBinContent(54,886);
   hM_bin15->SetBinContent(55,738);
   hM_bin15->SetBinContent(56,649);
   hM_bin15->SetBinContent(57,547);
   hM_bin15->SetBinContent(58,513);
   hM_bin15->SetBinContent(59,416);
   hM_bin15->SetBinContent(60,393);
   hM_bin15->SetBinContent(61,278);
   hM_bin15->SetBinContent(62,265);
   hM_bin15->SetBinContent(63,289);
   hM_bin15->SetBinContent(64,287);
   hM_bin15->SetBinContent(65,253);
   hM_bin15->SetBinContent(66,232);
   hM_bin15->SetBinContent(67,194);
   hM_bin15->SetBinContent(68,207);
   hM_bin15->SetBinContent(69,223);
   hM_bin15->SetBinContent(70,198);
   hM_bin15->SetBinContent(71,199);
   hM_bin15->SetBinContent(72,220);
   hM_bin15->SetBinContent(73,189);
   hM_bin15->SetBinContent(74,160);
   hM_bin15->SetBinContent(75,208);
   hM_bin15->SetBinContent(76,182);
   hM_bin15->SetBinContent(77,166);
   hM_bin15->SetBinContent(78,198);
   hM_bin15->SetBinContent(79,171);
   hM_bin15->SetBinContent(80,189);
   hM_bin15->SetBinContent(81,172);
   hM_bin15->SetBinContent(82,155);
   hM_bin15->SetBinContent(83,181);
   hM_bin15->SetBinContent(84,183);
   hM_bin15->SetBinContent(85,149);
   hM_bin15->SetBinContent(86,188);
   hM_bin15->SetBinContent(87,165);
   hM_bin15->SetBinContent(88,180);
   hM_bin15->SetBinContent(89,163);
   hM_bin15->SetBinContent(90,175);
   hM_bin15->SetBinContent(91,150);
   hM_bin15->SetBinContent(92,150);
   hM_bin15->SetBinContent(93,177);
   hM_bin15->SetBinContent(94,155);
   hM_bin15->SetBinContent(95,149);
   hM_bin15->SetBinContent(96,142);
   hM_bin15->SetBinContent(97,140);
   hM_bin15->SetBinContent(98,159);
   hM_bin15->SetBinContent(99,124);
   hM_bin15->SetBinContent(100,140);
   hM_bin15->SetBinContent(101,9019);
   hM_bin15->SetEntries(36427);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07484709,0.1907805);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(49.58405);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,185.3249);
   fsig->SetParError(0,14.18657);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,168.3453);
   fsig->SetParError(1,104.3617);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.002946393);
   fsig->SetParError(2,1283.586);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,859.2976);
   fsig->SetParError(3,12.19653);
   fsig->SetParLimits(3,0,2262);
   fsig->SetParameter(4,0.1326594);
   fsig->SetParError(4,0.0002940729);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,5.34367e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin15->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin15");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 36427  ");
   text = ptstats->AddText("Mean  = 0.1497");
   text = ptstats->AddText("RMS   = 0.06146");
   text = ptstats->AddText("#chi^{2} / ndf = 49.58 / 28");
   text = ptstats->AddText("p0       = 185.3 #pm 14.2 ");
   text = ptstats->AddText("p1       = 168.3 #pm 104.4 ");
   text = ptstats->AddText("p2       = -0.002946 #pm 1283.585938 ");
   text = ptstats->AddText("p3       = 859.3 #pm 12.2 ");
   text = ptstats->AddText("p4       = 0.1327 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00005 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin15->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin15);

   ci = TColor::GetColor("#0000ff");
   hM_bin15->SetMarkerColor(ci);
   hM_bin15->SetMarkerStyle(24);
   hM_bin15->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin15->GetXaxis()->SetLabelFont(42);
   hM_bin15->GetXaxis()->SetLabelSize(0.035);
   hM_bin15->GetXaxis()->SetTitleSize(0.035);
   hM_bin15->GetXaxis()->SetTitleFont(42);
   hM_bin15->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin15->GetYaxis()->SetLabelFont(42);
   hM_bin15->GetYaxis()->SetLabelSize(0.035);
   hM_bin15->GetYaxis()->SetTitleSize(0.035);
   hM_bin15->GetYaxis()->SetTitleFont(42);
   hM_bin15->GetZaxis()->SetLabelFont(42);
   hM_bin15->GetZaxis()->SetLabelSize(0.035);
   hM_bin15->GetZaxis()->SetTitleSize(0.035);
   hM_bin15->GetZaxis()->SetTitleFont(42);
   hM_bin15->Draw("e");
   
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
   fmb->SetParameter(0,185.3249);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,168.3453);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.002946393);
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
   fpeak->SetParameter(0,859.2976);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1326594);
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
