{
//=========Macro generated from canvas: c/c
//=========  (Tue Jan 24 11:41:56 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",1,1,1200,876);
   c->SetHighLightColor(2);
   c->Range(0.2375,4.798531,0.8625,5.31602);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis4[6] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8}; 
   
   TH1D *hMR_Z = new TH1D("hMR_Z","Multiplicity Ratio (Z)",5, xAxis4);
   hMR_Z->SetBinContent(1,5.211373);
   hMR_Z->SetBinContent(2,5.198928);
   hMR_Z->SetBinContent(3,4.966642);
   hMR_Z->SetBinContent(4,4.971926);
   hMR_Z->SetBinContent(5,4.911624);
   hMR_Z->SetBinError(1,0.03318403);
   hMR_Z->SetBinError(2,0.03461369);
   hMR_Z->SetBinError(3,0.0352313);
   hMR_Z->SetBinError(4,0.03836509);
   hMR_Z->SetBinError(5,0.04256954);
   hMR_Z->SetEntries(14.97535);
   hMR_Z->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hMR_Z->SetLineColor(ci);
   hMR_Z->SetMarkerStyle(8);
   hMR_Z->GetXaxis()->SetTitle("Z");
   hMR_Z->GetXaxis()->SetLabelFont(42);
   hMR_Z->GetXaxis()->SetLabelSize(0.035);
   hMR_Z->GetXaxis()->SetTitleSize(0.035);
   hMR_Z->GetXaxis()->SetTitleFont(42);
   hMR_Z->GetYaxis()->SetTitle("R");
   hMR_Z->GetYaxis()->SetLabelFont(42);
   hMR_Z->GetYaxis()->SetLabelSize(0.035);
   hMR_Z->GetYaxis()->SetTitleSize(0.035);
   hMR_Z->GetYaxis()->SetTitleOffset(1.1);
   hMR_Z->GetYaxis()->SetTitleFont(42);
   hMR_Z->GetZaxis()->SetLabelFont(42);
   hMR_Z->GetZaxis()->SetLabelSize(0.035);
   hMR_Z->GetZaxis()->SetTitleSize(0.035);
   hMR_Z->GetZaxis()->SetTitleFont(42);
   hMR_Z->Draw("ep");
   
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
