{
//=========Macro generated from canvas: cn/cn
//=========  (Wed Apr 12 11:50:46 2017) by ROOT version5.34/19
   TCanvas *cn = new TCanvas("cn", "cn",1,1,1200,876);
   cn->Range(0.2125,-0.05951376,1.0875,0.1324452);
   cn->SetFillColor(0);
   cn->SetBorderMode(0);
   cn->SetBorderSize(2);
   cn->SetGridx();
   cn->SetGridy();
   cn->SetFrameBorderMode(0);
   cn->SetFrameBorderMode(0);
   Double_t xAxis7[7] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 1}; 
   
   TH1F *hC_Taya = new TH1F("hC_Taya","Multiplicity Ratio (Z)",6, xAxis7);
   hC_Taya->SetBinContent(1,0.009257078);
   hC_Taya->SetBinContent(2,0.01750028);
   hC_Taya->SetBinContent(3,-0.03333753);
   hC_Taya->SetBinContent(4,-0.02242148);
   hC_Taya->SetBinContent(5,0.01557571);
   hC_Taya->SetBinContent(6,-0.01424819);
   hC_Taya->SetBinError(1,0.0002768942);
   hC_Taya->SetBinError(2,0.0002765052);
   hC_Taya->SetBinError(3,0.0002643304);
   hC_Taya->SetBinError(4,0.0002683242);
   hC_Taya->SetBinError(5,0.0002683066);
   hC_Taya->SetBinError(6,0.0002374103);
   hC_Taya->SetMinimum(-0.04031786);
   hC_Taya->SetMaximum(0.1132493);
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
   hFe_Taya->SetBinContent(1,0.0002180338);
   hFe_Taya->SetBinContent(2,-0.000688374);
   hFe_Taya->SetBinContent(3,-0.02039599);
   hFe_Taya->SetBinContent(4,-0.0314725);
   hFe_Taya->SetBinContent(5,-0.001792908);
   hFe_Taya->SetBinContent(6,0.02511251);
   hFe_Taya->SetBinError(1,0.0001623869);
   hFe_Taya->SetBinError(2,0.0001601377);
   hFe_Taya->SetBinError(3,0.0001521403);
   hFe_Taya->SetBinError(4,0.0001487447);
   hFe_Taya->SetBinError(5,0.0001487877);
   hFe_Taya->SetBinError(6,0.0001352123);
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
   hPb_Taya->SetBinContent(1,0.01889989);
   hPb_Taya->SetBinContent(2,0.004553318);
   hPb_Taya->SetBinContent(3,0.002768606);
   hPb_Taya->SetBinContent(4,0.0149098);
   hPb_Taya->SetBinContent(5,0.05754581);
   hPb_Taya->SetBinContent(6,0.106269);
   hPb_Taya->SetBinError(1,8.330373e-05);
   hPb_Taya->SetBinError(2,7.944361e-05);
   hPb_Taya->SetBinError(3,7.616793e-05);
   hPb_Taya->SetBinError(4,7.554153e-05);
   hPb_Taya->SetBinError(5,7.192382e-05);
   hPb_Taya->SetBinError(6,6.661046e-05);
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
