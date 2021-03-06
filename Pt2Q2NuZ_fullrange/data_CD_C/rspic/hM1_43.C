{
//=========Macro generated from canvas: c/The canvas
//=========  (Fri Apr  7 15:57:57 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-100.4281,0.350906,903.8525);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin43 = new TH1F("hM_bin43","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin43->SetBinContent(0,2105);
   hM_bin43->SetBinContent(13,1);
   hM_bin43->SetBinContent(14,8);
   hM_bin43->SetBinContent(15,19);
   hM_bin43->SetBinContent(16,30);
   hM_bin43->SetBinContent(17,25);
   hM_bin43->SetBinContent(18,24);
   hM_bin43->SetBinContent(19,16);
   hM_bin43->SetBinContent(20,16);
   hM_bin43->SetBinContent(21,21);
   hM_bin43->SetBinContent(22,29);
   hM_bin43->SetBinContent(23,16);
   hM_bin43->SetBinContent(24,19);
   hM_bin43->SetBinContent(25,21);
   hM_bin43->SetBinContent(26,32);
   hM_bin43->SetBinContent(27,19);
   hM_bin43->SetBinContent(28,23);
   hM_bin43->SetBinContent(29,32);
   hM_bin43->SetBinContent(30,21);
   hM_bin43->SetBinContent(31,32);
   hM_bin43->SetBinContent(32,33);
   hM_bin43->SetBinContent(33,41);
   hM_bin43->SetBinContent(34,40);
   hM_bin43->SetBinContent(35,44);
   hM_bin43->SetBinContent(36,48);
   hM_bin43->SetBinContent(37,49);
   hM_bin43->SetBinContent(38,60);
   hM_bin43->SetBinContent(39,75);
   hM_bin43->SetBinContent(40,108);
   hM_bin43->SetBinContent(41,144);
   hM_bin43->SetBinContent(42,181);
   hM_bin43->SetBinContent(43,214);
   hM_bin43->SetBinContent(44,301);
   hM_bin43->SetBinContent(45,395);
   hM_bin43->SetBinContent(46,459);
   hM_bin43->SetBinContent(47,540);
   hM_bin43->SetBinContent(48,610);
   hM_bin43->SetBinContent(49,671);
   hM_bin43->SetBinContent(50,732);
   hM_bin43->SetBinContent(51,738);
   hM_bin43->SetBinContent(52,704);
   hM_bin43->SetBinContent(53,652);
   hM_bin43->SetBinContent(54,664);
   hM_bin43->SetBinContent(55,580);
   hM_bin43->SetBinContent(56,481);
   hM_bin43->SetBinContent(57,425);
   hM_bin43->SetBinContent(58,411);
   hM_bin43->SetBinContent(59,339);
   hM_bin43->SetBinContent(60,306);
   hM_bin43->SetBinContent(61,250);
   hM_bin43->SetBinContent(62,237);
   hM_bin43->SetBinContent(63,232);
   hM_bin43->SetBinContent(64,172);
   hM_bin43->SetBinContent(65,168);
   hM_bin43->SetBinContent(66,209);
   hM_bin43->SetBinContent(67,176);
   hM_bin43->SetBinContent(68,169);
   hM_bin43->SetBinContent(69,167);
   hM_bin43->SetBinContent(70,175);
   hM_bin43->SetBinContent(71,165);
   hM_bin43->SetBinContent(72,182);
   hM_bin43->SetBinContent(73,157);
   hM_bin43->SetBinContent(74,176);
   hM_bin43->SetBinContent(75,169);
   hM_bin43->SetBinContent(76,170);
   hM_bin43->SetBinContent(77,170);
   hM_bin43->SetBinContent(78,183);
   hM_bin43->SetBinContent(79,167);
   hM_bin43->SetBinContent(80,161);
   hM_bin43->SetBinContent(81,174);
   hM_bin43->SetBinContent(82,208);
   hM_bin43->SetBinContent(83,183);
   hM_bin43->SetBinContent(84,210);
   hM_bin43->SetBinContent(85,197);
   hM_bin43->SetBinContent(86,199);
   hM_bin43->SetBinContent(87,223);
   hM_bin43->SetBinContent(88,198);
   hM_bin43->SetBinContent(89,201);
   hM_bin43->SetBinContent(90,190);
   hM_bin43->SetBinContent(91,223);
   hM_bin43->SetBinContent(92,193);
   hM_bin43->SetBinContent(93,210);
   hM_bin43->SetBinContent(94,230);
   hM_bin43->SetBinContent(95,216);
   hM_bin43->SetBinContent(96,225);
   hM_bin43->SetBinContent(97,201);
   hM_bin43->SetBinContent(98,242);
   hM_bin43->SetBinContent(99,228);
   hM_bin43->SetBinContent(100,247);
   hM_bin43->SetBinContent(101,37819);
   hM_bin43->SetEntries(58226);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.08067518,0.1966086);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(65.40085);
   fsig->SetNDF(28);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-84.06195);
   fsig->SetParError(0,8.708);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,1248.232);
   fsig->SetParError(1,69.64736);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-9.018215e-06);
   fsig->SetParError(2,456.5498);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,602.9746);
   fsig->SetParError(3,9.289527);
   fsig->SetParLimits(3,0,1476);
   fsig->SetParameter(4,0.1380233);
   fsig->SetParError(4,0.0003027119);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,2.777281e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin43->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin43");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 58226  ");
   text = ptstats->AddText("Mean  = 0.1786");
   text = ptstats->AddText("RMS   = 0.0637");
   text = ptstats->AddText("#chi^{2} / ndf =  65.4 / 28");
   text = ptstats->AddText("p0       = -84.06 #pm 8.71 ");
   text = ptstats->AddText("p1       =  1248 #pm 69.6 ");
   text = ptstats->AddText("p2       = -9.018e-06 #pm 4.565e+02 ");
   text = ptstats->AddText("p3       =   603 #pm 9.3 ");
   text = ptstats->AddText("p4       = 0.138 #pm 0.000 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00003 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin43->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin43);

   ci = TColor::GetColor("#0000ff");
   hM_bin43->SetMarkerColor(ci);
   hM_bin43->SetMarkerStyle(24);
   hM_bin43->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin43->GetXaxis()->SetLabelFont(42);
   hM_bin43->GetXaxis()->SetLabelSize(0.035);
   hM_bin43->GetXaxis()->SetTitleSize(0.035);
   hM_bin43->GetXaxis()->SetTitleFont(42);
   hM_bin43->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin43->GetYaxis()->SetLabelFont(42);
   hM_bin43->GetYaxis()->SetLabelSize(0.035);
   hM_bin43->GetYaxis()->SetTitleSize(0.035);
   hM_bin43->GetYaxis()->SetTitleFont(42);
   hM_bin43->GetZaxis()->SetLabelFont(42);
   hM_bin43->GetZaxis()->SetLabelSize(0.035);
   hM_bin43->GetZaxis()->SetTitleSize(0.035);
   hM_bin43->GetZaxis()->SetTitleFont(42);
   hM_bin43->Draw("e");
   
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
   fmb->SetParameter(0,-84.06195);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1248.232);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-9.018215e-06);
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
   fpeak->SetParameter(0,602.9746);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1380233);
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
