{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Dec 20 14:49:26 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.425,1.547106,0.675,4.365083);
   c->SetBorderSize(2);
   c->SetLogy();
   c->SetFrameFillColor(0);
   
   TH1F *hM = new TH1F("hM","Mass bin (pt2,nu,z) = (3,0,3)",75,0.45,0.65);
   hM->SetBinContent(0,17044);
   hM->SetBinContent(1,176);
   hM->SetBinContent(2,166);
   hM->SetBinContent(3,147);
   hM->SetBinContent(4,152);
   hM->SetBinContent(5,184);
   hM->SetBinContent(6,183);
   hM->SetBinContent(7,172);
   hM->SetBinContent(8,207);
   hM->SetBinContent(9,198);
   hM->SetBinContent(10,188);
   hM->SetBinContent(11,183);
   hM->SetBinContent(12,218);
   hM->SetBinContent(13,177);
   hM->SetBinContent(14,224);
   hM->SetBinContent(15,228);
   hM->SetBinContent(16,247);
   hM->SetBinContent(17,222);
   hM->SetBinContent(18,201);
   hM->SetBinContent(19,220);
   hM->SetBinContent(20,242);
   hM->SetBinContent(21,250);
   hM->SetBinContent(22,229);
   hM->SetBinContent(23,255);
   hM->SetBinContent(24,235);
   hM->SetBinContent(25,265);
   hM->SetBinContent(26,231);
   hM->SetBinContent(27,219);
   hM->SetBinContent(28,263);
   hM->SetBinContent(29,241);
   hM->SetBinContent(30,279);
   hM->SetBinContent(31,280);
   hM->SetBinContent(32,250);
   hM->SetBinContent(33,298);
   hM->SetBinContent(34,317);
   hM->SetBinContent(35,279);
   hM->SetBinContent(36,424);
   hM->SetBinContent(37,6314);
   hM->SetBinContent(38,565);
   hM->SetBinContent(39,320);
   hM->SetBinContent(40,323);
   hM->SetBinContent(41,353);
   hM->SetBinContent(42,347);
   hM->SetBinContent(43,363);
   hM->SetBinContent(44,316);
   hM->SetBinContent(45,357);
   hM->SetBinContent(46,366);
   hM->SetBinContent(47,366);
   hM->SetBinContent(48,336);
   hM->SetBinContent(49,385);
   hM->SetBinContent(50,411);
   hM->SetBinContent(51,402);
   hM->SetBinContent(52,388);
   hM->SetBinContent(53,388);
   hM->SetBinContent(54,421);
   hM->SetBinContent(55,414);
   hM->SetBinContent(56,422);
   hM->SetBinContent(57,434);
   hM->SetBinContent(58,444);
   hM->SetBinContent(59,458);
   hM->SetBinContent(60,492);
   hM->SetBinContent(61,492);
   hM->SetBinContent(62,517);
   hM->SetBinContent(63,477);
   hM->SetBinContent(64,470);
   hM->SetBinContent(65,482);
   hM->SetBinContent(66,503);
   hM->SetBinContent(67,546);
   hM->SetBinContent(68,532);
   hM->SetBinContent(69,507);
   hM->SetBinContent(70,521);
   hM->SetBinContent(71,559);
   hM->SetBinContent(72,581);
   hM->SetBinContent(73,598);
   hM->SetBinContent(74,591);
   hM->SetBinContent(75,553);
   hM->SetBinContent(76,80093);
   hM->SetEntries(128701);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 128701 ");
   text = ptstats->AddText("Mean  = 0.5664");
   text = ptstats->AddText("RMS   = 0.05034");
   text = ptstats->AddText("#chi^{2} / ndf = 83.33 / 69");
   text = ptstats->AddText("p0       =  1116 #pm 203.4 ");
   text = ptstats->AddText("p1       = -5052 #pm 757.3 ");
   text = ptstats->AddText("p2       =  6530 #pm 698.4 ");
   text = ptstats->AddText("p3       =  6063 #pm 85.4 ");
   text = ptstats->AddText("p4       = 0.5475 #pm 0.0000 ");
   text = ptstats->AddText("p5       = -0.001003 #pm 0.000014 ");
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
   fsig->SetChisquare(83.33453);
   fsig->SetNDF(69);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,1115.861);
   fsig->SetParError(0,203.3632);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,-5051.629);
   fsig->SetParError(1,757.3028);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,6530.351);
   fsig->SetParError(2,698.4457);
   fsig->SetParLimits(2,0,0);
   fsig->SetParameter(3,6062.63);
   fsig->SetParError(3,85.38363);
   fsig->SetParLimits(3,0,0);
   fsig->SetParameter(4,0.5474699);
   fsig->SetParError(4,3.495421e-05);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,-0.001003253);
   fsig->SetParError(5,1.42492e-05);
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
   fmb->SetParameter(0,1115.861);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,-5051.629);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,6530.351);
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
   fpeak->SetParameter(0,6062.63);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.5474699);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,-0.001003253);
   fpeak->SetParError(2,0);
   fpeak->SetParLimits(2,0,0);
   fpeak->Draw("same");
   
   TPaveText *pt = new TPaveText(0.01,0.9404546,0.4709548,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   text = pt->AddText("Mass bin (pt2,nu,z) = (3,0,3)");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
