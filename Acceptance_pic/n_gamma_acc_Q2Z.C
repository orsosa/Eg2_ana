{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct  4 04:53:22 2016) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "c",0,66,1280,734);
   c->Range(-1.875,0.006821656,16.875,0.09720657);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *haccq2 = new TH1F("haccq2","#gamma acceptance (Q^{2},Z)",15,0,15);
   haccq2->SetBinContent(1,0.01928932);
   haccq2->SetBinContent(2,0.02175061);
   haccq2->SetBinContent(3,0.02361882);
   haccq2->SetBinContent(4,0.02465131);
   haccq2->SetBinContent(5,0.02296586);
   haccq2->SetBinContent(6,0.03848093);
   haccq2->SetBinContent(7,0.04596224);
   haccq2->SetBinContent(8,0.05115104);
   haccq2->SetBinContent(9,0.0535658);
   haccq2->SetBinContent(10,0.05314918);
   haccq2->SetBinContent(11,0.05826975);
   haccq2->SetBinContent(12,0.06957334);
   haccq2->SetBinContent(13,0.07739189);
   haccq2->SetBinContent(14,0.08369089);
   haccq2->SetBinContent(15,0.07888673);
   haccq2->SetBinError(1,0.0001499012);
   haccq2->SetBinError(2,0.0002124661);
   haccq2->SetBinError(3,0.0002847603);
   haccq2->SetBinError(4,0.0003671191);
   haccq2->SetBinError(5,0.0004410217);
   haccq2->SetBinError(6,0.0002731396);
   haccq2->SetBinError(7,0.0004001181);
   haccq2->SetBinError(8,0.0005458661);
   haccq2->SetBinError(9,0.0007031625);
   haccq2->SetBinError(10,0.0008731681);
   haccq2->SetBinError(11,0.0003909611);
   haccq2->SetBinError(12,0.0005750895);
   haccq2->SetBinError(13,0.0007891517);
   haccq2->SetBinError(14,0.001033955);
   haccq2->SetBinError(15,0.001237815);
   haccq2->SetEntries(87338.94);
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
   haccq2->GetYaxis()->SetTitleOffset(1.1);
   haccq2->GetYaxis()->SetTitleFont(42);
   haccq2->GetZaxis()->SetLabelFont(42);
   haccq2->GetZaxis()->SetLabelSize(0.035);
   haccq2->GetZaxis()->SetTitleSize(0.035);
   haccq2->GetZaxis()->SetTitleFont(42);
   haccq2->Draw("p");
   
   TPaveText *pt = new TPaveText(0.3524582,0.9221676,0.6475418,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("#gamma acceptance (Q^{2},Z)");
   pt->Draw();
   TGaxis *gaxis = new TGaxis(0,0.01586015,5,0.01586015,0.3,0.8,5,"-SW");
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
   gaxis = new TGaxis(5,0.01586015,10,0.01586015,0.3,0.8,5,"-SUW");
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
   gaxis = new TGaxis(10,0.01586015,15,0.01586015,0.3,0.8,5,"-SUW");
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
   TLine *line = new TLine(5,0.01586015,5,0.08816808);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(10,0.01586015,10,0.08816808);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
      tex = new TLatex(1,0.03,"Q^{2} #epsilon (1 , 1.33)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(6.517019,0.03605632,"Q^{2} #epsilon (1.33 , 1.77)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(11.66667,0.05201411,"Q^{2} #epsilon (1.77 , 4.1)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
