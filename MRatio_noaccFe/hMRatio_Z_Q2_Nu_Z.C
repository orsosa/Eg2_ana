{
//=========Macro generated from canvas: c/c
//=========  (Tue Jan 10 12:54:14 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",1,1,1200,876);
   c->SetHighLightColor(2);
   c->Range(0.2375,0.8491883,0.8625,1.162617);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis5[6] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8}; 
   
   TH1F *hMRatioProj = new TH1F("hMRatioProj","Multiplicity Ratio (Z)",5, xAxis5);
   hMRatioProj->SetBinContent(1,1.085667);
   hMRatioProj->SetBinContent(2,1.039629);
   hMRatioProj->SetBinContent(3,0.9975796);
   hMRatioProj->SetBinContent(4,0.9699824);
   hMRatioProj->SetBinContent(5,0.9487234);
   hMRatioProj->SetBinError(1,0.03366656);
   hMRatioProj->SetBinError(2,0.03459086);
   hMRatioProj->SetBinError(3,0.03822099);
   hMRatioProj->SetBinError(4,0.04437404);
   hMRatioProj->SetBinError(5,0.05682068);
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
