{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 16:07:51 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-180.2804,0.350906,1622.524);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin37 = new TH1F("hM_bin37","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin37->SetBinContent(0,2729);
   hM_bin37->SetBinContent(13,3);
   hM_bin37->SetBinContent(14,19);
   hM_bin37->SetBinContent(15,34);
   hM_bin37->SetBinContent(16,31);
   hM_bin37->SetBinContent(17,26);
   hM_bin37->SetBinContent(18,20);
   hM_bin37->SetBinContent(19,22);
   hM_bin37->SetBinContent(20,21);
   hM_bin37->SetBinContent(21,30);
   hM_bin37->SetBinContent(22,21);
   hM_bin37->SetBinContent(23,29);
   hM_bin37->SetBinContent(24,20);
   hM_bin37->SetBinContent(25,30);
   hM_bin37->SetBinContent(26,34);
   hM_bin37->SetBinContent(27,40);
   hM_bin37->SetBinContent(28,44);
   hM_bin37->SetBinContent(29,43);
   hM_bin37->SetBinContent(30,41);
   hM_bin37->SetBinContent(31,58);
   hM_bin37->SetBinContent(32,54);
   hM_bin37->SetBinContent(33,59);
   hM_bin37->SetBinContent(34,64);
   hM_bin37->SetBinContent(35,66);
   hM_bin37->SetBinContent(36,84);
   hM_bin37->SetBinContent(37,119);
   hM_bin37->SetBinContent(38,174);
   hM_bin37->SetBinContent(39,192);
   hM_bin37->SetBinContent(40,273);
   hM_bin37->SetBinContent(41,373);
   hM_bin37->SetBinContent(42,420);
   hM_bin37->SetBinContent(43,566);
   hM_bin37->SetBinContent(44,820);
   hM_bin37->SetBinContent(45,951);
   hM_bin37->SetBinContent(46,1023);
   hM_bin37->SetBinContent(47,1218);
   hM_bin37->SetBinContent(48,1263);
   hM_bin37->SetBinContent(49,1337);
   hM_bin37->SetBinContent(50,1323);
   hM_bin37->SetBinContent(51,1149);
   hM_bin37->SetBinContent(52,1073);
   hM_bin37->SetBinContent(53,996);
   hM_bin37->SetBinContent(54,851);
   hM_bin37->SetBinContent(55,703);
   hM_bin37->SetBinContent(56,564);
   hM_bin37->SetBinContent(57,498);
   hM_bin37->SetBinContent(58,441);
   hM_bin37->SetBinContent(59,376);
   hM_bin37->SetBinContent(60,317);
   hM_bin37->SetBinContent(61,260);
   hM_bin37->SetBinContent(62,269);
   hM_bin37->SetBinContent(63,248);
   hM_bin37->SetBinContent(64,244);
   hM_bin37->SetBinContent(65,218);
   hM_bin37->SetBinContent(66,253);
   hM_bin37->SetBinContent(67,263);
   hM_bin37->SetBinContent(68,230);
   hM_bin37->SetBinContent(69,237);
   hM_bin37->SetBinContent(70,239);
   hM_bin37->SetBinContent(71,239);
   hM_bin37->SetBinContent(72,237);
   hM_bin37->SetBinContent(73,248);
   hM_bin37->SetBinContent(74,252);
   hM_bin37->SetBinContent(75,236);
   hM_bin37->SetBinContent(76,241);
   hM_bin37->SetBinContent(77,277);
   hM_bin37->SetBinContent(78,276);
   hM_bin37->SetBinContent(79,259);
   hM_bin37->SetBinContent(80,237);
   hM_bin37->SetBinContent(81,265);
   hM_bin37->SetBinContent(82,282);
   hM_bin37->SetBinContent(83,287);
   hM_bin37->SetBinContent(84,253);
   hM_bin37->SetBinContent(85,278);
   hM_bin37->SetBinContent(86,263);
   hM_bin37->SetBinContent(87,276);
   hM_bin37->SetBinContent(88,255);
   hM_bin37->SetBinContent(89,281);
   hM_bin37->SetBinContent(90,309);
   hM_bin37->SetBinContent(91,289);
   hM_bin37->SetBinContent(92,287);
   hM_bin37->SetBinContent(93,280);
   hM_bin37->SetBinContent(94,285);
   hM_bin37->SetBinContent(95,274);
   hM_bin37->SetBinContent(96,324);
   hM_bin37->SetBinContent(97,285);
   hM_bin37->SetBinContent(98,277);
   hM_bin37->SetBinContent(99,322);
   hM_bin37->SetBinContent(100,294);
   hM_bin37->SetBinContent(101,39940);
   hM_bin37->SetEntries(71211);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07347943,0.1894129);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(217.9261);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-102.669);
   fsig->SetParError(0,9.842422);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,1556.011);
   fsig->SetParError(1,82.78677);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-7.09977e-07);
   fsig->SetParError(2,263.6768);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,1076.528);
   fsig->SetParError(3,11.84868);
   fsig->SetParLimits(3,0,2674);
   fsig->SetParameter(4,0.1311865);
   fsig->SetParError(4,0.0002116455);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,7.933332e-06);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin37->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin37");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 71211  ");
   text = ptstats->AddText("Mean  = 0.1701");
   text = ptstats->AddText("RMS   = 0.06318");
   text = ptstats->AddText("#chi^{2} / ndf = 217.9 / 28");
   text = ptstats->AddText("p0       = -102.7 #pm 9.8 ");
   text = ptstats->AddText("p1       =  1556 #pm 82.8 ");
   text = ptstats->AddText("p2       = -7.1e-07 #pm 2.6e+02 ");
   text = ptstats->AddText("p3       =  1077 #pm 11.8 ");
   text = ptstats->AddText("p4       = 0.1312 #pm 0.0002 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00001 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin37->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin37);

   ci = TColor::GetColor("#0000ff");
   hM_bin37->SetMarkerColor(ci);
   hM_bin37->SetMarkerStyle(24);
   hM_bin37->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin37->GetXaxis()->SetLabelFont(42);
   hM_bin37->GetXaxis()->SetLabelSize(0.035);
   hM_bin37->GetXaxis()->SetTitleSize(0.035);
   hM_bin37->GetXaxis()->SetTitleFont(42);
   hM_bin37->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin37->GetYaxis()->SetLabelFont(42);
   hM_bin37->GetYaxis()->SetLabelSize(0.035);
   hM_bin37->GetYaxis()->SetTitleSize(0.035);
   hM_bin37->GetYaxis()->SetTitleFont(42);
   hM_bin37->GetZaxis()->SetLabelFont(42);
   hM_bin37->GetZaxis()->SetLabelSize(0.035);
   hM_bin37->GetZaxis()->SetTitleSize(0.035);
   hM_bin37->GetZaxis()->SetTitleFont(42);
   hM_bin37->Draw("e");
   
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
   fmb->SetParameter(0,-102.669);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1556.011);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-7.09977e-07);
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
   fpeak->SetParameter(0,1076.528);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1311865);
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
