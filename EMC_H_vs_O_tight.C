{
//=========Macro generated from canvas: c/c
//=========  (Thu Jul  6 11:42:47 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "c",0,0,1240,768);
   c->Range(0.07624999,0.6825,0.61375,1.2575);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   THStack *emc_a = new THStack();
   emc_a->SetName("emc_a");
   emc_a->SetTitle("EMC Acceptance corrected normalized");
   emc_a->SetMinimum(0.74);
   emc_a->SetMaximum(1.2);
   Double_t xAxis1[15] = {0.13, 0.1607143, 0.1914286, 0.2221429, 0.2528571, 0.2835714, 0.3142857, 0.345, 0.3757143, 0.4064286, 0.4371428, 0.4678572, 0.4985714, 0.5292857, 0.56}; 
   
   TH1F *emc_a_stack_1 = new TH1F("emc_a_stack_1","EMC Acceptance corrected normalized",14, xAxis1);
   emc_a_stack_1->SetMinimum(0.74);
   emc_a_stack_1->SetMaximum(1.2);
   emc_a_stack_1->SetDirectory(0);
   emc_a_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   emc_a_stack_1->SetLineColor(ci);
   emc_a_stack_1->GetXaxis()->SetTitle("x_{B}");
   emc_a_stack_1->GetXaxis()->SetLabelFont(42);
   emc_a_stack_1->GetXaxis()->SetLabelSize(0.035);
   emc_a_stack_1->GetXaxis()->SetTitleSize(0.035);
   emc_a_stack_1->GetXaxis()->SetTitleFont(42);
   emc_a_stack_1->GetYaxis()->SetTitle("#sigma^{A}/#sigma^{D}");
   emc_a_stack_1->GetYaxis()->SetLabelFont(42);
   emc_a_stack_1->GetYaxis()->SetLabelSize(0.035);
   emc_a_stack_1->GetYaxis()->SetTitleSize(0.035);
   emc_a_stack_1->GetYaxis()->SetTitleFont(42);
   emc_a_stack_1->GetZaxis()->SetLabelFont(42);
   emc_a_stack_1->GetZaxis()->SetLabelSize(0.035);
   emc_a_stack_1->GetZaxis()->SetTitleSize(0.035);
   emc_a_stack_1->GetZaxis()->SetTitleFont(42);
   emc_a->SetHistogram(emc_a_stack_1);
   
   Double_t xAxis2[15] = {0.13, 0.1607143, 0.1914286, 0.2221429, 0.2528571, 0.2835714, 0.3142857, 0.345, 0.3757143, 0.4064286, 0.4371428, 0.4678572, 0.4985714, 0.5292857, 0.56}; 
   
   TH1D *hEMCCN_a__1 = new TH1D("hEMCCN_a__1","C",14, xAxis2);
   hEMCCN_a__1->SetBinContent(0,0.8730844);
   hEMCCN_a__1->SetBinContent(1,0.8945031);
   hEMCCN_a__1->SetBinContent(2,0.900715);
   hEMCCN_a__1->SetBinContent(3,0.8894385);
   hEMCCN_a__1->SetBinContent(4,0.8704257);
   hEMCCN_a__1->SetBinContent(5,0.8809783);
   hEMCCN_a__1->SetBinContent(6,0.8863968);
   hEMCCN_a__1->SetBinContent(7,0.8925424);
   hEMCCN_a__1->SetBinContent(8,0.880156);
   hEMCCN_a__1->SetBinContent(9,0.8827931);
   hEMCCN_a__1->SetBinContent(10,0.8745463);
   hEMCCN_a__1->SetBinContent(11,0.8699885);
   hEMCCN_a__1->SetBinContent(12,0.851005);
   hEMCCN_a__1->SetBinContent(13,0.7562463);
   hEMCCN_a__1->SetBinContent(14,0.7536232);
   hEMCCN_a__1->SetBinContent(15,0.8541063);
   hEMCCN_a__1->SetBinError(0,0.0168664);
   hEMCCN_a__1->SetBinError(1,0.002352562);
   hEMCCN_a__1->SetBinError(2,0.00175383);
   hEMCCN_a__1->SetBinError(3,0.001880041);
   hEMCCN_a__1->SetBinError(4,0.00228117);
   hEMCCN_a__1->SetBinError(5,0.002306293);
   hEMCCN_a__1->SetBinError(6,0.002185243);
   hEMCCN_a__1->SetBinError(7,0.002366811);
   hEMCCN_a__1->SetBinError(8,0.002720258);
   hEMCCN_a__1->SetBinError(9,0.003531466);
   hEMCCN_a__1->SetBinError(10,0.005202402);
   hEMCCN_a__1->SetBinError(11,0.009064104);
   hEMCCN_a__1->SetBinError(12,0.02504329);
   hEMCCN_a__1->SetBinError(13,0.0750694);
   hEMCCN_a__1->SetBinError(14,0.0262064);
   hEMCCN_a__1->SetBinError(15,0.7631425);
   hEMCCN_a__1->SetEntries(20531.2);
   hEMCCN_a__1->SetDirectory(0);

   ci = TColor::GetColor("#0000ff");
   hEMCCN_a__1->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hEMCCN_a__1->SetMarkerColor(ci);
   hEMCCN_a__1->SetMarkerStyle(20);
   hEMCCN_a__1->GetXaxis()->SetRange(1,14);
   hEMCCN_a__1->GetXaxis()->SetLabelFont(42);
   hEMCCN_a__1->GetXaxis()->SetLabelSize(0.035);
   hEMCCN_a__1->GetXaxis()->SetTitleSize(0.035);
   hEMCCN_a__1->GetXaxis()->SetTitleFont(42);
   hEMCCN_a__1->GetYaxis()->SetLabelFont(42);
   hEMCCN_a__1->GetYaxis()->SetLabelSize(0.035);
   hEMCCN_a__1->GetYaxis()->SetTitleSize(0.035);
   hEMCCN_a__1->GetYaxis()->SetTitleFont(42);
   hEMCCN_a__1->GetZaxis()->SetLabelFont(42);
   hEMCCN_a__1->GetZaxis()->SetLabelSize(0.035);
   hEMCCN_a__1->GetZaxis()->SetTitleSize(0.035);
   hEMCCN_a__1->GetZaxis()->SetTitleFont(42);
   emc_a->Add(hEMCCN_a,"");
   Double_t xAxis3[15] = {0.13, 0.1607143, 0.1914286, 0.2221429, 0.2528571, 0.2835714, 0.3142857, 0.345, 0.3757143, 0.4064286, 0.4371428, 0.4678572, 0.4985714, 0.5292857, 0.56}; 
   
   TH1D *hEMCFeN_a__2 = new TH1D("hEMCFeN_a__2","Fe",14, xAxis3);
   hEMCFeN_a__2->SetBinContent(0,0.9923196);
   hEMCFeN_a__2->SetBinContent(1,1.002885);
   hEMCFeN_a__2->SetBinContent(2,0.9833962);
   hEMCFeN_a__2->SetBinContent(3,0.9508592);
   hEMCFeN_a__2->SetBinContent(4,0.919285);
   hEMCFeN_a__2->SetBinContent(5,0.9187461);
   hEMCFeN_a__2->SetBinContent(6,0.9196243);
   hEMCFeN_a__2->SetBinContent(7,0.9129588);
   hEMCFeN_a__2->SetBinContent(8,0.8960403);
   hEMCFeN_a__2->SetBinContent(9,0.8879914);
   hEMCFeN_a__2->SetBinContent(10,0.8733322);
   hEMCFeN_a__2->SetBinContent(11,0.860338);
   hEMCFeN_a__2->SetBinContent(12,0.8313873);
   hEMCFeN_a__2->SetBinContent(13,0.6979623);
   hEMCFeN_a__2->SetBinContent(14,0.7248325);
   hEMCFeN_a__2->SetBinContent(15,0.5696867);
   hEMCFeN_a__2->SetBinError(0,0.01831163);
   hEMCFeN_a__2->SetBinError(1,0.002477021);
   hEMCFeN_a__2->SetBinError(2,0.001784312);
   hEMCFeN_a__2->SetBinError(3,0.001868075);
   hEMCFeN_a__2->SetBinError(4,0.002235784);
   hEMCFeN_a__2->SetBinError(5,0.002230802);
   hEMCFeN_a__2->SetBinError(6,0.002122357);
   hEMCFeN_a__2->SetBinError(7,0.002256637);
   hEMCFeN_a__2->SetBinError(8,0.002586514);
   hEMCFeN_a__2->SetBinError(9,0.003306587);
   hEMCFeN_a__2->SetBinError(10,0.004785399);
   hEMCFeN_a__2->SetBinError(11,0.008170023);
   hEMCFeN_a__2->SetBinError(12,0.0221816);
   hEMCFeN_a__2->SetBinError(13,0.06453282);
   hEMCFeN_a__2->SetBinError(14,0.0239963);
   hEMCFeN_a__2->SetBinError(15,0.4995372);
   hEMCFeN_a__2->SetEntries(28528.64);
   hEMCFeN_a__2->SetDirectory(0);
   hEMCFeN_a__2->SetMarkerStyle(20);
   hEMCFeN_a__2->GetXaxis()->SetRange(1,14);
   hEMCFeN_a__2->GetXaxis()->SetLabelFont(42);
   hEMCFeN_a__2->GetXaxis()->SetLabelSize(0.035);
   hEMCFeN_a__2->GetXaxis()->SetTitleSize(0.035);
   hEMCFeN_a__2->GetXaxis()->SetTitleFont(42);
   hEMCFeN_a__2->GetYaxis()->SetLabelFont(42);
   hEMCFeN_a__2->GetYaxis()->SetLabelSize(0.035);
   hEMCFeN_a__2->GetYaxis()->SetTitleSize(0.035);
   hEMCFeN_a__2->GetYaxis()->SetTitleFont(42);
   hEMCFeN_a__2->GetZaxis()->SetLabelFont(42);
   hEMCFeN_a__2->GetZaxis()->SetLabelSize(0.035);
   hEMCFeN_a__2->GetZaxis()->SetTitleSize(0.035);
   hEMCFeN_a__2->GetZaxis()->SetTitleFont(42);
   emc_a->Add(hEMCFeN_a,"");
   Double_t xAxis4[15] = {0.13, 0.1607143, 0.1914286, 0.2221429, 0.2528571, 0.2835714, 0.3142857, 0.345, 0.3757143, 0.4064286, 0.4371428, 0.4678572, 0.4985714, 0.5292857, 0.56}; 
   
   TH1D *hEMCPbN_a__3 = new TH1D("hEMCPbN_a__3","Pb",14, xAxis4);
   hEMCPbN_a__3->SetBinContent(0,0.8806901);
   hEMCPbN_a__3->SetBinContent(1,0.8988714);
   hEMCPbN_a__3->SetBinContent(2,0.8936464);
   hEMCPbN_a__3->SetBinContent(3,0.8627644);
   hEMCPbN_a__3->SetBinContent(4,0.8336312);
   hEMCPbN_a__3->SetBinContent(5,0.8290482);
   hEMCPbN_a__3->SetBinContent(6,0.8258229);
   hEMCPbN_a__3->SetBinContent(7,0.8155151);
   hEMCPbN_a__3->SetBinContent(8,0.7976479);
   hEMCPbN_a__3->SetBinContent(9,0.7811331);
   hEMCPbN_a__3->SetBinContent(10,0.7637469);
   hEMCPbN_a__3->SetBinContent(11,0.7394861);
   hEMCPbN_a__3->SetBinContent(12,0.7091537);
   hEMCPbN_a__3->SetBinContent(13,0.5779392);
   hEMCPbN_a__3->SetBinContent(14,0.6144353);
   hEMCPbN_a__3->SetBinContent(15,0.5748792);
   hEMCPbN_a__3->SetBinError(0,0.01701185);
   hEMCPbN_a__3->SetBinError(1,0.002366871);
   hEMCPbN_a__3->SetBinError(2,0.001744386);
   hEMCPbN_a__3->SetBinError(3,0.001830302);
   hEMCPbN_a__3->SetBinError(4,0.00218596);
   hEMCPbN_a__3->SetBinError(5,0.002175016);
   hEMCPbN_a__3->SetBinError(6,0.002064689);
   hEMCPbN_a__3->SetBinError(7,0.002196577);
   hEMCPbN_a__3->SetBinError(8,0.00251022);
   hEMCPbN_a__3->SetBinError(9,0.003181125);
   hEMCPbN_a__3->SetBinError(10,0.004584984);
   hEMCPbN_a__3->SetBinError(11,0.007622025);
   hEMCPbN_a__3->SetBinError(12,0.02079053);
   hEMCPbN_a__3->SetBinError(13,0.06010017);
   hEMCPbN_a__3->SetBinError(14,0.02153596);
   hEMCPbN_a__3->SetBinError(15,0.5101803);
   hEMCPbN_a__3->SetEntries(25839.56);
   hEMCPbN_a__3->SetDirectory(0);

   ci = TColor::GetColor("#ff0000");
   hEMCPbN_a__3->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hEMCPbN_a__3->SetMarkerColor(ci);
   hEMCPbN_a__3->SetMarkerStyle(20);
   hEMCPbN_a__3->GetXaxis()->SetRange(1,14);
   hEMCPbN_a__3->GetXaxis()->SetLabelFont(42);
   hEMCPbN_a__3->GetXaxis()->SetLabelSize(0.035);
   hEMCPbN_a__3->GetXaxis()->SetTitleSize(0.035);
   hEMCPbN_a__3->GetXaxis()->SetTitleFont(42);
   hEMCPbN_a__3->GetYaxis()->SetLabelFont(42);
   hEMCPbN_a__3->GetYaxis()->SetLabelSize(0.035);
   hEMCPbN_a__3->GetYaxis()->SetTitleSize(0.035);
   hEMCPbN_a__3->GetYaxis()->SetTitleFont(42);
   hEMCPbN_a__3->GetZaxis()->SetLabelFont(42);
   hEMCPbN_a__3->GetZaxis()->SetLabelSize(0.035);
   hEMCPbN_a__3->GetZaxis()->SetTitleSize(0.035);
   hEMCPbN_a__3->GetZaxis()->SetTitleFont(42);
   emc_a->Add(hEMCPbN_a,"");
   emc_a->Draw("nostack");
   
   emc_a = new THStack();
   emc_a->SetName("emc_a");
   emc_a->SetTitle("EMC Acceptance corrected normalized");
   emc_a->SetMinimum(0.74);
   emc_a->SetMaximum(1.2);
   Double_t xAxis5[15] = {0.13, 0.1607143, 0.1914286, 0.2221429, 0.2528571, 0.2835714, 0.3142857, 0.345, 0.3757143, 0.4064286, 0.4371428, 0.4678572, 0.4985714, 0.5292857, 0.56}; 
   
   TH1F *emc_a_stack_2 = new TH1F("emc_a_stack_2","EMC Acceptance corrected normalized",14, xAxis5);
   emc_a_stack_2->SetMinimum(0.74);
   emc_a_stack_2->SetMaximum(1.2);
   emc_a_stack_2->SetDirectory(0);
   emc_a_stack_2->SetStats(0);

   ci = TColor::GetColor("#000099");
   emc_a_stack_2->SetLineColor(ci);
   emc_a_stack_2->GetXaxis()->SetTitle("x_{B}");
   emc_a_stack_2->GetXaxis()->SetLabelFont(42);
   emc_a_stack_2->GetXaxis()->SetLabelSize(0.035);
   emc_a_stack_2->GetXaxis()->SetTitleSize(0.035);
   emc_a_stack_2->GetXaxis()->SetTitleFont(42);
   emc_a_stack_2->GetYaxis()->SetTitle("#sigma^{A}/#sigma^{D}");
   emc_a_stack_2->GetYaxis()->SetLabelFont(42);
   emc_a_stack_2->GetYaxis()->SetLabelSize(0.035);
   emc_a_stack_2->GetYaxis()->SetTitleSize(0.035);
   emc_a_stack_2->GetYaxis()->SetTitleFont(42);
   emc_a_stack_2->GetZaxis()->SetLabelFont(42);
   emc_a_stack_2->GetZaxis()->SetLabelSize(0.035);
   emc_a_stack_2->GetZaxis()->SetTitleSize(0.035);
   emc_a_stack_2->GetZaxis()->SetTitleFont(42);
   emc_a->SetHistogram(emc_a_stack_2);
   
   Double_t xAxis6[15] = {0.13, 0.1607143, 0.1914286, 0.2221429, 0.2528571, 0.2835714, 0.3142857, 0.345, 0.3757143, 0.4064286, 0.4371428, 0.4678572, 0.4985714, 0.5292857, 0.56}; 
   
   TH1D *hEMCCN_a__4 = new TH1D("hEMCCN_a__4","C",14, xAxis6);
   hEMCCN_a__4->SetBinContent(0,0.8584843);
   hEMCCN_a__4->SetBinContent(1,0.8878587);
   hEMCCN_a__4->SetBinContent(2,0.8961634);
   hEMCCN_a__4->SetBinContent(3,0.8923267);
   hEMCCN_a__4->SetBinContent(4,0.8790489);
   hEMCCN_a__4->SetBinContent(5,0.8841816);
   hEMCCN_a__4->SetBinContent(6,0.8915124);
   hEMCCN_a__4->SetBinContent(7,0.8914203);
   hEMCCN_a__4->SetBinContent(8,0.8873224);
   hEMCCN_a__4->SetBinContent(9,0.8861867);
   hEMCCN_a__4->SetBinContent(10,0.9105929);
   hEMCCN_a__4->SetBinContent(11,0.8749353);
   hEMCCN_a__4->SetBinContent(12,0.8624836);
   hEMCCN_a__4->SetBinContent(13,0.8863296);
   hEMCCN_a__4->SetBinContent(14,0.8479243);
   hEMCCN_a__4->SetBinContent(15,0.7179033);
   hEMCCN_a__4->SetBinError(0,0.01051157);
   hEMCCN_a__4->SetBinError(1,0.001497117);
   hEMCCN_a__4->SetBinError(2,0.001139451);
   hEMCCN_a__4->SetBinError(3,0.001193848);
   hEMCCN_a__4->SetBinError(4,0.001405031);
   hEMCCN_a__4->SetBinError(5,0.001379485);
   hEMCCN_a__4->SetBinError(6,0.001315202);
   hEMCCN_a__4->SetBinError(7,0.001421452);
   hEMCCN_a__4->SetBinError(8,0.00162379);
   hEMCCN_a__4->SetBinError(9,0.002000854);
   hEMCCN_a__4->SetBinError(10,0.03578365);
   hEMCCN_a__4->SetBinError(11,0.004391271);
   hEMCCN_a__4->SetBinError(12,0.009263186);
   hEMCCN_a__4->SetBinError(13,0.03268681);
   hEMCCN_a__4->SetBinError(14,0.01226945);
   hEMCCN_a__4->SetBinError(15,0.2726075);
   hEMCCN_a__4->SetEntries(58397.89);
   hEMCCN_a__4->SetDirectory(0);

   ci = TColor::GetColor("#0000ff");
   hEMCCN_a__4->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hEMCCN_a__4->SetMarkerColor(ci);
   hEMCCN_a__4->SetMarkerStyle(24);
   hEMCCN_a__4->GetXaxis()->SetRange(1,14);
   hEMCCN_a__4->GetXaxis()->SetLabelFont(42);
   hEMCCN_a__4->GetXaxis()->SetLabelSize(0.035);
   hEMCCN_a__4->GetXaxis()->SetTitleSize(0.035);
   hEMCCN_a__4->GetXaxis()->SetTitleFont(42);
   hEMCCN_a__4->GetYaxis()->SetLabelFont(42);
   hEMCCN_a__4->GetYaxis()->SetLabelSize(0.035);
   hEMCCN_a__4->GetYaxis()->SetTitleSize(0.035);
   hEMCCN_a__4->GetYaxis()->SetTitleFont(42);
   hEMCCN_a__4->GetZaxis()->SetLabelFont(42);
   hEMCCN_a__4->GetZaxis()->SetLabelSize(0.035);
   hEMCCN_a__4->GetZaxis()->SetTitleSize(0.035);
   hEMCCN_a__4->GetZaxis()->SetTitleFont(42);
   emc_a->Add(hEMCCN_a,"");
   Double_t xAxis7[15] = {0.13, 0.1607143, 0.1914286, 0.2221429, 0.2528571, 0.2835714, 0.3142857, 0.345, 0.3757143, 0.4064286, 0.4371428, 0.4678572, 0.4985714, 0.5292857, 0.56}; 
   
   TH1D *hEMCFeN_a__5 = new TH1D("hEMCFeN_a__5","Fe",14, xAxis7);
   hEMCFeN_a__5->SetBinContent(0,0.9800049);
   hEMCFeN_a__5->SetBinContent(1,1.008849);
   hEMCFeN_a__5->SetBinContent(2,0.9953567);
   hEMCFeN_a__5->SetBinContent(3,0.9730215);
   hEMCFeN_a__5->SetBinContent(4,0.9465095);
   hEMCFeN_a__5->SetBinContent(5,0.9439475);
   hEMCFeN_a__5->SetBinContent(6,0.9478726);
   hEMCFeN_a__5->SetBinContent(7,0.9347579);
   hEMCFeN_a__5->SetBinContent(8,0.9276111);
   hEMCFeN_a__5->SetBinContent(9,0.9176113);
   hEMCFeN_a__5->SetBinContent(10,0.910425);
   hEMCFeN_a__5->SetBinContent(11,0.8951665);
   hEMCFeN_a__5->SetBinContent(12,0.873088);
   hEMCFeN_a__5->SetBinContent(13,0.8391854);
   hEMCFeN_a__5->SetBinContent(14,0.8561662);
   hEMCFeN_a__5->SetBinContent(15,0.4598613);
   hEMCFeN_a__5->SetBinError(0,0.0106984);
   hEMCFeN_a__5->SetBinError(1,0.001448568);
   hEMCFeN_a__5->SetBinError(2,0.001062477);
   hEMCFeN_a__5->SetBinError(3,0.00109137);
   hEMCFeN_a__5->SetBinError(4,0.001271711);
   hEMCFeN_a__5->SetBinError(5,0.001236821);
   hEMCFeN_a__5->SetBinError(6,0.001158247);
   hEMCFeN_a__5->SetBinError(7,0.001215518);
   hEMCFeN_a__5->SetBinError(8,0.001373166);
   hEMCFeN_a__5->SetBinError(9,0.001666485);
   hEMCFeN_a__5->SetBinError(10,0.002259337);
   hEMCFeN_a__5->SetBinError(11,0.003595849);
   hEMCFeN_a__5->SetBinError(12,0.007498206);
   hEMCFeN_a__5->SetBinError(13,0.02563428);
   hEMCFeN_a__5->SetBinError(14,0.01025252);
   hEMCFeN_a__5->SetBinError(15,0.1560371);
   hEMCFeN_a__5->SetEntries(197537);
   hEMCFeN_a__5->SetDirectory(0);
   hEMCFeN_a__5->SetMarkerStyle(24);
   hEMCFeN_a__5->GetXaxis()->SetRange(1,14);
   hEMCFeN_a__5->GetXaxis()->SetLabelFont(42);
   hEMCFeN_a__5->GetXaxis()->SetLabelSize(0.035);
   hEMCFeN_a__5->GetXaxis()->SetTitleSize(0.035);
   hEMCFeN_a__5->GetXaxis()->SetTitleFont(42);
   hEMCFeN_a__5->GetYaxis()->SetLabelFont(42);
   hEMCFeN_a__5->GetYaxis()->SetLabelSize(0.035);
   hEMCFeN_a__5->GetYaxis()->SetTitleSize(0.035);
   hEMCFeN_a__5->GetYaxis()->SetTitleFont(42);
   hEMCFeN_a__5->GetZaxis()->SetLabelFont(42);
   hEMCFeN_a__5->GetZaxis()->SetLabelSize(0.035);
   hEMCFeN_a__5->GetZaxis()->SetTitleSize(0.035);
   hEMCFeN_a__5->GetZaxis()->SetTitleFont(42);
   emc_a->Add(hEMCFeN_a,"");
   Double_t xAxis8[15] = {0.13, 0.1607143, 0.1914286, 0.2221429, 0.2528571, 0.2835714, 0.3142857, 0.345, 0.3757143, 0.4064286, 0.4371428, 0.4678572, 0.4985714, 0.5292857, 0.56}; 
   
   TH1D *hEMCPbN_a__6 = new TH1D("hEMCPbN_a__6","Pb",14, xAxis8);
   hEMCPbN_a__6->SetBinContent(0,0.8798926);
   hEMCPbN_a__6->SetBinContent(1,0.9042682);
   hEMCPbN_a__6->SetBinContent(2,0.9064196);
   hEMCPbN_a__6->SetBinContent(3,0.8851882);
   hEMCPbN_a__6->SetBinContent(4,0.8621712);
   hEMCPbN_a__6->SetBinContent(5,0.8562004);
   hEMCPbN_a__6->SetBinContent(6,0.8536949);
   hEMCPbN_a__6->SetBinContent(7,0.8394319);
   hEMCPbN_a__6->SetBinContent(8,0.8295182);
   hEMCPbN_a__6->SetBinContent(9,0.8100084);
   hEMCPbN_a__6->SetBinContent(10,0.7989456);
   hEMCPbN_a__6->SetBinContent(11,0.7721146);
   hEMCPbN_a__6->SetBinContent(12,0.7528414);
   hEMCPbN_a__6->SetBinContent(13,0.7079904);
   hEMCPbN_a__6->SetBinContent(14,0.7358328);
   hEMCPbN_a__6->SetBinContent(15,0.5371022);
   hEMCPbN_a__6->SetBinError(0,0.01079118);
   hEMCPbN_a__6->SetBinError(1,0.001530841);
   hEMCPbN_a__6->SetBinError(2,0.001161753);
   hEMCPbN_a__6->SetBinError(3,0.001200589);
   hEMCPbN_a__6->SetBinError(4,0.001398874);
   hEMCPbN_a__6->SetBinError(5,0.00136665);
   hEMCPbN_a__6->SetBinError(6,0.001298966);
   hEMCPbN_a__6->SetBinError(7,0.001388298);
   hEMCPbN_a__6->SetBinError(8,0.001581788);
   hEMCPbN_a__6->SetBinError(9,0.001919056);
   hEMCPbN_a__6->SetBinError(10,0.002588629);
   hEMCPbN_a__6->SetBinError(11,0.00399816);
   hEMCPbN_a__6->SetBinError(12,0.008299728);
   hEMCPbN_a__6->SetBinError(13,0.02672179);
   hEMCPbN_a__6->SetBinError(14,0.01125176);
   hEMCPbN_a__6->SetBinError(15,0.1980408);
   hEMCPbN_a__6->SetEntries(139420.1);
   hEMCPbN_a__6->SetDirectory(0);

   ci = TColor::GetColor("#ff0000");
   hEMCPbN_a__6->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hEMCPbN_a__6->SetMarkerColor(ci);
   hEMCPbN_a__6->SetMarkerStyle(24);
   hEMCPbN_a__6->GetXaxis()->SetRange(1,14);
   hEMCPbN_a__6->GetXaxis()->SetLabelFont(42);
   hEMCPbN_a__6->GetXaxis()->SetLabelSize(0.035);
   hEMCPbN_a__6->GetXaxis()->SetTitleSize(0.035);
   hEMCPbN_a__6->GetXaxis()->SetTitleFont(42);
   hEMCPbN_a__6->GetYaxis()->SetLabelFont(42);
   hEMCPbN_a__6->GetYaxis()->SetLabelSize(0.035);
   hEMCPbN_a__6->GetYaxis()->SetTitleSize(0.035);
   hEMCPbN_a__6->GetYaxis()->SetTitleFont(42);
   hEMCPbN_a__6->GetZaxis()->SetLabelFont(42);
   hEMCPbN_a__6->GetZaxis()->SetLabelSize(0.035);
   hEMCPbN_a__6->GetZaxis()->SetTitleSize(0.035);
   hEMCPbN_a__6->GetZaxis()->SetTitleFont(42);
   emc_a->Add(hEMCPbN_a,"");
   emc_a->Draw("nostacksame");
   
   TPaveText *pt = new TPaveText(0.2060194,0.9333784,0.7939806,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("EMC Acceptance corrected normalized");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.7,0.55,0.8,0.85,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("hEMCCN_a","hEMCCN_a_H","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hEMCCN_a","hEMCCN_a_O","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hEMCFeN_a","hEMCFeN_a_H","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hEMCFeN_a","hEMCFeN_a_O","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hEMCPbN_a","hEMCPbN_a_H","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hEMCPbN_a","hEMCPbN_a_O","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
