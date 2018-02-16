{
//=========Macro generated from canvas: c1/#gamma acceptance comparison
//=========  (Tue Oct  4 05:08:14 2016) by ROOT version5.34/34
   TCanvas *c1 = new TCanvas("c1", "#gamma acceptance comparison",0,66,1280,734);
   c1->Range(-1.875,0.0001923635,16.875,0.09826872);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
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
   haccq2->SetMinimum(0.01);
   haccq2->SetEntries(87338.94);
   haccq2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
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
   
   TPaveText *pt = new TPaveText(0.3612833,0.9238136,0.6387167,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("#gamma acceptance (Q^{2},Z)");
   pt->Draw();
   
   TH1F *haccq2Mc = new TH1F("haccq2Mc","#gamma acceptance (Q^{2},Z)  M_{#pi^{0}} Cut",15,0,15);
   haccq2Mc->SetBinContent(1,0.01747533);
   haccq2Mc->SetBinContent(2,0.01751237);
   haccq2Mc->SetBinContent(3,0.01932524);
   haccq2Mc->SetBinContent(4,0.01815357);
   haccq2Mc->SetBinContent(5,0.01484814);
   haccq2Mc->SetBinContent(6,0.03556963);
   haccq2Mc->SetBinContent(7,0.038271);
   haccq2Mc->SetBinContent(8,0.03919807);
   haccq2Mc->SetBinContent(9,0.03845643);
   haccq2Mc->SetBinContent(10,0.03332929);
   haccq2Mc->SetBinContent(11,0.0515168);
   haccq2Mc->SetBinContent(12,0.05566468);
   haccq2Mc->SetBinContent(13,0.05974471);
   haccq2Mc->SetBinContent(14,0.05909117);
   haccq2Mc->SetBinContent(15,0.04345784);
   haccq2Mc->SetBinError(1,0.0002630072);
   haccq2Mc->SetBinError(2,0.0003392109);
   haccq2Mc->SetBinError(3,0.0004339011);
   haccq2Mc->SetBinError(4,0.0005018993);
   haccq2Mc->SetBinError(5,0.0005315084);
   haccq2Mc->SetBinError(6,0.0004791009);
   haccq2Mc->SetBinError(7,0.0006404058);
   haccq2Mc->SetBinError(8,0.0007944262);
   haccq2Mc->SetBinError(9,0.0009400225);
   haccq2Mc->SetBinError(10,0.001022455);
   haccq2Mc->SetBinError(11,0.0006590019);
   haccq2Mc->SetBinError(12,0.0008831379);
   haccq2Mc->SetBinError(13,0.00113623);
   haccq2Mc->SetBinError(14,0.001342458);
   haccq2Mc->SetBinError(15,0.001332429);
   haccq2Mc->SetEntries(28788.96);
   haccq2Mc->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   haccq2Mc->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   haccq2Mc->SetMarkerColor(ci);
   haccq2Mc->SetMarkerStyle(8);
   haccq2Mc->GetXaxis()->SetTitle("nbin");
   haccq2Mc->GetXaxis()->SetLabelFont(42);
   haccq2Mc->GetXaxis()->SetLabelSize(0.035);
   haccq2Mc->GetXaxis()->SetTitleSize(0.035);
   haccq2Mc->GetXaxis()->SetTitleFont(42);
   haccq2Mc->GetYaxis()->SetTitle("Acceptance");
   haccq2Mc->GetYaxis()->SetLabelFont(42);
   haccq2Mc->GetYaxis()->SetLabelSize(0.035);
   haccq2Mc->GetYaxis()->SetTitleSize(0.035);
   haccq2Mc->GetYaxis()->SetTitleOffset(1.1);
   haccq2Mc->GetYaxis()->SetTitleFont(42);
   haccq2Mc->GetZaxis()->SetLabelFont(42);
   haccq2Mc->GetZaxis()->SetLabelSize(0.035);
   haccq2Mc->GetZaxis()->SetTitleSize(0.035);
   haccq2Mc->GetZaxis()->SetTitleFont(42);
   haccq2Mc->Draw("psame");
   TGaxis *gaxis = new TGaxis(0,0.01,5,0.01,0.3,0.8,5,"-SW");
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
   gaxis = new TGaxis(5,0.01,10,0.01,0.3,0.8,5,"-SUW");
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
   gaxis = new TGaxis(10,0.01,15,0.01,0.3,0.8,5,"-SUW");
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
   TLine *line = new TLine(5,0.01,5,0.08846109);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(10,0.01,10,0.08846109);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
      tex = new TLatex(1,0.03,"Q^{2} #epsilon (1 , 1.33)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(6.443662,0.02775902,"Q^{2} #epsilon (1.33 , 1.77)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(11.79871,0.0431354,"Q^{2} #epsilon (1.77 , 4.1)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.1510172,0.549435,0.3513302,0.6497175,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("haccq2","NoMcut","lp");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("haccq2Mc","Mcut","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
