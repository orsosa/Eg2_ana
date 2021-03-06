{
//=========Macro generated from canvas: c/The canvas
//=========  (Wed Sep 14 17:43:48 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.06625,-7.350001,0.20375,66.15);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM = new TH1F("hM","Mass bin (pt2,nu,z) = (3,0,1)",75,0.08,0.19);
   hM->SetBinContent(0,2);
   hM->SetBinContent(1,1);
   hM->SetBinContent(4,2);
   hM->SetBinContent(5,2);
   hM->SetBinContent(6,2);
   hM->SetBinContent(7,1);
   hM->SetBinContent(8,2);
   hM->SetBinContent(9,6);
   hM->SetBinContent(10,2);
   hM->SetBinContent(11,1);
   hM->SetBinContent(12,4);
   hM->SetBinContent(13,3);
   hM->SetBinContent(14,3);
   hM->SetBinContent(15,6);
   hM->SetBinContent(16,8);
   hM->SetBinContent(17,1);
   hM->SetBinContent(18,10);
   hM->SetBinContent(19,2);
   hM->SetBinContent(20,11);
   hM->SetBinContent(21,14);
   hM->SetBinContent(22,14);
   hM->SetBinContent(23,13);
   hM->SetBinContent(24,15);
   hM->SetBinContent(25,15);
   hM->SetBinContent(26,25);
   hM->SetBinContent(27,24);
   hM->SetBinContent(28,24);
   hM->SetBinContent(29,19);
   hM->SetBinContent(30,42);
   hM->SetBinContent(31,36);
   hM->SetBinContent(32,38);
   hM->SetBinContent(33,38);
   hM->SetBinContent(34,34);
   hM->SetBinContent(35,41);
   hM->SetBinContent(36,37);
   hM->SetBinContent(37,35);
   hM->SetBinContent(38,33);
   hM->SetBinContent(39,49);
   hM->SetBinContent(40,33);
   hM->SetBinContent(41,35);
   hM->SetBinContent(42,40);
   hM->SetBinContent(43,30);
   hM->SetBinContent(44,26);
   hM->SetBinContent(45,24);
   hM->SetBinContent(46,17);
   hM->SetBinContent(47,27);
   hM->SetBinContent(48,20);
   hM->SetBinContent(49,23);
   hM->SetBinContent(50,19);
   hM->SetBinContent(51,21);
   hM->SetBinContent(52,16);
   hM->SetBinContent(53,20);
   hM->SetBinContent(54,8);
   hM->SetBinContent(55,16);
   hM->SetBinContent(56,8);
   hM->SetBinContent(57,10);
   hM->SetBinContent(58,5);
   hM->SetBinContent(59,8);
   hM->SetBinContent(60,5);
   hM->SetBinContent(61,6);
   hM->SetBinContent(62,3);
   hM->SetBinContent(63,6);
   hM->SetBinContent(64,4);
   hM->SetBinContent(65,6);
   hM->SetBinContent(66,6);
   hM->SetBinContent(67,5);
   hM->SetBinContent(68,6);
   hM->SetBinContent(69,7);
   hM->SetBinContent(70,3);
   hM->SetBinContent(71,3);
   hM->SetBinContent(72,6);
   hM->SetBinContent(73,2);
   hM->SetBinContent(74,3);
   hM->SetBinContent(75,3);
   hM->SetBinContent(76,2);
   hM->SetEntries(1097);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 1097   ");
   text = ptstats->AddText("Mean  = 0.1361");
   text = ptstats->AddText("RMS   = 0.01889");
   text = ptstats->AddText("#chi^{2} / ndf = 97.93 / 67");
   text = ptstats->AddText("p0       = -1.618 #pm 0.971 ");
   text = ptstats->AddText("p1       = 24.03 #pm 7.42 ");
   text = ptstats->AddText("p2       = -1.186e-07 #pm 8.422e+01 ");
   text = ptstats->AddText("p3       = 32.96 #pm 1.35 ");
   text = ptstats->AddText("p4       = 0.1352 #pm 0.0006 ");
   text = ptstats->AddText("p5       = 0.01552 #pm 0.00008 ");
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
   fsig->SetChisquare(97.93308);
   fsig->SetNDF(67);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-1.617714);
   fsig->SetParError(0,0.9713025);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,24.03326);
   fsig->SetParError(1,7.42347);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.186181e-07);
   fsig->SetParError(2,84.21759);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,32.95874);
   fsig->SetParError(3,1.351491);
   fsig->SetParLimits(3,0,0);
   fsig->SetParameter(4,0.1352258);
   fsig->SetParError(4,0.0005882638);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01552272);
   fsig->SetParError(5,8.235722e-05);
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
   fmb->SetParameter(0,-1.617714);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,24.03326);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.186181e-07);
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
   fpeak->SetParameter(0,32.95874);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1352258);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.01552272);
   fpeak->SetParError(2,0);
   fpeak->SetParLimits(2,0,0);
   fpeak->Draw("same");
   
   TPaveText *pt = new TPaveText(0.01,0.9404546,0.4709548,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   text = pt->AddText("Mass bin (pt2,nu,z) = (3,0,1)");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
