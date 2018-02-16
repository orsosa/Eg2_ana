{
//=========Macro generated from canvas: cn/cn
//=========  (Wed Feb  1 00:27:41 2017) by ROOT version5.34/34
   TCanvas *cn = new TCanvas("cn", "cn",1,1,1200,876);
   cn->Range(-0.1125,-0.3768535,1.0125,0.08129773);
   cn->SetFillColor(0);
   cn->SetBorderMode(0);
   cn->SetBorderSize(2);
   cn->SetGridx();
   cn->SetGridy();
   cn->SetFrameBorderMode(0);
   cn->SetFrameBorderMode(0);
   Double_t xAxis7[7] = {0, 0.1, 0.25, 0.4, 0.55, 0.75, 0.9}; 
   
   TH1F *hC_Taya = new TH1F("hC_Taya","Multiplicity Ratio (Pt2)",6, xAxis7);
   hC_Taya->SetBinContent(1,0.007503271);
   hC_Taya->SetBinContent(2,0.01280993);
   hC_Taya->SetBinContent(3,-0.002455592);
   hC_Taya->SetBinContent(4,-0.06051505);
   hC_Taya->SetBinContent(5,-0.1190264);
   hC_Taya->SetBinContent(6,-0.2883179);
   hC_Taya->SetBinError(1,0.007120601);
   hC_Taya->SetBinError(2,0.005219294);
   hC_Taya->SetBinError(3,0.006168864);
   hC_Taya->SetBinError(4,0.008943183);
   hC_Taya->SetBinError(5,0.01360112);
   hC_Taya->SetBinError(6,0.02609819);
   hC_Taya->SetEntries(0.4500017);
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
   Double_t xAxis8[7] = {0, 0.1, 0.25, 0.4, 0.55, 0.75, 0.9}; 
   
   TH1F *hFe_Taya = new TH1F("hFe_Taya","Differences",6, xAxis8);
   hFe_Taya->SetBinContent(1,0.05791479);
   hFe_Taya->SetBinContent(2,0.01522094);
   hFe_Taya->SetBinContent(3,-0.004482031);
   hFe_Taya->SetBinContent(4,-0.0718841);
   hFe_Taya->SetBinContent(5,-0.1585685);
   hFe_Taya->SetBinContent(6,-0.4028622);
   hFe_Taya->SetBinError(1,0.004236066);
   hFe_Taya->SetBinError(2,0.003092309);
   hFe_Taya->SetBinError(3,0.003695834);
   hFe_Taya->SetBinError(4,0.005497246);
   hFe_Taya->SetBinError(5,0.008226565);
   hFe_Taya->SetBinError(6,0.01603248);
   hFe_Taya->SetEntries(0.5646611);
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
   Double_t xAxis9[7] = {0, 0.1, 0.25, 0.4, 0.55, 0.75, 0.9}; 
   
   TH1F *hPb_Taya = new TH1F("hPb_Taya","Multiplicity Ratio (Pt2)",6, xAxis9);
   hPb_Taya->SetBinContent(1,-0.101229);
   hPb_Taya->SetBinContent(2,-0.117394);
   hPb_Taya->SetBinContent(3,-0.1467912);
   hPb_Taya->SetBinContent(4,-0.2061568);
   hPb_Taya->SetBinContent(5,-0.297598);
   hPb_Taya->SetBinContent(6,-0.5605576);
   hPb_Taya->SetBinError(1,0.004233712);
   hPb_Taya->SetBinError(2,0.003089469);
   hPb_Taya->SetBinError(3,0.003693427);
   hPb_Taya->SetBinError(4,0.005495683);
   hPb_Taya->SetBinError(5,0.008225533);
   hPb_Taya->SetBinError(6,0.01603188);
   hPb_Taya->SetEntries(1.429727);
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
