{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 17 12:48:48 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "c",1,1,1200,876);
   c->SetHighLightColor(2);
   c->Range(-0.1875,-0.1944558,1.6875,2.255559);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis2[8] = {0, 0.2, 0.4, 0.6, 0.8, 1, 1.2, 1.5}; 
   
   TH1F *hMRatioProj = new TH1F("hMRatioProj","Multiplicity Ratio (Pt2)",7, xAxis2);
   hMRatioProj->SetBinContent(1,0.6134245);
   hMRatioProj->SetBinContent(2,0.6572257);
   hMRatioProj->SetBinContent(3,0.8790406);
   hMRatioProj->SetBinContent(4,1.008312);
   hMRatioProj->SetBinContent(5,0.8882704);
   hMRatioProj->SetBinContent(6,1.131662);
   hMRatioProj->SetBinContent(7,1.657756);
   hMRatioProj->SetBinError(1,0.008544723);
   hMRatioProj->SetBinError(2,0.02092348);
   hMRatioProj->SetBinError(3,0.05456771);
   hMRatioProj->SetBinError(4,0.8688772);
   hMRatioProj->SetBinError(5,0.1705918);
   hMRatioProj->SetBinError(6,0.3782006);
   hMRatioProj->SetBinError(7,0.2594674);
   hMRatioProj->SetEntries(7);
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
