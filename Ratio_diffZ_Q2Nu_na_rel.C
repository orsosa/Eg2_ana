{
//=========Macro generated from canvas: cn/cn
//=========  (Tue Apr  4 14:51:07 2017) by ROOT version5.34/36
   TCanvas *cn = new TCanvas("cn", "cn",1,1,1200,876);
   cn->Range(0.2125,-16.51513,1.0875,53.1891);
   cn->SetFillColor(0);
   cn->SetBorderMode(0);
   cn->SetBorderSize(2);
   cn->SetGridx();
   cn->SetGridy();
   cn->SetFrameBorderMode(0);
   cn->SetFrameBorderMode(0);
   Double_t xAxis10[7] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 1}; 
   
   TH1F *hC_Taya = new TH1F("hC_Taya","Multiplicity Ratio (Z)",6, xAxis10);
   hC_Taya->SetBinContent(1,0.876129);
   hC_Taya->SetBinContent(2,-1.161213);
   hC_Taya->SetBinContent(3,-4.03865);
   hC_Taya->SetBinContent(4,-4.443779);
   hC_Taya->SetBinContent(5,-2.711723);
   hC_Taya->SetBinContent(6,3.301926);
   hC_Taya->SetBinError(1,0.0002763073);
   hC_Taya->SetBinError(2,0.0002677135);
   hC_Taya->SetBinError(3,0.000263977);
   hC_Taya->SetBinError(4,0.0002633135);
   hC_Taya->SetBinError(5,0.0002564085);
   hC_Taya->SetBinError(6,0.0002503384);
   hC_Taya->SetMinimum(-9.544707);
   hC_Taya->SetMaximum(46.21867);
   hC_Taya->SetEntries(12);
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
   Double_t xAxis11[7] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 1}; 
   
   TH1F *hFe_Taya = new TH1F("hFe_Taya","Differences in % of Taya values.",6, xAxis11);
   hFe_Taya->SetBinContent(1,0.3510432);
   hFe_Taya->SetBinContent(2,-2.893886);
   hFe_Taya->SetBinContent(3,-3.704299);
   hFe_Taya->SetBinContent(4,-7.010008);
   hFe_Taya->SetBinContent(5,-1.873232);
   hFe_Taya->SetBinContent(6,11.88126);
   hFe_Taya->SetBinError(1,0.0001629018);
   hFe_Taya->SetBinError(2,0.0001556721);
   hFe_Taya->SetBinError(3,0.0001514584);
   hFe_Taya->SetBinError(4,0.0001456995);
   hFe_Taya->SetBinError(5,0.0001471169);
   hFe_Taya->SetBinError(6,0.0001441909);
   hFe_Taya->SetEntries(12);
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
   Double_t xAxis12[7] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 1}; 
   
   TH1F *hPb_Taya = new TH1F("hPb_Taya","Multiplicity Ratio (Z)",6, xAxis12);
   hPb_Taya->SetBinContent(1,4.113176);
   hPb_Taya->SetBinContent(2,-1.610817);
   hPb_Taya->SetBinContent(3,1.475167);
   hPb_Taya->SetBinContent(4,2.701152);
   hPb_Taya->SetBinContent(5,13.87508);
   hPb_Taya->SetBinContent(6,43.68398);
   hPb_Taya->SetBinError(1,8.35302e-05);
   hPb_Taya->SetBinError(2,7.743546e-05);
   hPb_Taya->SetBinError(3,7.683493e-05);
   hPb_Taya->SetBinError(4,7.916442e-05);
   hPb_Taya->SetBinError(5,7.124947e-05);
   hPb_Taya->SetBinError(6,7.08792e-05);
   hPb_Taya->SetEntries(12);
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
