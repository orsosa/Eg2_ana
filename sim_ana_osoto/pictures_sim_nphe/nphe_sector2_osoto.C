{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr  1 07:46:37 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",1,1,1024,704);
   c->Range(-1312.5,-15.35625,812.5,138.2063);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *nphe_s2 = new TH1F("nphe_s2","nphe {sector==2}",300,-1100,600);
   nphe_s2->SetBinContent(18,117);
   nphe_s2->SetBinContent(196,10);
   nphe_s2->SetBinContent(197,7);
   nphe_s2->SetBinContent(198,11);
   nphe_s2->SetBinContent(199,13);
   nphe_s2->SetBinContent(200,5);
   nphe_s2->SetBinContent(201,12);
   nphe_s2->SetBinContent(202,19);
   nphe_s2->SetBinContent(203,19);
   nphe_s2->SetBinContent(204,11);
   nphe_s2->SetBinContent(205,16);
   nphe_s2->SetBinContent(206,16);
   nphe_s2->SetBinContent(207,7);
   nphe_s2->SetBinContent(208,17);
   nphe_s2->SetBinContent(209,14);
   nphe_s2->SetBinContent(210,13);
   nphe_s2->SetBinContent(211,21);
   nphe_s2->SetBinContent(212,15);
   nphe_s2->SetBinContent(213,18);
   nphe_s2->SetBinContent(214,16);
   nphe_s2->SetBinContent(215,20);
   nphe_s2->SetBinContent(216,18);
   nphe_s2->SetBinContent(217,11);
   nphe_s2->SetBinContent(218,8);
   nphe_s2->SetBinContent(219,7);
   nphe_s2->SetBinContent(220,13);
   nphe_s2->SetBinContent(221,12);
   nphe_s2->SetBinContent(222,8);
   nphe_s2->SetBinContent(223,14);
   nphe_s2->SetBinContent(224,10);
   nphe_s2->SetBinContent(225,3);
   nphe_s2->SetBinContent(226,3);
   nphe_s2->SetBinContent(227,9);
   nphe_s2->SetBinContent(228,5);
   nphe_s2->SetBinContent(229,4);
   nphe_s2->SetBinContent(230,1);
   nphe_s2->SetBinContent(231,2);
   nphe_s2->SetBinContent(232,2);
   nphe_s2->SetBinContent(233,1);
   nphe_s2->SetBinContent(234,1);
   nphe_s2->SetBinContent(235,1);
   nphe_s2->SetBinContent(236,1);
   nphe_s2->SetBinContent(237,4);
   nphe_s2->SetBinContent(242,2);
   nphe_s2->SetBinContent(243,1);
   nphe_s2->SetBinContent(244,1);
   nphe_s2->SetBinContent(256,1);
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
   text = ptstats->AddText("Mean  = -138.7");
   text = ptstats->AddText("RMS   =  455.7");
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
