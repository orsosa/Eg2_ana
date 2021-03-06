{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue May  9 16:33:34 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-233.1858,0.350906,2098.672);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin12 = new TH1F("hM_bin12","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin12->SetBinContent(15,13);
   hM_bin12->SetBinContent(16,66);
   hM_bin12->SetBinContent(17,103);
   hM_bin12->SetBinContent(18,119);
   hM_bin12->SetBinContent(19,163);
   hM_bin12->SetBinContent(20,245);
   hM_bin12->SetBinContent(21,234);
   hM_bin12->SetBinContent(22,233);
   hM_bin12->SetBinContent(23,207);
   hM_bin12->SetBinContent(24,223);
   hM_bin12->SetBinContent(25,250);
   hM_bin12->SetBinContent(26,237);
   hM_bin12->SetBinContent(27,268);
   hM_bin12->SetBinContent(28,289);
   hM_bin12->SetBinContent(29,320);
   hM_bin12->SetBinContent(30,355);
   hM_bin12->SetBinContent(31,320);
   hM_bin12->SetBinContent(32,291);
   hM_bin12->SetBinContent(33,343);
   hM_bin12->SetBinContent(34,408);
   hM_bin12->SetBinContent(35,407);
   hM_bin12->SetBinContent(36,405);
   hM_bin12->SetBinContent(37,429);
   hM_bin12->SetBinContent(38,565);
   hM_bin12->SetBinContent(39,601);
   hM_bin12->SetBinContent(40,690);
   hM_bin12->SetBinContent(41,782);
   hM_bin12->SetBinContent(42,964);
   hM_bin12->SetBinContent(43,1076);
   hM_bin12->SetBinContent(44,1235);
   hM_bin12->SetBinContent(45,1343);
   hM_bin12->SetBinContent(46,1564);
   hM_bin12->SetBinContent(47,1623);
   hM_bin12->SetBinContent(48,1735);
   hM_bin12->SetBinContent(49,1722);
   hM_bin12->SetBinContent(50,1645);
   hM_bin12->SetBinContent(51,1621);
   hM_bin12->SetBinContent(52,1500);
   hM_bin12->SetBinContent(53,1414);
   hM_bin12->SetBinContent(54,1219);
   hM_bin12->SetBinContent(55,1190);
   hM_bin12->SetBinContent(56,924);
   hM_bin12->SetBinContent(57,978);
   hM_bin12->SetBinContent(58,921);
   hM_bin12->SetBinContent(59,812);
   hM_bin12->SetBinContent(60,742);
   hM_bin12->SetBinContent(61,747);
   hM_bin12->SetBinContent(62,705);
   hM_bin12->SetBinContent(63,638);
   hM_bin12->SetBinContent(64,634);
   hM_bin12->SetBinContent(65,656);
   hM_bin12->SetBinContent(66,654);
   hM_bin12->SetBinContent(67,658);
   hM_bin12->SetBinContent(68,628);
   hM_bin12->SetBinContent(69,632);
   hM_bin12->SetBinContent(70,605);
   hM_bin12->SetBinContent(71,584);
   hM_bin12->SetBinContent(72,628);
   hM_bin12->SetBinContent(73,584);
   hM_bin12->SetBinContent(74,617);
   hM_bin12->SetBinContent(75,660);
   hM_bin12->SetBinContent(76,569);
   hM_bin12->SetBinContent(77,597);
   hM_bin12->SetBinContent(78,612);
   hM_bin12->SetBinContent(79,547);
   hM_bin12->SetBinContent(80,570);
   hM_bin12->SetBinContent(81,559);
   hM_bin12->SetBinContent(82,571);
   hM_bin12->SetBinContent(83,541);
   hM_bin12->SetBinContent(84,591);
   hM_bin12->SetBinContent(85,568);
   hM_bin12->SetBinContent(86,597);
   hM_bin12->SetBinContent(87,580);
   hM_bin12->SetBinContent(88,623);
   hM_bin12->SetBinContent(89,575);
   hM_bin12->SetBinContent(90,584);
   hM_bin12->SetBinContent(91,579);
   hM_bin12->SetBinContent(92,542);
   hM_bin12->SetBinContent(93,586);
   hM_bin12->SetBinContent(94,532);
   hM_bin12->SetBinContent(95,574);
   hM_bin12->SetBinContent(96,542);
   hM_bin12->SetBinContent(97,536);
   hM_bin12->SetBinContent(98,510);
   hM_bin12->SetBinContent(99,492);
   hM_bin12->SetBinContent(100,529);
   hM_bin12->SetBinContent(101,41594);
   hM_bin12->SetEntries(98124);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07203014,0.1879636);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(71.62481);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,93.79902);
   fsig->SetParError(0,20.64766);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,2878.719);
   fsig->SetParError(1,160.4655);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-0.008190776);
   fsig->SetParError(2,1729.084);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,1193.537);
   fsig->SetParError(3,16.23309);
   fsig->SetParLimits(3,0,3470);
   fsig->SetParameter(4,0.129617);
   fsig->SetParError(4,0.0002835029);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,4.646788e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin12->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin12");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 98124  ");
   text = ptstats->AddText("Mean  = 0.1677");
   text = ptstats->AddText("RMS   = 0.06856");
   text = ptstats->AddText("#chi^{2} / ndf = 71.62 / 27");
   text = ptstats->AddText("p0       =  93.8 #pm 20.6 ");
   text = ptstats->AddText("p1       =  2879 #pm 160.5 ");
   text = ptstats->AddText("p2       = -0.008191 #pm 1729.084351 ");
   text = ptstats->AddText("p3       =  1194 #pm 16.2 ");
   text = ptstats->AddText("p4       = 0.1296 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00005 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin12->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin12);

   ci = TColor::GetColor("#0000ff");
   hM_bin12->SetMarkerColor(ci);
   hM_bin12->SetMarkerStyle(24);
   hM_bin12->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin12->GetXaxis()->SetLabelFont(42);
   hM_bin12->GetXaxis()->SetLabelSize(0.035);
   hM_bin12->GetXaxis()->SetTitleSize(0.035);
   hM_bin12->GetXaxis()->SetTitleFont(42);
   hM_bin12->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin12->GetYaxis()->SetLabelFont(42);
   hM_bin12->GetYaxis()->SetLabelSize(0.035);
   hM_bin12->GetYaxis()->SetTitleSize(0.035);
   hM_bin12->GetYaxis()->SetTitleFont(42);
   hM_bin12->GetZaxis()->SetLabelFont(42);
   hM_bin12->GetZaxis()->SetLabelSize(0.035);
   hM_bin12->GetZaxis()->SetTitleSize(0.035);
   hM_bin12->GetZaxis()->SetTitleFont(42);
   hM_bin12->Draw("e");
   
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
   fmb->SetParameter(0,93.79902);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,2878.719);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-0.008190776);
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
   fpeak->SetParameter(0,1193.537);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.129617);
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
