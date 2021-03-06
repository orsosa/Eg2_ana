{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr  1 07:46:37 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",1,1,1024,704);
   c->Range(-131.25,-2.75625,681.25,24.80625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *nphe_s5 = new TH1F("nphe_s5","nphe {sector==5}",150,-50,600);
   nphe_s5->SetBinContent(0,142);
   nphe_s5->SetBinContent(13,6);
   nphe_s5->SetBinContent(14,7);
   nphe_s5->SetBinContent(15,9);
   nphe_s5->SetBinContent(16,10);
   nphe_s5->SetBinContent(17,7);
   nphe_s5->SetBinContent(18,7);
   nphe_s5->SetBinContent(19,5);
   nphe_s5->SetBinContent(20,8);
   nphe_s5->SetBinContent(21,10);
   nphe_s5->SetBinContent(22,10);
   nphe_s5->SetBinContent(23,14);
   nphe_s5->SetBinContent(24,11);
   nphe_s5->SetBinContent(25,14);
   nphe_s5->SetBinContent(26,12);
   nphe_s5->SetBinContent(27,12);
   nphe_s5->SetBinContent(28,21);
   nphe_s5->SetBinContent(29,7);
   nphe_s5->SetBinContent(30,11);
   nphe_s5->SetBinContent(31,16);
   nphe_s5->SetBinContent(32,8);
   nphe_s5->SetBinContent(33,11);
   nphe_s5->SetBinContent(34,11);
   nphe_s5->SetBinContent(35,14);
   nphe_s5->SetBinContent(36,13);
   nphe_s5->SetBinContent(37,5);
   nphe_s5->SetBinContent(38,10);
   nphe_s5->SetBinContent(39,16);
   nphe_s5->SetBinContent(40,12);
   nphe_s5->SetBinContent(41,9);
   nphe_s5->SetBinContent(42,10);
   nphe_s5->SetBinContent(43,16);
   nphe_s5->SetBinContent(44,12);
   nphe_s5->SetBinContent(45,10);
   nphe_s5->SetBinContent(46,8);
   nphe_s5->SetBinContent(47,12);
   nphe_s5->SetBinContent(48,4);
   nphe_s5->SetBinContent(49,10);
   nphe_s5->SetBinContent(50,6);
   nphe_s5->SetBinContent(51,7);
   nphe_s5->SetBinContent(52,7);
   nphe_s5->SetBinContent(53,5);
   nphe_s5->SetBinContent(54,3);
   nphe_s5->SetBinContent(55,7);
   nphe_s5->SetBinContent(56,2);
   nphe_s5->SetBinContent(57,5);
   nphe_s5->SetBinContent(58,3);
   nphe_s5->SetBinContent(59,1);
   nphe_s5->SetBinContent(61,2);
   nphe_s5->SetBinContent(62,4);
   nphe_s5->SetBinContent(63,2);
   nphe_s5->SetBinContent(64,1);
   nphe_s5->SetBinContent(67,1);
   nphe_s5->SetBinContent(71,1);
   nphe_s5->SetBinContent(72,1);
   nphe_s5->SetBinContent(77,1);
   nphe_s5->SetBinContent(79,1);
   nphe_s5->SetBinContent(84,1);
   nphe_s5->SetBinContent(103,1);
   nphe_s5->SetEntries(592);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("nphe_s5");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 592    ");
   text = ptstats->AddText("Mean  =  100.3");
   text = ptstats->AddText("RMS   =  57.56");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   nphe_s5->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(nphe_s5);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   nphe_s5->SetLineColor(ci);
   nphe_s5->GetXaxis()->SetLabelFont(42);
   nphe_s5->GetXaxis()->SetLabelSize(0.035);
   nphe_s5->GetXaxis()->SetTitleSize(0.035);
   nphe_s5->GetXaxis()->SetTitleFont(42);
   nphe_s5->GetYaxis()->SetLabelFont(42);
   nphe_s5->GetYaxis()->SetLabelSize(0.035);
   nphe_s5->GetYaxis()->SetTitleSize(0.035);
   nphe_s5->GetYaxis()->SetTitleFont(42);
   nphe_s5->GetZaxis()->SetLabelFont(42);
   nphe_s5->GetZaxis()->SetLabelSize(0.035);
   nphe_s5->GetZaxis()->SetTitleSize(0.035);
   nphe_s5->GetZaxis()->SetTitleFont(42);
   nphe_s5->Draw("");
   
   TPaveText *pt = new TPaveText(0.3463725,0.935,0.6536275,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("nphe {sector==5}");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
