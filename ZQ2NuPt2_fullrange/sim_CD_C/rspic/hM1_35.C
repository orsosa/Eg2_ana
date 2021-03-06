{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 11 12:55:23 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.06456676,-2.772408,0.3309587,24.95167);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin35 = new TH1F("hM_bin35","M_{#gamma #gamma}",200,-0.02501421,0.2914062);
   hM_bin35->SetBinContent(0,268);
   hM_bin35->SetBinContent(25,1);
   hM_bin35->SetBinContent(45,2);
   hM_bin35->SetBinContent(47,1);
   hM_bin35->SetBinContent(50,1);
   hM_bin35->SetBinContent(54,1);
   hM_bin35->SetBinContent(58,2);
   hM_bin35->SetBinContent(60,1);
   hM_bin35->SetBinContent(64,1);
   hM_bin35->SetBinContent(65,1);
   hM_bin35->SetBinContent(66,1);
   hM_bin35->SetBinContent(68,2);
   hM_bin35->SetBinContent(70,1);
   hM_bin35->SetBinContent(71,1);
   hM_bin35->SetBinContent(72,1);
   hM_bin35->SetBinContent(73,2);
   hM_bin35->SetBinContent(74,1);
   hM_bin35->SetBinContent(75,1);
   hM_bin35->SetBinContent(76,2);
   hM_bin35->SetBinContent(77,2);
   hM_bin35->SetBinContent(78,2);
   hM_bin35->SetBinContent(79,2);
   hM_bin35->SetBinContent(80,1);
   hM_bin35->SetBinContent(81,1);
   hM_bin35->SetBinContent(82,3);
   hM_bin35->SetBinContent(83,4);
   hM_bin35->SetBinContent(84,2);
   hM_bin35->SetBinContent(85,3);
   hM_bin35->SetBinContent(86,2);
   hM_bin35->SetBinContent(87,4);
   hM_bin35->SetBinContent(88,4);
   hM_bin35->SetBinContent(89,5);
   hM_bin35->SetBinContent(90,6);
   hM_bin35->SetBinContent(91,9);
   hM_bin35->SetBinContent(92,8);
   hM_bin35->SetBinContent(93,7);
   hM_bin35->SetBinContent(94,8);
   hM_bin35->SetBinContent(95,11);
   hM_bin35->SetBinContent(96,6);
   hM_bin35->SetBinContent(97,11);
   hM_bin35->SetBinContent(98,7);
   hM_bin35->SetBinContent(99,9);
   hM_bin35->SetBinContent(100,12);
   hM_bin35->SetBinContent(101,13);
   hM_bin35->SetBinContent(102,13);
   hM_bin35->SetBinContent(103,17);
   hM_bin35->SetBinContent(104,15);
   hM_bin35->SetBinContent(105,7);
   hM_bin35->SetBinContent(106,6);
   hM_bin35->SetBinContent(107,8);
   hM_bin35->SetBinContent(108,9);
   hM_bin35->SetBinContent(109,3);
   hM_bin35->SetBinContent(110,14);
   hM_bin35->SetBinContent(111,4);
   hM_bin35->SetBinContent(112,8);
   hM_bin35->SetBinContent(113,14);
   hM_bin35->SetBinContent(114,4);
   hM_bin35->SetBinContent(115,5);
   hM_bin35->SetBinContent(116,7);
   hM_bin35->SetBinContent(117,4);
   hM_bin35->SetBinContent(118,3);
   hM_bin35->SetBinContent(119,5);
   hM_bin35->SetBinContent(120,3);
   hM_bin35->SetBinContent(122,3);
   hM_bin35->SetBinContent(123,2);
   hM_bin35->SetBinContent(124,1);
   hM_bin35->SetBinContent(125,1);
   hM_bin35->SetBinContent(126,1);
   hM_bin35->SetBinContent(127,2);
   hM_bin35->SetBinContent(129,1);
   hM_bin35->SetBinContent(130,1);
   hM_bin35->SetBinContent(132,1);
   hM_bin35->SetBinContent(134,1);
   hM_bin35->SetBinContent(135,1);
   hM_bin35->SetBinContent(136,1);
   hM_bin35->SetBinContent(138,2);
   hM_bin35->SetBinContent(139,3);
   hM_bin35->SetBinContent(140,1);
   hM_bin35->SetBinContent(143,1);
   hM_bin35->SetBinContent(147,1);
   hM_bin35->SetBinContent(149,1);
   hM_bin35->SetBinContent(152,2);
   hM_bin35->SetBinContent(153,1);
   hM_bin35->SetBinContent(154,3);
   hM_bin35->SetBinContent(156,1);
   hM_bin35->SetBinContent(157,2);
   hM_bin35->SetBinContent(161,2);
   hM_bin35->SetBinContent(162,1);
   hM_bin35->SetBinContent(163,3);
   hM_bin35->SetBinContent(165,1);
   hM_bin35->SetBinContent(166,1);
   hM_bin35->SetBinContent(170,1);
   hM_bin35->SetBinContent(172,1);
   hM_bin35->SetBinContent(173,1);
   hM_bin35->SetBinContent(175,2);
   hM_bin35->SetBinContent(179,1);
   hM_bin35->SetBinContent(181,1);
   hM_bin35->SetBinContent(184,1);
   hM_bin35->SetBinContent(188,1);
   hM_bin35->SetBinContent(189,1);
   hM_bin35->SetBinContent(193,2);
   hM_bin35->SetBinContent(194,1);
   hM_bin35->SetBinContent(197,4);
   hM_bin35->SetBinContent(199,1);
   hM_bin35->SetBinContent(201,3817);
   hM_bin35->SetEntries(4459);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08831538,0.1814517);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(40.6977);
   fsig->SetNDF(50);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,0.974689);
   fsig->SetParError(0,1.146748);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,-0.3393073);
   fsig->SetParError(1,8.348868);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-8.857208e-05);
   fsig->SetParError(2,1851.805);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,8.8806);
   fsig->SetParError(3,0.8360532);
   fsig->SetParLimits(3,0,34);
   fsig->SetParameter(4,0.1348255);
   fsig->SetParError(4,0.001610613);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01552272);
   fsig->SetParError(5,0.006788026);
   fsig->SetParLimits(5,0.01552272,0.02328408);
   hM_bin35->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin35");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 4459   ");
   text = ptstats->AddText("Mean  = 0.1445");
   text = ptstats->AddText("RMS   = 0.04211");
   text = ptstats->AddText("#chi^{2} / ndf =  40.7 / 50");
   text = ptstats->AddText("p0       = 0.9747 #pm 1.1467 ");
   text = ptstats->AddText("p1       = -0.3393 #pm 8.3489 ");
   text = ptstats->AddText("p2       = -8.857e-05 #pm 1.852e+03 ");
   text = ptstats->AddText("p3       = 8.881 #pm 0.836 ");
   text = ptstats->AddText("p4       = 0.1348 #pm 0.0016 ");
   text = ptstats->AddText("p5       = 0.01552 #pm 0.00679 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin35->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin35);

   ci = TColor::GetColor("#0000ff");
   hM_bin35->SetMarkerColor(ci);
   hM_bin35->SetMarkerStyle(24);
   hM_bin35->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin35->GetXaxis()->SetLabelFont(42);
   hM_bin35->GetXaxis()->SetLabelSize(0.035);
   hM_bin35->GetXaxis()->SetTitleSize(0.035);
   hM_bin35->GetXaxis()->SetTitleFont(42);
   hM_bin35->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin35->GetYaxis()->SetLabelFont(42);
   hM_bin35->GetYaxis()->SetLabelSize(0.035);
   hM_bin35->GetYaxis()->SetTitleSize(0.035);
   hM_bin35->GetYaxis()->SetTitleFont(42);
   hM_bin35->GetZaxis()->SetLabelFont(42);
   hM_bin35->GetZaxis()->SetLabelSize(0.035);
   hM_bin35->GetZaxis()->SetTitleSize(0.035);
   hM_bin35->GetZaxis()->SetTitleFont(42);
   hM_bin35->Draw("e");
   
   TF1 *fmb = new TF1("fmb","pol2",0.07498579,0.1914062);
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
   fmb->SetParameter(0,0.974689);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,-0.3393073);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-8.857208e-05);
   fmb->SetParError(2,0);
   fmb->SetParLimits(2,0,0);
   fmb->Draw("same");
   
   TF1 *fpeak = new TF1("fpeak","gaus",0.07498579,0.1914062);
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
   fpeak->SetParameter(0,8.8806);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1348255);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.01552272);
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
