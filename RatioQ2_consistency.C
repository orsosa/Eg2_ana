{
//=========Macro generated from canvas: cn/cn
//=========  (Tue Mar 28 14:48:27 2017) by ROOT version5.34/36
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
   
   TH1F *hC0 = new TH1F("hC0","Multiplicity Ratio (Q2)",3, xAxis1);
   hC0->SetBinContent(1,0.8050527);
   hC0->SetBinContent(2,0.8387696);
   hC0->SetBinContent(3,0.8545903);
   hC0->SetBinError(1,0.0002597489);
   hC0->SetBinError(2,0.0002706276);
   hC0->SetBinError(3,0.0002757321);
   hC0->SetEntries(3);
   hC0->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   hC0->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hC0->SetMarkerColor(ci);
   hC0->SetMarkerStyle(21);
   hC0->GetXaxis()->SetTitle("Q2");
   hC0->GetXaxis()->SetLabelFont(42);
   hC0->GetXaxis()->SetLabelSize(0.035);
   hC0->GetXaxis()->SetTitleSize(0.035);
   hC0->GetXaxis()->SetTitleFont(42);
   hC0->GetYaxis()->SetTitle("R(Q2)");
   hC0->GetYaxis()->SetLabelFont(42);
   hC0->GetYaxis()->SetLabelSize(0.035);
   hC0->GetYaxis()->SetTitleSize(0.035);
   hC0->GetYaxis()->SetTitleOffset(1.1);
   hC0->GetYaxis()->SetTitleFont(42);
   hC0->GetZaxis()->SetLabelFont(42);
   hC0->GetZaxis()->SetLabelSize(0.035);
   hC0->GetZaxis()->SetTitleSize(0.035);
   hC0->GetZaxis()->SetTitleFont(42);
   hC0->Draw("samepe");
   Double_t xAxis2[4] = {1, 1.33, 1.77, 4.1}; 
   
   TH1F *hFe0 = new TH1F("hFe0","Multiplicity Ratio (Q2)",3, xAxis2);
   hFe0->SetBinContent(1,0.6136546);
   hFe0->SetBinContent(2,0.6294733);
   hFe0->SetBinContent(3,0.6261306);
   hFe0->SetBinError(1,0.0001547789);
   hFe0->SetBinError(2,0.0001587688);
   hFe0->SetBinError(3,0.0001579257);
   hFe0->SetEntries(3);
   hFe0->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hFe0->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hFe0->SetMarkerColor(ci);
   hFe0->SetMarkerStyle(21);
   hFe0->GetXaxis()->SetTitle("Q2");
   hFe0->GetXaxis()->SetLabelFont(42);
   hFe0->GetXaxis()->SetLabelSize(0.035);
   hFe0->GetXaxis()->SetTitleSize(0.035);
   hFe0->GetXaxis()->SetTitleFont(42);
   hFe0->GetYaxis()->SetTitle("R(Q2)");
   hFe0->GetYaxis()->SetLabelFont(42);
   hFe0->GetYaxis()->SetLabelSize(0.035);
   hFe0->GetYaxis()->SetTitleSize(0.035);
   hFe0->GetYaxis()->SetTitleOffset(1.1);
   hFe0->GetYaxis()->SetTitleFont(42);
   hFe0->GetZaxis()->SetLabelFont(42);
   hFe0->GetZaxis()->SetLabelSize(0.035);
   hFe0->GetZaxis()->SetTitleSize(0.035);
   hFe0->GetZaxis()->SetTitleFont(42);
   hFe0->Draw("samepe");
   Double_t xAxis3[4] = {1, 1.33, 1.77, 4.1}; 
   
   TH1F *hPb0 = new TH1F("hPb0","Multiplicity Ratio (Q2)",3, xAxis3);
   hPb0->SetBinContent(1,0.4686661);
   hPb0->SetBinContent(2,0.4842139);
   hPb0->SetBinContent(3,0.4727584);
   hPb0->SetBinError(1,7.621615e-05);
   hPb0->SetBinError(2,7.874458e-05);
   hPb0->SetBinError(3,7.688164e-05);
   hPb0->SetEntries(3);
   hPb0->SetStats(0);
   hPb0->SetMarkerStyle(21);
   hPb0->GetXaxis()->SetTitle("Q2");
   hPb0->GetXaxis()->SetLabelFont(42);
   hPb0->GetXaxis()->SetLabelSize(0.035);
   hPb0->GetXaxis()->SetTitleSize(0.035);
   hPb0->GetXaxis()->SetTitleFont(42);
   hPb0->GetYaxis()->SetTitle("R(Q2)");
   hPb0->GetYaxis()->SetLabelFont(42);
   hPb0->GetYaxis()->SetLabelSize(0.035);
   hPb0->GetYaxis()->SetTitleSize(0.035);
   hPb0->GetYaxis()->SetTitleOffset(1.1);
   hPb0->GetYaxis()->SetTitleFont(42);
   hPb0->GetZaxis()->SetLabelFont(42);
   hPb0->GetZaxis()->SetLabelSize(0.035);
   hPb0->GetZaxis()->SetTitleSize(0.035);
   hPb0->GetZaxis()->SetTitleFont(42);
   hPb0->Draw("samepe");
   Double_t xAxis4[4] = {1, 1.33, 1.77, 4.1}; 
   
   TH1F *hC1 = new TH1F("hC1","Multiplicity Ratio (Q2)",3, xAxis4);
   hC1->SetBinContent(1,0.8346264);
   hC1->SetBinContent(2,0.8570986);
   hC1->SetBinContent(3,0.8528737);
   hC1->SetBinError(1,0.0002692908);
   hC1->SetBinError(2,0.0002765414);
   hC1->SetBinError(3,0.0002751783);
   hC1->SetEntries(3);
   hC1->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   hC1->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hC1->SetMarkerColor(ci);
   hC1->SetMarkerStyle(20);
   hC1->GetXaxis()->SetTitle("Q2");
   hC1->GetXaxis()->SetLabelFont(42);
   hC1->GetXaxis()->SetLabelSize(0.035);
   hC1->GetXaxis()->SetTitleSize(0.035);
   hC1->GetXaxis()->SetTitleFont(42);
   hC1->GetYaxis()->SetTitle("R(Q2)");
   hC1->GetYaxis()->SetLabelFont(42);
   hC1->GetYaxis()->SetLabelSize(0.035);
   hC1->GetYaxis()->SetTitleSize(0.035);
   hC1->GetYaxis()->SetTitleOffset(1.1);
   hC1->GetYaxis()->SetTitleFont(42);
   hC1->GetZaxis()->SetLabelFont(42);
   hC1->GetZaxis()->SetLabelSize(0.035);
   hC1->GetZaxis()->SetTitleSize(0.035);
   hC1->GetZaxis()->SetTitleFont(42);
   hC1->Draw("samepe");
   Double_t xAxis5[4] = {1, 1.33, 1.77, 4.1}; 
   
   TH1F *hFe1 = new TH1F("hFe1","Multiplicity Ratio (Q2)",3, xAxis5);
   hFe1->SetBinContent(1,0.6224399);
   hFe1->SetBinContent(2,0.6294944);
   hFe1->SetBinContent(3,0.6213408);
   hFe1->SetBinError(1,0.0001569948);
   hFe1->SetBinError(2,0.0001587741);
   hFe1->SetBinError(3,0.0001567178);
   hFe1->SetEntries(3);
   hFe1->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hFe1->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hFe1->SetMarkerColor(ci);
   hFe1->SetMarkerStyle(20);
   hFe1->GetXaxis()->SetTitle("Q2");
   hFe1->GetXaxis()->SetLabelFont(42);
   hFe1->GetXaxis()->SetLabelSize(0.035);
   hFe1->GetXaxis()->SetTitleSize(0.035);
   hFe1->GetXaxis()->SetTitleFont(42);
   hFe1->GetYaxis()->SetTitle("R(Q2)");
   hFe1->GetYaxis()->SetLabelFont(42);
   hFe1->GetYaxis()->SetLabelSize(0.035);
   hFe1->GetYaxis()->SetTitleSize(0.035);
   hFe1->GetYaxis()->SetTitleOffset(1.1);
   hFe1->GetYaxis()->SetTitleFont(42);
   hFe1->GetZaxis()->SetLabelFont(42);
   hFe1->GetZaxis()->SetLabelSize(0.035);
   hFe1->GetZaxis()->SetTitleSize(0.035);
   hFe1->GetZaxis()->SetTitleFont(42);
   hFe1->Draw("samepe");
   Double_t xAxis6[4] = {1, 1.33, 1.77, 4.1}; 
   
   TH1F *hPb1 = new TH1F("hPb1","Multiplicity Ratio (Q2)",3, xAxis6);
   hPb1->SetBinContent(1,0.4827031);
   hPb1->SetBinContent(2,0.4931733);
   hPb1->SetBinContent(3,0.483754);
   hPb1->SetBinError(1,7.84989e-05);
   hPb1->SetBinError(2,8.020331e-05);
   hPb1->SetBinError(3,7.866979e-05);
   hPb1->SetEntries(3);
   hPb1->SetStats(0);
   hPb1->SetMarkerStyle(20);
   hPb1->GetXaxis()->SetTitle("Q2");
   hPb1->GetXaxis()->SetLabelFont(42);
   hPb1->GetXaxis()->SetLabelSize(0.035);
   hPb1->GetXaxis()->SetTitleSize(0.035);
   hPb1->GetXaxis()->SetTitleFont(42);
   hPb1->GetYaxis()->SetTitle("R(Q2)");
   hPb1->GetYaxis()->SetLabelFont(42);
   hPb1->GetYaxis()->SetLabelSize(0.035);
   hPb1->GetYaxis()->SetTitleSize(0.035);
   hPb1->GetYaxis()->SetTitleOffset(1.1);
   hPb1->GetYaxis()->SetTitleFont(42);
   hPb1->GetZaxis()->SetLabelFont(42);
   hPb1->GetZaxis()->SetLabelSize(0.035);
   hPb1->GetZaxis()->SetTitleSize(0.035);
   hPb1->GetZaxis()->SetTitleFont(42);
   hPb1->Draw("samepe");
   
   TLegend *leg = new TLegend(0.1,0.73,0.25,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("hC0","C (Pt^{2},Nu) ","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hFe0","Fe (Pt^{2},Nu)","lp");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hPb0","Pb (Pt^{2},Nu)","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hC1","C (Z,Nu)","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hFe1","Fe (Z,Nu)","lp");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hPb1","Pb (Z,Nu)","lp");
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
