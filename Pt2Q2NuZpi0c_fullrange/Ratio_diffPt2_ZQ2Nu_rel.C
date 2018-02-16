{
//=========Macro generated from canvas: cn/cn
//=========  (Wed May 10 11:18:56 2017) by ROOT version5.34/34
   TCanvas *cn = new TCanvas("cn", "cn",1,1,1200,876);
   cn->Range(-0.1875,-42.90398,1.6875,12.45353);
   cn->SetFillColor(0);
   cn->SetBorderMode(0);
   cn->SetBorderSize(2);
   cn->SetGridx();
   cn->SetGridy();
   cn->SetFrameBorderMode(0);
   cn->SetFrameBorderMode(0);
   Double_t xAxis10[7] = {0, 0.1, 0.25, 0.4, 0.55, 0.75, 1.5}; 
   
   TH1F *hC_Taya = new TH1F("hC_Taya","Multiplicity Ratio (Pt2)",6, xAxis10);
   hC_Taya->SetBinContent(1,4.904779);
   hC_Taya->SetBinContent(2,1.330825);
   hC_Taya->SetBinContent(3,-0.00249353);
   hC_Taya->SetBinContent(4,-5.417476);
   hC_Taya->SetBinContent(5,-3.734145);
   hC_Taya->SetBinContent(6,-27.89371);
   hC_Taya->SetBinError(1,0.0002742766);
   hC_Taya->SetBinError(2,0.0002683316);
   hC_Taya->SetBinError(3,0.0002676169);
   hC_Taya->SetBinError(4,0.0002634853);
   hC_Taya->SetBinError(5,0.0002941091);
   hC_Taya->SetBinError(6,0.0002749502);
   hC_Taya->SetMinimum(-37.36823);
   hC_Taya->SetMaximum(6.91778);
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
   hFe_Taya->SetBinContent(1,3.529418);
   hFe_Taya->SetBinContent(2,-0.5270779);
   hFe_Taya->SetBinContent(3,-1.315109);
   hFe_Taya->SetBinContent(4,-8.873374);
   hFe_Taya->SetBinContent(5,-7.674464);
   hFe_Taya->SetBinContent(6,-35.35523);
   hFe_Taya->SetBinError(1,0.0001519607);
   hFe_Taya->SetBinError(2,0.0001488111);
   hFe_Taya->SetBinError(3,0.0001524727);
   hFe_Taya->SetBinError(4,0.0001545117);
   hFe_Taya->SetBinError(5,0.0001752955);
   hFe_Taya->SetBinError(6,0.0001678732);
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
   hPb_Taya->SetBinContent(1,3.030261);
   hPb_Taya->SetBinContent(2,4.035952);
   hPb_Taya->SetBinContent(3,0.4999532);
   hPb_Taya->SetBinContent(4,1.106097);
   hPb_Taya->SetBinContent(5,-0.3972345);
   hPb_Taya->SetBinContent(6,-14.04576);
   hPb_Taya->SetBinError(1,7.219408e-05);
   hPb_Taya->SetBinError(2,7.414381e-05);
   hPb_Taya->SetBinError(3,7.573423e-05);
   hPb_Taya->SetBinError(4,7.918687e-05);
   hPb_Taya->SetBinError(5,8.826449e-05);
   hPb_Taya->SetBinError(6,8.452831e-05);
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
