{
//=========Macro generated from canvas: c/The canvas
//=========  (Thu Jul 21 19:32:06 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.06625,-4.799519,0.20375,43.19567);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM = new TH1F("hM","Mass, bin (q2,nu,z) = (2,0,4), tot: 1.032063,partial: 0.915863",75,0.08,0.19);
   hM->SetBinContent(0,1);
   hM->SetBinContent(1,2);
   hM->SetBinContent(5,1);
   hM->SetBinContent(7,2);
   hM->SetBinContent(8,1);
   hM->SetBinContent(11,3);
   hM->SetBinContent(12,1);
   hM->SetBinContent(13,2);
   hM->SetBinContent(14,3);
   hM->SetBinContent(15,3);
   hM->SetBinContent(16,4);
   hM->SetBinContent(18,2);
   hM->SetBinContent(19,4);
   hM->SetBinContent(20,10);
   hM->SetBinContent(21,2);
   hM->SetBinContent(22,4);
   hM->SetBinContent(23,11);
   hM->SetBinContent(24,10);
   hM->SetBinContent(25,8);
   hM->SetBinContent(26,16);
   hM->SetBinContent(27,21);
   hM->SetBinContent(28,10);
   hM->SetBinContent(29,16);
   hM->SetBinContent(30,15);
   hM->SetBinContent(31,21);
   hM->SetBinContent(32,24);
   hM->SetBinContent(33,18);
   hM->SetBinContent(34,23);
   hM->SetBinContent(35,21);
   hM->SetBinContent(36,28);
   hM->SetBinContent(37,26);
   hM->SetBinContent(38,31);
   hM->SetBinContent(39,28);
   hM->SetBinContent(40,31);
   hM->SetBinContent(41,23);
   hM->SetBinContent(42,25);
   hM->SetBinContent(43,29);
   hM->SetBinContent(44,18);
   hM->SetBinContent(45,26);
   hM->SetBinContent(46,23);
   hM->SetBinContent(47,17);
   hM->SetBinContent(48,15);
   hM->SetBinContent(49,23);
   hM->SetBinContent(50,13);
   hM->SetBinContent(51,17);
   hM->SetBinContent(52,10);
   hM->SetBinContent(53,21);
   hM->SetBinContent(54,12);
   hM->SetBinContent(55,8);
   hM->SetBinContent(56,9);
   hM->SetBinContent(57,5);
   hM->SetBinContent(58,3);
   hM->SetBinContent(59,3);
   hM->SetBinContent(60,4);
   hM->SetBinContent(61,6);
   hM->SetBinContent(62,3);
   hM->SetBinContent(63,5);
   hM->SetBinContent(64,6);
   hM->SetBinContent(65,2);
   hM->SetBinContent(67,4);
   hM->SetBinContent(68,4);
   hM->SetBinContent(69,1);
   hM->SetBinContent(70,3);
   hM->SetBinContent(71,5);
   hM->SetBinContent(72,3);
   hM->SetBinContent(73,1);
   hM->SetBinContent(74,4);
   hM->SetEntries(754);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 754    ");
   text = ptstats->AddText("Mean  = 0.1382");
   text = ptstats->AddText("RMS   = 0.01797");
   text = ptstats->AddText("#chi^{2} / ndf = 61.98 / 60");
   text = ptstats->AddText("p0       = 0.06693 #pm 1.02440 ");
   text = ptstats->AddText("p1       = 7.329 #pm 7.369 ");
   text = ptstats->AddText("p2       = -2.389e-08 #pm 1.071e+02 ");
   text = ptstats->AddText("p3       = 23.55 #pm 1.17 ");
   text = ptstats->AddText("p4       = 0.1372 #pm 0.0007 ");
   text = ptstats->AddText("p5       = 0.01552 #pm 0.00014 ");
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
   fsig->SetChisquare(61.98446);
   fsig->SetNDF(60);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,0.06693051);
   fsig->SetParError(0,1.024403);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,7.329138);
   fsig->SetParError(1,7.369217);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-2.389243e-08);
   fsig->SetParError(2,107.0871);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,23.54876);
   fsig->SetParError(3,1.168121);
   fsig->SetParLimits(3,0,0);
   fsig->SetParameter(4,0.1372008);
   fsig->SetParError(4,0.0007223225);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01552272);
   fsig->SetParError(5,0.0001361405);
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
   fmb->SetParameter(0,0.06693051);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,7.329138);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-2.389243e-08);
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
   fpeak->SetParameter(0,23.54876);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1372008);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.01552272);
   fpeak->SetParError(2,0);
   fpeak->SetParLimits(2,0,0);
   fpeak->Draw("same");
   
   TPaveText *pt = new TPaveText(0.01,0.9404546,0.71,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   text = pt->AddText("Mass, bin (q2,nu,z) = (2,0,4), tot: 1.032063,partial: 0.915863");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
