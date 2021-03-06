{
//=========Macro generated from canvas: c/The canvas
//=========  (Wed Dec 14 17:13:28 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.06625,-1.575,0.20375,14.175);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin41 = new TH1F("hM_bin41","M_{#gamma #gamma}",75,0.08,0.19);
   hM_bin41->SetBinContent(2,1);
   hM_bin41->SetBinContent(9,1);
   hM_bin41->SetBinContent(12,1);
   hM_bin41->SetBinContent(17,2);
   hM_bin41->SetBinContent(18,1);
   hM_bin41->SetBinContent(21,2);
   hM_bin41->SetBinContent(24,2);
   hM_bin41->SetBinContent(25,1);
   hM_bin41->SetBinContent(26,4);
   hM_bin41->SetBinContent(27,1);
   hM_bin41->SetBinContent(28,3);
   hM_bin41->SetBinContent(29,2);
   hM_bin41->SetBinContent(30,5);
   hM_bin41->SetBinContent(31,5);
   hM_bin41->SetBinContent(32,5);
   hM_bin41->SetBinContent(33,1);
   hM_bin41->SetBinContent(34,3);
   hM_bin41->SetBinContent(35,6);
   hM_bin41->SetBinContent(36,4);
   hM_bin41->SetBinContent(37,9);
   hM_bin41->SetBinContent(38,7);
   hM_bin41->SetBinContent(39,7);
   hM_bin41->SetBinContent(40,6);
   hM_bin41->SetBinContent(41,6);
   hM_bin41->SetBinContent(42,8);
   hM_bin41->SetBinContent(43,9);
   hM_bin41->SetBinContent(44,2);
   hM_bin41->SetBinContent(45,6);
   hM_bin41->SetBinContent(46,7);
   hM_bin41->SetBinContent(47,7);
   hM_bin41->SetBinContent(48,5);
   hM_bin41->SetBinContent(49,4);
   hM_bin41->SetBinContent(50,4);
   hM_bin41->SetBinContent(51,5);
   hM_bin41->SetBinContent(52,2);
   hM_bin41->SetBinContent(53,3);
   hM_bin41->SetBinContent(54,1);
   hM_bin41->SetBinContent(55,1);
   hM_bin41->SetBinContent(56,2);
   hM_bin41->SetBinContent(57,1);
   hM_bin41->SetBinContent(58,3);
   hM_bin41->SetBinContent(59,1);
   hM_bin41->SetBinContent(61,1);
   hM_bin41->SetBinContent(62,1);
   hM_bin41->SetBinContent(67,2);
   hM_bin41->SetBinContent(68,1);
   hM_bin41->SetBinContent(73,1);
   hM_bin41->SetBinContent(74,2);
   hM_bin41->SetBinContent(76,2);
   hM_bin41->SetEntries(166);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08,0.19);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(37.89304);
   fsig->SetNDF(42);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,0.8544007);
   fsig->SetParError(0,1.135938);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,-1.478183);
   fsig->SetParError(1,7.996992);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.0003102364);
   fsig->SetParError(2,131.5325);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,3.808762);
   fsig->SetParError(3,0.6783157);
   fsig->SetParLimits(3,0,0);
   fsig->SetParameter(4,0.1392917);
   fsig->SetParError(4,0.002208962);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01552272);
   fsig->SetParError(5,0.0006538393);
   fsig->SetParLimits(5,0.01552272,0.02328408);
   hM_bin41->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin41");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 166    ");
   text = ptstats->AddText("Mean  = 0.1393");
   text = ptstats->AddText("RMS   = 0.01691");
   text = ptstats->AddText("#chi^{2} / ndf = 37.89 / 42");
   text = ptstats->AddText("p0       = 0.8544 #pm 1.1359 ");
   text = ptstats->AddText("p1       = -1.478 #pm 7.997 ");
   text = ptstats->AddText("p2       = -0.0003102 #pm 131.5325165 ");
   text = ptstats->AddText("p3       = 3.809 #pm 0.678 ");
   text = ptstats->AddText("p4       = 0.1393 #pm 0.0022 ");
   text = ptstats->AddText("p5       = 0.01552 #pm 0.00065 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin41->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin41);

   ci = TColor::GetColor("#0000ff");
   hM_bin41->SetMarkerColor(ci);
   hM_bin41->SetMarkerStyle(24);
   hM_bin41->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin41->GetXaxis()->SetLabelFont(42);
   hM_bin41->GetXaxis()->SetLabelSize(0.035);
   hM_bin41->GetXaxis()->SetTitleSize(0.035);
   hM_bin41->GetXaxis()->SetTitleFont(42);
   hM_bin41->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin41->GetYaxis()->SetLabelFont(42);
   hM_bin41->GetYaxis()->SetLabelSize(0.035);
   hM_bin41->GetYaxis()->SetTitleSize(0.035);
   hM_bin41->GetYaxis()->SetTitleFont(42);
   hM_bin41->GetZaxis()->SetLabelFont(42);
   hM_bin41->GetZaxis()->SetLabelSize(0.035);
   hM_bin41->GetZaxis()->SetTitleSize(0.035);
   hM_bin41->GetZaxis()->SetTitleFont(42);
   hM_bin41->Draw("e");
   
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
   fmb->SetParameter(0,0.8544007);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,-1.478183);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.0003102364);
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
   fpeak->SetParameter(0,3.808762);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1392917);
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
