{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Dec 20 13:48:39 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   c->SetHighLightColor(2);
   c->Range(0.425,455.0744,0.675,850.2902);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *hM = new TH1F("hM","Mass, bin (q2,nu,z) = (0,0,4)",75,0.45,0.65);
   hM->SetBinContent(0,21985);
   hM->SetBinContent(1,655);
   hM->SetBinContent(2,692);
   hM->SetBinContent(3,667);
   hM->SetBinContent(4,768);
   hM->SetBinContent(5,662);
   hM->SetBinContent(6,702);
   hM->SetBinContent(7,682);
   hM->SetBinContent(8,717);
   hM->SetBinContent(9,652);
   hM->SetBinContent(10,678);
   hM->SetBinContent(11,650);
   hM->SetBinContent(12,684);
   hM->SetBinContent(13,632);
   hM->SetBinContent(14,697);
   hM->SetBinContent(15,696);
   hM->SetBinContent(16,627);
   hM->SetBinContent(17,662);
   hM->SetBinContent(18,645);
   hM->SetBinContent(19,667);
   hM->SetBinContent(20,666);
   hM->SetBinContent(21,689);
   hM->SetBinContent(22,663);
   hM->SetBinContent(23,663);
   hM->SetBinContent(24,691);
   hM->SetBinContent(25,693);
   hM->SetBinContent(26,652);
   hM->SetBinContent(27,635);
   hM->SetBinContent(28,715);
   hM->SetBinContent(29,690);
   hM->SetBinContent(30,645);
   hM->SetBinContent(31,702);
   hM->SetBinContent(32,678);
   hM->SetBinContent(33,666);
   hM->SetBinContent(34,743);
   hM->SetBinContent(35,690);
   hM->SetBinContent(36,669);
   hM->SetBinContent(37,607);
   hM->SetBinContent(38,679);
   hM->SetBinContent(39,594);
   hM->SetBinContent(40,623);
   hM->SetBinContent(41,652);
   hM->SetBinContent(42,648);
   hM->SetBinContent(43,676);
   hM->SetBinContent(44,587);
   hM->SetBinContent(45,630);
   hM->SetBinContent(46,628);
   hM->SetBinContent(47,610);
   hM->SetBinContent(48,651);
   hM->SetBinContent(49,639);
   hM->SetBinContent(50,646);
   hM->SetBinContent(51,632);
   hM->SetBinContent(52,650);
   hM->SetBinContent(53,636);
   hM->SetBinContent(54,673);
   hM->SetBinContent(55,643);
   hM->SetBinContent(56,610);
   hM->SetBinContent(57,609);
   hM->SetBinContent(58,678);
   hM->SetBinContent(59,634);
   hM->SetBinContent(60,652);
   hM->SetBinContent(61,644);
   hM->SetBinContent(62,565);
   hM->SetBinContent(63,591);
   hM->SetBinContent(64,576);
   hM->SetBinContent(65,626);
   hM->SetBinContent(66,644);
   hM->SetBinContent(67,586);
   hM->SetBinContent(68,558);
   hM->SetBinContent(69,582);
   hM->SetBinContent(70,544);
   hM->SetBinContent(71,569);
   hM->SetBinContent(72,574);
   hM->SetBinContent(73,532);
   hM->SetBinContent(74,607);
   hM->SetBinContent(75,580);
   hM->SetBinContent(76,12761);
   hM->SetEntries(83196);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 83196  ");
   text = ptstats->AddText("Mean  = 0.5471");
   text = ptstats->AddText("RMS   = 0.05725");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hM->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM);
   
   TF1 *fmb = new TF1("fmb","pol2",0.45,0.65);
   fmb->SetFillColor(19);
   fmb->SetFillStyle(0);
   fmb->SetLineColor(2);
   fmb->SetLineWidth(2);
   fmb->SetChisquare(106.944);
   fmb->SetNDF(72);
   fmb->GetXaxis()->SetLabelFont(42);
   fmb->GetXaxis()->SetLabelSize(0.035);
   fmb->GetXaxis()->SetTitleSize(0.035);
   fmb->GetXaxis()->SetTitleFont(42);
   fmb->GetYaxis()->SetLabelFont(42);
   fmb->GetYaxis()->SetLabelSize(0.035);
   fmb->GetYaxis()->SetTitleSize(0.035);
   fmb->GetYaxis()->SetTitleFont(42);
   fmb->SetParameter(0,-104.8928);
   fmb->SetParError(0,295.1982);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,3322.476);
   fmb->SetParError(1,1079.258);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-3524.459);
   fmb->SetParError(2,977.7551);
   fmb->SetParLimits(2,0,0);
   hM->GetListOfFunctions()->Add(fmb);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hM->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hM->SetMarkerColor(ci);
   hM->SetMarkerStyle(24);
   hM->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM->GetXaxis()->SetLabelFont(42);
   hM->GetXaxis()->SetLabelSize(0.035);
   hM->GetXaxis()->SetTitleSize(0.035);
   hM->GetXaxis()->SetTitleFont(42);
   hM->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM->GetYaxis()->SetLabelFont(42);
   hM->GetYaxis()->SetLabelSize(0.035);
   hM->GetYaxis()->SetTitleSize(0.035);
   hM->GetYaxis()->SetTitleFont(42);
   hM->GetZaxis()->SetLabelFont(42);
   hM->GetZaxis()->SetLabelSize(0.035);
   hM->GetZaxis()->SetTitleSize(0.035);
   hM->GetZaxis()->SetTitleFont(42);
   hM->Draw("e");
   
   TPaveText *pt = new TPaveText(0.2544472,0.9341608,0.7455528,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("Mass, bin (q2,nu,z) = (0,0,4)");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
