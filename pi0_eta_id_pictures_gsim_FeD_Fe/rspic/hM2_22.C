{
//=========Macro generated from canvas: c/The canvas
//=========  (Wed Sep 14 17:45:37 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.06625,-0.8224669,0.20375,5.42292);
   c->SetBorderSize(2);
   c->SetLogy();
   c->SetFrameFillColor(0);
   
   TH1F *hM = new TH1F("hM","Mass bin (pt2,nu,z) = (4,0,2)",75,0.08,0.19);
   hM->SetBinContent(0,17);
   hM->SetBinContent(1,8);
   hM->SetBinContent(2,7);
   hM->SetBinContent(3,5);
   hM->SetBinContent(4,5);
   hM->SetBinContent(5,3);
   hM->SetBinContent(6,5);
   hM->SetBinContent(7,6);
   hM->SetBinContent(8,6);
   hM->SetBinContent(9,9);
   hM->SetBinContent(10,10);
   hM->SetBinContent(11,4);
   hM->SetBinContent(12,5);
   hM->SetBinContent(13,7);
   hM->SetBinContent(14,8);
   hM->SetBinContent(15,7);
   hM->SetBinContent(16,7);
   hM->SetBinContent(17,13);
   hM->SetBinContent(18,9);
   hM->SetBinContent(19,5);
   hM->SetBinContent(20,9);
   hM->SetBinContent(21,8);
   hM->SetBinContent(22,5);
   hM->SetBinContent(23,6);
   hM->SetBinContent(24,7);
   hM->SetBinContent(25,9);
   hM->SetBinContent(26,9);
   hM->SetBinContent(27,12);
   hM->SetBinContent(28,13);
   hM->SetBinContent(29,7);
   hM->SetBinContent(30,6);
   hM->SetBinContent(31,17);
   hM->SetBinContent(32,7);
   hM->SetBinContent(33,12);
   hM->SetBinContent(34,35);
   hM->SetBinContent(35,111);
   hM->SetBinContent(36,429);
   hM->SetBinContent(37,5235);
   hM->SetBinContent(38,32995);
   hM->SetBinContent(39,5321);
   hM->SetBinContent(40,457);
   hM->SetBinContent(41,106);
   hM->SetBinContent(42,36);
   hM->SetBinContent(43,11);
   hM->SetBinContent(44,15);
   hM->SetBinContent(45,16);
   hM->SetBinContent(46,5);
   hM->SetBinContent(47,12);
   hM->SetBinContent(48,6);
   hM->SetBinContent(49,13);
   hM->SetBinContent(50,13);
   hM->SetBinContent(51,9);
   hM->SetBinContent(52,10);
   hM->SetBinContent(53,13);
   hM->SetBinContent(54,7);
   hM->SetBinContent(55,10);
   hM->SetBinContent(56,14);
   hM->SetBinContent(57,8);
   hM->SetBinContent(58,12);
   hM->SetBinContent(59,11);
   hM->SetBinContent(60,13);
   hM->SetBinContent(61,11);
   hM->SetBinContent(62,15);
   hM->SetBinContent(63,12);
   hM->SetBinContent(64,4);
   hM->SetBinContent(65,12);
   hM->SetBinContent(66,16);
   hM->SetBinContent(67,8);
   hM->SetBinContent(68,18);
   hM->SetBinContent(69,11);
   hM->SetBinContent(70,11);
   hM->SetBinContent(71,11);
   hM->SetBinContent(72,16);
   hM->SetBinContent(73,8);
   hM->SetBinContent(74,20);
   hM->SetBinContent(75,11);
   hM->SetBinContent(76,12);
   hM->SetEntries(45392);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 45392  ");
   text = ptstats->AddText("Mean  = 0.1351");
   text = ptstats->AddText("RMS   = 0.00405");
   text = ptstats->AddText("#chi^{2} / ndf =  1046 / 69");
   text = ptstats->AddText("p0       = -20.29 #pm 6.77 ");
   text = ptstats->AddText("p1       = 405.6 #pm 107.9 ");
   text = ptstats->AddText("p2       = -1298 #pm 405.3 ");
   text = ptstats->AddText("p3       = 3.286e+04 #pm 1.831e+02 ");
   text = ptstats->AddText("p4       = 0.135 #pm 0.000 ");
   text = ptstats->AddText("p5       = 0.0007698 #pm 0.0000024 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08,0.19);
   fsig->SetNpx(500);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(1045.899);
   fsig->SetNDF(69);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-20.28742);
   fsig->SetParError(0,6.774944);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,405.5805);
   fsig->SetParError(1,107.8559);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1298.107);
   fsig->SetParError(2,405.2545);
   fsig->SetParLimits(2,0,0);
   fsig->SetParameter(3,32855.8);
   fsig->SetParError(3,183.1061);
   fsig->SetParLimits(3,0,0);
   fsig->SetParameter(4,0.1350033);
   fsig->SetParError(4,3.877352e-06);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.0007698463);
   fsig->SetParError(5,2.422277e-06);
   fsig->SetParLimits(5,0,0);
   hM->GetListOfFunctions()->Add(fsig);

   ci = TColor::GetColor("#0000ff");
   hM->SetMarkerColor(ci);
   hM->SetMarkerStyle(24);
   hM->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM->GetXaxis()->SetLabelFont(42);
   hM->GetXaxis()->SetLabelSize(0.035);
   hM->GetXaxis()->SetTitleSize(0.035);
   hM->GetXaxis()->SetTitleFont(42);
   hM->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM->GetYaxis()->SetLabelFont(42);
   hM->GetYaxis()->SetLabelSize(0.035);
   hM->GetYaxis()->SetTitleSize(0.035);
   hM->GetYaxis()->SetTitleFont(42);
   hM->GetZaxis()->SetLabelFont(42);
   hM->GetZaxis()->SetLabelSize(0.035);
   hM->GetZaxis()->SetTitleSize(0.035);
   hM->GetZaxis()->SetTitleFont(42);
   hM->Draw("e");
   
   TF1 *fmb = new TF1("fmb","pol2",0.13,0.14);
   fmb->SetFillColor(19);
   fmb->SetFillStyle(0);

   ci = TColor::GetColor("#00ff00");
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
   fmb->SetParameter(0,-20.28742);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,405.5805);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1298.107);
   fmb->SetParError(2,0);
   fmb->SetParLimits(2,0,0);
   fmb->Draw("same");
   
   TF1 *fpeak = new TF1("fpeak","gaus",0.13,0.14);
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
   fpeak->SetParameter(0,32855.8);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1350033);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.0007698463);
   fpeak->SetParError(2,0);
   fpeak->SetParLimits(2,0,0);
   fpeak->Draw("same");
   
   TPaveText *pt = new TPaveText(0.01,0.9404546,0.4709548,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   text = pt->AddText("Mass bin (pt2,nu,z) = (4,0,2)");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
