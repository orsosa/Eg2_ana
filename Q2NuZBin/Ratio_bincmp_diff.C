{
//=========Macro generated from canvas: cn/cn
//=========  (Tue Jan 31 17:35:55 2017) by ROOT version5.34/34
   TCanvas *cn = new TCanvas("cn", "cn",1,1,1200,876);
   cn->Range(0.2375,-0.008457389,0.8625,0.02637008);
   cn->SetFillColor(0);
   cn->SetBorderMode(0);
   cn->SetBorderSize(2);
   cn->SetGridx();
   cn->SetGridy();
   cn->SetFrameBorderMode(0);
   cn->SetFrameBorderMode(0);
   Double_t xAxis7[6] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8}; 
   
   TH1F *hd = new TH1F("hd","Multiplicity Ratio (Z)",5, xAxis7);
   hd->SetBinContent(1,-0.0004568696);
   hd->SetBinContent(2,-0.003318131);
   hd->SetBinContent(3,0.01322615);
   hd->SetBinContent(4,0.007914901);
   hd->SetBinContent(5,0.02118403);
   hd->SetBinError(1,0.0003920173);
   hd->SetBinError(2,0.0003929294);
   hd->SetBinError(3,0.0003748455);
   hd->SetBinError(4,0.0003769995);
   hd->SetBinError(5,0.0003765432);
   hd->SetEntries(2028.835);
   hd->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hd->SetLineColor(ci);
   hd->SetMarkerStyle(8);
   hd->GetXaxis()->SetTitle("Z");
   hd->GetXaxis()->SetLabelFont(42);
   hd->GetXaxis()->SetLabelSize(0.035);
   hd->GetXaxis()->SetTitleSize(0.035);
   hd->GetXaxis()->SetTitleFont(42);
   hd->GetYaxis()->SetTitle("R(Z)");
   hd->GetYaxis()->SetLabelFont(42);
   hd->GetYaxis()->SetLabelSize(0.035);
   hd->GetYaxis()->SetTitleSize(0.035);
   hd->GetYaxis()->SetTitleOffset(1.1);
   hd->GetYaxis()->SetTitleFont(42);
   hd->GetZaxis()->SetLabelFont(42);
   hd->GetZaxis()->SetLabelSize(0.035);
   hd->GetZaxis()->SetTitleSize(0.035);
   hd->GetZaxis()->SetTitleFont(42);
   hd->Draw("");
   
   TPaveText *pt = new TPaveText(0.3110702,0.9358257,0.6889298,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Multiplicity Ratio (Z)");
   pt->Draw();
   cn->Modified();
   cn->cd();
   cn->SetSelected(cn);
}
