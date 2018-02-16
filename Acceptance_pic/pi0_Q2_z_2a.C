{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 11 13:16:46 2016) by ROOT version5.34/03
   TCanvas *c = new TCanvas("c", "c",0,51,1920,1004);
   c->Range(-3.125,-0.01578059,18.125,0.1420253);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *haccq2 = new TH1F("haccq2","#pi^{0}  (Q^{2},Z) 2#gamma events",17,-1,16);
   haccq2->SetBinContent(2,0.03070222);
   haccq2->SetBinContent(3,0.03420603);
   haccq2->SetBinContent(4,0.03738072);
   haccq2->SetBinContent(5,0.03589001);
   haccq2->SetBinContent(6,0.0301289);
   haccq2->SetBinContent(7,0.05703126);
   haccq2->SetBinContent(8,0.06760744);
   haccq2->SetBinContent(9,0.07367818);
   haccq2->SetBinContent(10,0.07894022);
   haccq2->SetBinContent(11,0.07105546);
   haccq2->SetBinContent(12,0.08403522);
   haccq2->SetBinContent(13,0.09568363);
   haccq2->SetBinContent(14,0.1081865);
   haccq2->SetBinContent(15,0.1177443);
   haccq2->SetBinContent(16,0.09210388);
   haccq2->SetBinError(2,0.0005173652);
   haccq2->SetBinError(3,0.0006633927);
   haccq2->SetBinError(4,0.0008193461);
   haccq2->SetBinError(5,0.0009326776);
   haccq2->SetBinError(6,0.0009778413);
   haccq2->SetBinError(7,0.0008927512);
   haccq2->SetBinError(8,0.001187793);
   haccq2->SetBinError(9,0.001473774);
   haccq2->SetBinError(10,0.00177941);
   haccq2->SetBinError(11,0.001934788);
   haccq2->SetBinError(12,0.001228426);
   haccq2->SetBinError(13,0.001588085);
   haccq2->SetBinError(14,0.002032892);
   haccq2->SetBinError(15,0.00248876);
   haccq2->SetBinError(16,0.002486445);
   haccq2->SetEntries(15);
   haccq2->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   haccq2->SetLineColor(ci);
   haccq2->SetMarkerStyle(8);
   haccq2->GetXaxis()->SetTitle("nbin");
   haccq2->GetXaxis()->SetLabelFont(42);
   haccq2->GetXaxis()->SetLabelSize(0.035);
   haccq2->GetXaxis()->SetTitleSize(0.035);
   haccq2->GetXaxis()->SetTitleFont(42);
   haccq2->GetYaxis()->SetTitle("Acceptance");
   haccq2->GetYaxis()->SetLabelFont(42);
   haccq2->GetYaxis()->SetLabelSize(0.035);
   haccq2->GetYaxis()->SetTitleSize(0.035);
   haccq2->GetYaxis()->SetTitleOffset(1.1);
   haccq2->GetYaxis()->SetTitleFont(42);
   haccq2->GetZaxis()->SetLabelFont(42);
   haccq2->GetZaxis()->SetLabelSize(0.035);
   haccq2->GetZaxis()->SetTitleSize(0.035);
   haccq2->GetZaxis()->SetTitleFont(42);
   haccq2->Draw("p");
   
   TPaveText *pt = new TPaveText(0.3273116,0.9215734,0.6726884,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("#pi^{0}  (Q^{2},Z) 2#gamma events");
   pt->Draw();
   TGaxis *gaxis = new TGaxis(0,0,5,0,0.3,0.8,5,"-SW");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0.8);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.025);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Z ");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   gaxis = new TGaxis(5,0,10,0,0.3,0.8,5,"-SUW");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0.8);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.025);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Z ");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   gaxis = new TGaxis(10,0,15,0,0.3,0.8,5,"-SUW");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0.8);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.025);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Z ");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   TLine *line = new TLine(5,0,5,0.1262447);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(10,0,10,0.1262447);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
      tex = new TLatex(0.7,-0.0075,"Q^{2} #epsilon (1 , 1.33)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(5.7,-0.0075,"Q^{2} #epsilon (1.33 , 1.77)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(10.7,-0.0075,"Q^{2} #epsilon (1.77 , 4.1)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
