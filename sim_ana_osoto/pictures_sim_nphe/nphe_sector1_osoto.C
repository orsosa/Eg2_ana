{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr  1 07:46:36 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",1,1,1024,704);
   c->Range(-1312.5,-14.83125,812.5,133.4813);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *nphe_s1 = new TH1F("nphe_s1","nphe {sector==1}",300,-1100,600);
   nphe_s1->SetBinContent(18,113);
   nphe_s1->SetBinContent(196,9);
   nphe_s1->SetBinContent(197,11);
   nphe_s1->SetBinContent(198,8);
   nphe_s1->SetBinContent(199,15);
   nphe_s1->SetBinContent(200,20);
   nphe_s1->SetBinContent(201,7);
   nphe_s1->SetBinContent(202,12);
   nphe_s1->SetBinContent(203,21);
   nphe_s1->SetBinContent(204,10);
   nphe_s1->SetBinContent(205,11);
   nphe_s1->SetBinContent(206,11);
   nphe_s1->SetBinContent(207,14);
   nphe_s1->SetBinContent(208,23);
   nphe_s1->SetBinContent(209,26);
   nphe_s1->SetBinContent(210,15);
   nphe_s1->SetBinContent(211,22);
   nphe_s1->SetBinContent(212,21);
   nphe_s1->SetBinContent(213,20);
   nphe_s1->SetBinContent(214,16);
   nphe_s1->SetBinContent(215,9);
   nphe_s1->SetBinContent(216,6);
   nphe_s1->SetBinContent(217,22);
   nphe_s1->SetBinContent(218,19);
   nphe_s1->SetBinContent(219,9);
   nphe_s1->SetBinContent(220,7);
   nphe_s1->SetBinContent(221,12);
   nphe_s1->SetBinContent(222,11);
   nphe_s1->SetBinContent(223,11);
   nphe_s1->SetBinContent(224,9);
   nphe_s1->SetBinContent(225,11);
   nphe_s1->SetBinContent(226,10);
   nphe_s1->SetBinContent(227,6);
   nphe_s1->SetBinContent(228,3);
   nphe_s1->SetBinContent(229,5);
   nphe_s1->SetBinContent(230,5);
   nphe_s1->SetBinContent(231,1);
   nphe_s1->SetBinContent(232,4);
   nphe_s1->SetBinContent(234,1);
   nphe_s1->SetBinContent(235,2);
   nphe_s1->SetBinContent(236,3);
   nphe_s1->SetBinContent(237,1);
   nphe_s1->SetBinContent(240,1);
   nphe_s1->SetBinContent(242,1);
   nphe_s1->SetBinContent(248,1);
   nphe_s1->SetEntries(575);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("nphe_s1");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 575    ");
   text = ptstats->AddText("Mean  = -116.6");
   text = ptstats->AddText("RMS   =  439.6");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   nphe_s1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(nphe_s1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   nphe_s1->SetLineColor(ci);
   nphe_s1->GetXaxis()->SetLabelFont(42);
   nphe_s1->GetXaxis()->SetLabelSize(0.035);
   nphe_s1->GetXaxis()->SetTitleSize(0.035);
   nphe_s1->GetXaxis()->SetTitleFont(42);
   nphe_s1->GetYaxis()->SetLabelFont(42);
   nphe_s1->GetYaxis()->SetLabelSize(0.035);
   nphe_s1->GetYaxis()->SetTitleSize(0.035);
   nphe_s1->GetYaxis()->SetTitleFont(42);
   nphe_s1->GetZaxis()->SetLabelFont(42);
   nphe_s1->GetZaxis()->SetLabelSize(0.035);
   nphe_s1->GetZaxis()->SetTitleSize(0.035);
   nphe_s1->GetZaxis()->SetTitleFont(42);
   nphe_s1->Draw("");
   
   TPaveText *pt = new TPaveText(0.3463725,0.935,0.6536275,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("nphe {sector==1}");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
