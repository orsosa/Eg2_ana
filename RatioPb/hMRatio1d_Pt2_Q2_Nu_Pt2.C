{
//=========Macro generated from canvas: c/c
//=========  (Tue Jan 31 23:58:03 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",1,1,1200,876);
   c->SetHighLightColor(2);
   c->Range(-0.1125,0.4502701,1.0125,0.4856812);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis2[7] = {0, 0.1, 0.25, 0.4, 0.55, 0.75, 0.9}; 
   
   TH1F *hMRatioProj = new TH1F("hMRatioProj","Multiplicity Ratio (Pt2)",6, xAxis2);
   hMRatioProj->SetBinContent(1,0.480713);
   hMRatioProj->SetBinContent(2,0.475726);
   hMRatioProj->SetBinContent(3,0.4657758);
   hMRatioProj->SetBinContent(4,0.4660892);
   hMRatioProj->SetBinContent(5,0.45517);
   hMRatioProj->SetBinContent(6,0.4690224);
   hMRatioProj->SetBinError(1,7.817525e-05);
   hMRatioProj->SetBinError(2,7.736425e-05);
   hMRatioProj->SetBinError(3,7.574611e-05);
   hMRatioProj->SetBinError(4,7.579708e-05);
   hMRatioProj->SetBinError(5,7.402136e-05);
   hMRatioProj->SetBinError(6,7.627413e-05);
   hMRatioProj->SetEntries(6);
   hMRatioProj->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hMRatioProj->SetLineColor(ci);
   hMRatioProj->SetMarkerStyle(8);
   hMRatioProj->GetXaxis()->SetTitle("Pt2");
   hMRatioProj->GetXaxis()->SetLabelFont(42);
   hMRatioProj->GetXaxis()->SetLabelSize(0.035);
   hMRatioProj->GetXaxis()->SetTitleSize(0.035);
   hMRatioProj->GetXaxis()->SetTitleFont(42);
   hMRatioProj->GetYaxis()->SetTitle("R(Pt2)");
   hMRatioProj->GetYaxis()->SetLabelFont(42);
   hMRatioProj->GetYaxis()->SetLabelSize(0.035);
   hMRatioProj->GetYaxis()->SetTitleSize(0.035);
   hMRatioProj->GetYaxis()->SetTitleOffset(1.1);
   hMRatioProj->GetYaxis()->SetTitleFont(42);
   hMRatioProj->GetZaxis()->SetLabelFont(42);
   hMRatioProj->GetZaxis()->SetLabelSize(0.035);
   hMRatioProj->GetZaxis()->SetTitleSize(0.035);
   hMRatioProj->GetZaxis()->SetTitleFont(42);
   hMRatioProj->Draw("ep");
   
   TPaveText *pt = new TPaveText(0.2930936,0.9358257,0.7069064,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Multiplicity Ratio (Pt2)");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
