{
//=========Macro generated from canvas: cn/cn
//=========  (Tue Jan 24 23:47:09 2017) by ROOT version5.34/34
   TCanvas *cn = new TCanvas("cn", "cn",0,66,1200,900);
   cn->Range(0.2375,-0.125,0.8625,1.125);
   cn->SetFillColor(0);
   cn->SetBorderMode(0);
   cn->SetBorderSize(2);
   cn->SetGridx();
   cn->SetGridy();
   cn->SetFrameBorderMode(0);
   cn->SetFrameBorderMode(0);
   
   TH1F *hframe__1 = new TH1F("hframe__1","Multiplicity Ratio",1000,0.3,0.8);
   hframe__1->SetMinimum(0);
   hframe__1->SetMaximum(1);
   hframe__1->SetDirectory(0);
   hframe__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hframe__1->SetLineColor(ci);
   hframe__1->GetXaxis()->SetTitle("Z");
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
   
   TPaveText *pt = new TPaveText(0.3401669,0.9359611,0.6598331,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Multiplicity Ratio");
   pt->Draw();
   Double_t xAxis1[6] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8}; 
   
   TH1F *hC = new TH1F("hC","Multiplicity Ratio (Z)",5, xAxis1);
   hC->SetBinContent(1,0.7169688);
   hC->SetBinContent(2,0.6922305);
   hC->SetBinContent(3,0.6758287);
   hC->SetBinContent(4,0.6804045);
   hC->SetBinContent(5,0.6762981);
   hC->SetBinError(1,0.0004048586);
   hC->SetBinError(2,0.0003908893);
   hC->SetBinError(3,0.0003816276);
   hC->SetBinError(4,0.0003842115);
   hC->SetBinError(5,0.0003818926);
   hC->SetEntries(5);
   hC->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   hC->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hC->SetMarkerColor(ci);
   hC->SetMarkerStyle(8);
   hC->GetXaxis()->SetTitle("Z");
   hC->GetXaxis()->SetLabelFont(42);
   hC->GetXaxis()->SetLabelSize(0.035);
   hC->GetXaxis()->SetTitleSize(0.035);
   hC->GetXaxis()->SetTitleFont(42);
   hC->GetYaxis()->SetTitle("R(Z)");
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
   Double_t xAxis2[6] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8}; 
   
   TH1F *hFe = new TH1F("hFe","Multiplicity Ratio (Z)",5, xAxis2);
   hFe->SetBinContent(1,0.5886285);
   hFe->SetBinContent(2,0.564104);
   hFe->SetBinContent(3,0.5468915);
   hFe->SetBinContent(4,0.5275531);
   hFe->SetBinContent(5,0.5174819);
   hFe->SetBinError(1,0.0002481285);
   hFe->SetBinError(2,0.0002377905);
   hFe->SetBinError(3,0.0002305348);
   hFe->SetBinError(4,0.0002223829);
   hFe->SetBinError(5,0.0002181376);
   hFe->SetEntries(5);
   hFe->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hFe->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hFe->SetMarkerColor(ci);
   hFe->SetMarkerStyle(8);
   hFe->GetXaxis()->SetTitle("Z");
   hFe->GetXaxis()->SetLabelFont(42);
   hFe->GetXaxis()->SetLabelSize(0.035);
   hFe->GetXaxis()->SetTitleSize(0.035);
   hFe->GetXaxis()->SetTitleFont(42);
   hFe->GetYaxis()->SetTitle("R(Z)");
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
   Double_t xAxis3[6] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8}; 
   
   TH1F *hPb = new TH1F("hPb","Multiplicity Ratio (Z)",5, xAxis3);
   hPb->SetBinContent(1,0.2172051);
   hPb->SetBinContent(2,0.2008351);
   hPb->SetBinContent(3,0.1958554);
   hPb->SetBinContent(4,0.1906755);
   hPb->SetBinContent(5,0.1870552);
   hPb->SetBinError(1,0.0001671698);
   hPb->SetBinError(2,0.0001545708);
   hPb->SetBinError(3,0.0001507383);
   hPb->SetBinError(4,0.0001467516);
   hPb->SetBinError(5,0.0001439653);
   hPb->SetEntries(5);
   hPb->SetStats(0);
   hPb->SetMarkerStyle(8);
   hPb->GetXaxis()->SetTitle("Z");
   hPb->GetXaxis()->SetLabelFont(42);
   hPb->GetXaxis()->SetLabelSize(0.035);
   hPb->GetXaxis()->SetTitleSize(0.035);
   hPb->GetXaxis()->SetTitleFont(42);
   hPb->GetYaxis()->SetTitle("R(Z)");
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
   
   TLegend *leg = new TLegend(0.2,0.4,0.4,0.5,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("hC","C","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hFe","Fe","lp");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hPb","Pb","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   cn->Modified();
   cn->cd();
   cn->SetSelected(cn);
}
