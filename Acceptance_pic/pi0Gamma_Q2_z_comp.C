{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Oct  4 06:19:21 2016) by ROOT version5.34/34
   TCanvas *c1 = new TCanvas("c1", "c1",0,66,1280,734);
   c1->Range(-1.875,-0.007990624,16.875,0.07191561);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *haccq2Mc = new TH1F("haccq2Mc","#gamma acceptance (Q^{2},Z)  M_{#pi^{0}} Cut",15,0,15);
   haccq2Mc->SetBinContent(1,0.01747533);
   haccq2Mc->SetBinContent(2,0.01751237);
   haccq2Mc->SetBinContent(3,0.01932524);
   haccq2Mc->SetBinContent(4,0.01815357);
   haccq2Mc->SetBinContent(5,0.01484814);
   haccq2Mc->SetBinContent(6,0.03556963);
   haccq2Mc->SetBinContent(7,0.038271);
   haccq2Mc->SetBinContent(8,0.03919807);
   haccq2Mc->SetBinContent(9,0.03845643);
   haccq2Mc->SetBinContent(10,0.03332929);
   haccq2Mc->SetBinContent(11,0.0515168);
   haccq2Mc->SetBinContent(12,0.05566468);
   haccq2Mc->SetBinContent(13,0.05974471);
   haccq2Mc->SetBinContent(14,0.05909117);
   haccq2Mc->SetBinContent(15,0.04345784);
   haccq2Mc->SetBinError(1,0.0002630072);
   haccq2Mc->SetBinError(2,0.0003392109);
   haccq2Mc->SetBinError(3,0.0004339011);
   haccq2Mc->SetBinError(4,0.0005018993);
   haccq2Mc->SetBinError(5,0.0005315084);
   haccq2Mc->SetBinError(6,0.0004791009);
   haccq2Mc->SetBinError(7,0.0006404058);
   haccq2Mc->SetBinError(8,0.0007944262);
   haccq2Mc->SetBinError(9,0.0009400225);
   haccq2Mc->SetBinError(10,0.001022455);
   haccq2Mc->SetBinError(11,0.0006590019);
   haccq2Mc->SetBinError(12,0.0008831379);
   haccq2Mc->SetBinError(13,0.00113623);
   haccq2Mc->SetBinError(14,0.001342458);
   haccq2Mc->SetBinError(15,0.001332429);
   haccq2Mc->SetMinimum(0);
   haccq2Mc->SetEntries(28788.96);
   haccq2Mc->SetStats(0);
   haccq2Mc->SetLineColor(2);
   haccq2Mc->SetMarkerColor(2);
   haccq2Mc->SetMarkerStyle(8);
   haccq2Mc->GetXaxis()->SetTitle("nbin");
   haccq2Mc->GetXaxis()->SetLabelFont(42);
   haccq2Mc->GetXaxis()->SetLabelSize(0.035);
   haccq2Mc->GetXaxis()->SetTitleSize(0.035);
   haccq2Mc->GetXaxis()->SetTitleFont(42);
   haccq2Mc->GetYaxis()->SetTitle("Acceptance");
   haccq2Mc->GetYaxis()->SetLabelFont(42);
   haccq2Mc->GetYaxis()->SetLabelSize(0.035);
   haccq2Mc->GetYaxis()->SetTitleSize(0.035);
   haccq2Mc->GetYaxis()->SetTitleOffset(1.1);
   haccq2Mc->GetYaxis()->SetTitleFont(42);
   haccq2Mc->GetZaxis()->SetLabelFont(42);
   haccq2Mc->GetZaxis()->SetLabelSize(0.035);
   haccq2Mc->GetZaxis()->SetTitleSize(0.035);
   haccq2Mc->GetZaxis()->SetTitleFont(42);
   haccq2Mc->Draw("p");
   
   TPaveText *pt = new TPaveText(0.2650716,0.9038608,0.7349284,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("#gamma acceptance (Q^{2},Z)  M_{#pi^{0}} Cut");
   pt->Draw();
   
   TH1F *haccq2 = new TH1F("haccq2","Acceptance #pi^{0} (Q^{2}, z)",17,-1,16);
   haccq2->SetBinContent(2,0.01105619);
   haccq2->SetBinContent(3,0.01253897);
   haccq2->SetBinContent(4,0.0155675);
   haccq2->SetBinContent(5,0.01450854);
   haccq2->SetBinContent(6,0.01192826);
   haccq2->SetBinContent(7,0.02204254);
   haccq2->SetBinContent(8,0.02637875);
   haccq2->SetBinContent(9,0.03013743);
   haccq2->SetBinContent(10,0.03150436);
   haccq2->SetBinContent(11,0.02786065);
   haccq2->SetBinContent(12,0.03194721);
   haccq2->SetBinContent(13,0.03957105);
   haccq2->SetBinContent(14,0.04573742);
   haccq2->SetBinContent(15,0.04784894);
   haccq2->SetBinContent(16,0.03557038);
   haccq2->SetEntries(15);
   haccq2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   haccq2->SetLineColor(ci);
   haccq2->SetMarkerStyle(8);
   haccq2->GetXaxis()->SetTitle("bin");
   haccq2->GetXaxis()->SetLabelFont(42);
   haccq2->GetXaxis()->SetLabelSize(0.035);
   haccq2->GetXaxis()->SetTitleSize(0.035);
   haccq2->GetXaxis()->SetTitleFont(42);
   haccq2->GetYaxis()->SetTitle("Nrec/Nthrown");
   haccq2->GetYaxis()->SetLabelFont(42);
   haccq2->GetYaxis()->SetLabelSize(0.035);
   haccq2->GetYaxis()->SetTitleSize(0.035);
   haccq2->GetYaxis()->SetTitleFont(42);
   haccq2->GetZaxis()->SetLabelFont(42);
   haccq2->GetZaxis()->SetLabelSize(0.035);
   haccq2->GetZaxis()->SetTitleSize(0.035);
   haccq2->GetZaxis()->SetTitleFont(42);
   haccq2->Draw("psame");
   TGaxis *gaxis = new TGaxis(0,0,5,0,0.3,0.8,5,"-SW");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0.8);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.025);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Z ");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   gaxis = new TGaxis(5,0,10,0,0.3,0.8,5,"-SUW");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0.8);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.025);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Z ");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   gaxis = new TGaxis(10,0,15,0,0.3,0.8,5,"-SUW");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0.8);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.025);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Z ");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   TLine *line = new TLine(5,0,5,0.06392499);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(10,0,10,0.06392499);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   gaxis = new TGaxis(0,0,5,0,0.3,0.8,5,"-SW");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0.8);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.025);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Z ");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   gaxis = new TGaxis(5,0,10,0,0.3,0.8,5,"-SUW");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0.8);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.025);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Z ");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   gaxis = new TGaxis(10,0,15,0,0.3,0.8,5,"-SUW");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0.8);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.025);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Z ");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   line = new TLine(5,0,5,0.06392499);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(10,0,10,0.06392499);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
      tex = new TLatex(1.748826,0.006907148,"Q^{2} #epsilon (1 , 1.33)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(6.399648,0.016839,"Q^{2} #epsilon (1.33 , 1.77)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(11.652,0.02473933,"Q^{2} #epsilon (1.77 , 4.1)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.1400626,0.6320621,0.3403756,0.7323446,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("haccq2","#pi^{0}","lp");

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("haccq2Mc","#gamma #gamma","lp");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
