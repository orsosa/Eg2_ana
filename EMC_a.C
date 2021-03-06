{
//=========Macro generated from canvas: c/c
//=========  (Wed May 17 19:05:24 2017) by ROOT version5.34/36
   TCanvas *c = new TCanvas("c", "c",2,77,1024,768);
   c->Range(0.08374999,-0.127867,0.54625,1.150803);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   THStack *emc_a = new THStack();
   emc_a->SetName("emc_a");
   emc_a->SetTitle("EMC Acceptance corrected");
   Double_t xAxis5[15] = {0.13, 0.1564286, 0.1828571, 0.2092857, 0.2357143, 0.2621429, 0.2885714, 0.315, 0.3414286, 0.3678571, 0.3942857, 0.4207143, 0.4471429, 0.4735714, 0.5}; 
   
   TH1F *emc_a_stack_2 = new TH1F("emc_a_stack_2","EMC Acceptance corrected",14, xAxis5);
   emc_a_stack_2->SetMinimum(0);
   emc_a_stack_2->SetMaximum(1.022936);
   emc_a_stack_2->SetDirectory(0);
   emc_a_stack_2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   emc_a_stack_2->SetLineColor(ci);
   emc_a_stack_2->GetXaxis()->SetTitle("x");
   emc_a_stack_2->GetXaxis()->SetLabelFont(42);
   emc_a_stack_2->GetXaxis()->SetLabelSize(0.035);
   emc_a_stack_2->GetXaxis()->SetTitleSize(0.035);
   emc_a_stack_2->GetXaxis()->SetTitleFont(42);
   emc_a_stack_2->GetYaxis()->SetTitle("#frac{N_{e}^{A}}{N_{e}^{D}}");
   emc_a_stack_2->GetYaxis()->SetLabelFont(42);
   emc_a_stack_2->GetYaxis()->SetLabelSize(0.035);
   emc_a_stack_2->GetYaxis()->SetTitleSize(0.035);
   emc_a_stack_2->GetYaxis()->SetTitleFont(42);
   emc_a_stack_2->GetZaxis()->SetLabelFont(42);
   emc_a_stack_2->GetZaxis()->SetLabelSize(0.035);
   emc_a_stack_2->GetZaxis()->SetTitleSize(0.035);
   emc_a_stack_2->GetZaxis()->SetTitleFont(42);
   emc_a->SetHistogram(emc_a_stack_2);
   
   Double_t xAxis6[15] = {0.13, 0.1564286, 0.1828571, 0.2092857, 0.2357143, 0.2621429, 0.2885714, 0.315, 0.3414286, 0.3678571, 0.3942857, 0.4207143, 0.4471429, 0.4735714, 0.5}; 
   
   TH1D *hEMCC_a__4 = new TH1D("hEMCC_a__4","C",14, xAxis6);
   hEMCC_a__4->SetBinContent(0,0.8190066);
   hEMCC_a__4->SetBinContent(1,0.8384908);
   hEMCC_a__4->SetBinContent(2,0.8448118);
   hEMCC_a__4->SetBinContent(3,0.8388497);
   hEMCC_a__4->SetBinContent(4,0.8203426);
   hEMCC_a__4->SetBinContent(5,0.822132);
   hEMCC_a__4->SetBinContent(6,0.8255353);
   hEMCC_a__4->SetBinContent(7,0.8316932);
   hEMCC_a__4->SetBinContent(8,0.8351616);
   hEMCC_a__4->SetBinContent(9,0.8291265);
   hEMCC_a__4->SetBinContent(10,0.8240204);
   hEMCC_a__4->SetBinContent(11,0.8024277);
   hEMCC_a__4->SetBinContent(12,0.8159842);
   hEMCC_a__4->SetBinContent(13,0.8237036);
   hEMCC_a__4->SetBinContent(14,0.8017307);
   hEMCC_a__4->SetBinContent(15,0.4978727);
   hEMCC_a__4->SetBinError(0,0.01583875);
   hEMCC_a__4->SetBinError(1,0.002493371);
   hEMCC_a__4->SetBinError(2,0.001799816);
   hEMCC_a__4->SetBinError(3,0.001811028);
   hEMCC_a__4->SetBinError(4,0.002084572);
   hEMCC_a__4->SetBinError(5,0.002464699);
   hEMCC_a__4->SetBinError(6,0.002248906);
   hEMCC_a__4->SetBinError(7,0.002213418);
   hEMCC_a__4->SetBinError(8,0.002378616);
   hEMCC_a__4->SetBinError(9,0.002700122);
   hEMCC_a__4->SetBinError(10,0.003763055);
   hEMCC_a__4->SetBinError(11,0.01668009);
   hEMCC_a__4->SetBinError(12,0.004838794);
   hEMCC_a__4->SetBinError(13,0.007757374);
   hEMCC_a__4->SetBinError(14,0.02111993);
   hEMCC_a__4->SetBinError(15,0.1947813);
   hEMCC_a__4->SetEntries(153780.4);
   hEMCC_a__4->SetDirectory(0);

   ci = TColor::GetColor("#0000ff");
   hEMCC_a__4->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hEMCC_a__4->SetMarkerColor(ci);
   hEMCC_a__4->SetMarkerStyle(8);
   hEMCC_a__4->GetXaxis()->SetLabelFont(42);
   hEMCC_a__4->GetXaxis()->SetLabelSize(0.035);
   hEMCC_a__4->GetXaxis()->SetTitleSize(0.035);
   hEMCC_a__4->GetXaxis()->SetTitleFont(42);
   hEMCC_a__4->GetYaxis()->SetLabelFont(42);
   hEMCC_a__4->GetYaxis()->SetLabelSize(0.035);
   hEMCC_a__4->GetYaxis()->SetTitleSize(0.035);
   hEMCC_a__4->GetYaxis()->SetTitleFont(42);
   hEMCC_a__4->GetZaxis()->SetLabelFont(42);
   hEMCC_a__4->GetZaxis()->SetLabelSize(0.035);
   hEMCC_a__4->GetZaxis()->SetTitleSize(0.035);
   hEMCC_a__4->GetZaxis()->SetTitleFont(42);
   emc_a->Add(hEMCC_a__4,"");
   Double_t xAxis7[15] = {0.13, 0.1564286, 0.1828571, 0.2092857, 0.2357143, 0.2621429, 0.2885714, 0.315, 0.3414286, 0.3678571, 0.3942857, 0.4207143, 0.4471429, 0.4735714, 0.5}; 
   
   TH1D *hEMCFe_a__5 = new TH1D("hEMCFe_a__5","Fe",14, xAxis7);
   hEMCFe_a__5->SetBinContent(0,0.961885);
   hEMCFe_a__5->SetBinContent(1,0.9742247);
   hEMCFe_a__5->SetBinContent(2,0.9573537);
   hEMCFe_a__5->SetBinContent(3,0.9335343);
   hEMCFe_a__5->SetBinContent(4,0.8998767);
   hEMCFe_a__5->SetBinContent(5,0.891604);
   hEMCFe_a__5->SetBinContent(6,0.889381);
   hEMCFe_a__5->SetBinContent(7,0.8905204);
   hEMCFe_a__5->SetBinContent(8,0.8843356);
   hEMCFe_a__5->SetBinContent(9,0.8707941);
   hEMCFe_a__5->SetBinContent(10,0.8635568);
   hEMCFe_a__5->SetBinContent(11,0.8346967);
   hEMCFe_a__5->SetBinContent(12,0.8384001);
   hEMCFe_a__5->SetBinContent(13,0.8359075);
   hEMCFe_a__5->SetBinContent(14,0.8068569);
   hEMCFe_a__5->SetBinContent(15,0.5727986);
   hEMCFe_a__5->SetBinError(0,0.01777096);
   hEMCFe_a__5->SetBinError(1,0.002724242);
   hEMCFe_a__5->SetBinError(2,0.001902102);
   hEMCFe_a__5->SetBinError(3,0.001873433);
   hEMCFe_a__5->SetBinError(4,0.002127476);
   hEMCFe_a__5->SetBinError(5,0.002472532);
   hEMCFe_a__5->SetBinError(6,0.002256579);
   hEMCFe_a__5->SetBinError(7,0.002217946);
   hEMCFe_a__5->SetBinError(8,0.002347412);
   hEMCFe_a__5->SetBinError(9,0.002648055);
   hEMCFe_a__5->SetBinError(10,0.003653849);
   hEMCFe_a__5->SetBinError(11,0.01456175);
   hEMCFe_a__5->SetBinError(12,0.004620139);
   hEMCFe_a__5->SetBinError(13,0.00725776);
   hEMCFe_a__5->SetBinError(14,0.01940418);
   hEMCFe_a__5->SetBinError(15,0.1981096);
   hEMCFe_a__5->SetEntries(211484);
   hEMCFe_a__5->SetDirectory(0);
   hEMCFe_a__5->SetMarkerStyle(8);
   hEMCFe_a__5->GetXaxis()->SetLabelFont(42);
   hEMCFe_a__5->GetXaxis()->SetLabelSize(0.035);
   hEMCFe_a__5->GetXaxis()->SetTitleSize(0.035);
   hEMCFe_a__5->GetXaxis()->SetTitleFont(42);
   hEMCFe_a__5->GetYaxis()->SetLabelFont(42);
   hEMCFe_a__5->GetYaxis()->SetLabelSize(0.035);
   hEMCFe_a__5->GetYaxis()->SetTitleSize(0.035);
   hEMCFe_a__5->GetYaxis()->SetTitleFont(42);
   hEMCFe_a__5->GetZaxis()->SetLabelFont(42);
   hEMCFe_a__5->GetZaxis()->SetLabelSize(0.035);
   hEMCFe_a__5->GetZaxis()->SetTitleSize(0.035);
   hEMCFe_a__5->GetZaxis()->SetTitleFont(42);
   emc_a->Add(hEMCFe_a__5,"");
   Double_t xAxis8[15] = {0.13, 0.1564286, 0.1828571, 0.2092857, 0.2357143, 0.2621429, 0.2885714, 0.315, 0.3414286, 0.3678571, 0.3942857, 0.4207143, 0.4471429, 0.4735714, 0.5}; 
   
   TH1D *hEMCPb_a__6 = new TH1D("hEMCPb_a__6","Pb",14, xAxis8);
   hEMCPb_a__6->SetBinContent(0,0.4406086);
   hEMCPb_a__6->SetBinContent(1,0.4501267);
   hEMCPb_a__6->SetBinContent(2,0.4478673);
   hEMCPb_a__6->SetBinContent(3,0.4381703);
   hEMCPb_a__6->SetBinContent(4,0.4216693);
   hEMCPb_a__6->SetBinContent(5,0.4163232);
   hEMCPb_a__6->SetBinContent(6,0.4134661);
   hEMCPb_a__6->SetBinContent(7,0.412305);
   hEMCPb_a__6->SetBinContent(8,0.4076563);
   hEMCPb_a__6->SetBinContent(9,0.400909);
   hEMCPb_a__6->SetBinContent(10,0.3920181);
   hEMCPb_a__6->SetBinContent(11,0.374873);
   hEMCPb_a__6->SetBinContent(12,0.3777394);
   hEMCPb_a__6->SetBinContent(13,0.3720228);
   hEMCPb_a__6->SetBinContent(14,0.3549771);
   hEMCPb_a__6->SetBinContent(15,0.2400817);
   hEMCPb_a__6->SetBinError(0,0.008520183);
   hEMCPb_a__6->SetBinError(1,0.001339917);
   hEMCPb_a__6->SetBinError(2,0.0009561582);
   hEMCPb_a__6->SetBinError(3,0.0009494563);
   hEMCPb_a__6->SetBinError(4,0.001075271);
   hEMCPb_a__6->SetBinError(5,0.001244672);
   hEMCPb_a__6->SetBinError(6,0.001134443);
   hEMCPb_a__6->SetBinError(7,0.001112684);
   hEMCPb_a__6->SetBinError(8,0.001178903);
   hEMCPb_a__6->SetBinError(9,0.001329594);
   hEMCPb_a__6->SetBinError(10,0.001815187);
   hEMCPb_a__6->SetBinError(11,0.007311244);
   hEMCPb_a__6->SetBinError(12,0.002278879);
   hEMCPb_a__6->SetBinError(13,0.0035148);
   hEMCPb_a__6->SetBinError(14,0.009311957);
   hEMCPb_a__6->SetBinError(15,0.09128076);
   hEMCPb_a__6->SetEntries(186487.4);
   hEMCPb_a__6->SetDirectory(0);

   ci = TColor::GetColor("#ff0000");
   hEMCPb_a__6->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hEMCPb_a__6->SetMarkerColor(ci);
   hEMCPb_a__6->SetMarkerStyle(8);
   hEMCPb_a__6->GetXaxis()->SetLabelFont(42);
   hEMCPb_a__6->GetXaxis()->SetLabelSize(0.035);
   hEMCPb_a__6->GetXaxis()->SetTitleSize(0.035);
   hEMCPb_a__6->GetXaxis()->SetTitleFont(42);
   hEMCPb_a__6->GetYaxis()->SetLabelFont(42);
   hEMCPb_a__6->GetYaxis()->SetLabelSize(0.035);
   hEMCPb_a__6->GetYaxis()->SetTitleSize(0.035);
   hEMCPb_a__6->GetYaxis()->SetTitleFont(42);
   hEMCPb_a__6->GetZaxis()->SetLabelFont(42);
   hEMCPb_a__6->GetZaxis()->SetLabelSize(0.035);
   hEMCPb_a__6->GetZaxis()->SetTitleSize(0.035);
   hEMCPb_a__6->GetZaxis()->SetTitleFont(42);
   emc_a->Add(hEMCPb_a__6,"");
   emc_a->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.250274,0.9337097,0.749726,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("EMC Acceptance corrected");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.8170254,0.4637097,0.890411,0.6733871,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("hEMCC_a__4","C","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hEMCFe_a","Fe","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hEMCPb_a","Pb","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
