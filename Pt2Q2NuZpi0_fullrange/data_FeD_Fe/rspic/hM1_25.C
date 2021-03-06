{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:40:57 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-269.0333,0.350906,2421.299);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin25 = new TH1F("hM_bin25","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin25->SetBinContent(14,4);
   hM_bin25->SetBinContent(15,45);
   hM_bin25->SetBinContent(16,78);
   hM_bin25->SetBinContent(17,106);
   hM_bin25->SetBinContent(18,94);
   hM_bin25->SetBinContent(19,123);
   hM_bin25->SetBinContent(20,160);
   hM_bin25->SetBinContent(21,192);
   hM_bin25->SetBinContent(22,228);
   hM_bin25->SetBinContent(23,238);
   hM_bin25->SetBinContent(24,269);
   hM_bin25->SetBinContent(25,260);
   hM_bin25->SetBinContent(26,290);
   hM_bin25->SetBinContent(27,279);
   hM_bin25->SetBinContent(28,309);
   hM_bin25->SetBinContent(29,289);
   hM_bin25->SetBinContent(30,302);
   hM_bin25->SetBinContent(31,314);
   hM_bin25->SetBinContent(32,321);
   hM_bin25->SetBinContent(33,332);
   hM_bin25->SetBinContent(34,329);
   hM_bin25->SetBinContent(35,371);
   hM_bin25->SetBinContent(36,415);
   hM_bin25->SetBinContent(37,470);
   hM_bin25->SetBinContent(38,541);
   hM_bin25->SetBinContent(39,590);
   hM_bin25->SetBinContent(40,742);
   hM_bin25->SetBinContent(41,845);
   hM_bin25->SetBinContent(42,995);
   hM_bin25->SetBinContent(43,1130);
   hM_bin25->SetBinContent(44,1332);
   hM_bin25->SetBinContent(45,1555);
   hM_bin25->SetBinContent(46,1736);
   hM_bin25->SetBinContent(47,1786);
   hM_bin25->SetBinContent(48,1887);
   hM_bin25->SetBinContent(49,1899);
   hM_bin25->SetBinContent(50,2005);
   hM_bin25->SetBinContent(51,1733);
   hM_bin25->SetBinContent(52,1588);
   hM_bin25->SetBinContent(53,1482);
   hM_bin25->SetBinContent(54,1244);
   hM_bin25->SetBinContent(55,1141);
   hM_bin25->SetBinContent(56,894);
   hM_bin25->SetBinContent(57,819);
   hM_bin25->SetBinContent(58,770);
   hM_bin25->SetBinContent(59,583);
   hM_bin25->SetBinContent(60,572);
   hM_bin25->SetBinContent(61,543);
   hM_bin25->SetBinContent(62,472);
   hM_bin25->SetBinContent(63,453);
   hM_bin25->SetBinContent(64,439);
   hM_bin25->SetBinContent(65,378);
   hM_bin25->SetBinContent(66,374);
   hM_bin25->SetBinContent(67,349);
   hM_bin25->SetBinContent(68,389);
   hM_bin25->SetBinContent(69,395);
   hM_bin25->SetBinContent(70,389);
   hM_bin25->SetBinContent(71,332);
   hM_bin25->SetBinContent(72,361);
   hM_bin25->SetBinContent(73,292);
   hM_bin25->SetBinContent(74,363);
   hM_bin25->SetBinContent(75,353);
   hM_bin25->SetBinContent(76,316);
   hM_bin25->SetBinContent(77,351);
   hM_bin25->SetBinContent(78,299);
   hM_bin25->SetBinContent(79,315);
   hM_bin25->SetBinContent(80,314);
   hM_bin25->SetBinContent(81,295);
   hM_bin25->SetBinContent(82,321);
   hM_bin25->SetBinContent(83,343);
   hM_bin25->SetBinContent(84,273);
   hM_bin25->SetBinContent(85,297);
   hM_bin25->SetBinContent(86,239);
   hM_bin25->SetBinContent(87,299);
   hM_bin25->SetBinContent(88,279);
   hM_bin25->SetBinContent(89,255);
   hM_bin25->SetBinContent(90,261);
   hM_bin25->SetBinContent(91,280);
   hM_bin25->SetBinContent(92,312);
   hM_bin25->SetBinContent(93,283);
   hM_bin25->SetBinContent(94,290);
   hM_bin25->SetBinContent(95,289);
   hM_bin25->SetBinContent(96,253);
   hM_bin25->SetBinContent(97,235);
   hM_bin25->SetBinContent(98,250);
   hM_bin25->SetBinContent(99,268);
   hM_bin25->SetBinContent(100,258);
   hM_bin25->SetBinContent(101,17092);
   hM_bin25->SetEntries(63836);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07146829,0.1874017);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(80.14318);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,224.9648);
   fsig->SetParError(0,17.2187);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,806.4915);
   fsig->SetParError(1,132.1471);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-7.305061e-09);
   fsig->SetParError(2,1186.439);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,1509.18);
   fsig->SetParError(3,15.86784);
   fsig->SetParLimits(3,0,4010);
   fsig->SetParameter(4,0.1292699);
   fsig->SetParError(4,0.0002149075);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,2.449597e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin25->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin25");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 63836  ");
   text = ptstats->AddText("Mean  = 0.1497");
   text = ptstats->AddText("RMS   = 0.06183");
   text = ptstats->AddText("#chi^{2} / ndf = 80.14 / 28");
   text = ptstats->AddText("p0       =   225 #pm 17.2 ");
   text = ptstats->AddText("p1       = 806.5 #pm 132.1 ");
   text = ptstats->AddText("p2       = -7.305e-09 #pm 1.186e+03 ");
   text = ptstats->AddText("p3       =  1509 #pm 15.9 ");
   text = ptstats->AddText("p4       = 0.1293 #pm 0.0002 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00002 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin25->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin25);

   ci = TColor::GetColor("#0000ff");
   hM_bin25->SetMarkerColor(ci);
   hM_bin25->SetMarkerStyle(24);
   hM_bin25->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin25->GetXaxis()->SetLabelFont(42);
   hM_bin25->GetXaxis()->SetLabelSize(0.035);
   hM_bin25->GetXaxis()->SetTitleSize(0.035);
   hM_bin25->GetXaxis()->SetTitleFont(42);
   hM_bin25->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin25->GetYaxis()->SetLabelFont(42);
   hM_bin25->GetYaxis()->SetLabelSize(0.035);
   hM_bin25->GetYaxis()->SetTitleSize(0.035);
   hM_bin25->GetYaxis()->SetTitleFont(42);
   hM_bin25->GetZaxis()->SetLabelFont(42);
   hM_bin25->GetZaxis()->SetLabelSize(0.035);
   hM_bin25->GetZaxis()->SetTitleSize(0.035);
   hM_bin25->GetZaxis()->SetTitleFont(42);
   hM_bin25->Draw("e");
   
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
   fmb->SetParameter(0,224.9648);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,806.4915);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-7.305061e-09);
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
   fpeak->SetParameter(0,1509.18);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1292699);
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
