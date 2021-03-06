{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Dec 20 13:45:39 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.425,-0.4481156,0.675,4.03304);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM = new TH1F("hM","Mass bin (pt2,nu,z) = (5,0,0)",75,0.45,0.65);
   hM->SetBinContent(0,369);
   hM->SetBinContent(4,1);
   hM->SetBinContent(6,1);
   hM->SetBinContent(7,1);
   hM->SetBinContent(10,2);
   hM->SetBinContent(13,1);
   hM->SetBinContent(18,1);
   hM->SetBinContent(19,1);
   hM->SetBinContent(26,1);
   hM->SetBinContent(34,1);
   hM->SetBinContent(36,2);
   hM->SetBinContent(47,1);
   hM->SetBinContent(50,1);
   hM->SetBinContent(76,1);
   hM->SetEntries(384);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 384    ");
   text = ptstats->AddText("Mean  = 0.5088");
   text = ptstats->AddText("RMS   = 0.03992");
   text = ptstats->AddText("#chi^{2} / ndf = 0.8555 / 6");
   text = ptstats->AddText("p0       = 0.3831 #pm 62.1743 ");
   text = ptstats->AddText("p1       = 19.92 #pm 179.72 ");
   text = ptstats->AddText("p2       = -42.29 #pm 141.18 ");
   text = ptstats->AddText("p3       =  3.43 #pm 17.48 ");
   text = ptstats->AddText("p4       = 0.5999 #pm 0.0661 ");
   text = ptstats->AddText("p5       = 0.07158 #pm 0.01657 ");
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
   fsig->SetChisquare(0.8554584);
   fsig->SetNDF(6);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,0.3831111);
   fsig->SetParError(0,62.17432);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,19.91841);
   fsig->SetParError(1,179.7172);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-42.29202);
   fsig->SetParError(2,141.1798);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,3.429862);
   fsig->SetParError(3,17.47891);
   fsig->SetParLimits(3,0,0);
   fsig->SetParameter(4,0.5999395);
   fsig->SetParError(4,0.0660854);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.07157683);
   fsig->SetParError(5,0.01656691);
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
   fmb->SetParameter(0,0.3831111);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,19.91841);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-42.29202);
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
   fpeak->SetParameter(0,3.429862);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.5999395);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.07157683);
   fpeak->SetParError(2,0);
   fpeak->SetParLimits(2,0,0);
   fpeak->Draw("same");
   
   TPaveText *pt = new TPaveText(0.01,0.9404546,0.4709548,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   text = pt->AddText("Mass bin (pt2,nu,z) = (5,0,0)");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
