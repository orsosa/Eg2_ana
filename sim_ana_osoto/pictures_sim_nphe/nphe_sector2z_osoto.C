{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr  1 07:46:37 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",1,1,1024,704);
   c->Range(-131.25,-2.49375,681.25,22.44375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *nphe_s2 = new TH1F("nphe_s2","nphe {sector==2}",150,-50,600);
   nphe_s2->SetBinContent(0,117);
   nphe_s2->SetBinContent(13,2);
   nphe_s2->SetBinContent(14,8);
   nphe_s2->SetBinContent(15,5);
   nphe_s2->SetBinContent(16,7);
   nphe_s2->SetBinContent(17,12);
   nphe_s2->SetBinContent(18,7);
   nphe_s2->SetBinContent(19,5);
   nphe_s2->SetBinContent(20,6);
   nphe_s2->SetBinContent(21,9);
   nphe_s2->SetBinContent(22,19);
   nphe_s2->SetBinContent(23,14);
   nphe_s2->SetBinContent(24,9);
   nphe_s2->SetBinContent(25,11);
   nphe_s2->SetBinContent(26,11);
   nphe_s2->SetBinContent(27,12);
   nphe_s2->SetBinContent(28,7);
   nphe_s2->SetBinContent(29,12);
   nphe_s2->SetBinContent(30,8);
   nphe_s2->SetBinContent(31,13);
   nphe_s2->SetBinContent(32,12);
   nphe_s2->SetBinContent(33,8);
   nphe_s2->SetBinContent(34,18);
   nphe_s2->SetBinContent(35,11);
   nphe_s2->SetBinContent(36,15);
   nphe_s2->SetBinContent(37,15);
   nphe_s2->SetBinContent(38,11);
   nphe_s2->SetBinContent(39,13);
   nphe_s2->SetBinContent(40,18);
   nphe_s2->SetBinContent(41,6);
   nphe_s2->SetBinContent(42,6);
   nphe_s2->SetBinContent(43,8);
   nphe_s2->SetBinContent(44,6);
   nphe_s2->SetBinContent(45,8);
   nphe_s2->SetBinContent(46,14);
   nphe_s2->SetBinContent(47,4);
   nphe_s2->SetBinContent(48,7);
   nphe_s2->SetBinContent(49,11);
   nphe_s2->SetBinContent(50,9);
   nphe_s2->SetBinContent(51,5);
   nphe_s2->SetBinContent(52,2);
   nphe_s2->SetBinContent(53,2);
   nphe_s2->SetBinContent(54,8);
   nphe_s2->SetBinContent(55,4);
   nphe_s2->SetBinContent(56,4);
   nphe_s2->SetBinContent(57,1);
   nphe_s2->SetBinContent(58,3);
   nphe_s2->SetBinContent(60,2);
   nphe_s2->SetBinContent(61,2);
   nphe_s2->SetBinContent(62,1);
   nphe_s2->SetBinContent(64,1);
   nphe_s2->SetBinContent(65,1);
   nphe_s2->SetBinContent(66,1);
   nphe_s2->SetBinContent(67,3);
   nphe_s2->SetBinContent(68,1);
   nphe_s2->SetBinContent(74,2);
   nphe_s2->SetBinContent(75,1);
   nphe_s2->SetBinContent(76,1);
   nphe_s2->SetBinContent(93,1);
   nphe_s2->SetEntries(540);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("nphe_s2");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 540    ");
   text = ptstats->AddText("Mean  =  99.57");
   text = ptstats->AddText("RMS   =  56.18");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   nphe_s2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(nphe_s2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   nphe_s2->SetLineColor(ci);
   nphe_s2->GetXaxis()->SetLabelFont(42);
   nphe_s2->GetXaxis()->SetLabelSize(0.035);
   nphe_s2->GetXaxis()->SetTitleSize(0.035);
   nphe_s2->GetXaxis()->SetTitleFont(42);
   nphe_s2->GetYaxis()->SetLabelFont(42);
   nphe_s2->GetYaxis()->SetLabelSize(0.035);
   nphe_s2->GetYaxis()->SetTitleSize(0.035);
   nphe_s2->GetYaxis()->SetTitleFont(42);
   nphe_s2->GetZaxis()->SetLabelFont(42);
   nphe_s2->GetZaxis()->SetLabelSize(0.035);
   nphe_s2->GetZaxis()->SetTitleSize(0.035);
   nphe_s2->GetZaxis()->SetTitleFont(42);
   nphe_s2->Draw("");
   
   TPaveText *pt = new TPaveText(0.3463725,0.935,0.6536275,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("nphe {sector==2}");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
