{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr  1 07:46:37 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",1,1,1024,704);
   c->Range(-1312.5,-17.98125,812.5,161.8313);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *nphe_s4 = new TH1F("nphe_s4","nphe {sector==4}",300,-1100,600);
   nphe_s4->SetBinContent(18,137);
   nphe_s4->SetBinContent(196,8);
   nphe_s4->SetBinContent(197,14);
   nphe_s4->SetBinContent(198,14);
   nphe_s4->SetBinContent(199,19);
   nphe_s4->SetBinContent(200,15);
   nphe_s4->SetBinContent(201,12);
   nphe_s4->SetBinContent(202,20);
   nphe_s4->SetBinContent(203,16);
   nphe_s4->SetBinContent(204,11);
   nphe_s4->SetBinContent(205,19);
   nphe_s4->SetBinContent(206,21);
   nphe_s4->SetBinContent(207,20);
   nphe_s4->SetBinContent(208,15);
   nphe_s4->SetBinContent(209,13);
   nphe_s4->SetBinContent(210,14);
   nphe_s4->SetBinContent(211,12);
   nphe_s4->SetBinContent(212,14);
   nphe_s4->SetBinContent(213,15);
   nphe_s4->SetBinContent(214,31);
   nphe_s4->SetBinContent(215,12);
   nphe_s4->SetBinContent(216,10);
   nphe_s4->SetBinContent(217,10);
   nphe_s4->SetBinContent(218,15);
   nphe_s4->SetBinContent(219,6);
   nphe_s4->SetBinContent(220,17);
   nphe_s4->SetBinContent(221,15);
   nphe_s4->SetBinContent(222,7);
   nphe_s4->SetBinContent(223,14);
   nphe_s4->SetBinContent(224,11);
   nphe_s4->SetBinContent(225,5);
   nphe_s4->SetBinContent(226,7);
   nphe_s4->SetBinContent(227,4);
   nphe_s4->SetBinContent(228,3);
   nphe_s4->SetBinContent(229,4);
   nphe_s4->SetBinContent(230,1);
   nphe_s4->SetBinContent(231,5);
   nphe_s4->SetBinContent(232,5);
   nphe_s4->SetBinContent(233,4);
   nphe_s4->SetBinContent(234,3);
   nphe_s4->SetBinContent(235,3);
   nphe_s4->SetBinContent(236,1);
   nphe_s4->SetBinContent(238,1);
   nphe_s4->SetBinContent(240,1);
   nphe_s4->SetBinContent(241,1);
   nphe_s4->SetBinContent(242,1);
   nphe_s4->SetBinContent(263,1);
   nphe_s4->SetBinContent(272,1);
   nphe_s4->SetEntries(608);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("nphe_s4");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 608    ");
   text = ptstats->AddText("Mean  = -149.6");
   text = ptstats->AddText("RMS   =  461.7");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   nphe_s4->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(nphe_s4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   nphe_s4->SetLineColor(ci);
   nphe_s4->GetXaxis()->SetLabelFont(42);
   nphe_s4->GetXaxis()->SetLabelSize(0.035);
   nphe_s4->GetXaxis()->SetTitleSize(0.035);
   nphe_s4->GetXaxis()->SetTitleFont(42);
   nphe_s4->GetYaxis()->SetLabelFont(42);
   nphe_s4->GetYaxis()->SetLabelSize(0.035);
   nphe_s4->GetYaxis()->SetTitleSize(0.035);
   nphe_s4->GetYaxis()->SetTitleFont(42);
   nphe_s4->GetZaxis()->SetLabelFont(42);
   nphe_s4->GetZaxis()->SetLabelSize(0.035);
   nphe_s4->GetZaxis()->SetTitleSize(0.035);
   nphe_s4->GetZaxis()->SetTitleFont(42);
   nphe_s4->Draw("");
   
   TPaveText *pt = new TPaveText(0.3463725,0.935,0.6536275,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("nphe {sector==4}");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
