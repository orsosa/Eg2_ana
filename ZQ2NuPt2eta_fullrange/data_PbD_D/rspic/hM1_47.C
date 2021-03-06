{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 18 12:07:38 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.1901558,-39.2265,0.8890623,388.7675);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin47 = new TH1F("hM_bin47","M_{#gamma #gamma}",100,0.2600464,0.8191716);
   hM_bin47->SetBinContent(0,6825);
   hM_bin47->SetBinContent(1,24);
   hM_bin47->SetBinContent(2,37);
   hM_bin47->SetBinContent(3,41);
   hM_bin47->SetBinContent(4,36);
   hM_bin47->SetBinContent(5,42);
   hM_bin47->SetBinContent(6,54);
   hM_bin47->SetBinContent(7,40);
   hM_bin47->SetBinContent(8,47);
   hM_bin47->SetBinContent(9,53);
   hM_bin47->SetBinContent(10,50);
   hM_bin47->SetBinContent(11,77);
   hM_bin47->SetBinContent(12,67);
   hM_bin47->SetBinContent(13,66);
   hM_bin47->SetBinContent(14,55);
   hM_bin47->SetBinContent(15,73);
   hM_bin47->SetBinContent(16,68);
   hM_bin47->SetBinContent(17,79);
   hM_bin47->SetBinContent(18,66);
   hM_bin47->SetBinContent(19,76);
   hM_bin47->SetBinContent(20,91);
   hM_bin47->SetBinContent(21,79);
   hM_bin47->SetBinContent(22,73);
   hM_bin47->SetBinContent(23,106);
   hM_bin47->SetBinContent(24,88);
   hM_bin47->SetBinContent(25,116);
   hM_bin47->SetBinContent(26,101);
   hM_bin47->SetBinContent(27,107);
   hM_bin47->SetBinContent(28,123);
   hM_bin47->SetBinContent(29,103);
   hM_bin47->SetBinContent(30,106);
   hM_bin47->SetBinContent(31,122);
   hM_bin47->SetBinContent(32,133);
   hM_bin47->SetBinContent(33,118);
   hM_bin47->SetBinContent(34,117);
   hM_bin47->SetBinContent(35,136);
   hM_bin47->SetBinContent(36,110);
   hM_bin47->SetBinContent(37,123);
   hM_bin47->SetBinContent(38,119);
   hM_bin47->SetBinContent(39,154);
   hM_bin47->SetBinContent(40,136);
   hM_bin47->SetBinContent(41,161);
   hM_bin47->SetBinContent(42,147);
   hM_bin47->SetBinContent(43,148);
   hM_bin47->SetBinContent(44,168);
   hM_bin47->SetBinContent(45,199);
   hM_bin47->SetBinContent(46,196);
   hM_bin47->SetBinContent(47,180);
   hM_bin47->SetBinContent(48,182);
   hM_bin47->SetBinContent(49,220);
   hM_bin47->SetBinContent(50,216);
   hM_bin47->SetBinContent(51,215);
   hM_bin47->SetBinContent(52,249);
   hM_bin47->SetBinContent(53,230);
   hM_bin47->SetBinContent(54,219);
   hM_bin47->SetBinContent(55,229);
   hM_bin47->SetBinContent(56,259);
   hM_bin47->SetBinContent(57,242);
   hM_bin47->SetBinContent(58,244);
   hM_bin47->SetBinContent(59,245);
   hM_bin47->SetBinContent(60,241);
   hM_bin47->SetBinContent(61,261);
   hM_bin47->SetBinContent(62,244);
   hM_bin47->SetBinContent(63,245);
   hM_bin47->SetBinContent(64,257);
   hM_bin47->SetBinContent(65,226);
   hM_bin47->SetBinContent(66,242);
   hM_bin47->SetBinContent(67,219);
   hM_bin47->SetBinContent(68,269);
   hM_bin47->SetBinContent(69,243);
   hM_bin47->SetBinContent(70,229);
   hM_bin47->SetBinContent(71,248);
   hM_bin47->SetBinContent(72,229);
   hM_bin47->SetBinContent(73,257);
   hM_bin47->SetBinContent(74,277);
   hM_bin47->SetBinContent(75,278);
   hM_bin47->SetBinContent(76,232);
   hM_bin47->SetBinContent(77,253);
   hM_bin47->SetBinContent(78,255);
   hM_bin47->SetBinContent(79,230);
   hM_bin47->SetBinContent(80,279);
   hM_bin47->SetBinContent(81,219);
   hM_bin47->SetBinContent(82,260);
   hM_bin47->SetBinContent(83,254);
   hM_bin47->SetBinContent(84,290);
   hM_bin47->SetBinContent(85,259);
   hM_bin47->SetBinContent(86,265);
   hM_bin47->SetBinContent(87,261);
   hM_bin47->SetBinContent(88,263);
   hM_bin47->SetBinContent(89,257);
   hM_bin47->SetBinContent(90,270);
   hM_bin47->SetBinContent(91,228);
   hM_bin47->SetBinContent(92,265);
   hM_bin47->SetBinContent(93,263);
   hM_bin47->SetBinContent(94,306);
   hM_bin47->SetBinContent(95,312);
   hM_bin47->SetBinContent(96,265);
   hM_bin47->SetBinContent(97,270);
   hM_bin47->SetBinContent(98,292);
   hM_bin47->SetBinContent(99,280);
   hM_bin47->SetBinContent(100,272);
   hM_bin47->SetBinContent(101,34876);
   hM_bin47->SetEntries(59627);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.4304683,0.7177685);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(58.58444);
   fsig->SetNDF(46);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-113.4288);
   fsig->SetParError(0,15.56072);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,519.1971);
   fsig->SetParError(1,28.12496);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.324884e-05);
   fsig->SetParError(2,434.6658);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,59.55896);
   fsig->SetParError(3,5.720067);
   fsig->SetParLimits(3,0,624);
   fsig->SetParameter(4,0.5722835);
   fsig->SetParError(4,0.005221697);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.04788336);
   fsig->SetParError(5,0.0196161);
   fsig->SetParLimits(5,0.04788336,0.07182504);
   hM_bin47->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin47");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 59627  ");
   text = ptstats->AddText("Mean  = 0.6117");
   text = ptstats->AddText("RMS   = 0.1372");
   text = ptstats->AddText("#chi^{2} / ndf = 58.58 / 46");
   text = ptstats->AddText("p0       = -113.4 #pm 15.6 ");
   text = ptstats->AddText("p1       = 519.2 #pm 28.1 ");
   text = ptstats->AddText("p2       = -1.325e-05 #pm 4.347e+02 ");
   text = ptstats->AddText("p3       = 59.56 #pm 5.72 ");
   text = ptstats->AddText("p4       = 0.5723 #pm 0.0052 ");
   text = ptstats->AddText("p5       = 0.04788 #pm 0.01962 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin47->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin47);

   ci = TColor::GetColor("#0000ff");
   hM_bin47->SetMarkerColor(ci);
   hM_bin47->SetMarkerStyle(24);
   hM_bin47->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin47->GetXaxis()->SetLabelFont(42);
   hM_bin47->GetXaxis()->SetLabelSize(0.035);
   hM_bin47->GetXaxis()->SetTitleSize(0.035);
   hM_bin47->GetXaxis()->SetTitleFont(42);
   hM_bin47->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin47->GetYaxis()->SetLabelFont(42);
   hM_bin47->GetYaxis()->SetLabelSize(0.035);
   hM_bin47->GetYaxis()->SetTitleSize(0.035);
   hM_bin47->GetYaxis()->SetTitleFont(42);
   hM_bin47->GetZaxis()->SetLabelFont(42);
   hM_bin47->GetZaxis()->SetLabelSize(0.035);
   hM_bin47->GetZaxis()->SetTitleSize(0.035);
   hM_bin47->GetZaxis()->SetTitleFont(42);
   hM_bin47->Draw("e");
   
   TF1 *fmb = new TF1("fmb","pol2",0.3600464,0.7191716);
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
   fmb->SetParameter(0,-113.4288);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,519.1971);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.324884e-05);
   fmb->SetParError(2,0);
   fmb->SetParLimits(2,0,0);
   fmb->Draw("same");
   
   TF1 *fpeak = new TF1("fpeak","gaus",0.3600464,0.7191716);
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
   fpeak->SetParameter(0,59.55896);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.5722835);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.04788336);
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
