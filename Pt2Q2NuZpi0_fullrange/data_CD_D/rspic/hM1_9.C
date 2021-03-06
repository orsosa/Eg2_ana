{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:35:54 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-83.17023,0.350906,748.5321);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin9 = new TH1F("hM_bin9","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin9->SetBinContent(13,2);
   hM_bin9->SetBinContent(14,13);
   hM_bin9->SetBinContent(15,12);
   hM_bin9->SetBinContent(16,29);
   hM_bin9->SetBinContent(17,30);
   hM_bin9->SetBinContent(18,44);
   hM_bin9->SetBinContent(19,37);
   hM_bin9->SetBinContent(20,63);
   hM_bin9->SetBinContent(21,51);
   hM_bin9->SetBinContent(22,67);
   hM_bin9->SetBinContent(23,70);
   hM_bin9->SetBinContent(24,79);
   hM_bin9->SetBinContent(25,73);
   hM_bin9->SetBinContent(26,78);
   hM_bin9->SetBinContent(27,88);
   hM_bin9->SetBinContent(28,77);
   hM_bin9->SetBinContent(29,99);
   hM_bin9->SetBinContent(30,110);
   hM_bin9->SetBinContent(31,82);
   hM_bin9->SetBinContent(32,89);
   hM_bin9->SetBinContent(33,121);
   hM_bin9->SetBinContent(34,94);
   hM_bin9->SetBinContent(35,86);
   hM_bin9->SetBinContent(36,120);
   hM_bin9->SetBinContent(37,125);
   hM_bin9->SetBinContent(38,143);
   hM_bin9->SetBinContent(39,130);
   hM_bin9->SetBinContent(40,185);
   hM_bin9->SetBinContent(41,201);
   hM_bin9->SetBinContent(42,182);
   hM_bin9->SetBinContent(43,243);
   hM_bin9->SetBinContent(44,277);
   hM_bin9->SetBinContent(45,335);
   hM_bin9->SetBinContent(46,395);
   hM_bin9->SetBinContent(47,407);
   hM_bin9->SetBinContent(48,466);
   hM_bin9->SetBinContent(49,531);
   hM_bin9->SetBinContent(50,572);
   hM_bin9->SetBinContent(51,609);
   hM_bin9->SetBinContent(52,570);
   hM_bin9->SetBinContent(53,570);
   hM_bin9->SetBinContent(54,545);
   hM_bin9->SetBinContent(55,478);
   hM_bin9->SetBinContent(56,438);
   hM_bin9->SetBinContent(57,380);
   hM_bin9->SetBinContent(58,342);
   hM_bin9->SetBinContent(59,296);
   hM_bin9->SetBinContent(60,264);
   hM_bin9->SetBinContent(61,230);
   hM_bin9->SetBinContent(62,217);
   hM_bin9->SetBinContent(63,186);
   hM_bin9->SetBinContent(64,148);
   hM_bin9->SetBinContent(65,147);
   hM_bin9->SetBinContent(66,131);
   hM_bin9->SetBinContent(67,141);
   hM_bin9->SetBinContent(68,122);
   hM_bin9->SetBinContent(69,122);
   hM_bin9->SetBinContent(70,118);
   hM_bin9->SetBinContent(71,110);
   hM_bin9->SetBinContent(72,109);
   hM_bin9->SetBinContent(73,105);
   hM_bin9->SetBinContent(74,108);
   hM_bin9->SetBinContent(75,100);
   hM_bin9->SetBinContent(76,104);
   hM_bin9->SetBinContent(77,118);
   hM_bin9->SetBinContent(78,86);
   hM_bin9->SetBinContent(79,64);
   hM_bin9->SetBinContent(80,78);
   hM_bin9->SetBinContent(81,88);
   hM_bin9->SetBinContent(82,80);
   hM_bin9->SetBinContent(83,84);
   hM_bin9->SetBinContent(84,71);
   hM_bin9->SetBinContent(85,85);
   hM_bin9->SetBinContent(86,83);
   hM_bin9->SetBinContent(87,84);
   hM_bin9->SetBinContent(88,64);
   hM_bin9->SetBinContent(89,75);
   hM_bin9->SetBinContent(90,84);
   hM_bin9->SetBinContent(91,77);
   hM_bin9->SetBinContent(92,79);
   hM_bin9->SetBinContent(93,66);
   hM_bin9->SetBinContent(94,77);
   hM_bin9->SetBinContent(95,67);
   hM_bin9->SetBinContent(96,59);
   hM_bin9->SetBinContent(97,69);
   hM_bin9->SetBinContent(98,74);
   hM_bin9->SetBinContent(99,79);
   hM_bin9->SetBinContent(100,64);
   hM_bin9->SetBinContent(101,4145);
   hM_bin9->SetEntries(18496);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08112525,0.1970694);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(34.11774);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,84.13745);
   fsig->SetParError(0,1.001797);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,190.8162);
   fsig->SetParError(1,1.049917);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.0008534774);
   fsig->SetParError(2,7121.441);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,458.0584);
   fsig->SetParError(3,7.021658);
   fsig->SetParLimits(3,0,1218);
   fsig->SetParameter(4,0.1390276);
   fsig->SetParError(4,0.0003356157);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0002899517);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin9->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin9");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 18496  ");
   text = ptstats->AddText("Mean  = 0.1515");
   text = ptstats->AddText("RMS   = 0.05915");
   text = ptstats->AddText("#chi^{2} / ndf = 34.12 / 28");
   text = ptstats->AddText("p0       = 84.14 #pm 1.00 ");
   text = ptstats->AddText("p1       = 190.8 #pm 1.0 ");
   text = ptstats->AddText("p2       = -0.0008535 #pm 7121.4409180 ");
   text = ptstats->AddText("p3       = 458.1 #pm 7.0 ");
   text = ptstats->AddText("p4       = 0.139 #pm 0.000 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00029 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin9->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin9);

   ci = TColor::GetColor("#0000ff");
   hM_bin9->SetMarkerColor(ci);
   hM_bin9->SetMarkerStyle(24);
   hM_bin9->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin9->GetXaxis()->SetLabelFont(42);
   hM_bin9->GetXaxis()->SetLabelSize(0.035);
   hM_bin9->GetXaxis()->SetTitleSize(0.035);
   hM_bin9->GetXaxis()->SetTitleFont(42);
   hM_bin9->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin9->GetYaxis()->SetLabelFont(42);
   hM_bin9->GetYaxis()->SetLabelSize(0.035);
   hM_bin9->GetYaxis()->SetTitleSize(0.035);
   hM_bin9->GetYaxis()->SetTitleFont(42);
   hM_bin9->GetZaxis()->SetLabelFont(42);
   hM_bin9->GetZaxis()->SetLabelSize(0.035);
   hM_bin9->GetZaxis()->SetTitleSize(0.035);
   hM_bin9->GetZaxis()->SetTitleFont(42);
   hM_bin9->Draw("e");
   
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
   fmb->SetParameter(0,84.13745);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,190.8162);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.0008534774);
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
   fpeak->SetParameter(0,458.0584);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1390276);
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
