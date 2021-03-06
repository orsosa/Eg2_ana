{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 18 12:09:36 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.1901558,10.63265,0.8890623,398.6691);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin25 = new TH1F("hM_bin25","M_{#gamma #gamma}",100,0.2600464,0.8191716);
   hM_bin25->SetBinContent(0,10240);
   hM_bin25->SetBinContent(1,181);
   hM_bin25->SetBinContent(2,178);
   hM_bin25->SetBinContent(3,199);
   hM_bin25->SetBinContent(4,209);
   hM_bin25->SetBinContent(5,192);
   hM_bin25->SetBinContent(6,197);
   hM_bin25->SetBinContent(7,212);
   hM_bin25->SetBinContent(8,223);
   hM_bin25->SetBinContent(9,226);
   hM_bin25->SetBinContent(10,221);
   hM_bin25->SetBinContent(11,237);
   hM_bin25->SetBinContent(12,252);
   hM_bin25->SetBinContent(13,239);
   hM_bin25->SetBinContent(14,258);
   hM_bin25->SetBinContent(15,225);
   hM_bin25->SetBinContent(16,251);
   hM_bin25->SetBinContent(17,255);
   hM_bin25->SetBinContent(18,272);
   hM_bin25->SetBinContent(19,232);
   hM_bin25->SetBinContent(20,282);
   hM_bin25->SetBinContent(21,266);
   hM_bin25->SetBinContent(22,255);
   hM_bin25->SetBinContent(23,264);
   hM_bin25->SetBinContent(24,290);
   hM_bin25->SetBinContent(25,261);
   hM_bin25->SetBinContent(26,254);
   hM_bin25->SetBinContent(27,249);
   hM_bin25->SetBinContent(28,297);
   hM_bin25->SetBinContent(29,275);
   hM_bin25->SetBinContent(30,276);
   hM_bin25->SetBinContent(31,266);
   hM_bin25->SetBinContent(32,283);
   hM_bin25->SetBinContent(33,278);
   hM_bin25->SetBinContent(34,263);
   hM_bin25->SetBinContent(35,278);
   hM_bin25->SetBinContent(36,279);
   hM_bin25->SetBinContent(37,289);
   hM_bin25->SetBinContent(38,284);
   hM_bin25->SetBinContent(39,301);
   hM_bin25->SetBinContent(40,294);
   hM_bin25->SetBinContent(41,303);
   hM_bin25->SetBinContent(42,287);
   hM_bin25->SetBinContent(43,327);
   hM_bin25->SetBinContent(44,315);
   hM_bin25->SetBinContent(45,288);
   hM_bin25->SetBinContent(46,262);
   hM_bin25->SetBinContent(47,263);
   hM_bin25->SetBinContent(48,285);
   hM_bin25->SetBinContent(49,295);
   hM_bin25->SetBinContent(50,260);
   hM_bin25->SetBinContent(51,280);
   hM_bin25->SetBinContent(52,293);
   hM_bin25->SetBinContent(53,274);
   hM_bin25->SetBinContent(54,238);
   hM_bin25->SetBinContent(55,256);
   hM_bin25->SetBinContent(56,290);
   hM_bin25->SetBinContent(57,252);
   hM_bin25->SetBinContent(58,257);
   hM_bin25->SetBinContent(59,240);
   hM_bin25->SetBinContent(60,249);
   hM_bin25->SetBinContent(61,229);
   hM_bin25->SetBinContent(62,263);
   hM_bin25->SetBinContent(63,247);
   hM_bin25->SetBinContent(64,236);
   hM_bin25->SetBinContent(65,225);
   hM_bin25->SetBinContent(66,207);
   hM_bin25->SetBinContent(67,240);
   hM_bin25->SetBinContent(68,241);
   hM_bin25->SetBinContent(69,213);
   hM_bin25->SetBinContent(70,215);
   hM_bin25->SetBinContent(71,186);
   hM_bin25->SetBinContent(72,191);
   hM_bin25->SetBinContent(73,188);
   hM_bin25->SetBinContent(74,192);
   hM_bin25->SetBinContent(75,189);
   hM_bin25->SetBinContent(76,192);
   hM_bin25->SetBinContent(77,174);
   hM_bin25->SetBinContent(78,160);
   hM_bin25->SetBinContent(79,161);
   hM_bin25->SetBinContent(80,149);
   hM_bin25->SetBinContent(81,160);
   hM_bin25->SetBinContent(82,152);
   hM_bin25->SetBinContent(83,152);
   hM_bin25->SetBinContent(84,134);
   hM_bin25->SetBinContent(85,147);
   hM_bin25->SetBinContent(86,131);
   hM_bin25->SetBinContent(87,112);
   hM_bin25->SetBinContent(88,122);
   hM_bin25->SetBinContent(89,118);
   hM_bin25->SetBinContent(90,113);
   hM_bin25->SetBinContent(91,115);
   hM_bin25->SetBinContent(92,112);
   hM_bin25->SetBinContent(93,99);
   hM_bin25->SetBinContent(94,92);
   hM_bin25->SetBinContent(95,84);
   hM_bin25->SetBinContent(96,94);
   hM_bin25->SetBinContent(97,96);
   hM_bin25->SetBinContent(98,85);
   hM_bin25->SetBinContent(99,72);
   hM_bin25->SetBinContent(100,85);
   hM_bin25->SetBinContent(101,1744);
   hM_bin25->SetEntries(33914);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.3593469,0.646647);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(44.33163);
   fsig->SetNDF(45);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,23.71567);
   fsig->SetParError(0,195.5263);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,1069.587);
   fsig->SetParError(1,818.7761);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1184.421);
   fsig->SetParError(2,804.7086);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,29.57477);
   fsig->SetParError(3,14.60637);
   fsig->SetParLimits(3,0,654);
   fsig->SetParameter(4,0.4991881);
   fsig->SetParError(4,0.01190143);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.04788336);
   fsig->SetParError(5,0.02024448);
   fsig->SetParLimits(5,0.04788336,0.07182504);
   hM_bin25->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin25");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 33914  ");
   text = ptstats->AddText("Mean  = 0.5083");
   text = ptstats->AddText("RMS   =  0.142");
   text = ptstats->AddText("#chi^{2} / ndf = 44.33 / 45");
   text = ptstats->AddText("p0       = 23.72 #pm 195.53 ");
   text = ptstats->AddText("p1       =  1070 #pm 818.8 ");
   text = ptstats->AddText("p2       = -1184 #pm 804.7 ");
   text = ptstats->AddText("p3       = 29.57 #pm 14.61 ");
   text = ptstats->AddText("p4       = 0.4992 #pm 0.0119 ");
   text = ptstats->AddText("p5       = 0.04788 #pm 0.02024 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin25->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin25);

   ci = TColor::GetColor("#0000ff");
   hM_bin25->SetMarkerColor(ci);
   hM_bin25->SetMarkerStyle(24);
   hM_bin25->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin25->GetXaxis()->SetLabelFont(42);
   hM_bin25->GetXaxis()->SetLabelSize(0.035);
   hM_bin25->GetXaxis()->SetTitleSize(0.035);
   hM_bin25->GetXaxis()->SetTitleFont(42);
   hM_bin25->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin25->GetYaxis()->SetLabelFont(42);
   hM_bin25->GetYaxis()->SetLabelSize(0.035);
   hM_bin25->GetYaxis()->SetTitleSize(0.035);
   hM_bin25->GetYaxis()->SetTitleFont(42);
   hM_bin25->GetZaxis()->SetLabelFont(42);
   hM_bin25->GetZaxis()->SetLabelSize(0.035);
   hM_bin25->GetZaxis()->SetTitleSize(0.035);
   hM_bin25->GetZaxis()->SetTitleFont(42);
   hM_bin25->Draw("e");
   
   TF1 *fmb = new TF1("fmb","pol2",0.3600464,0.7191716);
   fmb->SetFillColor(19);
   fmb->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
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
   fmb->SetParameter(0,23.71567);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1069.587);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1184.421);
   fmb->SetParError(2,0);
   fmb->SetParLimits(2,0,0);
   fmb->Draw("same");
   
   TF1 *fpeak = new TF1("fpeak","gaus",0.3600464,0.7191716);
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
   fpeak->SetParameter(0,29.57477);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.4991881);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.04788336);
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
