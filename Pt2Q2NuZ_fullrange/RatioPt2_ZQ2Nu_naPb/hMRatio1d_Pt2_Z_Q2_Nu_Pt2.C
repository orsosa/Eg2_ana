{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr 11 17:19:53 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",1,1,1200,876);
   c->SetHighLightColor(2);
   c->Range(-0.1875,0.4253981,1.6875,0.5444946);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis2[7] = {0, 0.1, 0.25, 0.4, 0.55, 0.75, 1.5}; 
   
   TH1F *hMRatioProj = new TH1F("hMRatioProj","Multiplicity Ratio (Pt2)",6, xAxis2);
   hMRatioProj->SetBinContent(1,0.4417006);
   hMRatioProj->SetBinContent(2,0.4492541);
   hMRatioProj->SetBinContent(3,0.4663544);
   hMRatioProj->SetBinContent(4,0.4958311);
   hMRatioProj->SetBinContent(5,0.5046064);
   hMRatioProj->SetBinContent(6,0.5279607);
   hMRatioProj->SetBinError(1,7.183098e-05);
   hMRatioProj->SetBinError(2,7.305934e-05);
   hMRatioProj->SetBinError(3,7.584043e-05);
   hMRatioProj->SetBinError(4,8.06352e-05);
   hMRatioProj->SetBinError(5,8.21735e-05);
   hMRatioProj->SetBinError(6,8.727659e-05);
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
