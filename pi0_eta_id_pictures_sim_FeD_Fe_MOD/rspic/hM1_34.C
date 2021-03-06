{
//=========Macro generated from canvas: c/The canvas
//=========  (Wed Dec 14 17:13:26 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.06625,-5.085224,0.20375,45.76702);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin34 = new TH1F("hM_bin34","M_{#gamma #gamma}",75,0.08,0.19);
   hM_bin34->SetBinContent(0,3);
   hM_bin34->SetBinContent(1,1);
   hM_bin34->SetBinContent(4,1);
   hM_bin34->SetBinContent(7,1);
   hM_bin34->SetBinContent(8,1);
   hM_bin34->SetBinContent(9,1);
   hM_bin34->SetBinContent(11,1);
   hM_bin34->SetBinContent(12,1);
   hM_bin34->SetBinContent(14,3);
   hM_bin34->SetBinContent(16,3);
   hM_bin34->SetBinContent(17,3);
   hM_bin34->SetBinContent(18,2);
   hM_bin34->SetBinContent(19,2);
   hM_bin34->SetBinContent(20,5);
   hM_bin34->SetBinContent(21,4);
   hM_bin34->SetBinContent(22,11);
   hM_bin34->SetBinContent(23,3);
   hM_bin34->SetBinContent(24,8);
   hM_bin34->SetBinContent(25,7);
   hM_bin34->SetBinContent(26,14);
   hM_bin34->SetBinContent(27,15);
   hM_bin34->SetBinContent(28,8);
   hM_bin34->SetBinContent(29,16);
   hM_bin34->SetBinContent(30,11);
   hM_bin34->SetBinContent(31,18);
   hM_bin34->SetBinContent(32,26);
   hM_bin34->SetBinContent(33,24);
   hM_bin34->SetBinContent(34,28);
   hM_bin34->SetBinContent(35,33);
   hM_bin34->SetBinContent(36,20);
   hM_bin34->SetBinContent(37,19);
   hM_bin34->SetBinContent(38,27);
   hM_bin34->SetBinContent(39,24);
   hM_bin34->SetBinContent(40,33);
   hM_bin34->SetBinContent(41,21);
   hM_bin34->SetBinContent(42,20);
   hM_bin34->SetBinContent(43,19);
   hM_bin34->SetBinContent(44,22);
   hM_bin34->SetBinContent(45,21);
   hM_bin34->SetBinContent(46,17);
   hM_bin34->SetBinContent(47,15);
   hM_bin34->SetBinContent(48,10);
   hM_bin34->SetBinContent(49,15);
   hM_bin34->SetBinContent(50,17);
   hM_bin34->SetBinContent(51,12);
   hM_bin34->SetBinContent(52,8);
   hM_bin34->SetBinContent(53,7);
   hM_bin34->SetBinContent(54,5);
   hM_bin34->SetBinContent(55,6);
   hM_bin34->SetBinContent(56,5);
   hM_bin34->SetBinContent(57,8);
   hM_bin34->SetBinContent(58,4);
   hM_bin34->SetBinContent(59,6);
   hM_bin34->SetBinContent(60,2);
   hM_bin34->SetBinContent(61,2);
   hM_bin34->SetBinContent(62,2);
   hM_bin34->SetBinContent(63,1);
   hM_bin34->SetBinContent(64,4);
   hM_bin34->SetBinContent(65,1);
   hM_bin34->SetBinContent(66,5);
   hM_bin34->SetBinContent(67,4);
   hM_bin34->SetBinContent(68,3);
   hM_bin34->SetBinContent(69,2);
   hM_bin34->SetBinContent(70,2);
   hM_bin34->SetBinContent(71,3);
   hM_bin34->SetBinContent(73,1);
   hM_bin34->SetBinContent(74,2);
   hM_bin34->SetBinContent(75,2);
   hM_bin34->SetEntries(651);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08,0.19);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(62.00656);
   fsig->SetNDF(61);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-0.291559);
   fsig->SetParError(0,0.8514356);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,7.057694);
   fsig->SetParError(1,6.107099);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-3.425854e-06);
   fsig->SetParError(2,72.40737);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,20.50245);
   fsig->SetParError(3,1.065281);
   fsig->SetParLimits(3,0,0);
   fsig->SetParameter(4,0.1359992);
   fsig->SetParError(4,0.0007207253);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01552272);
   fsig->SetParError(5,0.0001051955);
   fsig->SetParLimits(5,0.01552272,0.02328408);
   hM_bin34->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin34");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 651    ");
   text = ptstats->AddText("Mean  = 0.1373");
   text = ptstats->AddText("RMS   = 0.01715");
   text = ptstats->AddText("#chi^{2} / ndf = 62.01 / 61");
   text = ptstats->AddText("p0       = -0.2916 #pm 0.8514 ");
   text = ptstats->AddText("p1       = 7.058 #pm 6.107 ");
   text = ptstats->AddText("p2       = -3.426e-06 #pm 7.241e+01 ");
   text = ptstats->AddText("p3       =  20.5 #pm 1.1 ");
   text = ptstats->AddText("p4       = 0.136 #pm 0.001 ");
   text = ptstats->AddText("p5       = 0.01552 #pm 0.00011 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin34->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin34);

   ci = TColor::GetColor("#0000ff");
   hM_bin34->SetMarkerColor(ci);
   hM_bin34->SetMarkerStyle(24);
   hM_bin34->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin34->GetXaxis()->SetLabelFont(42);
   hM_bin34->GetXaxis()->SetLabelSize(0.035);
   hM_bin34->GetXaxis()->SetTitleSize(0.035);
   hM_bin34->GetXaxis()->SetTitleFont(42);
   hM_bin34->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin34->GetYaxis()->SetLabelFont(42);
   hM_bin34->GetYaxis()->SetLabelSize(0.035);
   hM_bin34->GetYaxis()->SetTitleSize(0.035);
   hM_bin34->GetYaxis()->SetTitleFont(42);
   hM_bin34->GetZaxis()->SetLabelFont(42);
   hM_bin34->GetZaxis()->SetLabelSize(0.035);
   hM_bin34->GetZaxis()->SetTitleSize(0.035);
   hM_bin34->GetZaxis()->SetTitleFont(42);
   hM_bin34->Draw("e");
   
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
   fmb->SetParameter(0,-0.291559);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,7.057694);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-3.425854e-06);
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
   fpeak->SetParameter(0,20.50245);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1359992);
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
