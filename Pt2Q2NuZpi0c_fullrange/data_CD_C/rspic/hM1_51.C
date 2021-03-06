{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue May  9 16:23:53 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-79.55387,0.350906,715.9848);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin51 = new TH1F("hM_bin51","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin51->SetBinContent(15,2);
   hM_bin51->SetBinContent(16,10);
   hM_bin51->SetBinContent(17,34);
   hM_bin51->SetBinContent(18,30);
   hM_bin51->SetBinContent(19,24);
   hM_bin51->SetBinContent(20,37);
   hM_bin51->SetBinContent(21,57);
   hM_bin51->SetBinContent(22,45);
   hM_bin51->SetBinContent(23,69);
   hM_bin51->SetBinContent(24,45);
   hM_bin51->SetBinContent(25,93);
   hM_bin51->SetBinContent(26,67);
   hM_bin51->SetBinContent(27,76);
   hM_bin51->SetBinContent(28,77);
   hM_bin51->SetBinContent(29,85);
   hM_bin51->SetBinContent(30,82);
   hM_bin51->SetBinContent(31,97);
   hM_bin51->SetBinContent(32,86);
   hM_bin51->SetBinContent(33,98);
   hM_bin51->SetBinContent(34,85);
   hM_bin51->SetBinContent(35,108);
   hM_bin51->SetBinContent(36,108);
   hM_bin51->SetBinContent(37,110);
   hM_bin51->SetBinContent(38,109);
   hM_bin51->SetBinContent(39,127);
   hM_bin51->SetBinContent(40,126);
   hM_bin51->SetBinContent(41,150);
   hM_bin51->SetBinContent(42,171);
   hM_bin51->SetBinContent(43,255);
   hM_bin51->SetBinContent(44,253);
   hM_bin51->SetBinContent(45,282);
   hM_bin51->SetBinContent(46,360);
   hM_bin51->SetBinContent(47,408);
   hM_bin51->SetBinContent(48,467);
   hM_bin51->SetBinContent(49,533);
   hM_bin51->SetBinContent(50,582);
   hM_bin51->SetBinContent(51,555);
   hM_bin51->SetBinContent(52,543);
   hM_bin51->SetBinContent(53,559);
   hM_bin51->SetBinContent(54,454);
   hM_bin51->SetBinContent(55,469);
   hM_bin51->SetBinContent(56,404);
   hM_bin51->SetBinContent(57,401);
   hM_bin51->SetBinContent(58,332);
   hM_bin51->SetBinContent(59,314);
   hM_bin51->SetBinContent(60,290);
   hM_bin51->SetBinContent(61,219);
   hM_bin51->SetBinContent(62,226);
   hM_bin51->SetBinContent(63,213);
   hM_bin51->SetBinContent(64,163);
   hM_bin51->SetBinContent(65,141);
   hM_bin51->SetBinContent(66,136);
   hM_bin51->SetBinContent(67,155);
   hM_bin51->SetBinContent(68,142);
   hM_bin51->SetBinContent(69,141);
   hM_bin51->SetBinContent(70,112);
   hM_bin51->SetBinContent(71,137);
   hM_bin51->SetBinContent(72,112);
   hM_bin51->SetBinContent(73,103);
   hM_bin51->SetBinContent(74,123);
   hM_bin51->SetBinContent(75,121);
   hM_bin51->SetBinContent(76,106);
   hM_bin51->SetBinContent(77,108);
   hM_bin51->SetBinContent(78,108);
   hM_bin51->SetBinContent(79,87);
   hM_bin51->SetBinContent(80,86);
   hM_bin51->SetBinContent(81,100);
   hM_bin51->SetBinContent(82,85);
   hM_bin51->SetBinContent(83,92);
   hM_bin51->SetBinContent(84,109);
   hM_bin51->SetBinContent(85,106);
   hM_bin51->SetBinContent(86,90);
   hM_bin51->SetBinContent(87,98);
   hM_bin51->SetBinContent(88,85);
   hM_bin51->SetBinContent(89,74);
   hM_bin51->SetBinContent(90,84);
   hM_bin51->SetBinContent(91,80);
   hM_bin51->SetBinContent(92,87);
   hM_bin51->SetBinContent(93,103);
   hM_bin51->SetBinContent(94,63);
   hM_bin51->SetBinContent(95,74);
   hM_bin51->SetBinContent(96,90);
   hM_bin51->SetBinContent(97,66);
   hM_bin51->SetBinContent(98,77);
   hM_bin51->SetBinContent(99,82);
   hM_bin51->SetBinContent(100,76);
   hM_bin51->SetBinContent(101,4501);
   hM_bin51->SetEntries(18630);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08179963,0.1977331);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(53.48031);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,55.67722);
   fsig->SetParError(0,10.54891);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,396.0344);
   fsig->SetParError(1,75.81849);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.002481944);
   fsig->SetParError(2,1185.691);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,431.8647);
   fsig->SetParError(3,8.732092);
   fsig->SetParLimits(3,0,1164);
   fsig->SetParameter(4,0.1395745);
   fsig->SetParError(4,0.0004227151);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0001389274);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin51->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin51");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 18630  ");
   text = ptstats->AddText("Mean  = 0.1567");
   text = ptstats->AddText("RMS   = 0.05967");
   text = ptstats->AddText("#chi^{2} / ndf = 53.48 / 28");
   text = ptstats->AddText("p0       = 55.68 #pm 10.55 ");
   text = ptstats->AddText("p1       =   396 #pm 75.8 ");
   text = ptstats->AddText("p2       = -0.002482 #pm 1185.690796 ");
   text = ptstats->AddText("p3       = 431.9 #pm 8.7 ");
   text = ptstats->AddText("p4       = 0.1396 #pm 0.0004 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00014 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin51->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin51);

   ci = TColor::GetColor("#0000ff");
   hM_bin51->SetMarkerColor(ci);
   hM_bin51->SetMarkerStyle(24);
   hM_bin51->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin51->GetXaxis()->SetLabelFont(42);
   hM_bin51->GetXaxis()->SetLabelSize(0.035);
   hM_bin51->GetXaxis()->SetTitleSize(0.035);
   hM_bin51->GetXaxis()->SetTitleFont(42);
   hM_bin51->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin51->GetYaxis()->SetLabelFont(42);
   hM_bin51->GetYaxis()->SetLabelSize(0.035);
   hM_bin51->GetYaxis()->SetTitleSize(0.035);
   hM_bin51->GetYaxis()->SetTitleFont(42);
   hM_bin51->GetZaxis()->SetLabelFont(42);
   hM_bin51->GetZaxis()->SetLabelSize(0.035);
   hM_bin51->GetZaxis()->SetTitleSize(0.035);
   hM_bin51->GetZaxis()->SetTitleFont(42);
   hM_bin51->Draw("e");
   
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
   fmb->SetParameter(0,55.67722);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,396.0344);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.002481944);
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
   fpeak->SetParameter(0,431.8647);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1395745);
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
