{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Jun 30 11:29:27 2017) by ROOT version5.34/36
   TCanvas *c1 = new TCanvas("c1", "c1",0,51,1920,1004);
   c1->Range(0.07624999,-0.1307312,0.61375,1.17658);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   THStack *emc_a = new THStack();
   emc_a->SetName("emc_a");
   emc_a->SetTitle("EMC Orlando sim");
   Double_t xAxis1[15] = {0.13, 0.1607143, 0.1914286, 0.2221429, 0.2528571, 0.2835714, 0.3142857, 0.345, 0.3757143, 0.4064286, 0.4371428, 0.4678572, 0.4985714, 0.5292857, 0.56}; 
   
   TH1F *emc_a_stack_1 = new TH1F("emc_a_stack_1","EMC Orlando sim",14, xAxis1);
   emc_a_stack_1->SetMinimum(0);
   emc_a_stack_1->SetMaximum(1.045849);
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
   
   TH1D *hEMCCN__1 = new TH1D("hEMCCN__1","C",14, xAxis2);
   hEMCCN__1->SetBinContent(0,0.8625845);
   hEMCCN__1->SetBinContent(1,0.8883066);
   hEMCCN__1->SetBinContent(2,0.8971455);
   hEMCCN__1->SetBinContent(3,0.8973087);
   hEMCCN__1->SetBinContent(4,0.894747);
   hEMCCN__1->SetBinContent(5,0.8927936);
   hEMCCN__1->SetBinContent(6,0.8917538);
   hEMCCN__1->SetBinContent(7,0.8934587);
   hEMCCN__1->SetBinContent(8,0.889831);
   hEMCCN__1->SetBinContent(9,0.8888105);
   hEMCCN__1->SetBinContent(10,0.8872114);
   hEMCCN__1->SetBinContent(11,0.8774826);
   hEMCCN__1->SetBinContent(12,0.8899157);
   hEMCCN__1->SetBinContent(13,0.8916406);
   hEMCCN__1->SetBinContent(14,0.9344205);
   hEMCCN__1->SetBinContent(15,1.733333);
   hEMCCN__1->SetBinError(0,0.007184742);
   hEMCCN__1->SetBinError(1,0.001153993);
   hEMCCN__1->SetBinError(2,0.0008845922);
   hEMCCN__1->SetBinError(3,0.0008478624);
   hEMCCN__1->SetBinError(4,0.0008619136);
   hEMCCN__1->SetBinError(5,0.0009106423);
   hEMCCN__1->SetBinError(6,0.001017755);
   hEMCCN__1->SetBinError(7,0.001176112);
   hEMCCN__1->SetBinError(8,0.001387671);
   hEMCCN__1->SetBinError(9,0.001672754);
   hEMCCN__1->SetBinError(10,0.002082429);
   hEMCCN__1->SetBinError(11,0.002625634);
   hEMCCN__1->SetBinError(12,0.003579363);
   hEMCCN__1->SetBinError(13,0.005399603);
   hEMCCN__1->SetBinError(14,0.01039846);
   hEMCCN__1->SetBinError(15,0.4496913);
   hEMCCN__1->SetEntries(905982.7);
   hEMCCN__1->SetDirectory(0);

   ci = TColor::GetColor("#0000ff");
   hEMCCN__1->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hEMCCN__1->SetMarkerColor(ci);
   hEMCCN__1->SetMarkerStyle(4);
   hEMCCN__1->GetXaxis()->SetLabelFont(42);
   hEMCCN__1->GetXaxis()->SetLabelSize(0.035);
   hEMCCN__1->GetXaxis()->SetTitleSize(0.035);
   hEMCCN__1->GetXaxis()->SetTitleFont(42);
   hEMCCN__1->GetYaxis()->SetLabelFont(42);
   hEMCCN__1->GetYaxis()->SetLabelSize(0.035);
   hEMCCN__1->GetYaxis()->SetTitleSize(0.035);
   hEMCCN__1->GetYaxis()->SetTitleFont(42);
   hEMCCN__1->GetZaxis()->SetLabelFont(42);
   hEMCCN__1->GetZaxis()->SetLabelSize(0.035);
   hEMCCN__1->GetZaxis()->SetTitleSize(0.035);
   hEMCCN__1->GetZaxis()->SetTitleFont(42);
   emc_a->Add(hEMCCN,"");
   Double_t xAxis3[15] = {0.13, 0.1607143, 0.1914286, 0.2221429, 0.2528571, 0.2835714, 0.3142857, 0.345, 0.3757143, 0.4064286, 0.4371428, 0.4678572, 0.4985714, 0.5292857, 0.56}; 
   
   TH1D *hEMCFeN__2 = new TH1D("hEMCFeN__2","Fe",14, xAxis3);
   hEMCFeN__2->SetBinContent(0,0.9803858);
   hEMCFeN__2->SetBinContent(1,0.9960468);
   hEMCFeN__2->SetBinContent(2,0.9815378);
   hEMCFeN__2->SetBinContent(3,0.9635784);
   hEMCFeN__2->SetBinContent(4,0.9501424);
   hEMCFeN__2->SetBinContent(5,0.9344061);
   hEMCFeN__2->SetBinContent(6,0.9256696);
   hEMCFeN__2->SetBinContent(7,0.9143275);
   hEMCFeN__2->SetBinContent(8,0.9044084);
   hEMCFeN__2->SetBinContent(9,0.8912228);
   hEMCFeN__2->SetBinContent(10,0.8818644);
   hEMCFeN__2->SetBinContent(11,0.8652698);
   hEMCFeN__2->SetBinContent(12,0.8637788);
   hEMCFeN__2->SetBinContent(13,0.8573366);
   hEMCFeN__2->SetBinContent(14,0.892412);
   hEMCFeN__2->SetBinContent(15,1.156129);
   hEMCFeN__2->SetBinError(0,0.005940217);
   hEMCFeN__2->SetBinError(1,0.0009301092);
   hEMCFeN__2->SetBinError(2,0.0006944969);
   hEMCFeN__2->SetBinError(3,0.0006563308);
   hEMCFeN__2->SetBinError(4,0.0006621988);
   hEMCFeN__2->SetBinError(5,0.0006910421);
   hEMCFeN__2->SetBinError(6,0.0007679066);
   hEMCFeN__2->SetBinError(7,0.0008765347);
   hEMCFeN__2->SetBinError(8,0.001029677);
   hEMCFeN__2->SetBinError(9,0.001229324);
   hEMCFeN__2->SetBinError(10,0.001519087);
   hEMCFeN__2->SetBinError(11,0.001903768);
   hEMCFeN__2->SetBinError(12,0.002550778);
   hEMCFeN__2->SetBinError(13,0.003781952);
   hEMCFeN__2->SetBinError(14,0.00740377);
   hEMCFeN__2->SetBinError(15,0.224947);
   hEMCFeN__2->SetEntries(1864387);
   hEMCFeN__2->SetDirectory(0);
   hEMCFeN__2->SetMarkerStyle(4);
   hEMCFeN__2->GetXaxis()->SetRange(1,14);
   hEMCFeN__2->GetXaxis()->SetLabelFont(42);
   hEMCFeN__2->GetXaxis()->SetLabelSize(0.035);
   hEMCFeN__2->GetXaxis()->SetTitleSize(0.035);
   hEMCFeN__2->GetXaxis()->SetTitleFont(42);
   hEMCFeN__2->GetYaxis()->SetLabelFont(42);
   hEMCFeN__2->GetYaxis()->SetLabelSize(0.035);
   hEMCFeN__2->GetYaxis()->SetTitleSize(0.035);
   hEMCFeN__2->GetYaxis()->SetTitleFont(42);
   hEMCFeN__2->GetZaxis()->SetLabelFont(42);
   hEMCFeN__2->GetZaxis()->SetLabelSize(0.035);
   hEMCFeN__2->GetZaxis()->SetTitleSize(0.035);
   hEMCFeN__2->GetZaxis()->SetTitleFont(42);
   emc_a->Add(hEMCFeN,"");
   Double_t xAxis4[15] = {0.13, 0.1607143, 0.1914286, 0.2221429, 0.2528571, 0.2835714, 0.3142857, 0.345, 0.3757143, 0.4064286, 0.4371428, 0.4678572, 0.4985714, 0.5292857, 0.56}; 
   
   TH1D *hEMCPbN__3 = new TH1D("hEMCPbN__3","Pb",14, xAxis4);
   hEMCPbN__3->SetBinContent(0,0.8700988);
   hEMCPbN__3->SetBinContent(1,0.8926502);
   hEMCPbN__3->SetBinContent(2,0.8904454);
   hEMCPbN__3->SetBinContent(3,0.8726052);
   hEMCPbN__3->SetBinContent(4,0.8585059);
   hEMCPbN__3->SetBinContent(5,0.8418922);
   hEMCPbN__3->SetBinContent(6,0.8298099);
   hEMCPbN__3->SetBinContent(7,0.815926);
   hEMCPbN__3->SetBinContent(8,0.8052147);
   hEMCPbN__3->SetBinContent(9,0.7847349);
   hEMCPbN__3->SetBinContent(10,0.7743814);
   hEMCPbN__3->SetBinContent(11,0.750498);
   hEMCPbN__3->SetBinContent(12,0.7444025);
   hEMCPbN__3->SetBinContent(13,0.7305044);
   hEMCPbN__3->SetBinContent(14,0.7677859);
   hEMCPbN__3->SetBinContent(15,1.166667);
   hEMCPbN__3->SetBinError(0,0.00724394);
   hEMCPbN__3->SetBinError(1,0.001165206);
   hEMCPbN__3->SetBinError(2,0.0008850655);
   hEMCPbN__3->SetBinError(3,0.000837894);
   hEMCPbN__3->SetBinError(4,0.0008451803);
   hEMCPbN__3->SetBinError(5,0.0008824612);
   hEMCPbN__3->SetBinError(6,0.0009786585);
   hEMCPbN__3->SetBinError(7,0.001117849);
   hEMCPbN__3->SetBinError(8,0.001314234);
   hEMCPbN__3->SetBinError(9,0.001565116);
   hEMCPbN__3->SetBinError(10,0.001936628);
   hEMCPbN__3->SetBinError(11,0.002422047);
   hEMCPbN__3->SetBinError(12,0.003231982);
   hEMCPbN__3->SetBinError(13,0.004764204);
   hEMCPbN__3->SetBinError(14,0.009255112);
   hEMCPbN__3->SetBinError(15,0.2774303);
   hEMCPbN__3->SetEntries(927391);
   hEMCPbN__3->SetDirectory(0);

   ci = TColor::GetColor("#ff0000");
   hEMCPbN__3->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hEMCPbN__3->SetMarkerColor(ci);
   hEMCPbN__3->SetMarkerStyle(4);
   hEMCPbN__3->GetXaxis()->SetRange(1,14);
   hEMCPbN__3->GetXaxis()->SetLabelFont(42);
   hEMCPbN__3->GetXaxis()->SetLabelSize(0.035);
   hEMCPbN__3->GetXaxis()->SetTitleSize(0.035);
   hEMCPbN__3->GetXaxis()->SetTitleFont(42);
   hEMCPbN__3->GetYaxis()->SetLabelFont(42);
   hEMCPbN__3->GetYaxis()->SetLabelSize(0.035);
   hEMCPbN__3->GetYaxis()->SetTitleSize(0.035);
   hEMCPbN__3->GetYaxis()->SetTitleFont(42);
   hEMCPbN__3->GetZaxis()->SetLabelFont(42);
   hEMCPbN__3->GetZaxis()->SetLabelSize(0.035);
   hEMCPbN__3->GetZaxis()->SetTitleSize(0.035);
   hEMCPbN__3->GetZaxis()->SetTitleFont(42);
   emc_a->Add(hEMCPbN,"");
   emc_a->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3821689,0.9112245,0.6178311,0.9663265,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("EMC Orlando sim");
   pt->Draw();
   
   emc_a = new THStack();
   emc_a->SetName("emc_a");
   emc_a->SetTitle("EMC Acceptance corrected normalized");
   Double_t xAxis5[15] = {0.13, 0.1607143, 0.1914286, 0.2221429, 0.2528571, 0.2835714, 0.3142857, 0.345, 0.3757143, 0.4064286, 0.4371428, 0.4678572, 0.4985714, 0.5292857, 0.56}; 
   
   TH1F *emc_a_stack_2 = new TH1F("emc_a_stack_2","EMC Acceptance corrected normalized",14, xAxis5);
   emc_a_stack_2->SetMinimum(0);
   emc_a_stack_2->SetMaximum(1.05563);
   emc_a_stack_2->SetDirectory(0);
   emc_a_stack_2->SetStats(0);

   ci = TColor::GetColor("#000099");
   emc_a_stack_2->SetLineColor(ci);
   emc_a_stack_2->GetXaxis()->SetTitle("x_{B}");
   emc_a_stack_2->GetXaxis()->SetLabelFont(42);
   emc_a_stack_2->GetXaxis()->SetLabelSize(0.035);
   emc_a_stack_2->GetXaxis()->SetTitleSize(0.035);
   emc_a_stack_2->GetXaxis()->SetTitleFont(42);
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
   hEMCCN_a__4->SetBinContent(0,0.8730844);
   hEMCCN_a__4->SetBinContent(1,0.8945031);
   hEMCCN_a__4->SetBinContent(2,0.900715);
   hEMCCN_a__4->SetBinContent(3,0.8894385);
   hEMCCN_a__4->SetBinContent(4,0.8704257);
   hEMCCN_a__4->SetBinContent(5,0.8809783);
   hEMCCN_a__4->SetBinContent(6,0.8863968);
   hEMCCN_a__4->SetBinContent(7,0.8925424);
   hEMCCN_a__4->SetBinContent(8,0.880156);
   hEMCCN_a__4->SetBinContent(9,0.8827931);
   hEMCCN_a__4->SetBinContent(10,0.8745463);
   hEMCCN_a__4->SetBinContent(11,0.8699885);
   hEMCCN_a__4->SetBinContent(12,0.851005);
   hEMCCN_a__4->SetBinContent(13,0.7562463);
   hEMCCN_a__4->SetBinContent(14,0.7536232);
   hEMCCN_a__4->SetBinContent(15,0.8541063);
   hEMCCN_a__4->SetBinError(0,0.0168664);
   hEMCCN_a__4->SetBinError(1,0.002352562);
   hEMCCN_a__4->SetBinError(2,0.00175383);
   hEMCCN_a__4->SetBinError(3,0.001880041);
   hEMCCN_a__4->SetBinError(4,0.00228117);
   hEMCCN_a__4->SetBinError(5,0.002306293);
   hEMCCN_a__4->SetBinError(6,0.002185243);
   hEMCCN_a__4->SetBinError(7,0.002366811);
   hEMCCN_a__4->SetBinError(8,0.002720258);
   hEMCCN_a__4->SetBinError(9,0.003531466);
   hEMCCN_a__4->SetBinError(10,0.005202402);
   hEMCCN_a__4->SetBinError(11,0.009064104);
   hEMCCN_a__4->SetBinError(12,0.02504329);
   hEMCCN_a__4->SetBinError(13,0.0750694);
   hEMCCN_a__4->SetBinError(14,0.0262064);
   hEMCCN_a__4->SetBinError(15,0.7631425);
   hEMCCN_a__4->SetEntries(20531.2);
   hEMCCN_a__4->SetDirectory(0);

   ci = TColor::GetColor("#0000ff");
   hEMCCN_a__4->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hEMCCN_a__4->SetMarkerColor(ci);
   hEMCCN_a__4->SetMarkerStyle(8);
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
   hEMCFeN_a__5->SetBinContent(0,0.9923196);
   hEMCFeN_a__5->SetBinContent(1,1.002885);
   hEMCFeN_a__5->SetBinContent(2,0.9833962);
   hEMCFeN_a__5->SetBinContent(3,0.9508592);
   hEMCFeN_a__5->SetBinContent(4,0.919285);
   hEMCFeN_a__5->SetBinContent(5,0.9187461);
   hEMCFeN_a__5->SetBinContent(6,0.9196243);
   hEMCFeN_a__5->SetBinContent(7,0.9129588);
   hEMCFeN_a__5->SetBinContent(8,0.8960403);
   hEMCFeN_a__5->SetBinContent(9,0.8879914);
   hEMCFeN_a__5->SetBinContent(10,0.8733322);
   hEMCFeN_a__5->SetBinContent(11,0.860338);
   hEMCFeN_a__5->SetBinContent(12,0.8313873);
   hEMCFeN_a__5->SetBinContent(13,0.6979623);
   hEMCFeN_a__5->SetBinContent(14,0.7248325);
   hEMCFeN_a__5->SetBinContent(15,0.5696867);
   hEMCFeN_a__5->SetBinError(0,0.01831163);
   hEMCFeN_a__5->SetBinError(1,0.002477021);
   hEMCFeN_a__5->SetBinError(2,0.001784312);
   hEMCFeN_a__5->SetBinError(3,0.001868075);
   hEMCFeN_a__5->SetBinError(4,0.002235784);
   hEMCFeN_a__5->SetBinError(5,0.002230802);
   hEMCFeN_a__5->SetBinError(6,0.002122357);
   hEMCFeN_a__5->SetBinError(7,0.002256637);
   hEMCFeN_a__5->SetBinError(8,0.002586514);
   hEMCFeN_a__5->SetBinError(9,0.003306587);
   hEMCFeN_a__5->SetBinError(10,0.004785399);
   hEMCFeN_a__5->SetBinError(11,0.008170023);
   hEMCFeN_a__5->SetBinError(12,0.0221816);
   hEMCFeN_a__5->SetBinError(13,0.06453282);
   hEMCFeN_a__5->SetBinError(14,0.0239963);
   hEMCFeN_a__5->SetBinError(15,0.4995372);
   hEMCFeN_a__5->SetEntries(28528.64);
   hEMCFeN_a__5->SetDirectory(0);
   hEMCFeN_a__5->SetMarkerStyle(8);
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
   hEMCPbN_a__6->SetBinContent(0,0.8806901);
   hEMCPbN_a__6->SetBinContent(1,0.8988714);
   hEMCPbN_a__6->SetBinContent(2,0.8936464);
   hEMCPbN_a__6->SetBinContent(3,0.8627644);
   hEMCPbN_a__6->SetBinContent(4,0.8336312);
   hEMCPbN_a__6->SetBinContent(5,0.8290482);
   hEMCPbN_a__6->SetBinContent(6,0.8258229);
   hEMCPbN_a__6->SetBinContent(7,0.8155151);
   hEMCPbN_a__6->SetBinContent(8,0.7976479);
   hEMCPbN_a__6->SetBinContent(9,0.7811331);
   hEMCPbN_a__6->SetBinContent(10,0.7637469);
   hEMCPbN_a__6->SetBinContent(11,0.7394861);
   hEMCPbN_a__6->SetBinContent(12,0.7091537);
   hEMCPbN_a__6->SetBinContent(13,0.5779392);
   hEMCPbN_a__6->SetBinContent(14,0.6144353);
   hEMCPbN_a__6->SetBinContent(15,0.5748792);
   hEMCPbN_a__6->SetBinError(0,0.01701185);
   hEMCPbN_a__6->SetBinError(1,0.002366871);
   hEMCPbN_a__6->SetBinError(2,0.001744386);
   hEMCPbN_a__6->SetBinError(3,0.001830302);
   hEMCPbN_a__6->SetBinError(4,0.00218596);
   hEMCPbN_a__6->SetBinError(5,0.002175016);
   hEMCPbN_a__6->SetBinError(6,0.002064689);
   hEMCPbN_a__6->SetBinError(7,0.002196577);
   hEMCPbN_a__6->SetBinError(8,0.00251022);
   hEMCPbN_a__6->SetBinError(9,0.003181125);
   hEMCPbN_a__6->SetBinError(10,0.004584984);
   hEMCPbN_a__6->SetBinError(11,0.007622025);
   hEMCPbN_a__6->SetBinError(12,0.02079053);
   hEMCPbN_a__6->SetBinError(13,0.06010017);
   hEMCPbN_a__6->SetBinError(14,0.02153596);
   hEMCPbN_a__6->SetBinError(15,0.5101803);
   hEMCPbN_a__6->SetEntries(25839.56);
   hEMCPbN_a__6->SetDirectory(0);

   ci = TColor::GetColor("#ff0000");
   hEMCPbN_a__6->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hEMCPbN_a__6->SetMarkerColor(ci);
   hEMCPbN_a__6->SetMarkerStyle(8);
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
   
   TLegend *leg = new TLegend(0.1678832,0.3857143,0.2679875,0.6857143,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("hEMCCN","hEMCCN","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(4);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hEMCCN_a","hEMCCN_a","lpf");
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
   entry=leg->AddEntry("hEMCFeN","hEMCFeN","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(4);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hEMCFeN_a","hEMCFeN_a","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hEMCPbN","hEMCPbN","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(4);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hEMCPbN_a","hEMCPbN_a","lpf");
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
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
