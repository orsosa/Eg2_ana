{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 30 18:18:37 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "c",1,1,800,576);
   c->SetHighLightColor(2);
   c->Range(0.07624999,-0.1623253,0.61375,0.1068416);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("data/externals comparison");
   Double_t xAxis5[15] = {0.13, 0.1607143, 0.1914286, 0.2221429, 0.2528571, 0.2835714, 0.3142857, 0.345, 0.3757143, 0.4064286, 0.4371428, 0.4678572, 0.4985714, 0.5292857, 0.56}; 
   
   TH1F *_stack_2 = new TH1F("_stack_2","data/externals comparison",14, xAxis5);
   _stack_2->SetMinimum(-0.1354086);
   _stack_2->SetMaximum(0.07992494);
   _stack_2->SetDirectory(0);
   _stack_2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _stack_2->SetLineColor(ci);
   _stack_2->GetXaxis()->SetTitle("diff");
   _stack_2->GetXaxis()->SetLabelFont(42);
   _stack_2->GetXaxis()->SetLabelSize(0.035);
   _stack_2->GetXaxis()->SetTitleSize(0.035);
   _stack_2->GetXaxis()->SetTitleFont(42);
   _stack_2->GetYaxis()->SetLabelFont(42);
   _stack_2->GetYaxis()->SetLabelSize(0.035);
   _stack_2->GetYaxis()->SetTitleSize(0.035);
   _stack_2->GetYaxis()->SetTitleFont(42);
   _stack_2->GetZaxis()->SetLabelFont(42);
   _stack_2->GetZaxis()->SetLabelSize(0.035);
   _stack_2->GetZaxis()->SetTitleSize(0.035);
   _stack_2->GetZaxis()->SetTitleFont(42);
   ->SetHistogram(_stack_2);
   
   Double_t xAxis6[15] = {0.13, 0.1607143, 0.1914286, 0.2221429, 0.2528571, 0.2835714, 0.3142857, 0.345, 0.3757143, 0.4064286, 0.4371428, 0.4678572, 0.4985714, 0.5292857, 0.56}; 
   
   TH1D *hC_d = new TH1D("hC_d","C",14, xAxis6);
   hC_d->SetBinContent(0,0.9923004);
   hC_d->SetBinContent(1,-0.02174514);
   hC_d->SetBinContent(2,-0.02144657);
   hC_d->SetBinContent(3,-0.02852687);
   hC_d->SetBinContent(4,-0.0444017);
   hC_d->SetBinContent(5,-0.03932494);
   hC_d->SetBinContent(6,-0.03463348);
   hC_d->SetBinContent(7,-0.03803327);
   hC_d->SetBinContent(8,-0.04213279);
   hC_d->SetBinContent(9,-0.04114984);
   hC_d->SetBinContent(10,0.01320998);
   hC_d->SetBinContent(11,-0.04674803);
   hC_d->SetBinContent(12,-0.05966528);
   hC_d->SetBinContent(13,-0.02729795);
   hC_d->SetBinContent(14,-0.07014851);
   hC_d->SetBinContent(15,0.7731267);
   hC_d->SetBinError(0,0.01189931);
   hC_d->SetBinError(1,0.001641964);
   hC_d->SetBinError(2,0.001235141);
   hC_d->SetBinError(3,0.001289299);
   hC_d->SetBinError(4,0.001514366);
   hC_d->SetBinError(5,0.001482518);
   hC_d->SetBinError(6,0.001401538);
   hC_d->SetBinError(7,0.001499897);
   hC_d->SetBinError(8,0.001701192);
   hC_d->SetBinError(9,0.00208477);
   hC_d->SetBinError(10,0.06115939);
   hC_d->SetBinError(11,0.004537031);
   hC_d->SetBinError(12,0.009529737);
   hC_d->SetBinError(13,0.03376473);
   hC_d->SetBinError(14,0.01248368);
   hC_d->SetBinError(15,0.2917069);
   hC_d->SetEntries(34218.14);

   ci = TColor::GetColor("#0000ff");
   hC_d->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hC_d->SetMarkerColor(ci);
   hC_d->SetMarkerStyle(8);
   hC_d->GetXaxis()->SetRange(1,14);
   hC_d->GetXaxis()->SetLabelFont(42);
   hC_d->GetXaxis()->SetLabelSize(0.035);
   hC_d->GetXaxis()->SetTitleSize(0.035);
   hC_d->GetXaxis()->SetTitleFont(42);
   hC_d->GetYaxis()->SetLabelFont(42);
   hC_d->GetYaxis()->SetLabelSize(0.035);
   hC_d->GetYaxis()->SetTitleSize(0.035);
   hC_d->GetYaxis()->SetTitleFont(42);
   hC_d->GetZaxis()->SetLabelFont(42);
   hC_d->GetZaxis()->SetLabelSize(0.035);
   hC_d->GetZaxis()->SetTitleSize(0.035);
   hC_d->GetZaxis()->SetTitleFont(42);
   ->Add(hC_d,"");
   Double_t xAxis7[15] = {0.13, 0.1607143, 0.1914286, 0.2221429, 0.2528571, 0.2835714, 0.3142857, 0.345, 0.3757143, 0.4064286, 0.4371428, 0.4678572, 0.4985714, 0.5292857, 0.56}; 
   
   TH1D *hFe_d = new TH1D("hFe_d","C",14, xAxis7);
   hFe_d->SetBinContent(0,0.9923004);
   hFe_d->SetBinContent(1,0.07611899);
   hFe_d->SetBinContent(2,0.05722512);
   hFe_d->SetBinContent(3,0.03237581);
   hFe_d->SetBinContent(4,0.00464324);
   hFe_d->SetBinContent(5,0.005987288);
   hFe_d->SetBinContent(6,0.01352561);
   hFe_d->SetBinContent(7,0.003550776);
   hFe_d->SetBinContent(8,0.002871323);
   hFe_d->SetBinContent(9,0.0006954174);
   hFe_d->SetBinContent(10,0.004561566);
   hFe_d->SetBinContent(11,-0.001781083);
   hFe_d->SetBinContent(12,-0.01502309);
   hFe_d->SetBinContent(13,-0.03652437);
   hFe_d->SetBinContent(14,-0.01726208);
   hFe_d->SetBinContent(15,0.7731267);
   hFe_d->SetBinError(0,0.01189931);
   hFe_d->SetBinError(1,0.001641964);
   hFe_d->SetBinError(2,0.001235141);
   hFe_d->SetBinError(3,0.001289299);
   hFe_d->SetBinError(4,0.001514366);
   hFe_d->SetBinError(5,0.001482518);
   hFe_d->SetBinError(6,0.001401538);
   hFe_d->SetBinError(7,0.001499897);
   hFe_d->SetBinError(8,0.001701192);
   hFe_d->SetBinError(9,0.00208477);
   hFe_d->SetBinError(10,0.06115939);
   hFe_d->SetBinError(11,0.004537031);
   hFe_d->SetBinError(12,0.009529737);
   hFe_d->SetBinError(13,0.03376473);
   hFe_d->SetBinError(14,0.01248368);
   hFe_d->SetBinError(15,0.2917069);
   hFe_d->SetEntries(34218.14);

   ci = TColor::GetColor("#0000ff");
   hFe_d->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hFe_d->SetMarkerColor(ci);
   hFe_d->SetMarkerStyle(8);
   hFe_d->GetXaxis()->SetRange(1,14);
   hFe_d->GetXaxis()->SetLabelFont(42);
   hFe_d->GetXaxis()->SetLabelSize(0.035);
   hFe_d->GetXaxis()->SetTitleSize(0.035);
   hFe_d->GetXaxis()->SetTitleFont(42);
   hFe_d->GetYaxis()->SetLabelFont(42);
   hFe_d->GetYaxis()->SetLabelSize(0.035);
   hFe_d->GetYaxis()->SetTitleSize(0.035);
   hFe_d->GetYaxis()->SetTitleFont(42);
   hFe_d->GetZaxis()->SetLabelFont(42);
   hFe_d->GetZaxis()->SetLabelSize(0.035);
   hFe_d->GetZaxis()->SetTitleSize(0.035);
   hFe_d->GetZaxis()->SetTitleFont(42);
   ->Add(hFe_d,"");
   Double_t xAxis8[15] = {0.13, 0.1607143, 0.1914286, 0.2221429, 0.2528571, 0.2835714, 0.3142857, 0.345, 0.3757143, 0.4064286, 0.4371428, 0.4678572, 0.4985714, 0.5292857, 0.56}; 
   
   TH1D *hPb_d = new TH1D("hPb_d","C",14, xAxis8);
   hPb_d->SetBinContent(0,0.9923004);
   hPb_d->SetBinContent(1,-0.01389836);
   hPb_d->SetBinContent(2,-0.01802823);
   hPb_d->SetBinContent(3,-0.04165092);
   hPb_d->SetBinContent(4,-0.06509019);
   hPb_d->SetBinContent(5,-0.06596993);
   hPb_d->SetBinContent(6,-0.06584708);
   hPb_d->SetBinContent(7,-0.07562017);
   hPb_d->SetBinContent(8,-0.07769914);
   hPb_d->SetBinContent(9,-0.08562725);
   hPb_d->SetBinContent(10,-0.08299471);
   hPb_d->SetBinContent(11,-0.09629205);
   hPb_d->SetBinContent(12,-0.1043395);
   hPb_d->SetBinContent(13,-0.1354086);
   hPb_d->SetBinContent(14,-0.1012846);
   hPb_d->SetBinContent(15,0.7731267);
   hPb_d->SetBinError(0,0.01189931);
   hPb_d->SetBinError(1,0.001641964);
   hPb_d->SetBinError(2,0.001235141);
   hPb_d->SetBinError(3,0.001289299);
   hPb_d->SetBinError(4,0.001514366);
   hPb_d->SetBinError(5,0.001482518);
   hPb_d->SetBinError(6,0.001401538);
   hPb_d->SetBinError(7,0.001499897);
   hPb_d->SetBinError(8,0.001701192);
   hPb_d->SetBinError(9,0.00208477);
   hPb_d->SetBinError(10,0.06115939);
   hPb_d->SetBinError(11,0.004537031);
   hPb_d->SetBinError(12,0.009529737);
   hPb_d->SetBinError(13,0.03376473);
   hPb_d->SetBinError(14,0.01248368);
   hPb_d->SetBinError(15,0.2917069);
   hPb_d->SetEntries(34218.14);

   ci = TColor::GetColor("#0000ff");
   hPb_d->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hPb_d->SetMarkerColor(ci);
   hPb_d->SetMarkerStyle(8);
   hPb_d->GetXaxis()->SetRange(1,14);
   hPb_d->GetXaxis()->SetLabelFont(42);
   hPb_d->GetXaxis()->SetLabelSize(0.035);
   hPb_d->GetXaxis()->SetTitleSize(0.035);
   hPb_d->GetXaxis()->SetTitleFont(42);
   hPb_d->GetYaxis()->SetLabelFont(42);
   hPb_d->GetYaxis()->SetLabelSize(0.035);
   hPb_d->GetYaxis()->SetTitleSize(0.035);
   hPb_d->GetYaxis()->SetTitleFont(42);
   hPb_d->GetZaxis()->SetLabelFont(42);
   hPb_d->GetZaxis()->SetLabelSize(0.035);
   hPb_d->GetZaxis()->SetTitleSize(0.035);
   hPb_d->GetZaxis()->SetTitleFont(42);
   ->Add(hPb_d,"");
   ->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.2601005,0.9341608,0.7398995,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("data/externals comparison");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
