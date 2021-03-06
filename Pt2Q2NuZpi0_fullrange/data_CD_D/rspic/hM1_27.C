{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:36:58 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-81.16135,0.350906,730.4521);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin27 = new TH1F("hM_bin27","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin27->SetBinContent(14,7);
   hM_bin27->SetBinContent(15,11);
   hM_bin27->SetBinContent(16,17);
   hM_bin27->SetBinContent(17,46);
   hM_bin27->SetBinContent(18,50);
   hM_bin27->SetBinContent(19,60);
   hM_bin27->SetBinContent(20,63);
   hM_bin27->SetBinContent(21,59);
   hM_bin27->SetBinContent(22,60);
   hM_bin27->SetBinContent(23,70);
   hM_bin27->SetBinContent(24,70);
   hM_bin27->SetBinContent(25,75);
   hM_bin27->SetBinContent(26,84);
   hM_bin27->SetBinContent(27,100);
   hM_bin27->SetBinContent(28,74);
   hM_bin27->SetBinContent(29,100);
   hM_bin27->SetBinContent(30,88);
   hM_bin27->SetBinContent(31,86);
   hM_bin27->SetBinContent(32,83);
   hM_bin27->SetBinContent(33,95);
   hM_bin27->SetBinContent(34,89);
   hM_bin27->SetBinContent(35,103);
   hM_bin27->SetBinContent(36,103);
   hM_bin27->SetBinContent(37,128);
   hM_bin27->SetBinContent(38,128);
   hM_bin27->SetBinContent(39,143);
   hM_bin27->SetBinContent(40,168);
   hM_bin27->SetBinContent(41,203);
   hM_bin27->SetBinContent(42,224);
   hM_bin27->SetBinContent(43,239);
   hM_bin27->SetBinContent(44,282);
   hM_bin27->SetBinContent(45,319);
   hM_bin27->SetBinContent(46,376);
   hM_bin27->SetBinContent(47,414);
   hM_bin27->SetBinContent(48,491);
   hM_bin27->SetBinContent(49,556);
   hM_bin27->SetBinContent(50,572);
   hM_bin27->SetBinContent(51,546);
   hM_bin27->SetBinContent(52,594);
   hM_bin27->SetBinContent(53,580);
   hM_bin27->SetBinContent(54,570);
   hM_bin27->SetBinContent(55,461);
   hM_bin27->SetBinContent(56,468);
   hM_bin27->SetBinContent(57,427);
   hM_bin27->SetBinContent(58,357);
   hM_bin27->SetBinContent(59,356);
   hM_bin27->SetBinContent(60,309);
   hM_bin27->SetBinContent(61,253);
   hM_bin27->SetBinContent(62,230);
   hM_bin27->SetBinContent(63,218);
   hM_bin27->SetBinContent(64,168);
   hM_bin27->SetBinContent(65,154);
   hM_bin27->SetBinContent(66,168);
   hM_bin27->SetBinContent(67,142);
   hM_bin27->SetBinContent(68,124);
   hM_bin27->SetBinContent(69,126);
   hM_bin27->SetBinContent(70,116);
   hM_bin27->SetBinContent(71,123);
   hM_bin27->SetBinContent(72,121);
   hM_bin27->SetBinContent(73,123);
   hM_bin27->SetBinContent(74,106);
   hM_bin27->SetBinContent(75,92);
   hM_bin27->SetBinContent(76,110);
   hM_bin27->SetBinContent(77,107);
   hM_bin27->SetBinContent(78,103);
   hM_bin27->SetBinContent(79,97);
   hM_bin27->SetBinContent(80,107);
   hM_bin27->SetBinContent(81,88);
   hM_bin27->SetBinContent(82,100);
   hM_bin27->SetBinContent(83,99);
   hM_bin27->SetBinContent(84,91);
   hM_bin27->SetBinContent(85,82);
   hM_bin27->SetBinContent(86,94);
   hM_bin27->SetBinContent(87,91);
   hM_bin27->SetBinContent(88,81);
   hM_bin27->SetBinContent(89,60);
   hM_bin27->SetBinContent(90,63);
   hM_bin27->SetBinContent(91,83);
   hM_bin27->SetBinContent(92,65);
   hM_bin27->SetBinContent(93,73);
   hM_bin27->SetBinContent(94,64);
   hM_bin27->SetBinContent(95,78);
   hM_bin27->SetBinContent(96,77);
   hM_bin27->SetBinContent(97,72);
   hM_bin27->SetBinContent(98,69);
   hM_bin27->SetBinContent(99,89);
   hM_bin27->SetBinContent(100,71);
   hM_bin27->SetBinContent(101,4132);
   hM_bin27->SetEntries(19014);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.0809935,0.1993309);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(27.58583);
   fsig->SetNDF(29);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-83.13048);
   fsig->SetParError(0,10.12366);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,3028.724);
   fsig->SetParError(1,69.32066);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-10000);
   fsig->SetParError(2,7360.951);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,429.5517);
   fsig->SetParError(3,8.731854);
   fsig->SetParLimits(3,0,1188);
   fsig->SetParameter(4,0.1401102);
   fsig->SetParError(4,0.0004333728);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.002062214);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin27->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin27");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 19014  ");
   text = ptstats->AddText("Mean  = 0.1531");
   text = ptstats->AddText("RMS   = 0.05917");
   text = ptstats->AddText("#chi^{2} / ndf = 27.59 / 29");
   text = ptstats->AddText("p0       = -83.13 #pm 10.12 ");
   text = ptstats->AddText("p1       =  3029 #pm 69.3 ");
   text = ptstats->AddText("p2       = -1e+04 #pm 7.36e+03 ");
   text = ptstats->AddText("p3       = 429.6 #pm 8.7 ");
   text = ptstats->AddText("p4       = 0.1401 #pm 0.0004 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00206 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin27->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin27);

   ci = TColor::GetColor("#0000ff");
   hM_bin27->SetMarkerColor(ci);
   hM_bin27->SetMarkerStyle(24);
   hM_bin27->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin27->GetXaxis()->SetLabelFont(42);
   hM_bin27->GetXaxis()->SetLabelSize(0.035);
   hM_bin27->GetXaxis()->SetTitleSize(0.035);
   hM_bin27->GetXaxis()->SetTitleFont(42);
   hM_bin27->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin27->GetYaxis()->SetLabelFont(42);
   hM_bin27->GetYaxis()->SetLabelSize(0.035);
   hM_bin27->GetYaxis()->SetTitleSize(0.035);
   hM_bin27->GetYaxis()->SetTitleFont(42);
   hM_bin27->GetZaxis()->SetLabelFont(42);
   hM_bin27->GetZaxis()->SetLabelSize(0.035);
   hM_bin27->GetZaxis()->SetTitleSize(0.035);
   hM_bin27->GetZaxis()->SetTitleFont(42);
   hM_bin27->Draw("e");
   
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
   fmb->SetParameter(0,-83.13048);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,3028.724);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-10000);
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
   fpeak->SetParameter(0,429.5517);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1401102);
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
