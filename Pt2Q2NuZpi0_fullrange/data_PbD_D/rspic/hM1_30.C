{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:30:28 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-225.614,0.350906,2030.526);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin30 = new TH1F("hM_bin30","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin30->SetBinContent(14,45);
   hM_bin30->SetBinContent(15,111);
   hM_bin30->SetBinContent(16,91);
   hM_bin30->SetBinContent(17,191);
   hM_bin30->SetBinContent(18,162);
   hM_bin30->SetBinContent(19,187);
   hM_bin30->SetBinContent(20,222);
   hM_bin30->SetBinContent(21,275);
   hM_bin30->SetBinContent(22,245);
   hM_bin30->SetBinContent(23,271);
   hM_bin30->SetBinContent(24,281);
   hM_bin30->SetBinContent(25,276);
   hM_bin30->SetBinContent(26,369);
   hM_bin30->SetBinContent(27,331);
   hM_bin30->SetBinContent(28,324);
   hM_bin30->SetBinContent(29,364);
   hM_bin30->SetBinContent(30,351);
   hM_bin30->SetBinContent(31,388);
   hM_bin30->SetBinContent(32,397);
   hM_bin30->SetBinContent(33,398);
   hM_bin30->SetBinContent(34,410);
   hM_bin30->SetBinContent(35,413);
   hM_bin30->SetBinContent(36,503);
   hM_bin30->SetBinContent(37,535);
   hM_bin30->SetBinContent(38,673);
   hM_bin30->SetBinContent(39,717);
   hM_bin30->SetBinContent(40,736);
   hM_bin30->SetBinContent(41,785);
   hM_bin30->SetBinContent(42,843);
   hM_bin30->SetBinContent(43,981);
   hM_bin30->SetBinContent(44,1102);
   hM_bin30->SetBinContent(45,1299);
   hM_bin30->SetBinContent(46,1281);
   hM_bin30->SetBinContent(47,1480);
   hM_bin30->SetBinContent(48,1459);
   hM_bin30->SetBinContent(49,1558);
   hM_bin30->SetBinContent(50,1562);
   hM_bin30->SetBinContent(51,1678);
   hM_bin30->SetBinContent(52,1625);
   hM_bin30->SetBinContent(53,1477);
   hM_bin30->SetBinContent(54,1282);
   hM_bin30->SetBinContent(55,1186);
   hM_bin30->SetBinContent(56,1115);
   hM_bin30->SetBinContent(57,969);
   hM_bin30->SetBinContent(58,899);
   hM_bin30->SetBinContent(59,887);
   hM_bin30->SetBinContent(60,854);
   hM_bin30->SetBinContent(61,732);
   hM_bin30->SetBinContent(62,642);
   hM_bin30->SetBinContent(63,640);
   hM_bin30->SetBinContent(64,670);
   hM_bin30->SetBinContent(65,631);
   hM_bin30->SetBinContent(66,544);
   hM_bin30->SetBinContent(67,586);
   hM_bin30->SetBinContent(68,610);
   hM_bin30->SetBinContent(69,533);
   hM_bin30->SetBinContent(70,587);
   hM_bin30->SetBinContent(71,504);
   hM_bin30->SetBinContent(72,508);
   hM_bin30->SetBinContent(73,570);
   hM_bin30->SetBinContent(74,530);
   hM_bin30->SetBinContent(75,560);
   hM_bin30->SetBinContent(76,516);
   hM_bin30->SetBinContent(77,567);
   hM_bin30->SetBinContent(78,525);
   hM_bin30->SetBinContent(79,562);
   hM_bin30->SetBinContent(80,541);
   hM_bin30->SetBinContent(81,454);
   hM_bin30->SetBinContent(82,545);
   hM_bin30->SetBinContent(83,506);
   hM_bin30->SetBinContent(84,482);
   hM_bin30->SetBinContent(85,521);
   hM_bin30->SetBinContent(86,440);
   hM_bin30->SetBinContent(87,504);
   hM_bin30->SetBinContent(88,496);
   hM_bin30->SetBinContent(89,423);
   hM_bin30->SetBinContent(90,372);
   hM_bin30->SetBinContent(91,444);
   hM_bin30->SetBinContent(92,490);
   hM_bin30->SetBinContent(93,435);
   hM_bin30->SetBinContent(94,501);
   hM_bin30->SetBinContent(95,437);
   hM_bin30->SetBinContent(96,454);
   hM_bin30->SetBinContent(97,407);
   hM_bin30->SetBinContent(98,420);
   hM_bin30->SetBinContent(99,474);
   hM_bin30->SetBinContent(100,397);
   hM_bin30->SetBinContent(101,36261);
   hM_bin30->SetEntries(90609);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07169463,0.1938525);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(95.97907);
   fsig->SetNDF(29);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,135.2953);
   fsig->SetParError(0,21.7171);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,4207.081);
   fsig->SetParError(1,144.8477);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-10000);
   fsig->SetParError(2,6449.878);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,1054.438);
   fsig->SetParError(3,15.45265);
   fsig->SetParLimits(3,0,3356);
   fsig->SetParameter(4,0.1326452);
   fsig->SetParError(4,0.0003264486);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.02004204);
   fsig->SetParError(5,0.0004281764);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin30->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin30");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 90609  ");
   text = ptstats->AddText("Mean  = 0.1611");
   text = ptstats->AddText("RMS   = 0.06836");
   text = ptstats->AddText("#chi^{2} / ndf = 95.98 / 29");
   text = ptstats->AddText("p0       = 135.3 #pm 21.7 ");
   text = ptstats->AddText("p1       =  4207 #pm 144.8 ");
   text = ptstats->AddText("p2       = -1e+04 #pm 6.45e+03 ");
   text = ptstats->AddText("p3       =  1054 #pm 15.5 ");
   text = ptstats->AddText("p4       = 0.1326 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.02004 #pm 0.00043 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin30->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin30);

   ci = TColor::GetColor("#0000ff");
   hM_bin30->SetMarkerColor(ci);
   hM_bin30->SetMarkerStyle(24);
   hM_bin30->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin30->GetXaxis()->SetLabelFont(42);
   hM_bin30->GetXaxis()->SetLabelSize(0.035);
   hM_bin30->GetXaxis()->SetTitleSize(0.035);
   hM_bin30->GetXaxis()->SetTitleFont(42);
   hM_bin30->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin30->GetYaxis()->SetLabelFont(42);
   hM_bin30->GetYaxis()->SetLabelSize(0.035);
   hM_bin30->GetYaxis()->SetTitleSize(0.035);
   hM_bin30->GetYaxis()->SetTitleFont(42);
   hM_bin30->GetZaxis()->SetLabelFont(42);
   hM_bin30->GetZaxis()->SetLabelSize(0.035);
   hM_bin30->GetZaxis()->SetTitleSize(0.035);
   hM_bin30->GetZaxis()->SetTitleFont(42);
   hM_bin30->Draw("e");
   
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
   fmb->SetParameter(0,135.2953);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,4207.081);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-10000);
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
   fpeak->SetParameter(0,1054.438);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1326452);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.02004204);
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
