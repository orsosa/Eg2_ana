{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue May  9 16:35:02 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-113.2529,0.350906,1019.276);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin28 = new TH1F("hM_bin28","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin28->SetBinContent(15,2);
   hM_bin28->SetBinContent(16,18);
   hM_bin28->SetBinContent(17,21);
   hM_bin28->SetBinContent(18,47);
   hM_bin28->SetBinContent(19,51);
   hM_bin28->SetBinContent(20,57);
   hM_bin28->SetBinContent(21,53);
   hM_bin28->SetBinContent(22,68);
   hM_bin28->SetBinContent(23,84);
   hM_bin28->SetBinContent(24,97);
   hM_bin28->SetBinContent(25,102);
   hM_bin28->SetBinContent(26,81);
   hM_bin28->SetBinContent(27,96);
   hM_bin28->SetBinContent(28,109);
   hM_bin28->SetBinContent(29,96);
   hM_bin28->SetBinContent(30,123);
   hM_bin28->SetBinContent(31,127);
   hM_bin28->SetBinContent(32,117);
   hM_bin28->SetBinContent(33,127);
   hM_bin28->SetBinContent(34,115);
   hM_bin28->SetBinContent(35,130);
   hM_bin28->SetBinContent(36,150);
   hM_bin28->SetBinContent(37,160);
   hM_bin28->SetBinContent(38,167);
   hM_bin28->SetBinContent(39,165);
   hM_bin28->SetBinContent(40,197);
   hM_bin28->SetBinContent(41,262);
   hM_bin28->SetBinContent(42,315);
   hM_bin28->SetBinContent(43,404);
   hM_bin28->SetBinContent(44,446);
   hM_bin28->SetBinContent(45,486);
   hM_bin28->SetBinContent(46,570);
   hM_bin28->SetBinContent(47,698);
   hM_bin28->SetBinContent(48,713);
   hM_bin28->SetBinContent(49,834);
   hM_bin28->SetBinContent(50,736);
   hM_bin28->SetBinContent(51,784);
   hM_bin28->SetBinContent(52,758);
   hM_bin28->SetBinContent(53,622);
   hM_bin28->SetBinContent(54,555);
   hM_bin28->SetBinContent(55,516);
   hM_bin28->SetBinContent(56,403);
   hM_bin28->SetBinContent(57,399);
   hM_bin28->SetBinContent(58,309);
   hM_bin28->SetBinContent(59,273);
   hM_bin28->SetBinContent(60,247);
   hM_bin28->SetBinContent(61,258);
   hM_bin28->SetBinContent(62,200);
   hM_bin28->SetBinContent(63,173);
   hM_bin28->SetBinContent(64,157);
   hM_bin28->SetBinContent(65,172);
   hM_bin28->SetBinContent(66,149);
   hM_bin28->SetBinContent(67,155);
   hM_bin28->SetBinContent(68,137);
   hM_bin28->SetBinContent(69,146);
   hM_bin28->SetBinContent(70,171);
   hM_bin28->SetBinContent(71,125);
   hM_bin28->SetBinContent(72,133);
   hM_bin28->SetBinContent(73,156);
   hM_bin28->SetBinContent(74,154);
   hM_bin28->SetBinContent(75,123);
   hM_bin28->SetBinContent(76,125);
   hM_bin28->SetBinContent(77,109);
   hM_bin28->SetBinContent(78,121);
   hM_bin28->SetBinContent(79,96);
   hM_bin28->SetBinContent(80,120);
   hM_bin28->SetBinContent(81,112);
   hM_bin28->SetBinContent(82,111);
   hM_bin28->SetBinContent(83,111);
   hM_bin28->SetBinContent(84,127);
   hM_bin28->SetBinContent(85,106);
   hM_bin28->SetBinContent(86,93);
   hM_bin28->SetBinContent(87,137);
   hM_bin28->SetBinContent(88,75);
   hM_bin28->SetBinContent(89,102);
   hM_bin28->SetBinContent(90,72);
   hM_bin28->SetBinContent(91,103);
   hM_bin28->SetBinContent(92,92);
   hM_bin28->SetBinContent(93,107);
   hM_bin28->SetBinContent(94,83);
   hM_bin28->SetBinContent(95,100);
   hM_bin28->SetBinContent(96,105);
   hM_bin28->SetBinContent(97,100);
   hM_bin28->SetBinContent(98,86);
   hM_bin28->SetBinContent(99,84);
   hM_bin28->SetBinContent(100,81);
   hM_bin28->SetBinContent(101,4830);
   hM_bin28->SetEntries(22687);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07561781,0.1915513);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(84.35033);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,69.09667);
   fsig->SetParError(0,11.93233);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,364.7839);
   fsig->SetParError(1,86.841);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.003773e-05);
   fsig->SetParError(2,737.6965);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,610.8357);
   fsig->SetParError(3,9.920721);
   fsig->SetParLimits(3,0,1668);
   fsig->SetParameter(4,0.1332931);
   fsig->SetParError(4,0.0003237287);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,3.140615e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin28->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin28");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 22687  ");
   text = ptstats->AddText("Mean  = 0.1512");
   text = ptstats->AddText("RMS   = 0.05924");
   text = ptstats->AddText("#chi^{2} / ndf = 84.35 / 27");
   text = ptstats->AddText("p0       =  69.1 #pm 11.9 ");
   text = ptstats->AddText("p1       = 364.8 #pm 86.8 ");
   text = ptstats->AddText("p2       = -1.004e-05 #pm 7.377e+02 ");
   text = ptstats->AddText("p3       = 610.8 #pm 9.9 ");
   text = ptstats->AddText("p4       = 0.1333 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00003 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin28->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin28);

   ci = TColor::GetColor("#0000ff");
   hM_bin28->SetMarkerColor(ci);
   hM_bin28->SetMarkerStyle(24);
   hM_bin28->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin28->GetXaxis()->SetLabelFont(42);
   hM_bin28->GetXaxis()->SetLabelSize(0.035);
   hM_bin28->GetXaxis()->SetTitleSize(0.035);
   hM_bin28->GetXaxis()->SetTitleFont(42);
   hM_bin28->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin28->GetYaxis()->SetLabelFont(42);
   hM_bin28->GetYaxis()->SetLabelSize(0.035);
   hM_bin28->GetYaxis()->SetTitleSize(0.035);
   hM_bin28->GetYaxis()->SetTitleFont(42);
   hM_bin28->GetZaxis()->SetLabelFont(42);
   hM_bin28->GetZaxis()->SetLabelSize(0.035);
   hM_bin28->GetZaxis()->SetTitleSize(0.035);
   hM_bin28->GetZaxis()->SetTitleFont(42);
   hM_bin28->Draw("e");
   
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
   fmb->SetParameter(0,69.09667);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,364.7839);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.003773e-05);
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
   fpeak->SetParameter(0,610.8357);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1332931);
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
