{
//=========Macro generated from canvas: cn/cn
//=========  (Tue May  9 15:47:34 2017) by ROOT version5.34/34
   TCanvas *cn = new TCanvas("cn", "cn",1,1,1200,876);
   cn->Range(-0.1875,-0.4131699,1.6875,0.1023391);
   cn->SetFillColor(0);
   cn->SetBorderMode(0);
   cn->SetBorderSize(2);
   cn->SetGridx();
   cn->SetGridy();
   cn->SetFrameBorderMode(0);
   cn->SetFrameBorderMode(0);
   Double_t xAxis7[7] = {0, 0.1, 0.25, 0.4, 0.55, 0.75, 1.5}; 
   
   TH1F *hC_Taya = new TH1F("hC_Taya","Multiplicity Ratio (Pt2)",6, xAxis7);
   hC_Taya->SetBinContent(1,0.03204238);
   hC_Taya->SetBinContent(2,0.01640022);
   hC_Taya->SetBinContent(3,-0.002800584);
   hC_Taya->SetBinContent(4,-0.01918751);
   hC_Taya->SetBinContent(5,-0.0168919);
   hC_Taya->SetBinContent(6,-0.3022596);
   hC_Taya->SetBinError(1,0.0002717913);
   hC_Taya->SetBinError(2,0.0002700989);
   hC_Taya->SetBinError(3,0.0002667199);
   hC_Taya->SetBinError(4,0.0002723869);
   hC_Taya->SetBinError(5,0.0003000675);
   hC_Taya->SetBinError(6,0.0002837887);
   hC_Taya->SetMinimum(-0.361619);
   hC_Taya->SetMaximum(0.05078816);
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
   Double_t xAxis8[7] = {0, 0.1, 0.25, 0.4, 0.55, 0.75, 1.5}; 
   
   TH1F *hFe_Taya = new TH1F("hFe_Taya","Differences",6, xAxis8);
   hFe_Taya->SetBinContent(1,0.02588665);
   hFe_Taya->SetBinContent(2,0.007881403);
   hFe_Taya->SetBinContent(3,0.003422618);
   hFe_Taya->SetBinContent(4,-0.04620355);
   hFe_Taya->SetBinContent(5,-0.04303086);
   hFe_Taya->SetBinContent(6,-0.3428732);
   hFe_Taya->SetBinError(1,0.0001533095);
   hFe_Taya->SetBinError(2,0.0001515875);
   hFe_Taya->SetBinError(3,0.0001553679);
   hFe_Taya->SetBinError(4,0.0001579034);
   hFe_Taya->SetBinError(5,0.0001790133);
   hFe_Taya->SetBinError(6,0.0001732046);
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
   Double_t xAxis9[7] = {0, 0.1, 0.25, 0.4, 0.55, 0.75, 1.5}; 
   
   TH1F *hPb_Taya = new TH1F("hPb_Taya","Multiplicity Ratio (Pt2)",6, xAxis9);
   hPb_Taya->SetBinContent(1,0.02543989);
   hPb_Taya->SetBinContent(2,0.01694909);
   hPb_Taya->SetBinContent(3,0.007375896);
   hPb_Taya->SetBinContent(4,0.001543105);
   hPb_Taya->SetBinContent(5,0.01397491);
   hPb_Taya->SetBinContent(6,-0.07895708);
   hPb_Taya->SetBinError(1,7.420787e-05);
   hPb_Taya->SetBinError(2,7.402382e-05);
   hPb_Taya->SetBinError(3,7.655698e-05);
   hPb_Taya->SetBinError(4,7.857142e-05);
   hPb_Taya->SetBinError(5,9.090948e-05);
   hPb_Taya->SetBinError(6,8.550078e-05);
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
