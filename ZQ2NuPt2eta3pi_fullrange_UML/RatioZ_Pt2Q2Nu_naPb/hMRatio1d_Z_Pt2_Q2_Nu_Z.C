{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 24 17:46:17 2017) by ROOT version5.34/36
   TCanvas *c = new TCanvas("c", "c",1,1,1200,876);
   c->SetHighLightColor(2);
   c->Range(0.4375,0.2915706,1.0625,0.5208089);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis2[6] = {0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *hMRatioProj = new TH1F("hMRatioProj","Multiplicity Ratio (Z)",5, xAxis2);
   hMRatioProj->SetBinContent(1,0.4624585);
   hMRatioProj->SetBinContent(2,0.4555582);
   hMRatioProj->SetBinContent(3,0.4382878);
   hMRatioProj->SetBinContent(4,0.3402162);
   hMRatioProj->SetBinContent(5,0.328128);
   hMRatioProj->SetBinError(1,0.02669368);
   hMRatioProj->SetBinError(2,0.007888087);
   hMRatioProj->SetBinError(3,0.005658234);
   hMRatioProj->SetBinError(4,9.736512e-05);
   hMRatioProj->SetBinError(5,0.005316555);
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
