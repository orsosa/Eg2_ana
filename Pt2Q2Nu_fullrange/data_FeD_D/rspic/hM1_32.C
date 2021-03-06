{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 15:03:07 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-125.7983,0.350906,1132.185);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin32 = new TH1F("hM_bin32","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin32->SetBinContent(0,4558);
   hM_bin32->SetBinContent(13,3);
   hM_bin32->SetBinContent(14,11);
   hM_bin32->SetBinContent(15,13);
   hM_bin32->SetBinContent(16,10);
   hM_bin32->SetBinContent(17,19);
   hM_bin32->SetBinContent(18,17);
   hM_bin32->SetBinContent(19,28);
   hM_bin32->SetBinContent(20,25);
   hM_bin32->SetBinContent(21,24);
   hM_bin32->SetBinContent(22,20);
   hM_bin32->SetBinContent(23,19);
   hM_bin32->SetBinContent(24,28);
   hM_bin32->SetBinContent(25,26);
   hM_bin32->SetBinContent(26,22);
   hM_bin32->SetBinContent(27,29);
   hM_bin32->SetBinContent(28,25);
   hM_bin32->SetBinContent(29,29);
   hM_bin32->SetBinContent(30,38);
   hM_bin32->SetBinContent(31,33);
   hM_bin32->SetBinContent(32,40);
   hM_bin32->SetBinContent(33,40);
   hM_bin32->SetBinContent(34,50);
   hM_bin32->SetBinContent(35,69);
   hM_bin32->SetBinContent(36,65);
   hM_bin32->SetBinContent(37,86);
   hM_bin32->SetBinContent(38,92);
   hM_bin32->SetBinContent(39,128);
   hM_bin32->SetBinContent(40,158);
   hM_bin32->SetBinContent(41,208);
   hM_bin32->SetBinContent(42,277);
   hM_bin32->SetBinContent(43,361);
   hM_bin32->SetBinContent(44,454);
   hM_bin32->SetBinContent(45,575);
   hM_bin32->SetBinContent(46,671);
   hM_bin32->SetBinContent(47,810);
   hM_bin32->SetBinContent(48,893);
   hM_bin32->SetBinContent(49,914);
   hM_bin32->SetBinContent(50,928);
   hM_bin32->SetBinContent(51,913);
   hM_bin32->SetBinContent(52,835);
   hM_bin32->SetBinContent(53,770);
   hM_bin32->SetBinContent(54,666);
   hM_bin32->SetBinContent(55,594);
   hM_bin32->SetBinContent(56,515);
   hM_bin32->SetBinContent(57,436);
   hM_bin32->SetBinContent(58,383);
   hM_bin32->SetBinContent(59,355);
   hM_bin32->SetBinContent(60,282);
   hM_bin32->SetBinContent(61,221);
   hM_bin32->SetBinContent(62,218);
   hM_bin32->SetBinContent(63,188);
   hM_bin32->SetBinContent(64,167);
   hM_bin32->SetBinContent(65,196);
   hM_bin32->SetBinContent(66,187);
   hM_bin32->SetBinContent(67,189);
   hM_bin32->SetBinContent(68,191);
   hM_bin32->SetBinContent(69,179);
   hM_bin32->SetBinContent(70,149);
   hM_bin32->SetBinContent(71,199);
   hM_bin32->SetBinContent(72,188);
   hM_bin32->SetBinContent(73,186);
   hM_bin32->SetBinContent(74,191);
   hM_bin32->SetBinContent(75,208);
   hM_bin32->SetBinContent(76,206);
   hM_bin32->SetBinContent(77,218);
   hM_bin32->SetBinContent(78,182);
   hM_bin32->SetBinContent(79,199);
   hM_bin32->SetBinContent(80,193);
   hM_bin32->SetBinContent(81,183);
   hM_bin32->SetBinContent(82,197);
   hM_bin32->SetBinContent(83,207);
   hM_bin32->SetBinContent(84,195);
   hM_bin32->SetBinContent(85,189);
   hM_bin32->SetBinContent(86,207);
   hM_bin32->SetBinContent(87,199);
   hM_bin32->SetBinContent(88,224);
   hM_bin32->SetBinContent(89,218);
   hM_bin32->SetBinContent(90,223);
   hM_bin32->SetBinContent(91,219);
   hM_bin32->SetBinContent(92,219);
   hM_bin32->SetBinContent(93,220);
   hM_bin32->SetBinContent(94,219);
   hM_bin32->SetBinContent(95,239);
   hM_bin32->SetBinContent(96,222);
   hM_bin32->SetBinContent(97,232);
   hM_bin32->SetBinContent(98,237);
   hM_bin32->SetBinContent(99,231);
   hM_bin32->SetBinContent(100,245);
   hM_bin32->SetBinContent(101,53655);
   hM_bin32->SetEntries(79380);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07654659,0.19248);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(117.15);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-67.79486);
   fsig->SetParError(0,9.170165);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,1149.723);
   fsig->SetParError(1,73.07276);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-3.064997e-08);
   fsig->SetParError(2,311.7524);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,767.5234);
   fsig->SetParError(3,10.21585);
   fsig->SetParLimits(3,0,1856);
   fsig->SetParameter(4,0.1342225);
   fsig->SetParError(4,0.0002592923);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,1.48158e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin32->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin32");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 79380  ");
   text = ptstats->AddText("Mean  = 0.1729");
   text = ptstats->AddText("RMS   = 0.06301");
   text = ptstats->AddText("#chi^{2} / ndf = 117.1 / 28");
   text = ptstats->AddText("p0       = -67.79 #pm 9.17 ");
   text = ptstats->AddText("p1       =  1150 #pm 73.1 ");
   text = ptstats->AddText("p2       = -3.065e-08 #pm 3.118e+02 ");
   text = ptstats->AddText("p3       = 767.5 #pm 10.2 ");
   text = ptstats->AddText("p4       = 0.1342 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00001 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin32->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin32);

   ci = TColor::GetColor("#0000ff");
   hM_bin32->SetMarkerColor(ci);
   hM_bin32->SetMarkerStyle(24);
   hM_bin32->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin32->GetXaxis()->SetLabelFont(42);
   hM_bin32->GetXaxis()->SetLabelSize(0.035);
   hM_bin32->GetXaxis()->SetTitleSize(0.035);
   hM_bin32->GetXaxis()->SetTitleFont(42);
   hM_bin32->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin32->GetYaxis()->SetLabelFont(42);
   hM_bin32->GetYaxis()->SetLabelSize(0.035);
   hM_bin32->GetYaxis()->SetTitleSize(0.035);
   hM_bin32->GetYaxis()->SetTitleFont(42);
   hM_bin32->GetZaxis()->SetLabelFont(42);
   hM_bin32->GetZaxis()->SetLabelSize(0.035);
   hM_bin32->GetZaxis()->SetTitleSize(0.035);
   hM_bin32->GetZaxis()->SetTitleFont(42);
   hM_bin32->Draw("e");
   
   TF1 *fmb = new TF1("fmb","pol2",0.0628746,0.2077914);
   fmb->SetFillColor(19);
   fmb->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
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
   fmb->SetParameter(0,-67.79486);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1149.723);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-3.064997e-08);
   fmb->SetParError(2,0);
   fmb->SetParLimits(2,0,0);
   fmb->Draw("same");
   
   TF1 *fpeak = new TF1("fpeak","gaus",0.0628746,0.2077914);
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
   fpeak->SetParameter(0,767.5234);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1342225);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.01932224);
   fpeak->SetParError(2,0);
   fpeak->SetParLimits(2,0,0);
   fpeak->Draw("same");
   
   TPaveText *pt = new TPaveText(0.01,0.9320629,0.08904523,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   text = pt->AddText("M_{#gamma #gamma}");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
