{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr  1 07:46:36 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",1,1,1024,704);
   c->Range(-1312.5,-15.225,812.5,137.025);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *nphe_s0 = new TH1F("nphe_s0","nphe {sector==0}",300,-1100,600);
   nphe_s0->SetBinContent(18,116);
   nphe_s0->SetBinContent(195,2);
   nphe_s0->SetBinContent(196,13);
   nphe_s0->SetBinContent(197,13);
   nphe_s0->SetBinContent(198,10);
   nphe_s0->SetBinContent(199,13);
   nphe_s0->SetBinContent(200,9);
   nphe_s0->SetBinContent(201,11);
   nphe_s0->SetBinContent(202,16);
   nphe_s0->SetBinContent(203,19);
   nphe_s0->SetBinContent(204,7);
   nphe_s0->SetBinContent(205,11);
   nphe_s0->SetBinContent(206,20);
   nphe_s0->SetBinContent(207,20);
   nphe_s0->SetBinContent(208,23);
   nphe_s0->SetBinContent(209,18);
   nphe_s0->SetBinContent(210,20);
   nphe_s0->SetBinContent(211,18);
   nphe_s0->SetBinContent(212,15);
   nphe_s0->SetBinContent(213,13);
   nphe_s0->SetBinContent(214,9);
   nphe_s0->SetBinContent(215,27);
   nphe_s0->SetBinContent(216,13);
   nphe_s0->SetBinContent(217,22);
   nphe_s0->SetBinContent(218,22);
   nphe_s0->SetBinContent(219,12);
   nphe_s0->SetBinContent(220,15);
   nphe_s0->SetBinContent(221,16);
   nphe_s0->SetBinContent(222,8);
   nphe_s0->SetBinContent(223,18);
   nphe_s0->SetBinContent(224,7);
   nphe_s0->SetBinContent(225,4);
   nphe_s0->SetBinContent(226,7);
   nphe_s0->SetBinContent(227,5);
   nphe_s0->SetBinContent(228,6);
   nphe_s0->SetBinContent(229,6);
   nphe_s0->SetBinContent(230,3);
   nphe_s0->SetBinContent(231,1);
   nphe_s0->SetBinContent(232,2);
   nphe_s0->SetBinContent(233,1);
   nphe_s0->SetBinContent(234,5);
   nphe_s0->SetBinContent(235,2);
   nphe_s0->SetBinContent(236,2);
   nphe_s0->SetBinContent(237,1);
   nphe_s0->SetBinContent(240,1);
   nphe_s0->SetBinContent(244,1);
   nphe_s0->SetBinContent(250,1);
   nphe_s0->SetBinContent(277,1);
   nphe_s0->SetEntries(605);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("nphe_s0");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 605    ");
   text = ptstats->AddText("Mean  = -110.3");
   text = ptstats->AddText("RMS   =  436.4");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   nphe_s0->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(nphe_s0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   nphe_s0->SetLineColor(ci);
   nphe_s0->GetXaxis()->SetLabelFont(42);
   nphe_s0->GetXaxis()->SetLabelSize(0.035);
   nphe_s0->GetXaxis()->SetTitleSize(0.035);
   nphe_s0->GetXaxis()->SetTitleFont(42);
   nphe_s0->GetYaxis()->SetLabelFont(42);
   nphe_s0->GetYaxis()->SetLabelSize(0.035);
   nphe_s0->GetYaxis()->SetTitleSize(0.035);
   nphe_s0->GetYaxis()->SetTitleFont(42);
   nphe_s0->GetZaxis()->SetLabelFont(42);
   nphe_s0->GetZaxis()->SetLabelSize(0.035);
   nphe_s0->GetZaxis()->SetTitleSize(0.035);
   nphe_s0->GetZaxis()->SetTitleFont(42);
   nphe_s0->Draw("");
   
   TPaveText *pt = new TPaveText(0.3463725,0.935,0.6536275,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("nphe {sector==0}");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
