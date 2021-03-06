{
//=========Macro generated from canvas: c/The canvas
//=========  (Wed Sep 14 17:43:49 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.06625,-2.625,0.20375,23.625);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM = new TH1F("hM","Mass bin (pt2,nu,z) = (5,0,3)",75,0.08,0.19);
   hM->SetBinContent(0,1);
   hM->SetBinContent(3,1);
   hM->SetBinContent(12,1);
   hM->SetBinContent(18,1);
   hM->SetBinContent(19,1);
   hM->SetBinContent(21,1);
   hM->SetBinContent(22,2);
   hM->SetBinContent(23,2);
   hM->SetBinContent(24,1);
   hM->SetBinContent(25,5);
   hM->SetBinContent(26,10);
   hM->SetBinContent(27,10);
   hM->SetBinContent(28,10);
   hM->SetBinContent(29,11);
   hM->SetBinContent(30,10);
   hM->SetBinContent(31,4);
   hM->SetBinContent(32,8);
   hM->SetBinContent(33,11);
   hM->SetBinContent(34,10);
   hM->SetBinContent(35,8);
   hM->SetBinContent(36,14);
   hM->SetBinContent(37,13);
   hM->SetBinContent(38,16);
   hM->SetBinContent(39,13);
   hM->SetBinContent(40,15);
   hM->SetBinContent(41,13);
   hM->SetBinContent(42,9);
   hM->SetBinContent(43,13);
   hM->SetBinContent(44,13);
   hM->SetBinContent(45,7);
   hM->SetBinContent(46,7);
   hM->SetBinContent(47,3);
   hM->SetBinContent(48,3);
   hM->SetBinContent(49,7);
   hM->SetBinContent(50,3);
   hM->SetBinContent(51,2);
   hM->SetBinContent(52,12);
   hM->SetBinContent(53,3);
   hM->SetBinContent(54,2);
   hM->SetBinContent(55,3);
   hM->SetBinContent(56,2);
   hM->SetBinContent(57,2);
   hM->SetBinContent(58,2);
   hM->SetBinContent(59,3);
   hM->SetBinContent(60,3);
   hM->SetBinContent(61,2);
   hM->SetBinContent(62,4);
   hM->SetBinContent(63,4);
   hM->SetBinContent(64,1);
   hM->SetBinContent(65,1);
   hM->SetBinContent(67,1);
   hM->SetBinContent(70,1);
   hM->SetBinContent(71,2);
   hM->SetBinContent(74,1);
   hM->SetBinContent(75,3);
   hM->SetEntries(311);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 311    ");
   text = ptstats->AddText("Mean  = 0.1382");
   text = ptstats->AddText("RMS   = 0.01663");
   text = ptstats->AddText("#chi^{2} / ndf = 67.44 / 48");
   text = ptstats->AddText("p0       = -2.191 #pm 1.291 ");
   text = ptstats->AddText("p1       = 17.63 #pm 8.20 ");
   text = ptstats->AddText("p2       = -2.533e-07 #pm 8.429e+01 ");
   text = ptstats->AddText("p3       = 8.809 #pm 0.869 ");
   text = ptstats->AddText("p4       = 0.1345 #pm 0.0012 ");
   text = ptstats->AddText("p5       = 0.01552 #pm 0.00022 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08,0.19);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(67.43617);
   fsig->SetNDF(48);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-2.190645);
   fsig->SetParError(0,1.291429);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,17.63003);
   fsig->SetParError(1,8.199117);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-2.533288e-07);
   fsig->SetParError(2,84.29028);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,8.808568);
   fsig->SetParError(3,0.8690407);
   fsig->SetParLimits(3,0,0);
   fsig->SetParameter(4,0.1345264);
   fsig->SetParError(4,0.001202368);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01552272);
   fsig->SetParError(5,0.0002152461);
   fsig->SetParLimits(5,0.01552272,0.02328408);
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
   
   TF1 *fmb = new TF1("fmb","pol2",0.08,0.19);
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
   fmb->SetParameter(0,-2.190645);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,17.63003);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-2.533288e-07);
   fmb->SetParError(2,0);
   fmb->SetParLimits(2,0,0);
   fmb->Draw("same");
   
   TF1 *fpeak = new TF1("fpeak","gaus",0.08,0.19);
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
   fpeak->SetParameter(0,8.808568);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1345264);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.01552272);
   fpeak->SetParError(2,0);
   fpeak->SetParLimits(2,0,0);
   fpeak->Draw("same");
   
   TPaveText *pt = new TPaveText(0.01,0.9404546,0.4709548,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   text = pt->AddText("Mass bin (pt2,nu,z) = (5,0,3)");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
