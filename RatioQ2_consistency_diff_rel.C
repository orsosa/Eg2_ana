{
//=========Macro generated from canvas: cn/cn
//=========  (Tue Mar 28 14:48:28 2017) by ROOT version5.34/36
   TCanvas *cn = new TCanvas("cn", "cn",1,1,1200,876);
   cn->Range(0.6125,-4.505725,4.4875,1.597196);
   cn->SetFillColor(0);
   cn->SetBorderMode(0);
   cn->SetBorderSize(2);
   cn->SetGridx();
   cn->SetGridy();
   cn->SetFrameBorderMode(0);
   cn->SetFrameBorderMode(0);
   Double_t xAxis10[4] = {1, 1.33, 1.77, 4.1}; 
   
   TH1F *hC_diff = new TH1F("hC_diff","Differences in % relative to Pt2Nu",3, xAxis10);
   hC_diff->SetBinContent(1,-3.673508);
   hC_diff->SetBinContent(2,-2.18522);
   hC_diff->SetBinContent(3,0.2008698);
   hC_diff->SetBinError(1,0.0002597489);
   hC_diff->SetBinError(2,0.0002706276);
   hC_diff->SetBinError(3,0.0002757321);
   hC_diff->SetMinimum(-3.895433);
   hC_diff->SetMaximum(0.9869038);
   hC_diff->SetEntries(6);
   hC_diff->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hC_diff->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hC_diff->SetMarkerColor(ci);
   hC_diff->SetMarkerStyle(21);
   hC_diff->GetXaxis()->SetTitle("Q2");
   hC_diff->GetXaxis()->SetLabelFont(42);
   hC_diff->GetXaxis()->SetLabelSize(0.035);
   hC_diff->GetXaxis()->SetTitleSize(0.035);
   hC_diff->GetXaxis()->SetTitleFont(42);
   hC_diff->GetYaxis()->SetTitle("%");
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
   Double_t xAxis11[4] = {1, 1.33, 1.77, 4.1}; 
   
   TH1F *hFe_diff = new TH1F("hFe_diff","Multiplicity Ratio (Q2)",3, xAxis11);
   hFe_diff->SetBinContent(1,-1.431637);
   hFe_diff->SetBinContent(2,-0.003352016);
   hFe_diff->SetBinContent(3,0.7649794);
   hFe_diff->SetBinError(1,0.0001547789);
   hFe_diff->SetBinError(2,0.0001587688);
   hFe_diff->SetBinError(3,0.0001579257);
   hFe_diff->SetEntries(6);
   hFe_diff->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hFe_diff->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hFe_diff->SetMarkerColor(ci);
   hFe_diff->SetMarkerStyle(21);
   hFe_diff->GetXaxis()->SetTitle("Q2");
   hFe_diff->GetXaxis()->SetLabelFont(42);
   hFe_diff->GetXaxis()->SetLabelSize(0.035);
   hFe_diff->GetXaxis()->SetTitleSize(0.035);
   hFe_diff->GetXaxis()->SetTitleFont(42);
   hFe_diff->GetYaxis()->SetTitle("R(Q2)");
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
   Double_t xAxis12[4] = {1, 1.33, 1.77, 4.1}; 
   
   TH1F *hPb_diff = new TH1F("hPb_diff","Multiplicity Ratio (Q2)",3, xAxis12);
   hPb_diff->SetBinContent(1,-2.995092);
   hPb_diff->SetBinContent(2,-1.850301);
   hPb_diff->SetBinContent(3,-2.325838);
   hPb_diff->SetBinError(1,7.621615e-05);
   hPb_diff->SetBinError(2,7.874458e-05);
   hPb_diff->SetBinError(3,7.688164e-05);
   hPb_diff->SetEntries(6);
   hPb_diff->SetStats(0);
   hPb_diff->SetMarkerStyle(21);
   hPb_diff->GetXaxis()->SetTitle("Q2");
   hPb_diff->GetXaxis()->SetLabelFont(42);
   hPb_diff->GetXaxis()->SetLabelSize(0.035);
   hPb_diff->GetXaxis()->SetTitleSize(0.035);
   hPb_diff->GetXaxis()->SetTitleFont(42);
   hPb_diff->GetYaxis()->SetTitle("R(Q2)");
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
   
   TLegend *leg = new TLegend(0.1,0.8,0.25,0.9,NULL,"brNDC");
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
   
   TPaveText *pt = new TPaveText(0.191087,0.94,0.808913,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Differences in % relative to Pt2Nu");
   pt->Draw();
   cn->Modified();
   cn->cd();
   cn->SetSelected(cn);
}
