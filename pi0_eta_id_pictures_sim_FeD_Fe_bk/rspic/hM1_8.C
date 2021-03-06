{
//=========Macro generated from canvas: c/The canvas
//=========  (Thu Jul 21 19:32:05 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.06625,-7.209327,0.20375,64.88394);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM = new TH1F("hM","Mass, bin (q2,nu,z) = (1,0,3), tot: 1.601597,partial: 1.462423",75,0.08,0.19);
   hM->SetBinContent(0,4);
   hM->SetBinContent(2,1);
   hM->SetBinContent(3,1);
   hM->SetBinContent(5,3);
   hM->SetBinContent(6,1);
   hM->SetBinContent(7,2);
   hM->SetBinContent(8,1);
   hM->SetBinContent(9,2);
   hM->SetBinContent(11,3);
   hM->SetBinContent(12,4);
   hM->SetBinContent(13,1);
   hM->SetBinContent(14,4);
   hM->SetBinContent(15,4);
   hM->SetBinContent(16,8);
   hM->SetBinContent(17,8);
   hM->SetBinContent(18,5);
   hM->SetBinContent(19,6);
   hM->SetBinContent(20,7);
   hM->SetBinContent(21,9);
   hM->SetBinContent(22,10);
   hM->SetBinContent(23,11);
   hM->SetBinContent(24,10);
   hM->SetBinContent(25,18);
   hM->SetBinContent(26,20);
   hM->SetBinContent(27,20);
   hM->SetBinContent(28,30);
   hM->SetBinContent(29,30);
   hM->SetBinContent(30,37);
   hM->SetBinContent(31,39);
   hM->SetBinContent(32,47);
   hM->SetBinContent(33,35);
   hM->SetBinContent(34,38);
   hM->SetBinContent(35,38);
   hM->SetBinContent(36,44);
   hM->SetBinContent(37,38);
   hM->SetBinContent(38,47);
   hM->SetBinContent(39,47);
   hM->SetBinContent(40,46);
   hM->SetBinContent(41,24);
   hM->SetBinContent(42,48);
   hM->SetBinContent(43,39);
   hM->SetBinContent(44,32);
   hM->SetBinContent(45,30);
   hM->SetBinContent(46,32);
   hM->SetBinContent(47,29);
   hM->SetBinContent(48,26);
   hM->SetBinContent(49,17);
   hM->SetBinContent(50,18);
   hM->SetBinContent(51,17);
   hM->SetBinContent(52,18);
   hM->SetBinContent(53,20);
   hM->SetBinContent(54,14);
   hM->SetBinContent(55,13);
   hM->SetBinContent(56,12);
   hM->SetBinContent(57,7);
   hM->SetBinContent(58,9);
   hM->SetBinContent(59,6);
   hM->SetBinContent(60,7);
   hM->SetBinContent(61,3);
   hM->SetBinContent(62,4);
   hM->SetBinContent(63,4);
   hM->SetBinContent(64,5);
   hM->SetBinContent(65,11);
   hM->SetBinContent(66,3);
   hM->SetBinContent(67,6);
   hM->SetBinContent(68,5);
   hM->SetBinContent(69,1);
   hM->SetBinContent(70,7);
   hM->SetBinContent(71,1);
   hM->SetBinContent(72,7);
   hM->SetBinContent(73,3);
   hM->SetBinContent(74,3);
   hM->SetBinContent(75,4);
   hM->SetBinContent(76,4);
   hM->SetEntries(1168);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 1168   ");
   text = ptstats->AddText("Mean  = 0.1369");
   text = ptstats->AddText("RMS   = 0.01802");
   text = ptstats->AddText("#chi^{2} / ndf = 71.07 / 66");
   text = ptstats->AddText("p0       = -0.6589 #pm 0.9147 ");
   text = ptstats->AddText("p1       = 14.25 #pm 6.82 ");
   text = ptstats->AddText("p2       = -1.026e-05 #pm 1.228e+02 ");
   text = ptstats->AddText("p3       =  37.6 #pm 1.4 ");
   text = ptstats->AddText("p4       = 0.1353 #pm 0.0006 ");
   text = ptstats->AddText("p5       = 0.01552 #pm 0.00011 ");
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
   fsig->SetChisquare(71.07418);
   fsig->SetNDF(66);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-0.6589058);
   fsig->SetParError(0,0.9146874);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,14.25275);
   fsig->SetParError(1,6.820863);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.025713e-05);
   fsig->SetParError(2,122.7548);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,37.59998);
   fsig->SetParError(3,1.375173);
   fsig->SetParLimits(3,0,0);
   fsig->SetParameter(4,0.1353395);
   fsig->SetParError(4,0.0005545776);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01552272);
   fsig->SetParError(5,0.0001081526);
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
   fmb->SetParameter(0,-0.6589058);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,14.25275);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.025713e-05);
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
   fpeak->SetParameter(0,37.59998);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1353395);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.01552272);
   fpeak->SetParError(2,0);
   fpeak->SetParLimits(2,0,0);
   fpeak->Draw("same");
   
   TPaveText *pt = new TPaveText(0.01,0.9404546,0.71,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   text = pt->AddText("Mass, bin (q2,nu,z) = (1,0,3), tot: 1.601597,partial: 1.462423");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
