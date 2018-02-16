{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr  4 14:50:47 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",1,1,1200,876);
   c->SetHighLightColor(2);
   c->Range(0.6125,0.7926656,4.4875,0.8519266);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis2[4] = {1, 1.33, 1.77, 4.1}; 
   
   TH1F *hMRatioProj = new TH1F("hMRatioProj","Multiplicity Ratio (Q2)",3, xAxis2);
   hMRatioProj->SetBinContent(1,0.8010003);
   hMRatioProj->SetBinContent(2,0.8153973);
   hMRatioProj->SetBinContent(3,0.8434708);
   hMRatioProj->SetBinError(1,0.0002585426);
   hMRatioProj->SetBinError(2,0.0002630868);
   hMRatioProj->SetBinError(3,0.0002721445);
   hMRatioProj->SetEntries(3);
   hMRatioProj->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hMRatioProj->SetLineColor(ci);
   hMRatioProj->SetMarkerStyle(8);
   hMRatioProj->GetXaxis()->SetTitle("Q2");
   hMRatioProj->GetXaxis()->SetLabelFont(42);
   hMRatioProj->GetXaxis()->SetLabelSize(0.035);
   hMRatioProj->GetXaxis()->SetTitleSize(0.035);
   hMRatioProj->GetXaxis()->SetTitleFont(42);
   hMRatioProj->GetYaxis()->SetTitle("R(Q2)");
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
   
   TPaveText *pt = new TPaveText(0.2972742,0.9344495,0.7027258,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Multiplicity Ratio (Q2)");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
