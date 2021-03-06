{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Dec 20 14:31:09 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.06625,-1.249775,0.20375,5.915071);
   c->SetBorderSize(2);
   c->SetLogy();
   c->SetFrameFillColor(0);
   
   TH1F *hM = new TH1F("hM","Mass, bin (q2,nu,z) = (0,0,0)",75,0.08,0.19);
   hM->SetBinContent(0,2);
   hM->SetBinContent(15,1);
   hM->SetBinContent(29,1);
   hM->SetBinContent(30,2);
   hM->SetBinContent(31,7);
   hM->SetBinContent(32,11);
   hM->SetBinContent(33,37);
   hM->SetBinContent(34,79);
   hM->SetBinContent(35,263);
   hM->SetBinContent(36,1061);
   hM->SetBinContent(37,13109);
   hM->SetBinContent(38,83087);
   hM->SetBinContent(39,13043);
   hM->SetBinContent(40,1113);
   hM->SetBinContent(41,289);
   hM->SetBinContent(42,96);
   hM->SetBinContent(43,24);
   hM->SetBinContent(44,12);
   hM->SetBinContent(45,1);
   hM->SetBinContent(46,1);
   hM->SetBinContent(57,1);
   hM->SetBinContent(63,1);
   hM->SetBinContent(68,1);
   hM->SetBinContent(72,1);
   hM->SetBinContent(76,6009);
   hM->SetEntries(118252);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08,0.19);
   fsig->SetNpx(500);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(2736.493);
   fsig->SetNDF(17);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-27.65466);
   fsig->SetParError(0,10.64055);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,458.0062);
   fsig->SetParError(1,150.4804);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1673.352);
   fsig->SetParError(2,517.9914);
   fsig->SetParLimits(2,0,0);
   fsig->SetParameter(3,82771.06);
   fsig->SetParError(3,290.4821);
   fsig->SetParLimits(3,0,0);
   fsig->SetParameter(4,0.134999);
   fsig->SetParError(4,2.439437e-06);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.0007666229);
   fsig->SetParError(5,1.513705e-06);
   fsig->SetParLimits(5,0,0);
   hM->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 118252 ");
   text = ptstats->AddText("Mean  =  0.135");
   text = ptstats->AddText("RMS   = 0.000918");
   text = ptstats->AddText("#chi^{2} / ndf =  2736 / 17");
   text = ptstats->AddText("p0       = -27.65 #pm 10.64 ");
   text = ptstats->AddText("p1       =   458 #pm 150.5 ");
   text = ptstats->AddText("p2       = -1673 #pm 518.0 ");
   text = ptstats->AddText("p3       = 8.277e+04 #pm 2.905e+02 ");
   text = ptstats->AddText("p4       = 0.135 #pm 0.000 ");
   text = ptstats->AddText("p5       = 0.0007666 #pm 0.0000015 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM);

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
   fmb->SetParameter(0,-27.65466);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,458.0062);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1673.352);
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
   fpeak->SetParameter(0,82771.06);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.134999);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.0007666229);
   fpeak->SetParError(2,0);
   fpeak->SetParLimits(2,0,0);
   fpeak->Draw("same");
   
   TPaveText *pt = new TPaveText(0.01,0.9404546,0.4696985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   text = pt->AddText("Mass, bin (q2,nu,z) = (0,0,0)");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
