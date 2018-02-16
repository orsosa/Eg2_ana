{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Sep 29 18:47:19 2016) by ROOT version5.34/34
   TCanvas *c1 = new TCanvas("c1", "c1",0,66,1280,734);
   c1->Range(-5.817204,-0.002775575,34.15934,0.02509828);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetLeftMargin(0.1205008);
   c1->SetRightMargin(0.07902973);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *haccpt2Mc = new TH1F("haccpt2Mc","#gamma acceptance (Pt^{2},Z)",32,-1,31);
   haccpt2Mc->SetBinContent(2,0.02125972);
   haccpt2Mc->SetBinContent(3,0.007169001);
   haccpt2Mc->SetBinContent(4,0.006051778);
   haccpt2Mc->SetBinContent(5,0.004721175);
   haccpt2Mc->SetBinContent(6,0.004597188);
   haccpt2Mc->SetBinContent(7,0.01926897);
   haccpt2Mc->SetBinContent(8,0.01169354);
   haccpt2Mc->SetBinContent(9,0.009401164);
   haccpt2Mc->SetBinContent(10,0.008202875);
   haccpt2Mc->SetBinContent(11,0.007429212);
   haccpt2Mc->SetBinContent(12,0.01488275);
   haccpt2Mc->SetBinContent(13,0.0148974);
   haccpt2Mc->SetBinContent(14,0.01495662);
   haccpt2Mc->SetBinContent(15,0.01154656);
   haccpt2Mc->SetBinContent(16,0.009353012);
   haccpt2Mc->SetBinContent(17,0.01158503);
   haccpt2Mc->SetBinContent(18,0.0159813);
   haccpt2Mc->SetBinContent(19,0.01603403);
   haccpt2Mc->SetBinContent(20,0.0147353);
   haccpt2Mc->SetBinContent(21,0.01103139);
   haccpt2Mc->SetBinContent(22,0.009075843);
   haccpt2Mc->SetBinContent(23,0.01409317);
   haccpt2Mc->SetBinContent(24,0.01490202);
   haccpt2Mc->SetBinContent(25,0.01351585);
   haccpt2Mc->SetBinContent(26,0.01120478);
   haccpt2Mc->SetBinContent(27,0.00608815);
   haccpt2Mc->SetBinContent(28,0.01271379);
   haccpt2Mc->SetBinContent(29,0.01496756);
   haccpt2Mc->SetBinContent(30,0.01575311);
   haccpt2Mc->SetBinContent(31,0.01070941);
   haccpt2Mc->SetEntries(30);
   haccpt2Mc->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   haccpt2Mc->SetLineColor(ci);
   haccpt2Mc->SetMarkerStyle(8);
   haccpt2Mc->GetXaxis()->SetTitle("nbin");
   haccpt2Mc->GetXaxis()->SetLabelFont(42);
   haccpt2Mc->GetXaxis()->SetLabelSize(0.035);
   haccpt2Mc->GetXaxis()->SetTitleSize(0.035);
   haccpt2Mc->GetXaxis()->SetTitleFont(42);
   haccpt2Mc->GetYaxis()->SetTitle("Acceptance");
   haccpt2Mc->GetYaxis()->SetLabelFont(42);
   haccpt2Mc->GetYaxis()->SetLabelSize(0.035);
   haccpt2Mc->GetYaxis()->SetTitleSize(0.035);
   haccpt2Mc->GetYaxis()->SetTitleOffset(1.1);
   haccpt2Mc->GetYaxis()->SetTitleFont(42);
   haccpt2Mc->GetZaxis()->SetLabelFont(42);
   haccpt2Mc->GetZaxis()->SetLabelSize(0.035);
   haccpt2Mc->GetZaxis()->SetTitleSize(0.035);
   haccpt2Mc->GetZaxis()->SetTitleFont(42);
   haccpt2Mc->Draw("p");
   
   TPaveText *pt = new TPaveText(0.3189474,0.9218293,0.6810526,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("#gamma acceptance (Pt^{2},Z)");
   pt->Draw();
   TGaxis *gaxis = new TGaxis(-0.03759421,0.004258425,4.974937,0.004258425,0.3,0.8,5,"");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(5);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.025);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Z");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
      tex = new TLatex(0.6025037,0.002569633,"Pt^{2} #epsilon (0. , 0.1)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
   gaxis = new TGaxis(25.02542,0.005649573,30.06158,0.005649573,0.3,0.8,5,"");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(5);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.025);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Z");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   gaxis = new TGaxis(20.05181,0.008129874,25.08798,0.008129874,0.3,0.8,5,"");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(5);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.025);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Z");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   gaxis = new TGaxis(14.95308,0.01064954,19.95797,0.01064954,0.3,0.8,5,"");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(5);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.025);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Z");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   gaxis = new TGaxis(10.05477,0.008993717,15.0626,0.008993717,0.3,0.8,5,"");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(5);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.025);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Z");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   gaxis = new TGaxis(5.015649,0.006904905,10.02347,0.006904905,0.3,0.8,5,"");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(5);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.025);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Z");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
      tex = new TLatex(25.3695,0.00395667,"Pt^{2} #epsilon (0.75 , 0.9)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(20.2395,0.00659445,"Pt^{2} #epsilon (0.55 , 0.75)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(15.60997,0.008759792,"Pt^{2} #epsilon (0.4 , 0.55)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(10.3861,0.00753933,"Pt^{2} #epsilon (0.25 , 0.4)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(5.6002,0.00521651,"Pt^{2} #epsilon (0.1 , 0.25)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
