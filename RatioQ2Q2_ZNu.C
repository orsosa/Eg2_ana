{
//=========Macro generated from canvas: cn/cn
//=========  (Wed Mar 15 12:38:30 2017) by ROOT version5.34/19
   TCanvas *cn = new TCanvas("cn", "cn",0,0,1200,900);
   cn->Range(0.6125,-0.1375,4.4875,1.2375);
   cn->SetFillColor(0);
   cn->SetBorderMode(0);
   cn->SetBorderSize(2);
   cn->SetGridx();
   cn->SetGridy();
   cn->SetFrameBorderMode(0);
   cn->SetFrameBorderMode(0);
   
   TH1F *hframe__1 = new TH1F("hframe__1","Multiplicity Ratio",1000,1,4.1);
   hframe__1->SetMinimum(0);
   hframe__1->SetMaximum(1.1);
   hframe__1->SetDirectory(0);
   hframe__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hframe__1->SetLineColor(ci);
   hframe__1->GetXaxis()->SetTitle("Q2");
   hframe__1->GetXaxis()->SetLabelFont(42);
   hframe__1->GetXaxis()->SetLabelSize(0.035);
   hframe__1->GetXaxis()->SetTitleSize(0.035);
   hframe__1->GetXaxis()->SetTitleFont(42);
   hframe__1->GetYaxis()->SetTitle("R_{#pi_{0}}");
   hframe__1->GetYaxis()->SetLabelFont(42);
   hframe__1->GetYaxis()->SetLabelSize(0.035);
   hframe__1->GetYaxis()->SetTitleSize(0.035);
   hframe__1->GetYaxis()->SetTitleFont(42);
   hframe__1->GetZaxis()->SetLabelFont(42);
   hframe__1->GetZaxis()->SetLabelSize(0.035);
   hframe__1->GetZaxis()->SetTitleSize(0.035);
   hframe__1->GetZaxis()->SetTitleFont(42);
   hframe__1->Draw(" ");
   
   TPaveText *pt = new TPaveText(0.3399164,0.9358257,0.6600836,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Multiplicity Ratio");
   pt->Draw();
   Double_t xAxis1[4] = {1, 1.33, 1.77, 4.1}; 
   
   TH1F *hC = new TH1F("hC","Multiplicity Ratio (Q2)",3, xAxis1);
   hC->SetBinContent(1,0.8346264);
   hC->SetBinContent(2,0.8570986);
   hC->SetBinContent(3,0.8528737);
   hC->SetBinError(1,0.0002692908);
   hC->SetBinError(2,0.0002765414);
   hC->SetBinError(3,0.0002751783);
   hC->SetEntries(3);
   hC->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   hC->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hC->SetMarkerColor(ci);
   hC->SetMarkerStyle(22);
   hC->GetXaxis()->SetTitle("Q2");
   hC->GetXaxis()->SetLabelFont(42);
   hC->GetXaxis()->SetLabelSize(0.035);
   hC->GetXaxis()->SetTitleSize(0.035);
   hC->GetXaxis()->SetTitleFont(42);
   hC->GetYaxis()->SetTitle("R(Q2)");
   hC->GetYaxis()->SetLabelFont(42);
   hC->GetYaxis()->SetLabelSize(0.035);
   hC->GetYaxis()->SetTitleSize(0.035);
   hC->GetYaxis()->SetTitleOffset(1.1);
   hC->GetYaxis()->SetTitleFont(42);
   hC->GetZaxis()->SetLabelFont(42);
   hC->GetZaxis()->SetLabelSize(0.035);
   hC->GetZaxis()->SetTitleSize(0.035);
   hC->GetZaxis()->SetTitleFont(42);
   hC->Draw("samepe");
   Double_t xAxis2[4] = {1, 1.33, 1.77, 4.1}; 
   
   TH1F *hFe = new TH1F("hFe","Multiplicity Ratio (Q2)",3, xAxis2);
   hFe->SetBinContent(1,0.6224399);
   hFe->SetBinContent(2,0.6294944);
   hFe->SetBinContent(3,0.6213408);
   hFe->SetBinError(1,0.0001569948);
   hFe->SetBinError(2,0.0001587741);
   hFe->SetBinError(3,0.0001567178);
   hFe->SetEntries(3);
   hFe->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hFe->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hFe->SetMarkerColor(ci);
   hFe->SetMarkerStyle(22);
   hFe->GetXaxis()->SetTitle("Q2");
   hFe->GetXaxis()->SetLabelFont(42);
   hFe->GetXaxis()->SetLabelSize(0.035);
   hFe->GetXaxis()->SetTitleSize(0.035);
   hFe->GetXaxis()->SetTitleFont(42);
   hFe->GetYaxis()->SetTitle("R(Q2)");
   hFe->GetYaxis()->SetLabelFont(42);
   hFe->GetYaxis()->SetLabelSize(0.035);
   hFe->GetYaxis()->SetTitleSize(0.035);
   hFe->GetYaxis()->SetTitleOffset(1.1);
   hFe->GetYaxis()->SetTitleFont(42);
   hFe->GetZaxis()->SetLabelFont(42);
   hFe->GetZaxis()->SetLabelSize(0.035);
   hFe->GetZaxis()->SetTitleSize(0.035);
   hFe->GetZaxis()->SetTitleFont(42);
   hFe->Draw("samepe");
   Double_t xAxis3[4] = {1, 1.33, 1.77, 4.1}; 
   
   TH1F *hPb = new TH1F("hPb","Multiplicity Ratio (Q2)",3, xAxis3);
   hPb->SetBinContent(1,0.4827031);
   hPb->SetBinContent(2,0.4931733);
   hPb->SetBinContent(3,0.483754);
   hPb->SetBinError(1,7.84989e-05);
   hPb->SetBinError(2,8.020331e-05);
   hPb->SetBinError(3,7.866979e-05);
   hPb->SetEntries(3);
   hPb->SetStats(0);
   hPb->SetMarkerStyle(22);
   hPb->GetXaxis()->SetTitle("Q2");
   hPb->GetXaxis()->SetLabelFont(42);
   hPb->GetXaxis()->SetLabelSize(0.035);
   hPb->GetXaxis()->SetTitleSize(0.035);
   hPb->GetXaxis()->SetTitleFont(42);
   hPb->GetYaxis()->SetTitle("R(Q2)");
   hPb->GetYaxis()->SetLabelFont(42);
   hPb->GetYaxis()->SetLabelSize(0.035);
   hPb->GetYaxis()->SetTitleSize(0.035);
   hPb->GetYaxis()->SetTitleOffset(1.1);
   hPb->GetYaxis()->SetTitleFont(42);
   hPb->GetZaxis()->SetLabelFont(42);
   hPb->GetZaxis()->SetLabelSize(0.035);
   hPb->GetZaxis()->SetTitleSize(0.035);
   hPb->GetZaxis()->SetTitleFont(42);
   hPb->Draw("samepe");
   Double_t xAxis4[4] = {1, 1.33, 1.77, 4.1}; 
   
   TH1F *hC_Taya = new TH1F("hC_Taya","Multiplicity Ratio (Q2)",3, xAxis4);
   hC_Taya->SetBinContent(1,0.8302);
   hC_Taya->SetBinContent(2,0.838152);
   hC_Taya->SetBinContent(3,0.848422);
   hC_Taya->SetBinError(1,0.00580682);
   hC_Taya->SetBinError(2,0.00532285);
   hC_Taya->SetBinError(3,0.00531107);
   hC_Taya->SetEntries(6);
   hC_Taya->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   hC_Taya->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hC_Taya->SetMarkerColor(ci);
   hC_Taya->SetMarkerStyle(20);
   hC_Taya->GetXaxis()->SetTitle("Q2");
   hC_Taya->GetXaxis()->SetLabelFont(42);
   hC_Taya->GetXaxis()->SetLabelSize(0.035);
   hC_Taya->GetXaxis()->SetTitleSize(0.035);
   hC_Taya->GetXaxis()->SetTitleFont(42);
   hC_Taya->GetYaxis()->SetTitle("R(Q2)");
   hC_Taya->GetYaxis()->SetLabelFont(42);
   hC_Taya->GetYaxis()->SetLabelSize(0.035);
   hC_Taya->GetYaxis()->SetTitleSize(0.035);
   hC_Taya->GetYaxis()->SetTitleOffset(1.1);
   hC_Taya->GetYaxis()->SetTitleFont(42);
   hC_Taya->GetZaxis()->SetLabelFont(42);
   hC_Taya->GetZaxis()->SetLabelSize(0.035);
   hC_Taya->GetZaxis()->SetTitleSize(0.035);
   hC_Taya->GetZaxis()->SetTitleFont(42);
   hC_Taya->Draw("samepe");
   Double_t xAxis5[4] = {1, 1.33, 1.77, 4.1}; 
   
   TH1F *hFe_Taya = new TH1F("hFe_Taya","Multiplicity Ratio (Q2)",3, xAxis5);
   hFe_Taya->SetBinContent(1,0.614993);
   hFe_Taya->SetBinContent(2,0.625096);
   hFe_Taya->SetBinContent(3,0.636138);
   hFe_Taya->SetBinError(1,0.00344405);
   hFe_Taya->SetBinError(2,0.00320407);
   hFe_Taya->SetBinError(3,0.00323537);
   hFe_Taya->SetEntries(6);
   hFe_Taya->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hFe_Taya->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hFe_Taya->SetMarkerColor(ci);
   hFe_Taya->SetMarkerStyle(20);
   hFe_Taya->GetXaxis()->SetTitle("Q2");
   hFe_Taya->GetXaxis()->SetLabelFont(42);
   hFe_Taya->GetXaxis()->SetLabelSize(0.035);
   hFe_Taya->GetXaxis()->SetTitleSize(0.035);
   hFe_Taya->GetXaxis()->SetTitleFont(42);
   hFe_Taya->GetYaxis()->SetTitle("R(Q2)");
   hFe_Taya->GetYaxis()->SetLabelFont(42);
   hFe_Taya->GetYaxis()->SetLabelSize(0.035);
   hFe_Taya->GetYaxis()->SetTitleSize(0.035);
   hFe_Taya->GetYaxis()->SetTitleOffset(1.1);
   hFe_Taya->GetYaxis()->SetTitleFont(42);
   hFe_Taya->GetZaxis()->SetLabelFont(42);
   hFe_Taya->GetZaxis()->SetLabelSize(0.035);
   hFe_Taya->GetZaxis()->SetTitleSize(0.035);
   hFe_Taya->GetZaxis()->SetTitleFont(42);
   hFe_Taya->Draw("samepe");
   Double_t xAxis6[4] = {1, 1.33, 1.77, 4.1}; 
   
   TH1F *hPb_Taya = new TH1F("hPb_Taya","Multiplicity Ratio (Q2)",3, xAxis6);
   hPb_Taya->SetBinContent(1,0.460103);
   hPb_Taya->SetBinContent(2,0.459168);
   hPb_Taya->SetBinContent(3,0.480026);
   hPb_Taya->SetBinError(1,0.00411618);
   hPb_Taya->SetBinError(2,0.00373456);
   hPb_Taya->SetBinError(3,0.00394884);
   hPb_Taya->SetEntries(6);
   hPb_Taya->SetStats(0);
   hPb_Taya->SetMarkerStyle(20);
   hPb_Taya->GetXaxis()->SetTitle("Q2");
   hPb_Taya->GetXaxis()->SetLabelFont(42);
   hPb_Taya->GetXaxis()->SetLabelSize(0.035);
   hPb_Taya->GetXaxis()->SetTitleSize(0.035);
   hPb_Taya->GetXaxis()->SetTitleFont(42);
   hPb_Taya->GetYaxis()->SetTitle("R(Q2)");
   hPb_Taya->GetYaxis()->SetLabelFont(42);
   hPb_Taya->GetYaxis()->SetLabelSize(0.035);
   hPb_Taya->GetYaxis()->SetTitleSize(0.035);
   hPb_Taya->GetYaxis()->SetTitleOffset(1.1);
   hPb_Taya->GetYaxis()->SetTitleFont(42);
   hPb_Taya->GetZaxis()->SetLabelFont(42);
   hPb_Taya->GetZaxis()->SetLabelSize(0.035);
   hPb_Taya->GetZaxis()->SetTitleSize(0.035);
   hPb_Taya->GetZaxis()->SetTitleFont(42);
   hPb_Taya->Draw("samepe");
   
   TLegend *leg = new TLegend(0.1,0.73,0.25,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("hC","C noRC","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hFe","Fe noRC","lp");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hPb","Pb noRC","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hC_Taya","C-Taya noRC","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hFe_Taya","Fe-Taya noRC","lp");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hPb_Taya","Pb-Taya noRC","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   cn->Modified();
   cn->cd();
   cn->SetSelected(cn);
}
