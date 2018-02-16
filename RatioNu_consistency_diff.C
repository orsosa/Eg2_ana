{
//=========Macro generated from canvas: cn/cn
//=========  (Tue Mar 28 13:25:52 2017) by ROOT version5.34/36
   TCanvas *cn = new TCanvas("cn", "cn",1,1,1200,876);
   cn->Range(1.94375,-0.03693748,4.50625,0.005108118);
   cn->SetFillColor(0);
   cn->SetBorderMode(0);
   cn->SetBorderSize(2);
   cn->SetGridx();
   cn->SetGridy();
   cn->SetFrameBorderMode(0);
   cn->SetFrameBorderMode(0);
   Double_t xAxis7[4] = {2.2, 3.2, 3.73, 4.25}; 
   
   TH1F *hC_diff = new TH1F("hC_diff","Differences",3, xAxis7);
   hC_diff->SetBinContent(1,-0.01183331);
   hC_diff->SetBinContent(2,-0.02144492);
   hC_diff->SetBinContent(3,-0.03120399);
   hC_diff->SetBinError(1,0.000257103);
   hC_diff->SetBinError(2,0.000275982);
   hC_diff->SetBinError(3,0.0002704313);
   hC_diff->SetMinimum(-0.03273292);
   hC_diff->SetMaximum(0.0009035587);
   hC_diff->SetEntries(6);
   hC_diff->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hC_diff->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hC_diff->SetMarkerColor(ci);
   hC_diff->SetMarkerStyle(21);
   hC_diff->GetXaxis()->SetTitle("Nu");
   hC_diff->GetXaxis()->SetLabelFont(42);
   hC_diff->GetXaxis()->SetLabelSize(0.035);
   hC_diff->GetXaxis()->SetTitleSize(0.035);
   hC_diff->GetXaxis()->SetTitleFont(42);
   hC_diff->GetYaxis()->SetTitle("R(Nu)");
   hC_diff->GetYaxis()->SetLabelFont(42);
   hC_diff->GetYaxis()->SetLabelSize(0.035);
   hC_diff->GetYaxis()->SetTitleSize(0.035);
   hC_diff->GetYaxis()->SetTitleOffset(1.1);
   hC_diff->GetYaxis()->SetTitleFont(42);
   hC_diff->GetZaxis()->SetLabelFont(42);
   hC_diff->GetZaxis()->SetLabelSize(0.035);
   hC_diff->GetZaxis()->SetTitleSize(0.035);
   hC_diff->GetZaxis()->SetTitleFont(42);
   hC_diff->Draw("p");
   Double_t xAxis8[4] = {2.2, 3.2, 3.73, 4.25}; 
   
   TH1F *hFe_diff = new TH1F("hFe_diff","Multiplicity Ratio (Nu)",3, xAxis8);
   hFe_diff->SetBinContent(1,-0.0006253719);
   hFe_diff->SetBinContent(2,-0.01155514);
   hFe_diff->SetBinContent(3,-0.003747761);
   hFe_diff->SetBinError(1,0.0001482071);
   hFe_diff->SetBinError(2,0.0001611203);
   hFe_diff->SetBinError(3,0.0001638103);
   hFe_diff->SetEntries(6);
   hFe_diff->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hFe_diff->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hFe_diff->SetMarkerColor(ci);
   hFe_diff->SetMarkerStyle(21);
   hFe_diff->GetXaxis()->SetTitle("Nu");
   hFe_diff->GetXaxis()->SetLabelFont(42);
   hFe_diff->GetXaxis()->SetLabelSize(0.035);
   hFe_diff->GetXaxis()->SetTitleSize(0.035);
   hFe_diff->GetXaxis()->SetTitleFont(42);
   hFe_diff->GetYaxis()->SetTitle("R(Nu)");
   hFe_diff->GetYaxis()->SetLabelFont(42);
   hFe_diff->GetYaxis()->SetLabelSize(0.035);
   hFe_diff->GetYaxis()->SetTitleSize(0.035);
   hFe_diff->GetYaxis()->SetTitleOffset(1.1);
   hFe_diff->GetYaxis()->SetTitleFont(42);
   hFe_diff->GetZaxis()->SetLabelFont(42);
   hFe_diff->GetZaxis()->SetLabelSize(0.035);
   hFe_diff->GetZaxis()->SetTitleSize(0.035);
   hFe_diff->GetZaxis()->SetTitleFont(42);
   hFe_diff->Draw("samep");
   Double_t xAxis9[4] = {2.2, 3.2, 3.73, 4.25}; 
   
   TH1F *hPb_diff = new TH1F("hPb_diff","Multiplicity Ratio (Nu)",3, xAxis9);
   hPb_diff->SetBinContent(1,-0.01490009);
   hPb_diff->SetBinContent(2,-0.01857287);
   hPb_diff->SetBinContent(3,-0.005946815);
   hPb_diff->SetBinError(1,7.088448e-05);
   hPb_diff->SetBinError(2,8.00475e-05);
   hPb_diff->SetBinError(3,8.293116e-05);
   hPb_diff->SetEntries(6);
   hPb_diff->SetStats(0);
   hPb_diff->SetMarkerStyle(21);
   hPb_diff->GetXaxis()->SetTitle("Nu");
   hPb_diff->GetXaxis()->SetLabelFont(42);
   hPb_diff->GetXaxis()->SetLabelSize(0.035);
   hPb_diff->GetXaxis()->SetTitleSize(0.035);
   hPb_diff->GetXaxis()->SetTitleFont(42);
   hPb_diff->GetYaxis()->SetTitle("R(Nu)");
   hPb_diff->GetYaxis()->SetLabelFont(42);
   hPb_diff->GetYaxis()->SetLabelSize(0.035);
   hPb_diff->GetYaxis()->SetTitleSize(0.035);
   hPb_diff->GetYaxis()->SetTitleOffset(1.1);
   hPb_diff->GetYaxis()->SetTitleFont(42);
   hPb_diff->GetZaxis()->SetLabelFont(42);
   hPb_diff->GetZaxis()->SetLabelSize(0.035);
   hPb_diff->GetZaxis()->SetTitleSize(0.035);
   hPb_diff->GetZaxis()->SetTitleFont(42);
   hPb_diff->Draw("samep");
   
   TLegend *leg = new TLegend(0.1,0.73,0.25,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("hC_diff","C","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hFe_diff","Fe","lp");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hPb_diff","Pb","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.3879933,0.94,0.6120067,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Differences");
   pt->Draw();
   cn->Modified();
   cn->cd();
   cn->SetSelected(cn);
}
