{
//=========Macro generated from canvas: cn/cn
//=========  (Tue May  9 15:44:30 2017) by ROOT version5.34/34
   TCanvas *cn = new TCanvas("cn", "cn",1,1,1200,876);
   cn->Range(-0.1875,-38.25257,1.6875,10.31768);
   cn->SetFillColor(0);
   cn->SetBorderMode(0);
   cn->SetBorderSize(2);
   cn->SetGridx();
   cn->SetGridy();
   cn->SetFrameBorderMode(0);
   cn->SetFrameBorderMode(0);
   Double_t xAxis10[7] = {0, 0.1, 0.25, 0.4, 0.55, 0.75, 1.5}; 
   
   TH1F *hC_Taya = new TH1F("hC_Taya","Multiplicity Ratio (Pt2)",6, xAxis10);
   hC_Taya->SetBinContent(1,-4.206074);
   hC_Taya->SetBinContent(2,-1.490082);
   hC_Taya->SetBinContent(3,-1.588853);
   hC_Taya->SetBinContent(4,0.5299338);
   hC_Taya->SetBinContent(5,-7.376074);
   hC_Taya->SetBinContent(6,-23.63012);
   hC_Taya->SetBinError(1,0.000250456);
   hC_Taya->SetBinError(2,0.0002608668);
   hC_Taya->SetBinError(3,0.0002633714);
   hC_Taya->SetBinError(4,0.0002806462);
   hC_Taya->SetBinError(5,0.0002829839);
   hC_Taya->SetBinError(6,0.0002912085);
   hC_Taya->SetMinimum(-33.39555);
   hC_Taya->SetMaximum(5.46065);
   hC_Taya->SetEntries(12);
   hC_Taya->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hC_Taya->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hC_Taya->SetMarkerColor(ci);
   hC_Taya->SetMarkerStyle(22);
   hC_Taya->GetXaxis()->SetTitle("Pt2");
   hC_Taya->GetXaxis()->SetLabelFont(42);
   hC_Taya->GetXaxis()->SetLabelSize(0.035);
   hC_Taya->GetXaxis()->SetTitleSize(0.035);
   hC_Taya->GetXaxis()->SetTitleFont(42);
   hC_Taya->GetYaxis()->SetTitle("R(Pt2)");
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
   Double_t xAxis11[7] = {0, 0.1, 0.25, 0.4, 0.55, 0.75, 1.5}; 
   
   TH1F *hFe_Taya = new TH1F("hFe_Taya","Differences in % of Taya values.",6, xAxis11);
   hFe_Taya->SetBinContent(1,-4.157981);
   hFe_Taya->SetBinContent(2,-2.260227);
   hFe_Taya->SetBinContent(3,-0.2635843);
   hFe_Taya->SetBinContent(4,-4.49212);
   hFe_Taya->SetBinContent(5,-10.80578);
   hFe_Taya->SetBinContent(6,-31.62935);
   hFe_Taya->SetBinError(1,0.0001406771);
   hFe_Taya->SetBinError(2,0.0001462183);
   hFe_Taya->SetBinError(3,0.0001540974);
   hFe_Taya->SetBinError(4,0.0001619406);
   hFe_Taya->SetBinError(5,0.0001693508);
   hFe_Taya->SetBinError(6,0.0001775873);
   hFe_Taya->SetEntries(12);
   hFe_Taya->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hFe_Taya->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hFe_Taya->SetMarkerColor(ci);
   hFe_Taya->SetMarkerStyle(22);
   hFe_Taya->GetXaxis()->SetTitle("Pt2");
   hFe_Taya->GetXaxis()->SetLabelFont(42);
   hFe_Taya->GetXaxis()->SetLabelSize(0.035);
   hFe_Taya->GetXaxis()->SetTitleSize(0.035);
   hFe_Taya->GetXaxis()->SetTitleFont(42);
   hFe_Taya->GetYaxis()->SetTitle("R(Pt2)");
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
   Double_t xAxis12[7] = {0, 0.1, 0.25, 0.4, 0.55, 0.75, 1.5}; 
   
   TH1F *hPb_Taya = new TH1F("hPb_Taya","Multiplicity Ratio (Pt2)",6, xAxis12);
   hPb_Taya->SetBinContent(1,-2.193849);
   hPb_Taya->SetBinContent(2,-0.3844265);
   hPb_Taya->SetBinContent(3,1.470893);
   hPb_Taya->SetBinContent(4,3.69446);
   hPb_Taya->SetBinContent(5,-2.34112);
   hPb_Taya->SetBinContent(6,-11.19939);
   hPb_Taya->SetBinError(1,6.853355e-05);
   hPb_Taya->SetBinError(2,7.099356e-05);
   hPb_Taya->SetBinError(3,7.646611e-05);
   hPb_Taya->SetBinError(4,8.139205e-05);
   hPb_Taya->SetBinError(5,0.0001045398);
   hPb_Taya->SetBinError(6,8.732983e-05);
   hPb_Taya->SetEntries(12);
   hPb_Taya->SetStats(0);
   hPb_Taya->SetMarkerStyle(22);
   hPb_Taya->GetXaxis()->SetTitle("Pt2");
   hPb_Taya->GetXaxis()->SetLabelFont(42);
   hPb_Taya->GetXaxis()->SetLabelSize(0.035);
   hPb_Taya->GetXaxis()->SetTitleSize(0.035);
   hPb_Taya->GetXaxis()->SetTitleFont(42);
   hPb_Taya->GetYaxis()->SetTitle("R(Pt2)");
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
   
   TPaveText *pt = new TPaveText(0.2930936,0.9358257,0.7069064,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Multiplicity Ratio (Pt2)");
   pt->Draw();
   cn->Modified();
   cn->cd();
   cn->SetSelected(cn);
}
