{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr  1 07:46:37 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",1,1,1024,704);
   c->Range(-1312.5,-20.2125,812.5,181.9125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *nphe_s3 = new TH1F("nphe_s3","nphe {sector==3}",300,-1100,600);
   nphe_s3->SetBinContent(18,154);
   nphe_s3->SetBinContent(195,1);
   nphe_s3->SetBinContent(196,12);
   nphe_s3->SetBinContent(197,14);
   nphe_s3->SetBinContent(198,10);
   nphe_s3->SetBinContent(199,9);
   nphe_s3->SetBinContent(200,13);
   nphe_s3->SetBinContent(201,12);
   nphe_s3->SetBinContent(202,17);
   nphe_s3->SetBinContent(203,6);
   nphe_s3->SetBinContent(204,12);
   nphe_s3->SetBinContent(205,22);
   nphe_s3->SetBinContent(206,18);
   nphe_s3->SetBinContent(207,18);
   nphe_s3->SetBinContent(208,15);
   nphe_s3->SetBinContent(209,17);
   nphe_s3->SetBinContent(210,13);
   nphe_s3->SetBinContent(211,24);
   nphe_s3->SetBinContent(212,15);
   nphe_s3->SetBinContent(213,16);
   nphe_s3->SetBinContent(214,17);
   nphe_s3->SetBinContent(215,19);
   nphe_s3->SetBinContent(216,14);
   nphe_s3->SetBinContent(217,19);
   nphe_s3->SetBinContent(218,14);
   nphe_s3->SetBinContent(219,16);
   nphe_s3->SetBinContent(220,12);
   nphe_s3->SetBinContent(221,11);
   nphe_s3->SetBinContent(222,9);
   nphe_s3->SetBinContent(223,20);
   nphe_s3->SetBinContent(224,8);
   nphe_s3->SetBinContent(225,8);
   nphe_s3->SetBinContent(226,6);
   nphe_s3->SetBinContent(227,3);
   nphe_s3->SetBinContent(228,3);
   nphe_s3->SetBinContent(229,5);
   nphe_s3->SetBinContent(230,2);
   nphe_s3->SetBinContent(231,4);
   nphe_s3->SetBinContent(232,2);
   nphe_s3->SetBinContent(233,4);
   nphe_s3->SetBinContent(234,5);
   nphe_s3->SetBinContent(236,2);
   nphe_s3->SetBinContent(237,1);
   nphe_s3->SetBinContent(239,1);
   nphe_s3->SetBinContent(240,1);
   nphe_s3->SetBinContent(244,1);
   nphe_s3->SetBinContent(252,1);
   nphe_s3->SetEntries(626);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("nphe_s3");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 626    ");
   text = ptstats->AddText("Mean  = -170.3");
   text = ptstats->AddText("RMS   =  476.4");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   nphe_s3->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(nphe_s3);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   nphe_s3->SetLineColor(ci);
   nphe_s3->GetXaxis()->SetLabelFont(42);
   nphe_s3->GetXaxis()->SetLabelSize(0.035);
   nphe_s3->GetXaxis()->SetTitleSize(0.035);
   nphe_s3->GetXaxis()->SetTitleFont(42);
   nphe_s3->GetYaxis()->SetLabelFont(42);
   nphe_s3->GetYaxis()->SetLabelSize(0.035);
   nphe_s3->GetYaxis()->SetTitleSize(0.035);
   nphe_s3->GetYaxis()->SetTitleFont(42);
   nphe_s3->GetZaxis()->SetLabelFont(42);
   nphe_s3->GetZaxis()->SetLabelSize(0.035);
   nphe_s3->GetZaxis()->SetTitleSize(0.035);
   nphe_s3->GetZaxis()->SetTitleFont(42);
   nphe_s3->Draw("");
   
   TPaveText *pt = new TPaveText(0.3463725,0.935,0.6536275,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("nphe {sector==3}");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
