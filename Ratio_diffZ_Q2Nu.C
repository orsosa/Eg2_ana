{
//=========Macro generated from canvas: cn/cn
//=========  (Tue Apr  4 14:38:15 2017) by ROOT version5.34/36
   TCanvas *cn = new TCanvas("cn", "cn",1,1,1200,876);
   cn->Range(0.2125,-0.05848752,1.0875,0.1502756);
   cn->SetFillColor(0);
   cn->SetBorderMode(0);
   cn->SetBorderSize(2);
   cn->SetGridx();
   cn->SetGridy();
   cn->SetFrameBorderMode(0);
   cn->SetFrameBorderMode(0);
   Double_t xAxis7[7] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 1}; 
   
   TH1F *hC_Taya = new TH1F("hC_Taya","Multiplicity Ratio (Z)",6, xAxis7);
   hC_Taya->SetBinContent(1,0.009977221);
   hC_Taya->SetBinContent(2,0.01998699);
   hC_Taya->SetBinContent(3,-0.02449971);
   hC_Taya->SetBinContent(4,-0.0238874);
   hC_Taya->SetBinContent(5,0.01976675);
   hC_Taya->SetBinContent(6,-0.01145941);
   hC_Taya->SetBinError(1,0.0002771265);
   hC_Taya->SetBinError(2,0.0002773075);
   hC_Taya->SetBinError(3,0.0002671819);
   hC_Taya->SetBinError(4,0.0002678512);
   hC_Taya->SetBinError(5,0.0002696558);
   hC_Taya->SetBinError(6,0.0002383104);
   hC_Taya->SetMinimum(-0.03761121);
   hC_Taya->SetMaximum(0.1293993);
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
   Double_t xAxis8[7] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 1}; 
   
   TH1F *hFe_Taya = new TH1F("hFe_Taya","Differences",6, xAxis8);
   hFe_Taya->SetBinContent(1,0.003453791);
   hFe_Taya->SetBinContent(2,0.003133178);
   hFe_Taya->SetBinContent(3,-0.01136106);
   hFe_Taya->SetBinContent(4,-0.03001982);
   hFe_Taya->SetBinContent(5,0.01558983);
   hFe_Taya->SetBinContent(6,0.04424971);
   hFe_Taya->SetBinError(1,0.0001632031);
   hFe_Taya->SetBinError(2,0.0001611016);
   hFe_Taya->SetBinError(3,0.0001544191);
   hFe_Taya->SetBinError(4,0.0001491111);
   hFe_Taya->SetBinError(5,0.0001531725);
   hFe_Taya->SetBinError(6,0.0001400392);
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
   Double_t xAxis9[7] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 1}; 
   
   TH1F *hPb_Taya = new TH1F("hPb_Taya","Multiplicity Ratio (Z)",6, xAxis9);
   hPb_Taya->SetBinContent(1,0.02192029);
   hPb_Taya->SetBinContent(2,0.008511901);
   hPb_Taya->SetBinContent(3,0.01176971);
   hPb_Taya->SetBinContent(4,0.0161297);
   hPb_Taya->SetBinContent(5,0.069828);
   hPb_Taya->SetBinContent(6,0.1218079);
   hPb_Taya->SetBinError(1,8.379493e-05);
   hPb_Taya->SetBinError(2,8.008736e-05);
   hPb_Taya->SetBinError(3,7.763172e-05);
   hPb_Taya->SetBinError(4,7.574588e-05);
   hPb_Taya->SetBinError(5,7.392119e-05);
   hPb_Taya->SetBinError(6,6.913744e-05);
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
