{
//=========Macro generated from canvas: c/c
//=========  (Tue Jan 24 11:41:56 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",1,1,1200,876);
   c->SetHighLightColor(2);
   c->Range(0.2375,1.615589,0.8625,1.750037);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis5[6] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8}; 
   
   TH1F *hMRatioProj = new TH1F("hMRatioProj","Multiplicity Ratio (Z)",5, xAxis5);
   hMRatioProj->SetBinContent(1,1.724185);
   hMRatioProj->SetBinContent(2,1.731063);
   hMRatioProj->SetBinContent(3,1.6349);
   hMRatioProj->SetBinContent(4,1.649733);
   hMRatioProj->SetBinContent(5,1.634297);
   hMRatioProj->SetBinError(1,0.0004063441);
   hMRatioProj->SetBinError(2,0.000407965);
   hMRatioProj->SetBinError(3,0.0003853019);
   hMRatioProj->SetBinError(4,0.0003887978);
   hMRatioProj->SetBinError(5,0.0003851599);
   hMRatioProj->SetEntries(5);
   hMRatioProj->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hMRatioProj->SetLineColor(ci);
   hMRatioProj->SetMarkerStyle(8);
   hMRatioProj->GetXaxis()->SetTitle("Z");
   hMRatioProj->GetXaxis()->SetLabelFont(42);
   hMRatioProj->GetXaxis()->SetLabelSize(0.035);
   hMRatioProj->GetXaxis()->SetTitleSize(0.035);
   hMRatioProj->GetXaxis()->SetTitleFont(42);
   hMRatioProj->GetYaxis()->SetTitle("R(Z)");
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
   
   TPaveText *pt = new TPaveText(0.3110702,0.9358257,0.6889298,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Multiplicity Ratio (Z)");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
