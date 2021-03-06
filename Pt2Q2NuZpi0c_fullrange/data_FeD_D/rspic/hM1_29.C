{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue May  9 16:35:07 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-119.2601,0.350906,1073.34);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin29 = new TH1F("hM_bin29","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin29->SetBinContent(15,4);
   hM_bin29->SetBinContent(16,18);
   hM_bin29->SetBinContent(17,27);
   hM_bin29->SetBinContent(18,65);
   hM_bin29->SetBinContent(19,68);
   hM_bin29->SetBinContent(20,98);
   hM_bin29->SetBinContent(21,116);
   hM_bin29->SetBinContent(22,92);
   hM_bin29->SetBinContent(23,113);
   hM_bin29->SetBinContent(24,78);
   hM_bin29->SetBinContent(25,137);
   hM_bin29->SetBinContent(26,154);
   hM_bin29->SetBinContent(27,139);
   hM_bin29->SetBinContent(28,132);
   hM_bin29->SetBinContent(29,165);
   hM_bin29->SetBinContent(30,183);
   hM_bin29->SetBinContent(31,151);
   hM_bin29->SetBinContent(32,151);
   hM_bin29->SetBinContent(33,156);
   hM_bin29->SetBinContent(34,126);
   hM_bin29->SetBinContent(35,150);
   hM_bin29->SetBinContent(36,172);
   hM_bin29->SetBinContent(37,180);
   hM_bin29->SetBinContent(38,192);
   hM_bin29->SetBinContent(39,234);
   hM_bin29->SetBinContent(40,256);
   hM_bin29->SetBinContent(41,285);
   hM_bin29->SetBinContent(42,374);
   hM_bin29->SetBinContent(43,509);
   hM_bin29->SetBinContent(44,576);
   hM_bin29->SetBinContent(45,644);
   hM_bin29->SetBinContent(46,663);
   hM_bin29->SetBinContent(47,808);
   hM_bin29->SetBinContent(48,860);
   hM_bin29->SetBinContent(49,829);
   hM_bin29->SetBinContent(50,879);
   hM_bin29->SetBinContent(51,808);
   hM_bin29->SetBinContent(52,767);
   hM_bin29->SetBinContent(53,703);
   hM_bin29->SetBinContent(54,626);
   hM_bin29->SetBinContent(55,546);
   hM_bin29->SetBinContent(56,546);
   hM_bin29->SetBinContent(57,427);
   hM_bin29->SetBinContent(58,389);
   hM_bin29->SetBinContent(59,298);
   hM_bin29->SetBinContent(60,295);
   hM_bin29->SetBinContent(61,310);
   hM_bin29->SetBinContent(62,276);
   hM_bin29->SetBinContent(63,238);
   hM_bin29->SetBinContent(64,206);
   hM_bin29->SetBinContent(65,238);
   hM_bin29->SetBinContent(66,212);
   hM_bin29->SetBinContent(67,203);
   hM_bin29->SetBinContent(68,195);
   hM_bin29->SetBinContent(69,204);
   hM_bin29->SetBinContent(70,201);
   hM_bin29->SetBinContent(71,175);
   hM_bin29->SetBinContent(72,194);
   hM_bin29->SetBinContent(73,191);
   hM_bin29->SetBinContent(74,181);
   hM_bin29->SetBinContent(75,178);
   hM_bin29->SetBinContent(76,140);
   hM_bin29->SetBinContent(77,175);
   hM_bin29->SetBinContent(78,175);
   hM_bin29->SetBinContent(79,160);
   hM_bin29->SetBinContent(80,195);
   hM_bin29->SetBinContent(81,163);
   hM_bin29->SetBinContent(82,167);
   hM_bin29->SetBinContent(83,170);
   hM_bin29->SetBinContent(84,177);
   hM_bin29->SetBinContent(85,153);
   hM_bin29->SetBinContent(86,140);
   hM_bin29->SetBinContent(87,145);
   hM_bin29->SetBinContent(88,146);
   hM_bin29->SetBinContent(89,150);
   hM_bin29->SetBinContent(90,127);
   hM_bin29->SetBinContent(91,139);
   hM_bin29->SetBinContent(92,124);
   hM_bin29->SetBinContent(93,117);
   hM_bin29->SetBinContent(94,146);
   hM_bin29->SetBinContent(95,121);
   hM_bin29->SetBinContent(96,148);
   hM_bin29->SetBinContent(97,141);
   hM_bin29->SetBinContent(98,106);
   hM_bin29->SetBinContent(99,115);
   hM_bin29->SetBinContent(100,136);
   hM_bin29->SetBinContent(101,6509);
   hM_bin29->SetEntries(28576);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07464927,0.1905827);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(73.41325);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,55.22288);
   fsig->SetParError(0,11.8954);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,784.6579);
   fsig->SetParError(1,90.71242);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-4.937283e-08);
   fsig->SetParError(2,774.3986);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,664.4818);
   fsig->SetParError(3,10.70879);
   fsig->SetParLimits(3,0,1758);
   fsig->SetParameter(4,0.1320093);
   fsig->SetParError(4,0.0003265098);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,4.346515e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin29->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin29");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 28576  ");
   text = ptstats->AddText("Mean  = 0.1537");
   text = ptstats->AddText("RMS   = 0.06246");
   text = ptstats->AddText("#chi^{2} / ndf = 73.41 / 28");
   text = ptstats->AddText("p0       = 55.22 #pm 11.90 ");
   text = ptstats->AddText("p1       = 784.7 #pm 90.7 ");
   text = ptstats->AddText("p2       = -4.937e-08 #pm 7.744e+02 ");
   text = ptstats->AddText("p3       = 664.5 #pm 10.7 ");
   text = ptstats->AddText("p4       = 0.132 #pm 0.000 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00004 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin29->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin29);

   ci = TColor::GetColor("#0000ff");
   hM_bin29->SetMarkerColor(ci);
   hM_bin29->SetMarkerStyle(24);
   hM_bin29->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin29->GetXaxis()->SetLabelFont(42);
   hM_bin29->GetXaxis()->SetLabelSize(0.035);
   hM_bin29->GetXaxis()->SetTitleSize(0.035);
   hM_bin29->GetXaxis()->SetTitleFont(42);
   hM_bin29->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin29->GetYaxis()->SetLabelFont(42);
   hM_bin29->GetYaxis()->SetLabelSize(0.035);
   hM_bin29->GetYaxis()->SetTitleSize(0.035);
   hM_bin29->GetYaxis()->SetTitleFont(42);
   hM_bin29->GetZaxis()->SetLabelFont(42);
   hM_bin29->GetZaxis()->SetLabelSize(0.035);
   hM_bin29->GetZaxis()->SetTitleSize(0.035);
   hM_bin29->GetZaxis()->SetTitleFont(42);
   hM_bin29->Draw("e");
   
   TF1 *fmb = new TF1("fmb","pol2",0.0628746,0.2077914);
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
   fmb->SetParameter(0,55.22288);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,784.6579);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-4.937283e-08);
   fmb->SetParError(2,0);
   fmb->SetParLimits(2,0,0);
   fmb->Draw("same");
   
   TF1 *fpeak = new TF1("fpeak","gaus",0.0628746,0.2077914);
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
   fpeak->SetParameter(0,664.4818);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1320093);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.01932224);
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
