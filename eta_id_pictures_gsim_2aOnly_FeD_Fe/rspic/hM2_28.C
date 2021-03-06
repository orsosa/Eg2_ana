{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Dec 20 14:49:31 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.425,1.402798,0.675,4.466237);
   c->SetBorderSize(2);
   c->SetLogy();
   c->SetFrameFillColor(0);
   
   TH1F *hM = new TH1F("hM","Mass bin (pt2,nu,z) = (5,0,3)",75,0.45,0.65);
   hM->SetBinContent(0,51137);
   hM->SetBinContent(1,133);
   hM->SetBinContent(2,113);
   hM->SetBinContent(3,134);
   hM->SetBinContent(4,132);
   hM->SetBinContent(5,144);
   hM->SetBinContent(6,159);
   hM->SetBinContent(7,159);
   hM->SetBinContent(8,163);
   hM->SetBinContent(9,154);
   hM->SetBinContent(10,151);
   hM->SetBinContent(11,170);
   hM->SetBinContent(12,163);
   hM->SetBinContent(13,169);
   hM->SetBinContent(14,178);
   hM->SetBinContent(15,160);
   hM->SetBinContent(16,162);
   hM->SetBinContent(17,155);
   hM->SetBinContent(18,154);
   hM->SetBinContent(19,167);
   hM->SetBinContent(20,156);
   hM->SetBinContent(21,159);
   hM->SetBinContent(22,167);
   hM->SetBinContent(23,171);
   hM->SetBinContent(24,162);
   hM->SetBinContent(25,160);
   hM->SetBinContent(26,179);
   hM->SetBinContent(27,167);
   hM->SetBinContent(28,167);
   hM->SetBinContent(29,172);
   hM->SetBinContent(30,150);
   hM->SetBinContent(31,177);
   hM->SetBinContent(32,185);
   hM->SetBinContent(33,186);
   hM->SetBinContent(34,188);
   hM->SetBinContent(35,201);
   hM->SetBinContent(36,356);
   hM->SetBinContent(37,7540);
   hM->SetBinContent(38,564);
   hM->SetBinContent(39,202);
   hM->SetBinContent(40,226);
   hM->SetBinContent(41,230);
   hM->SetBinContent(42,197);
   hM->SetBinContent(43,204);
   hM->SetBinContent(44,200);
   hM->SetBinContent(45,240);
   hM->SetBinContent(46,203);
   hM->SetBinContent(47,189);
   hM->SetBinContent(48,238);
   hM->SetBinContent(49,229);
   hM->SetBinContent(50,214);
   hM->SetBinContent(51,218);
   hM->SetBinContent(52,273);
   hM->SetBinContent(53,219);
   hM->SetBinContent(54,240);
   hM->SetBinContent(55,277);
   hM->SetBinContent(56,263);
   hM->SetBinContent(57,252);
   hM->SetBinContent(58,277);
   hM->SetBinContent(59,249);
   hM->SetBinContent(60,283);
   hM->SetBinContent(61,289);
   hM->SetBinContent(62,266);
   hM->SetBinContent(63,273);
   hM->SetBinContent(64,289);
   hM->SetBinContent(65,317);
   hM->SetBinContent(66,278);
   hM->SetBinContent(67,294);
   hM->SetBinContent(68,315);
   hM->SetBinContent(69,309);
   hM->SetBinContent(70,311);
   hM->SetBinContent(71,336);
   hM->SetBinContent(72,321);
   hM->SetBinContent(73,361);
   hM->SetBinContent(74,281);
   hM->SetBinContent(75,319);
   hM->SetBinContent(76,24531);
   hM->SetEntries(99477);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 99477  ");
   text = ptstats->AddText("Mean  = 0.5593");
   text = ptstats->AddText("RMS   = 0.04758");
   text = ptstats->AddText("#chi^{2} / ndf = 85.26 / 69");
   text = ptstats->AddText("p0       = 878.8 #pm 166.4 ");
   text = ptstats->AddText("p1       = -3435 #pm 616.5 ");
   text = ptstats->AddText("p2       =  3995 #pm 566.0 ");
   text = ptstats->AddText("p3       =  7433 #pm 92.1 ");
   text = ptstats->AddText("p4       = 0.5475 #pm 0.0000 ");
   text = ptstats->AddText("p5       = -0.001022 #pm 0.000010 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.45,0.65);
   fsig->SetNpx(500);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(85.2627);
   fsig->SetNDF(69);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,878.8098);
   fsig->SetParError(0,166.3531);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,-3434.914);
   fsig->SetParError(1,616.4799);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,3994.764);
   fsig->SetParError(2,565.9594);
   fsig->SetParLimits(2,0,0);
   fsig->SetParameter(3,7433.294);
   fsig->SetParError(3,92.08539);
   fsig->SetParLimits(3,0,0);
   fsig->SetParameter(4,0.5474918);
   fsig->SetParError(4,2.456776e-05);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,-0.001022078);
   fsig->SetParError(5,1.025425e-05);
   fsig->SetParLimits(5,0,0);
   hM->GetListOfFunctions()->Add(fsig);

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
   
   TF1 *fmb = new TF1("fmb","pol2",0.54,0.56);
   fmb->SetFillColor(19);
   fmb->SetFillStyle(0);

   ci = TColor::GetColor("#00ff00");
   fmb->SetLineColor(ci);
   fmb->SetLineWidth(3);
   fmb->SetLineStyle(2);
   fmb->GetXaxis()->SetLabelFont(42);
   fmb->GetXaxis()->SetLabelSize(0.035);
   fmb->GetXaxis()->SetTitleSize(0.035);
   fmb->GetXaxis()->SetTitleFont(42);
   fmb->GetYaxis()->SetLabelFont(42);
   fmb->GetYaxis()->SetLabelSize(0.035);
   fmb->GetYaxis()->SetTitleSize(0.035);
   fmb->GetYaxis()->SetTitleFont(42);
   fmb->SetParameter(0,878.8098);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,-3434.914);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,3994.764);
   fmb->SetParError(2,0);
   fmb->SetParLimits(2,0,0);
   fmb->Draw("same");
   
   TF1 *fpeak = new TF1("fpeak","gaus",0.54,0.56);
   fpeak->SetFillColor(19);
   fpeak->SetFillStyle(0);
   fpeak->SetLineWidth(3);
   fpeak->SetLineStyle(2);
   fpeak->GetXaxis()->SetLabelFont(42);
   fpeak->GetXaxis()->SetLabelSize(0.035);
   fpeak->GetXaxis()->SetTitleSize(0.035);
   fpeak->GetXaxis()->SetTitleFont(42);
   fpeak->GetYaxis()->SetLabelFont(42);
   fpeak->GetYaxis()->SetLabelSize(0.035);
   fpeak->GetYaxis()->SetTitleSize(0.035);
   fpeak->GetYaxis()->SetTitleFont(42);
   fpeak->SetParameter(0,7433.294);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.5474918);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,-0.001022078);
   fpeak->SetParError(2,0);
   fpeak->SetParLimits(2,0,0);
   fpeak->Draw("same");
   
   TPaveText *pt = new TPaveText(0.01,0.9404546,0.4709548,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   text = pt->AddText("Mass bin (pt2,nu,z) = (5,0,3)");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
