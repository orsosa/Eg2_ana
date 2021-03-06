{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Dec 20 14:32:07 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.06625,-1.491778,0.20375,6.154658);
   c->SetBorderSize(2);
   c->SetLogy();
   c->SetFrameFillColor(0);
   
   TH1F *hM = new TH1F("hM","Mass bin (pt2,nu,z) = (1,0,0)",75,0.08,0.19);
   hM->SetBinContent(0,2);
   hM->SetBinContent(2,1);
   hM->SetBinContent(28,1);
   hM->SetBinContent(29,2);
   hM->SetBinContent(30,6);
   hM->SetBinContent(31,1);
   hM->SetBinContent(32,14);
   hM->SetBinContent(33,34);
   hM->SetBinContent(34,112);
   hM->SetBinContent(35,381);
   hM->SetBinContent(36,1750);
   hM->SetBinContent(37,20468);
   hM->SetBinContent(38,129199);
   hM->SetBinContent(39,20861);
   hM->SetBinContent(40,1796);
   hM->SetBinContent(41,422);
   hM->SetBinContent(42,125);
   hM->SetBinContent(43,27);
   hM->SetBinContent(44,8);
   hM->SetBinContent(45,1);
   hM->SetBinContent(48,1);
   hM->SetBinContent(57,1);
   hM->SetBinContent(62,1);
   hM->SetBinContent(66,1);
   hM->SetBinContent(69,1);
   hM->SetBinContent(71,1);
   hM->SetBinContent(72,1);
   hM->SetBinContent(76,7232);
   hM->SetEntries(182450);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 182450 ");
   text = ptstats->AddText("Mean  =  0.135");
   text = ptstats->AddText("RMS   = 0.0009097");
   text = ptstats->AddText("#chi^{2} / ndf =  4288 / 20");
   text = ptstats->AddText("p0       = -13.1 #pm 5.6 ");
   text = ptstats->AddText("p1       = 249.7 #pm 83.5 ");
   text = ptstats->AddText("p2       = -956.5 #pm 298.0 ");
   text = ptstats->AddText("p3       = 1.287e+05 #pm 3.628e+02 ");
   text = ptstats->AddText("p4       = 0.135 #pm 0.000 ");
   text = ptstats->AddText("p5       = 0.0007703 #pm 0.0000012 ");
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
   fsig->SetChisquare(4288.059);
   fsig->SetNDF(20);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-13.09628);
   fsig->SetParError(0,5.648458);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,249.6856);
   fsig->SetParError(1,83.52174);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-956.4505);
   fsig->SetParError(2,297.9851);
   fsig->SetParLimits(2,0,0);
   fsig->SetParameter(3,128676.5);
   fsig->SetParError(3,362.8217);
   fsig->SetParLimits(3,0,0);
   fsig->SetParameter(4,0.1350038);
   fsig->SetParError(4,1.957691e-06);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.0007702817);
   fsig->SetParError(5,1.228029e-06);
   fsig->SetParLimits(5,0,0);
   hM->GetListOfFunctions()->Add(fsig);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08,0.19);
   fsig->SetNpx(500);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(4288.059);
   fsig->SetNDF(20);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-13.09629);
   fsig->SetParError(0,5.65318);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,249.6856);
   fsig->SetParError(1,83.58008);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-956.4509);
   fsig->SetParError(2,298.1584);
   fsig->SetParLimits(2,0,0);
   fsig->SetParameter(3,128676.5);
   fsig->SetParError(3,362.4418);
   fsig->SetParLimits(3,0,0);
   fsig->SetParameter(4,0.1350038);
   fsig->SetParError(4,1.957158e-06);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.0007702816);
   fsig->SetParError(5,1.22523e-06);
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
   fmb->SetParameter(0,-13.09629);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,249.6856);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-956.4509);
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
   fpeak->SetParameter(0,128676.5);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1350038);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.0007702816);
   fpeak->SetParError(2,0);
   fpeak->SetParLimits(2,0,0);
   fpeak->Draw("same");
   
   TPaveText *pt = new TPaveText(0.01,0.9404546,0.4709548,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   text = pt->AddText("Mass bin (pt2,nu,z) = (1,0,0)");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
