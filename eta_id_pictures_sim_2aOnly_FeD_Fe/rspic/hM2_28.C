{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Dec 20 13:45:40 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.425,-1.421231,0.675,12.79108);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM = new TH1F("hM","Mass bin (pt2,nu,z) = (5,0,3)",75,0.45,0.65);
   hM->SetBinContent(0,938);
   hM->SetBinContent(1,1);
   hM->SetBinContent(2,2);
   hM->SetBinContent(3,2);
   hM->SetBinContent(4,2);
   hM->SetBinContent(6,2);
   hM->SetBinContent(7,4);
   hM->SetBinContent(8,3);
   hM->SetBinContent(10,1);
   hM->SetBinContent(11,2);
   hM->SetBinContent(12,1);
   hM->SetBinContent(13,6);
   hM->SetBinContent(14,3);
   hM->SetBinContent(15,3);
   hM->SetBinContent(16,2);
   hM->SetBinContent(17,3);
   hM->SetBinContent(18,1);
   hM->SetBinContent(20,3);
   hM->SetBinContent(21,2);
   hM->SetBinContent(22,4);
   hM->SetBinContent(23,7);
   hM->SetBinContent(24,8);
   hM->SetBinContent(25,3);
   hM->SetBinContent(26,1);
   hM->SetBinContent(27,1);
   hM->SetBinContent(28,7);
   hM->SetBinContent(29,1);
   hM->SetBinContent(30,2);
   hM->SetBinContent(31,3);
   hM->SetBinContent(32,6);
   hM->SetBinContent(33,2);
   hM->SetBinContent(34,8);
   hM->SetBinContent(35,3);
   hM->SetBinContent(37,8);
   hM->SetBinContent(38,7);
   hM->SetBinContent(39,2);
   hM->SetBinContent(40,3);
   hM->SetBinContent(41,2);
   hM->SetBinContent(42,3);
   hM->SetBinContent(43,3);
   hM->SetBinContent(44,6);
   hM->SetBinContent(45,3);
   hM->SetBinContent(46,2);
   hM->SetBinContent(47,1);
   hM->SetBinContent(48,4);
   hM->SetBinContent(49,2);
   hM->SetBinContent(50,4);
   hM->SetBinContent(51,2);
   hM->SetBinContent(52,5);
   hM->SetBinContent(53,3);
   hM->SetBinContent(54,1);
   hM->SetBinContent(55,4);
   hM->SetBinContent(56,1);
   hM->SetBinContent(57,2);
   hM->SetBinContent(58,2);
   hM->SetBinContent(59,1);
   hM->SetBinContent(60,2);
   hM->SetBinContent(61,1);
   hM->SetBinContent(62,2);
   hM->SetBinContent(63,3);
   hM->SetBinContent(64,3);
   hM->SetBinContent(67,1);
   hM->SetBinContent(68,2);
   hM->SetBinContent(69,1);
   hM->SetBinContent(71,1);
   hM->SetBinContent(72,1);
   hM->SetBinContent(73,2);
   hM->SetBinContent(75,1);
   hM->SetBinContent(76,74);
   hM->SetEntries(1202);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 1202   ");
   text = ptstats->AddText("Mean  = 0.5422");
   text = ptstats->AddText("RMS   = 0.04738");
   text = ptstats->AddText("#chi^{2} / ndf = 53.36 / 61");
   text = ptstats->AddText("p0       = 3.003 #pm 2.925 ");
   text = ptstats->AddText("p1       = -3.234 #pm 7.503 ");
   text = ptstats->AddText("p2       = -0.16 #pm 50.57 ");
   text = ptstats->AddText("p3       = 1.424 #pm 0.574 ");
   text = ptstats->AddText("p4       = 0.5515 #pm 0.0204 ");
   text = ptstats->AddText("p5       = 0.04788 #pm 0.02361 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.45,0.65);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(53.35584);
   fsig->SetNDF(61);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,3.003034);
   fsig->SetParError(0,2.925206);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,-3.233548);
   fsig->SetParError(1,7.502601);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.1599825);
   fsig->SetParError(2,50.56727);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,1.423807);
   fsig->SetParError(3,0.5739994);
   fsig->SetParLimits(3,0,0);
   fsig->SetParameter(4,0.5515185);
   fsig->SetParError(4,0.0204236);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.04788336);
   fsig->SetParError(5,0.02361348);
   fsig->SetParLimits(5,0.04788336,0.07182504);
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
   
   TF1 *fmb = new TF1("fmb","pol2",0.45,0.65);
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
   fmb->SetParameter(0,3.003034);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,-3.233548);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.1599825);
   fmb->SetParError(2,0);
   fmb->SetParLimits(2,0,0);
   fmb->Draw("same");
   
   TF1 *fpeak = new TF1("fpeak","gaus",0.45,0.65);
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
   fpeak->SetParameter(0,1.423807);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.5515185);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.04788336);
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
