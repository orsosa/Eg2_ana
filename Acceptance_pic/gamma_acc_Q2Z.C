{
//=========Macro generated from canvas: c/c
//=========  (Wed Sep 28 03:29:27 2016) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "c",0,66,1280,734);
   c->Range(-3.125,-0.01098443,18.125,0.09885986);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *haccq2 = new TH1F("haccq2","#gamma acceptance (Q^{2} , Z)",17,-1,16);
   haccq2->SetBinContent(2,0.01928932);
   haccq2->SetBinContent(3,0.02175061);
   haccq2->SetBinContent(4,0.02361882);
   haccq2->SetBinContent(5,0.02465131);
   haccq2->SetBinContent(6,0.02296586);
   haccq2->SetBinContent(7,0.03848093);
   haccq2->SetBinContent(8,0.04596224);
   haccq2->SetBinContent(9,0.05115104);
   haccq2->SetBinContent(10,0.0535658);
   haccq2->SetBinContent(11,0.05314918);
   haccq2->SetBinContent(12,0.05826975);
   haccq2->SetBinContent(13,0.06957334);
   haccq2->SetBinContent(14,0.07739189);
   haccq2->SetBinContent(15,0.08369089);
   haccq2->SetBinContent(16,0.07888673);
   haccq2->SetEntries(15);
   haccq2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
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
   haccq2->GetYaxis()->SetTitleFont(42);
   haccq2->GetZaxis()->SetLabelFont(42);
   haccq2->GetZaxis()->SetLabelSize(0.035);
   haccq2->GetZaxis()->SetTitleSize(0.035);
   haccq2->GetZaxis()->SetTitleFont(42);
   haccq2->Draw("p");
   TGaxis *gaxis = new TGaxis(0,0.013,5,0.013,0.3,0.8,5,"");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.04);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(5);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.04);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Z");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   TLatex *   tex = new TLatex(1.08239,0.00509034,"Q^{2} #epsilon (1.0 , 1.33)");
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   gaxis = new TGaxis(5,0.032,10,0.032,0.3,0.8,5,"");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.04);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(5);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.04);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Z");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
      tex = new TLatex(5.90226,0.0240356,"Q^{2} #epsilon (1.33 , 1.77)");
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   gaxis = new TGaxis(10,0.05,15,0.05,0.3,0.8,5,"");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.04);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(5);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.04);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Z");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
      tex = new TLatex(11.1482,0.0420241,"Q^{2} #epsilon (1.77 , 4.1)");
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TPaveText *pt = new TPaveText(0.3534585,0.9238136,0.6465415,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("#gamma acceptance (Q^{2} , Z)");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
