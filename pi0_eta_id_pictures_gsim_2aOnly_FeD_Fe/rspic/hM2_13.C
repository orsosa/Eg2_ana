{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Dec 20 14:32:12 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.06625,-1.417726,0.20375,5.263871);
   c->SetBorderSize(2);
   c->SetLogy();
   c->SetFrameFillColor(0);
   
   TH1F *hM = new TH1F("hM","Mass bin (pt2,nu,z) = (2,0,3)",75,0.08,0.19);
   hM->SetBinContent(0,1);
   hM->SetBinContent(29,3);
   hM->SetBinContent(30,1);
   hM->SetBinContent(31,4);
   hM->SetBinContent(32,8);
   hM->SetBinContent(33,13);
   hM->SetBinContent(34,29);
   hM->SetBinContent(35,82);
   hM->SetBinContent(36,304);
   hM->SetBinContent(37,3235);
   hM->SetBinContent(38,20661);
   hM->SetBinContent(39,3339);
   hM->SetBinContent(40,289);
   hM->SetBinContent(41,95);
   hM->SetBinContent(42,27);
   hM->SetBinContent(43,18);
   hM->SetBinContent(44,4);
   hM->SetBinContent(45,3);
   hM->SetBinContent(46,3);
   hM->SetBinContent(47,3);
   hM->SetBinContent(48,1);
   hM->SetBinContent(50,1);
   hM->SetBinContent(70,1);
   hM->SetBinContent(76,2351);
   hM->SetEntries(30476);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 30476  ");
   text = ptstats->AddText("Mean  =  0.135");
   text = ptstats->AddText("RMS   = 0.001021");
   text = ptstats->AddText("#chi^{2} / ndf = 767.9 / 16");
   text = ptstats->AddText("p0       = -6.507 #pm 22.289 ");
   text = ptstats->AddText("p1       = 190.3 #pm 297.3 ");
   text = ptstats->AddText("p2       = -838.7 #pm 979.7 ");
   text = ptstats->AddText("p3       = 2.058e+04 #pm 1.449e+02 ");
   text = ptstats->AddText("p4       = 0.135 #pm 0.000 ");
   text = ptstats->AddText("p5       = -0.0007688 #pm 0.0000031 ");
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
   fsig->SetChisquare(767.8641);
   fsig->SetNDF(16);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-6.507273);
   fsig->SetParError(0,22.28874);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,190.3057);
   fsig->SetParError(1,297.343);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-838.6671);
   fsig->SetParError(2,979.6873);
   fsig->SetParLimits(2,0,0);
   fsig->SetParameter(3,20577.41);
   fsig->SetParError(3,144.8851);
   fsig->SetParLimits(3,0,0);
   fsig->SetParameter(4,0.1350064);
   fsig->SetParError(4,4.896254e-06);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,-0.0007688263);
   fsig->SetParError(5,3.053561e-06);
   fsig->SetParLimits(5,0,0);
   hM->GetListOfFunctions()->Add(fsig);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08,0.19);
   fsig->SetNpx(500);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(767.8641);
   fsig->SetNDF(16);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-6.507269);
   fsig->SetParError(0,22.28842);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,190.3057);
   fsig->SetParError(1,297.3387);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-838.667);
   fsig->SetParError(2,979.6733);
   fsig->SetParLimits(2,0,0);
   fsig->SetParameter(3,20577.41);
   fsig->SetParError(3,144.8851);
   fsig->SetParLimits(3,0,0);
   fsig->SetParameter(4,0.1350064);
   fsig->SetParError(4,4.896254e-06);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,-0.0007688263);
   fsig->SetParError(5,3.053561e-06);
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
   fmb->SetParameter(0,-6.507269);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,190.3057);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-838.667);
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
   fpeak->SetParameter(0,20577.41);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1350064);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,-0.0007688263);
   fpeak->SetParError(2,0);
   fpeak->SetParLimits(2,0,0);
   fpeak->Draw("same");
   
   TPaveText *pt = new TPaveText(0.01,0.9404546,0.4709548,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   text = pt->AddText("Mass bin (pt2,nu,z) = (2,0,3)");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
