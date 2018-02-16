{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct  4 02:13:20 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-1.875,0.006821654,16.875,0.09720657);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *haccq2er = new TH1F("haccq2er","",15,0,15);
   haccq2er->SetBinContent(1,0.01928932);
   haccq2er->SetBinContent(2,0.02175061);
   haccq2er->SetBinContent(3,0.02361882);
   haccq2er->SetBinContent(4,0.02465131);
   haccq2er->SetBinContent(5,0.02296586);
   haccq2er->SetBinContent(6,0.03848093);
   haccq2er->SetBinContent(7,0.04596224);
   haccq2er->SetBinContent(8,0.05115104);
   haccq2er->SetBinContent(9,0.0535658);
   haccq2er->SetBinContent(10,0.05314918);
   haccq2er->SetBinContent(11,0.05826975);
   haccq2er->SetBinContent(12,0.06957334);
   haccq2er->SetBinContent(13,0.07739189);
   haccq2er->SetBinContent(14,0.08369089);
   haccq2er->SetBinContent(15,0.07888673);
   haccq2er->SetBinError(1,0.0001499012);
   haccq2er->SetBinError(2,0.0002124661);
   haccq2er->SetBinError(3,0.0002847603);
   haccq2er->SetBinError(4,0.0003671191);
   haccq2er->SetBinError(5,0.0004410217);
   haccq2er->SetBinError(6,0.0002731396);
   haccq2er->SetBinError(7,0.0004001181);
   haccq2er->SetBinError(8,0.0005458661);
   haccq2er->SetBinError(9,0.0007031625);
   haccq2er->SetBinError(10,0.0008731681);
   haccq2er->SetBinError(11,0.0003909611);
   haccq2er->SetBinError(12,0.0005750895);
   haccq2er->SetBinError(13,0.0007891517);
   haccq2er->SetBinError(14,0.001033955);
   haccq2er->SetBinError(15,0.001237815);
   haccq2er->SetEntries(87338.94);
   haccq2er->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   haccq2er->SetLineColor(ci);
   haccq2er->SetMarkerStyle(8);
   haccq2er->GetXaxis()->SetLabelFont(42);
   haccq2er->GetXaxis()->SetLabelSize(0.035);
   haccq2er->GetXaxis()->SetTitleSize(0.035);
   haccq2er->GetXaxis()->SetTitleFont(42);
   haccq2er->GetYaxis()->SetLabelFont(42);
   haccq2er->GetYaxis()->SetLabelSize(0.035);
   haccq2er->GetYaxis()->SetTitleSize(0.035);
   haccq2er->GetYaxis()->SetTitleFont(42);
   haccq2er->GetZaxis()->SetLabelFont(42);
   haccq2er->GetZaxis()->SetLabelSize(0.035);
   haccq2er->GetZaxis()->SetTitleSize(0.035);
   haccq2er->GetZaxis()->SetTitleFont(42);
   haccq2er->Draw("pL");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
