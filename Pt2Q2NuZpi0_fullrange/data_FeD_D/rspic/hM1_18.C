{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:45:28 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-567.0303,0.350906,5103.272);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin18 = new TH1F("hM_bin18","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin18->SetBinContent(13,7);
   hM_bin18->SetBinContent(14,42);
   hM_bin18->SetBinContent(15,117);
   hM_bin18->SetBinContent(16,187);
   hM_bin18->SetBinContent(17,230);
   hM_bin18->SetBinContent(18,323);
   hM_bin18->SetBinContent(19,362);
   hM_bin18->SetBinContent(20,446);
   hM_bin18->SetBinContent(21,501);
   hM_bin18->SetBinContent(22,523);
   hM_bin18->SetBinContent(23,576);
   hM_bin18->SetBinContent(24,618);
   hM_bin18->SetBinContent(25,599);
   hM_bin18->SetBinContent(26,578);
   hM_bin18->SetBinContent(27,656);
   hM_bin18->SetBinContent(28,696);
   hM_bin18->SetBinContent(29,681);
   hM_bin18->SetBinContent(30,651);
   hM_bin18->SetBinContent(31,731);
   hM_bin18->SetBinContent(32,818);
   hM_bin18->SetBinContent(33,820);
   hM_bin18->SetBinContent(34,906);
   hM_bin18->SetBinContent(35,937);
   hM_bin18->SetBinContent(36,1066);
   hM_bin18->SetBinContent(37,1266);
   hM_bin18->SetBinContent(38,1393);
   hM_bin18->SetBinContent(39,1495);
   hM_bin18->SetBinContent(40,1817);
   hM_bin18->SetBinContent(41,2124);
   hM_bin18->SetBinContent(42,2539);
   hM_bin18->SetBinContent(43,2843);
   hM_bin18->SetBinContent(44,3235);
   hM_bin18->SetBinContent(45,3625);
   hM_bin18->SetBinContent(46,3905);
   hM_bin18->SetBinContent(47,4063);
   hM_bin18->SetBinContent(48,4255);
   hM_bin18->SetBinContent(49,4213);
   hM_bin18->SetBinContent(50,4030);
   hM_bin18->SetBinContent(51,3683);
   hM_bin18->SetBinContent(52,3325);
   hM_bin18->SetBinContent(53,3231);
   hM_bin18->SetBinContent(54,2554);
   hM_bin18->SetBinContent(55,2427);
   hM_bin18->SetBinContent(56,2139);
   hM_bin18->SetBinContent(57,1882);
   hM_bin18->SetBinContent(58,1631);
   hM_bin18->SetBinContent(59,1576);
   hM_bin18->SetBinContent(60,1342);
   hM_bin18->SetBinContent(61,1299);
   hM_bin18->SetBinContent(62,1062);
   hM_bin18->SetBinContent(63,1172);
   hM_bin18->SetBinContent(64,1024);
   hM_bin18->SetBinContent(65,1044);
   hM_bin18->SetBinContent(66,1083);
   hM_bin18->SetBinContent(67,1036);
   hM_bin18->SetBinContent(68,1018);
   hM_bin18->SetBinContent(69,1044);
   hM_bin18->SetBinContent(70,1073);
   hM_bin18->SetBinContent(71,930);
   hM_bin18->SetBinContent(72,971);
   hM_bin18->SetBinContent(73,972);
   hM_bin18->SetBinContent(74,952);
   hM_bin18->SetBinContent(75,917);
   hM_bin18->SetBinContent(76,942);
   hM_bin18->SetBinContent(77,904);
   hM_bin18->SetBinContent(78,839);
   hM_bin18->SetBinContent(79,882);
   hM_bin18->SetBinContent(80,872);
   hM_bin18->SetBinContent(81,893);
   hM_bin18->SetBinContent(82,780);
   hM_bin18->SetBinContent(83,819);
   hM_bin18->SetBinContent(84,823);
   hM_bin18->SetBinContent(85,877);
   hM_bin18->SetBinContent(86,799);
   hM_bin18->SetBinContent(87,907);
   hM_bin18->SetBinContent(88,789);
   hM_bin18->SetBinContent(89,749);
   hM_bin18->SetBinContent(90,876);
   hM_bin18->SetBinContent(91,759);
   hM_bin18->SetBinContent(92,840);
   hM_bin18->SetBinContent(93,710);
   hM_bin18->SetBinContent(94,833);
   hM_bin18->SetBinContent(95,799);
   hM_bin18->SetBinContent(96,729);
   hM_bin18->SetBinContent(97,738);
   hM_bin18->SetBinContent(98,736);
   hM_bin18->SetBinContent(99,768);
   hM_bin18->SetBinContent(100,729);
   hM_bin18->SetBinContent(101,45220);
   hM_bin18->SetEntries(158873);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.06952205,0.1854555);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(104.4483);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,558.7082);
   fsig->SetParError(0,27.9348);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,2436.258);
   fsig->SetParError(1,209.6304);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.001516084);
   fsig->SetParError(2,6407.267);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,3212.498);
   fsig->SetParError(3,24.01243);
   fsig->SetParLimits(3,0,8510);
   fsig->SetParameter(4,0.1275081);
   fsig->SetParError(4,0.0001567228);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,2.406318e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin18->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin18");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 158873 ");
   text = ptstats->AddText("Mean  = 0.1536");
   text = ptstats->AddText("RMS   = 0.06491");
   text = ptstats->AddText("#chi^{2} / ndf = 104.4 / 28");
   text = ptstats->AddText("p0       = 558.7 #pm 27.9 ");
   text = ptstats->AddText("p1       =  2436 #pm 209.6 ");
   text = ptstats->AddText("p2       = -0.001516 #pm 6407.267578 ");
   text = ptstats->AddText("p3       =  3212 #pm 24.0 ");
   text = ptstats->AddText("p4       = 0.1275 #pm 0.0002 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00002 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin18->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin18);

   ci = TColor::GetColor("#0000ff");
   hM_bin18->SetMarkerColor(ci);
   hM_bin18->SetMarkerStyle(24);
   hM_bin18->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin18->GetXaxis()->SetLabelFont(42);
   hM_bin18->GetXaxis()->SetLabelSize(0.035);
   hM_bin18->GetXaxis()->SetTitleSize(0.035);
   hM_bin18->GetXaxis()->SetTitleFont(42);
   hM_bin18->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin18->GetYaxis()->SetLabelFont(42);
   hM_bin18->GetYaxis()->SetLabelSize(0.035);
   hM_bin18->GetYaxis()->SetTitleSize(0.035);
   hM_bin18->GetYaxis()->SetTitleFont(42);
   hM_bin18->GetZaxis()->SetLabelFont(42);
   hM_bin18->GetZaxis()->SetLabelSize(0.035);
   hM_bin18->GetZaxis()->SetTitleSize(0.035);
   hM_bin18->GetZaxis()->SetTitleFont(42);
   hM_bin18->Draw("e");
   
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
   fmb->SetParameter(0,558.7082);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,2436.258);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.001516084);
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
   fpeak->SetParameter(0,3212.498);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1275081);
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
