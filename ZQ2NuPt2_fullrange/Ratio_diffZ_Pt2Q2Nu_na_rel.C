{
//=========Macro generated from canvas: cn/cn
//=========  (Tue Apr 11 18:12:49 2017) by ROOT version5.34/19
   TCanvas *cn = new TCanvas("cn", "cn",1,1,1200,876);
   cn->Range(0.2125,-17.01953,1.0875,46.10886);
   cn->SetFillColor(0);
   cn->SetBorderMode(0);
   cn->SetBorderSize(2);
   cn->SetGridx();
   cn->SetGridy();
   cn->SetFrameBorderMode(0);
   cn->SetFrameBorderMode(0);
   Double_t xAxis10[7] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 1}; 
   
   TH1F *hC_Taya = new TH1F("hC_Taya","Multiplicity Ratio (Z)",6, xAxis10);
   hC_Taya->SetBinContent(1,0.6081263);
   hC_Taya->SetBinContent(2,-1.59009);
   hC_Taya->SetBinContent(3,-4.564094);
   hC_Taya->SetBinContent(4,-5.492499);
   hC_Taya->SetBinContent(5,-2.991627);
   hC_Taya->SetBinContent(6,2.700489);
   hC_Taya->SetBinError(1,0.0002755731);
   hC_Taya->SetBinError(2,0.0002665519);
   hC_Taya->SetBinError(3,0.0002625316);
   hC_Taya->SetBinError(4,0.0002604237);
   hC_Taya->SetBinError(5,0.0002583154);
   hC_Taya->SetBinError(6,0.0002485437);
   hC_Taya->SetMinimum(-10.70669);
   hC_Taya->SetMaximum(39.79602);
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
   hFe_Taya->SetBinContent(1,-0.3514878);
   hFe_Taya->SetBinContent(2,-3.603968);
   hFe_Taya->SetBinContent(3,-4.677135);
   hFe_Taya->SetBinContent(4,-8.411113);
   hFe_Taya->SetBinContent(5,-4.387123);
   hFe_Taya->SetBinContent(6,6.863704);
   hFe_Taya->SetBinError(1,0.0001617613);
   hFe_Taya->SetBinError(2,0.0001545338);
   hFe_Taya->SetBinError(3,0.0001499283);
   hFe_Taya->SetBinError(4,0.0001435042);
   hFe_Taya->SetBinError(5,0.0001428462);
   hFe_Taya->SetBinError(6,0.0001377251);
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
   hPb_Taya->SetBinContent(1,3.295624);
   hPb_Taya->SetBinContent(2,-2.50019);
   hPb_Taya->SetBinContent(3,0.1854192);
   hPb_Taya->SetBinContent(4,1.265191);
   hPb_Taya->SetBinContent(5,11.39281);
   hPb_Taya->SetBinContent(6,37.50045);
   hPb_Taya->SetBinError(1,8.287428e-05);
   hPb_Taya->SetBinError(2,7.673552e-05);
   hPb_Taya->SetBinError(3,7.585841e-05);
   hPb_Taya->SetBinError(4,7.404307e-05);
   hPb_Taya->SetBinError(5,6.969741e-05);
   hPb_Taya->SetBinError(6,6.784913e-05);
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
