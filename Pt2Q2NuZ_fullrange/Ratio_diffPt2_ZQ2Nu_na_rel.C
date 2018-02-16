{
//=========Macro generated from canvas: cn/cn
//=========  (Tue Apr 11 17:25:34 2017) by ROOT version5.34/19
   TCanvas *cn = new TCanvas("cn", "cn",1,1,1200,876);
   cn->Range(-0.1875,-43.47151,1.6875,10.28422);
   cn->SetFillColor(0);
   cn->SetBorderMode(0);
   cn->SetBorderSize(2);
   cn->SetGridx();
   cn->SetGridy();
   cn->SetFrameBorderMode(0);
   cn->SetFrameBorderMode(0);
   Double_t xAxis10[7] = {0, 0.1, 0.25, 0.4, 0.55, 0.75, 1.5}; 
   
   TH1F *hC_Taya = new TH1F("hC_Taya","Multiplicity Ratio (Pt2)",6, xAxis10);
   hC_Taya->SetBinContent(1,-1.341935);
   hC_Taya->SetBinContent(2,-1.948709);
   hC_Taya->SetBinContent(3,-0.6629054);
   hC_Taya->SetBinContent(4,-3.663691);
   hC_Taya->SetBinContent(5,-10.59036);
   hC_Taya->SetBinContent(6,-24.56);
   hC_Taya->SetBinError(1,0.0002579444);
   hC_Taya->SetBinError(2,0.0002596471);
   hC_Taya->SetBinError(3,0.0002658495);
   hC_Taya->SetBinError(4,0.0002683714);
   hC_Taya->SetBinError(5,0.0002731638);
   hC_Taya->SetBinError(6,0.0002887751);
   hC_Taya->SetMinimum(-38.09594);
   hC_Taya->SetMaximum(4.908649);
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
   hFe_Taya->SetBinContent(1,-0.9524173);
   hFe_Taya->SetBinContent(2,-2.71093);
   hFe_Taya->SetBinContent(3,-1.381781);
   hFe_Taya->SetBinContent(4,-6.510586);
   hFe_Taya->SetBinContent(5,-14.56186);
   hFe_Taya->SetBinContent(6,-36.14118);
   hFe_Taya->SetBinError(1,0.0001453823);
   hFe_Taya->SetBinError(2,0.0001455441);
   hFe_Taya->SetBinError(3,0.0001523697);
   hFe_Taya->SetBinError(4,0.0001585182);
   hFe_Taya->SetBinError(5,0.0001622193);
   hFe_Taya->SetBinError(6,0.0001658328);
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
   hPb_Taya->SetBinContent(1,2.511995);
   hPb_Taya->SetBinContent(2,2.514193);
   hPb_Taya->SetBinContent(3,0.6405892);
   hPb_Taya->SetBinContent(4,2.953896);
   hPb_Taya->SetBinContent(5,-7.397732);
   hPb_Taya->SetBinContent(6,-12.69278);
   hPb_Taya->SetBinError(1,7.183098e-05);
   hPb_Taya->SetBinError(2,7.305934e-05);
   hPb_Taya->SetBinError(3,7.584043e-05);
   hPb_Taya->SetBinError(4,8.06352e-05);
   hPb_Taya->SetBinError(5,8.21735e-05);
   hPb_Taya->SetBinError(6,8.727659e-05);
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
