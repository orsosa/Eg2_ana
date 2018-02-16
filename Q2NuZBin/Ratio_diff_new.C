{
//=========Macro generated from canvas: cn/cn
//=========  (Tue Jan 31 05:49:17 2017) by ROOT version5.34/34
   TCanvas *cn = new TCanvas("cn", "cn",1,1,1200,876);
   cn->Range(0.2375,-0.08944531,0.8625,0.02082991);
   cn->SetFillColor(0);
   cn->SetBorderMode(0);
   cn->SetBorderSize(2);
   cn->SetGridx();
   cn->SetGridy();
   cn->SetFrameBorderMode(0);
   cn->SetFrameBorderMode(0);
   Double_t xAxis7[6] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8}; 
   
   TH1F *hC_Taya = new TH1F("hC_Taya","Multiplicity Ratio (Z)",5, xAxis7);
   hC_Taya->SetBinContent(1,-0.0153774);
   hC_Taya->SetBinContent(2,-0.002519727);
   hC_Taya->SetBinContent(3,-0.05592674);
   hC_Taya->SetBinContent(4,-0.06282568);
   hC_Taya->SetBinContent(5,-0.01406509);
   hC_Taya->SetBinContent(6,-0.754754);
   hC_Taya->SetBinError(1,0.007757871);
   hC_Taya->SetBinError(2,0.008121156);
   hC_Taya->SetBinError(3,0.00978094);
   hC_Taya->SetBinError(4,0.0115912);
   hC_Taya->SetBinError(5,0.01380133);
   hC_Taya->SetBinError(6,0.013056);
   hC_Taya->SetEntries(0.1507146);
   hC_Taya->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hC_Taya->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hC_Taya->SetMarkerColor(ci);
   hC_Taya->SetMarkerStyle(22);
   hC_Taya->GetXaxis()->SetTitle("Z");
   hC_Taya->GetXaxis()->SetLabelFont(42);
   hC_Taya->GetXaxis()->SetLabelSize(0.035);
   hC_Taya->GetXaxis()->SetTitleSize(0.035);
   hC_Taya->GetXaxis()->SetTitleFont(42);
   hC_Taya->GetYaxis()->SetTitle("R(Z)");
   hC_Taya->GetYaxis()->SetLabelFont(42);
   hC_Taya->GetYaxis()->SetLabelSize(0.035);
   hC_Taya->GetYaxis()->SetTitleSize(0.035);
   hC_Taya->GetYaxis()->SetTitleOffset(1.1);
   hC_Taya->GetYaxis()->SetTitleFont(42);
   hC_Taya->GetZaxis()->SetLabelFont(42);
   hC_Taya->GetZaxis()->SetLabelSize(0.035);
   hC_Taya->GetZaxis()->SetTitleSize(0.035);
   hC_Taya->GetZaxis()->SetTitleFont(42);
   hC_Taya->Draw("p");
   Double_t xAxis8[6] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8}; 
   
   TH1F *hFe_Taya = new TH1F("hFe_Taya","Differences",5, xAxis8);
   hFe_Taya->SetBinContent(1,-0.003784597);
   hFe_Taya->SetBinContent(2,0.0002706051);
   hFe_Taya->SetBinContent(3,-0.02430105);
   hFe_Taya->SetBinContent(4,-0.05666089);
   hFe_Taya->SetBinContent(5,0.001299739);
   hFe_Taya->SetBinContent(6,-0.511524);
   hFe_Taya->SetBinError(1,0.004871095);
   hFe_Taya->SetBinError(2,0.004995139);
   hFe_Taya->SetBinError(3,0.005770686);
   hFe_Taya->SetBinError(4,0.006881096);
   hFe_Taya->SetBinError(5,0.007911133);
   hFe_Taya->SetBinError(6,0.00714276);
   hFe_Taya->SetEntries(0.0831762);
   hFe_Taya->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hFe_Taya->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hFe_Taya->SetMarkerColor(ci);
   hFe_Taya->SetMarkerStyle(22);
   hFe_Taya->GetXaxis()->SetTitle("Z");
   hFe_Taya->GetXaxis()->SetLabelFont(42);
   hFe_Taya->GetXaxis()->SetLabelSize(0.035);
   hFe_Taya->GetXaxis()->SetTitleSize(0.035);
   hFe_Taya->GetXaxis()->SetTitleFont(42);
   hFe_Taya->GetYaxis()->SetTitle("R(Z)");
   hFe_Taya->GetYaxis()->SetLabelFont(42);
   hFe_Taya->GetYaxis()->SetLabelSize(0.035);
   hFe_Taya->GetYaxis()->SetTitleSize(0.035);
   hFe_Taya->GetYaxis()->SetTitleOffset(1.1);
   hFe_Taya->GetYaxis()->SetTitleFont(42);
   hFe_Taya->GetZaxis()->SetLabelFont(42);
   hFe_Taya->GetZaxis()->SetLabelSize(0.035);
   hFe_Taya->GetZaxis()->SetTitleSize(0.035);
   hFe_Taya->GetZaxis()->SetTitleFont(42);
   hFe_Taya->Draw("samep");
   Double_t xAxis9[6] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8}; 
   
   TH1F *hPb_Taya = new TH1F("hPb_Taya","Multiplicity Ratio (Z)",5, xAxis9);
   hPb_Taya->SetBinContent(1,-0.1355679);
   hPb_Taya->SetBinContent(2,-0.1459806);
   hPb_Taya->SetBinContent(3,-0.1591583);
   hPb_Taya->SetBinContent(4,-0.1821023);
   hPb_Taya->SetBinContent(5,-0.1517648);
   hPb_Taya->SetBinContent(6,-0.511524);
   hPb_Taya->SetBinError(1,0.004869081);
   hPb_Taya->SetBinError(2,0.004993182);
   hPb_Taya->SetBinError(3,0.005769142);
   hPb_Taya->SetBinError(4,0.006879897);
   hPb_Taya->SetBinError(5,0.007909995);
   hPb_Taya->SetBinError(6,0.00714276);
   hPb_Taya->SetEntries(0.7745739);
   hPb_Taya->SetStats(0);
   hPb_Taya->SetMarkerStyle(22);
   hPb_Taya->GetXaxis()->SetTitle("Z");
   hPb_Taya->GetXaxis()->SetLabelFont(42);
   hPb_Taya->GetXaxis()->SetLabelSize(0.035);
   hPb_Taya->GetXaxis()->SetTitleSize(0.035);
   hPb_Taya->GetXaxis()->SetTitleFont(42);
   hPb_Taya->GetYaxis()->SetTitle("R(Z)");
   hPb_Taya->GetYaxis()->SetLabelFont(42);
   hPb_Taya->GetYaxis()->SetLabelSize(0.035);
   hPb_Taya->GetYaxis()->SetTitleSize(0.035);
   hPb_Taya->GetYaxis()->SetTitleOffset(1.1);
   hPb_Taya->GetYaxis()->SetTitleFont(42);
   hPb_Taya->GetZaxis()->SetLabelFont(42);
   hPb_Taya->GetZaxis()->SetLabelSize(0.035);
   hPb_Taya->GetZaxis()->SetTitleSize(0.035);
   hPb_Taya->GetZaxis()->SetTitleFont(42);
   hPb_Taya->Draw("samep");
   
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
