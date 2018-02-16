{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr  1 07:46:37 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",1,1,1024,704);
   c->Range(-1312.5,-18.6375,812.5,167.7375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *nphe_s5 = new TH1F("nphe_s5","nphe {sector==5}",300,-1100,600);
   nphe_s5->SetBinContent(18,142);
   nphe_s5->SetBinContent(195,4);
   nphe_s5->SetBinContent(196,9);
   nphe_s5->SetBinContent(197,12);
   nphe_s5->SetBinContent(198,11);
   nphe_s5->SetBinContent(199,10);
   nphe_s5->SetBinContent(200,6);
   nphe_s5->SetBinContent(201,15);
   nphe_s5->SetBinContent(202,11);
   nphe_s5->SetBinContent(203,15);
   nphe_s5->SetBinContent(204,14);
   nphe_s5->SetBinContent(205,21);
   nphe_s5->SetBinContent(206,18);
   nphe_s5->SetBinContent(207,20);
   nphe_s5->SetBinContent(208,13);
   nphe_s5->SetBinContent(209,18);
   nphe_s5->SetBinContent(210,11);
   nphe_s5->SetBinContent(211,13);
   nphe_s5->SetBinContent(212,20);
   nphe_s5->SetBinContent(213,14);
   nphe_s5->SetBinContent(214,8);
   nphe_s5->SetBinContent(215,22);
   nphe_s5->SetBinContent(216,12);
   nphe_s5->SetBinContent(217,14);
   nphe_s5->SetBinContent(218,17);
   nphe_s5->SetBinContent(219,16);
   nphe_s5->SetBinContent(220,12);
   nphe_s5->SetBinContent(221,17);
   nphe_s5->SetBinContent(222,5);
   nphe_s5->SetBinContent(223,11);
   nphe_s5->SetBinContent(224,8);
   nphe_s5->SetBinContent(225,11);
   nphe_s5->SetBinContent(226,6);
   nphe_s5->SetBinContent(227,7);
   nphe_s5->SetBinContent(228,4);
   nphe_s5->SetBinContent(229,5);
   nphe_s5->SetBinContent(230,4);
   nphe_s5->SetBinContent(232,2);
   nphe_s5->SetBinContent(233,6);
   nphe_s5->SetBinContent(234,1);
   nphe_s5->SetBinContent(236,1);
   nphe_s5->SetBinContent(239,1);
   nphe_s5->SetBinContent(241,1);
   nphe_s5->SetBinContent(244,1);
   nphe_s5->SetBinContent(245,1);
   nphe_s5->SetBinContent(250,1);
   nphe_s5->SetBinContent(264,1);
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
   text = ptstats->AddText("Mean  = -163.6");
   text = ptstats->AddText("RMS   =  472.5");
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
