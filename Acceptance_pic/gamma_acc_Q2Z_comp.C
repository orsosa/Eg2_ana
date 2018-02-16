{
//=========Macro generated from canvas: c/c
//=========  (Wed Sep 28 03:52:47 2016) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "c",0,66,1280,734);
   c->Range(-3.125,-0.01098443,18.125,0.09885986);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *haccq2 = new TH1F("haccq2","#gamma acceptance",17,-1,16);
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
   haccq2->GetYaxis()->SetTitleOffset(1.2);
   haccq2->GetYaxis()->SetTitleFont(42);
   haccq2->GetZaxis()->SetLabelFont(42);
   haccq2->GetZaxis()->SetLabelSize(0.035);
   haccq2->GetZaxis()->SetTitleSize(0.035);
   haccq2->GetZaxis()->SetTitleFont(42);
   haccq2->Draw("p");
   
   TH1F *haccq2Mc = new TH1F("haccq2Mc","",17,-1,16);
   haccq2Mc->SetBinContent(2,0.01747533);
   haccq2Mc->SetBinContent(3,0.01751237);
   haccq2Mc->SetBinContent(4,0.01932524);
   haccq2Mc->SetBinContent(5,0.01815357);
   haccq2Mc->SetBinContent(6,0.01484814);
   haccq2Mc->SetBinContent(7,0.03556963);
   haccq2Mc->SetBinContent(8,0.038271);
   haccq2Mc->SetBinContent(9,0.03919807);
   haccq2Mc->SetBinContent(10,0.03845643);
   haccq2Mc->SetBinContent(11,0.03332929);
   haccq2Mc->SetBinContent(12,0.0515168);
   haccq2Mc->SetBinContent(13,0.05566468);
   haccq2Mc->SetBinContent(14,0.05974471);
   haccq2Mc->SetBinContent(15,0.05909117);
   haccq2Mc->SetBinContent(16,0.04345784);
   haccq2Mc->SetEntries(15);
   haccq2Mc->SetStats(0);

   ci = TColor::GetColor("#000099");
   haccq2Mc->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   haccq2Mc->SetMarkerColor(ci);
   haccq2Mc->SetMarkerStyle(8);
   haccq2Mc->GetXaxis()->SetLabelFont(42);
   haccq2Mc->GetXaxis()->SetLabelSize(0.035);
   haccq2Mc->GetXaxis()->SetTitleSize(0.035);
   haccq2Mc->GetXaxis()->SetTitleFont(42);
   haccq2Mc->GetYaxis()->SetLabelFont(42);
   haccq2Mc->GetYaxis()->SetLabelSize(0.035);
   haccq2Mc->GetYaxis()->SetTitleSize(0.035);
   haccq2Mc->GetYaxis()->SetTitleFont(42);
   haccq2Mc->GetZaxis()->SetLabelFont(42);
   haccq2Mc->GetZaxis()->SetLabelSize(0.035);
   haccq2Mc->GetZaxis()->SetTitleSize(0.035);
   haccq2Mc->GetZaxis()->SetTitleFont(42);
   haccq2Mc->Draw("psame");
   
   TLegend *leg = new TLegend(0.1340852,0.7003484,0.5588972,0.8362369,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("haccq2Mc","#gamma in #pi_{0} Mass cut","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("haccq2","all #gamma ","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.3765664,0.912892,0.6234336,0.9703833,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("#gamma acceptance");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
