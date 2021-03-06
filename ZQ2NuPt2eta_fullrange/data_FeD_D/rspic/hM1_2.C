{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 18 12:18:58 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.1901558,14.45135,0.8890623,666.5705);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin2 = new TH1F("hM_bin2","M_{#gamma #gamma}",100,0.2600464,0.8191716);
   hM_bin2->SetBinContent(0,17955);
   hM_bin2->SetBinContent(1,305);
   hM_bin2->SetBinContent(2,307);
   hM_bin2->SetBinContent(3,361);
   hM_bin2->SetBinContent(4,369);
   hM_bin2->SetBinContent(5,351);
   hM_bin2->SetBinContent(6,334);
   hM_bin2->SetBinContent(7,335);
   hM_bin2->SetBinContent(8,365);
   hM_bin2->SetBinContent(9,381);
   hM_bin2->SetBinContent(10,416);
   hM_bin2->SetBinContent(11,374);
   hM_bin2->SetBinContent(12,420);
   hM_bin2->SetBinContent(13,393);
   hM_bin2->SetBinContent(14,420);
   hM_bin2->SetBinContent(15,397);
   hM_bin2->SetBinContent(16,407);
   hM_bin2->SetBinContent(17,431);
   hM_bin2->SetBinContent(18,416);
   hM_bin2->SetBinContent(19,452);
   hM_bin2->SetBinContent(20,464);
   hM_bin2->SetBinContent(21,444);
   hM_bin2->SetBinContent(22,441);
   hM_bin2->SetBinContent(23,426);
   hM_bin2->SetBinContent(24,461);
   hM_bin2->SetBinContent(25,461);
   hM_bin2->SetBinContent(26,477);
   hM_bin2->SetBinContent(27,485);
   hM_bin2->SetBinContent(28,460);
   hM_bin2->SetBinContent(29,469);
   hM_bin2->SetBinContent(30,479);
   hM_bin2->SetBinContent(31,464);
   hM_bin2->SetBinContent(32,464);
   hM_bin2->SetBinContent(33,473);
   hM_bin2->SetBinContent(34,481);
   hM_bin2->SetBinContent(35,470);
   hM_bin2->SetBinContent(36,472);
   hM_bin2->SetBinContent(37,454);
   hM_bin2->SetBinContent(38,482);
   hM_bin2->SetBinContent(39,498);
   hM_bin2->SetBinContent(40,517);
   hM_bin2->SetBinContent(41,511);
   hM_bin2->SetBinContent(42,532);
   hM_bin2->SetBinContent(43,469);
   hM_bin2->SetBinContent(44,483);
   hM_bin2->SetBinContent(45,472);
   hM_bin2->SetBinContent(46,500);
   hM_bin2->SetBinContent(47,489);
   hM_bin2->SetBinContent(48,553);
   hM_bin2->SetBinContent(49,480);
   hM_bin2->SetBinContent(50,493);
   hM_bin2->SetBinContent(51,505);
   hM_bin2->SetBinContent(52,442);
   hM_bin2->SetBinContent(53,475);
   hM_bin2->SetBinContent(54,458);
   hM_bin2->SetBinContent(55,441);
   hM_bin2->SetBinContent(56,482);
   hM_bin2->SetBinContent(57,427);
   hM_bin2->SetBinContent(58,404);
   hM_bin2->SetBinContent(59,403);
   hM_bin2->SetBinContent(60,410);
   hM_bin2->SetBinContent(61,405);
   hM_bin2->SetBinContent(62,393);
   hM_bin2->SetBinContent(63,387);
   hM_bin2->SetBinContent(64,358);
   hM_bin2->SetBinContent(65,358);
   hM_bin2->SetBinContent(66,360);
   hM_bin2->SetBinContent(67,333);
   hM_bin2->SetBinContent(68,350);
   hM_bin2->SetBinContent(69,351);
   hM_bin2->SetBinContent(70,310);
   hM_bin2->SetBinContent(71,298);
   hM_bin2->SetBinContent(72,292);
   hM_bin2->SetBinContent(73,288);
   hM_bin2->SetBinContent(74,292);
   hM_bin2->SetBinContent(75,299);
   hM_bin2->SetBinContent(76,262);
   hM_bin2->SetBinContent(77,294);
   hM_bin2->SetBinContent(78,255);
   hM_bin2->SetBinContent(79,273);
   hM_bin2->SetBinContent(80,250);
   hM_bin2->SetBinContent(81,232);
   hM_bin2->SetBinContent(82,226);
   hM_bin2->SetBinContent(83,229);
   hM_bin2->SetBinContent(84,222);
   hM_bin2->SetBinContent(85,260);
   hM_bin2->SetBinContent(86,194);
   hM_bin2->SetBinContent(87,205);
   hM_bin2->SetBinContent(88,183);
   hM_bin2->SetBinContent(89,205);
   hM_bin2->SetBinContent(90,155);
   hM_bin2->SetBinContent(91,190);
   hM_bin2->SetBinContent(92,135);
   hM_bin2->SetBinContent(93,182);
   hM_bin2->SetBinContent(94,143);
   hM_bin2->SetBinContent(95,148);
   hM_bin2->SetBinContent(96,138);
   hM_bin2->SetBinContent(97,145);
   hM_bin2->SetBinContent(98,123);
   hM_bin2->SetBinContent(99,142);
   hM_bin2->SetBinContent(100,114);
   hM_bin2->SetBinContent(101,2526);
   hM_bin2->SetEntries(56965);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.3137058,0.744656);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(64.61079);
   fsig->SetNDF(71);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,88.96972);
   fsig->SetParError(0,86.34826);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,1617.806);
   fsig->SetParError(1,360.8546);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1975.876);
   fsig->SetParError(2,338.2351);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,98.20512);
   fsig->SetParError(3,14.13845);
   fsig->SetParLimits(3,0,1106);
   fsig->SetParameter(4,0.5121788);
   fsig->SetParError(4,0.006014759);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.07182504);
   fsig->SetParError(5,0.01736216);
   fsig->SetParLimits(5,0.04788336,0.07182504);
   hM_bin2->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin2");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 56965  ");
   text = ptstats->AddText("Mean  = 0.5042");
   text = ptstats->AddText("RMS   = 0.1407");
   text = ptstats->AddText("#chi^{2} / ndf = 64.61 / 71");
   text = ptstats->AddText("p0       = 88.97 #pm 86.35 ");
   text = ptstats->AddText("p1       =  1618 #pm 360.9 ");
   text = ptstats->AddText("p2       = -1976 #pm 338.2 ");
   text = ptstats->AddText("p3       = 98.21 #pm 14.14 ");
   text = ptstats->AddText("p4       = 0.5122 #pm 0.0060 ");
   text = ptstats->AddText("p5       = 0.07183 #pm 0.01736 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin2);

   ci = TColor::GetColor("#0000ff");
   hM_bin2->SetMarkerColor(ci);
   hM_bin2->SetMarkerStyle(24);
   hM_bin2->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin2->GetXaxis()->SetLabelFont(42);
   hM_bin2->GetXaxis()->SetLabelSize(0.035);
   hM_bin2->GetXaxis()->SetTitleSize(0.035);
   hM_bin2->GetXaxis()->SetTitleFont(42);
   hM_bin2->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin2->GetYaxis()->SetLabelFont(42);
   hM_bin2->GetYaxis()->SetLabelSize(0.035);
   hM_bin2->GetYaxis()->SetTitleSize(0.035);
   hM_bin2->GetYaxis()->SetTitleFont(42);
   hM_bin2->GetZaxis()->SetLabelFont(42);
   hM_bin2->GetZaxis()->SetLabelSize(0.035);
   hM_bin2->GetZaxis()->SetTitleSize(0.035);
   hM_bin2->GetZaxis()->SetTitleFont(42);
   hM_bin2->Draw("e");
   
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
   fmb->SetParameter(0,88.96972);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1617.806);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1975.876);
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
   fpeak->SetParameter(0,98.20512);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.5121788);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.07182504);
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
