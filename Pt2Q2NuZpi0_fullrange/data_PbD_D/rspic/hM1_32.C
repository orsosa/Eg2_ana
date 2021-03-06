{
//=========Macro generated from canvas: c/The canvas
//=========  (Mon May  8 17:30:37 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-218.8379,0.350906,1969.541);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin32 = new TH1F("hM_bin32","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin32->SetBinContent(13,2);
   hM_bin32->SetBinContent(14,21);
   hM_bin32->SetBinContent(15,47);
   hM_bin32->SetBinContent(16,52);
   hM_bin32->SetBinContent(17,114);
   hM_bin32->SetBinContent(18,139);
   hM_bin32->SetBinContent(19,153);
   hM_bin32->SetBinContent(20,163);
   hM_bin32->SetBinContent(21,176);
   hM_bin32->SetBinContent(22,201);
   hM_bin32->SetBinContent(23,180);
   hM_bin32->SetBinContent(24,213);
   hM_bin32->SetBinContent(25,196);
   hM_bin32->SetBinContent(26,228);
   hM_bin32->SetBinContent(27,229);
   hM_bin32->SetBinContent(28,273);
   hM_bin32->SetBinContent(29,259);
   hM_bin32->SetBinContent(30,280);
   hM_bin32->SetBinContent(31,282);
   hM_bin32->SetBinContent(32,289);
   hM_bin32->SetBinContent(33,338);
   hM_bin32->SetBinContent(34,285);
   hM_bin32->SetBinContent(35,302);
   hM_bin32->SetBinContent(36,343);
   hM_bin32->SetBinContent(37,397);
   hM_bin32->SetBinContent(38,404);
   hM_bin32->SetBinContent(39,447);
   hM_bin32->SetBinContent(40,544);
   hM_bin32->SetBinContent(41,592);
   hM_bin32->SetBinContent(42,623);
   hM_bin32->SetBinContent(43,752);
   hM_bin32->SetBinContent(44,903);
   hM_bin32->SetBinContent(45,1024);
   hM_bin32->SetBinContent(46,1066);
   hM_bin32->SetBinContent(47,1336);
   hM_bin32->SetBinContent(48,1310);
   hM_bin32->SetBinContent(49,1559);
   hM_bin32->SetBinContent(50,1569);
   hM_bin32->SetBinContent(51,1609);
   hM_bin32->SetBinContent(52,1627);
   hM_bin32->SetBinContent(53,1513);
   hM_bin32->SetBinContent(54,1361);
   hM_bin32->SetBinContent(55,1224);
   hM_bin32->SetBinContent(56,1117);
   hM_bin32->SetBinContent(57,972);
   hM_bin32->SetBinContent(58,915);
   hM_bin32->SetBinContent(59,770);
   hM_bin32->SetBinContent(60,676);
   hM_bin32->SetBinContent(61,617);
   hM_bin32->SetBinContent(62,569);
   hM_bin32->SetBinContent(63,510);
   hM_bin32->SetBinContent(64,448);
   hM_bin32->SetBinContent(65,396);
   hM_bin32->SetBinContent(66,368);
   hM_bin32->SetBinContent(67,415);
   hM_bin32->SetBinContent(68,380);
   hM_bin32->SetBinContent(69,352);
   hM_bin32->SetBinContent(70,361);
   hM_bin32->SetBinContent(71,300);
   hM_bin32->SetBinContent(72,310);
   hM_bin32->SetBinContent(73,362);
   hM_bin32->SetBinContent(74,315);
   hM_bin32->SetBinContent(75,272);
   hM_bin32->SetBinContent(76,304);
   hM_bin32->SetBinContent(77,314);
   hM_bin32->SetBinContent(78,336);
   hM_bin32->SetBinContent(79,329);
   hM_bin32->SetBinContent(80,259);
   hM_bin32->SetBinContent(81,250);
   hM_bin32->SetBinContent(82,319);
   hM_bin32->SetBinContent(83,265);
   hM_bin32->SetBinContent(84,289);
   hM_bin32->SetBinContent(85,299);
   hM_bin32->SetBinContent(86,235);
   hM_bin32->SetBinContent(87,267);
   hM_bin32->SetBinContent(88,238);
   hM_bin32->SetBinContent(89,257);
   hM_bin32->SetBinContent(90,286);
   hM_bin32->SetBinContent(91,277);
   hM_bin32->SetBinContent(92,237);
   hM_bin32->SetBinContent(93,217);
   hM_bin32->SetBinContent(94,236);
   hM_bin32->SetBinContent(95,249);
   hM_bin32->SetBinContent(96,260);
   hM_bin32->SetBinContent(97,249);
   hM_bin32->SetBinContent(98,183);
   hM_bin32->SetBinContent(99,230);
   hM_bin32->SetBinContent(100,214);
   hM_bin32->SetBinContent(101,15263);
   hM_bin32->SetEntries(56912);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07781672,0.1959245);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(59.60019);
   fsig->SetNDF(29);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,93.60294);
   fsig->SetParError(0,131.0255);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,3243.262);
   fsig->SetParError(1,2206.13);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-9487.797);
   fsig->SetParError(2,9739.118);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,1190.688);
   fsig->SetParError(3,30.18378);
   fsig->SetParLimits(3,0,3254);
   fsig->SetParameter(4,0.13666);
   fsig->SetParError(4,0.0002574845);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,0.0001143387);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin32->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin32");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 56912  ");
   text = ptstats->AddText("Mean  = 0.1533");
   text = ptstats->AddText("RMS   = 0.06163");
   text = ptstats->AddText("#chi^{2} / ndf =  59.6 / 29");
   text = ptstats->AddText("p0       =  93.6 #pm 131.0 ");
   text = ptstats->AddText("p1       =  3243 #pm 2206.1 ");
   text = ptstats->AddText("p2       = -9488 #pm 9739.1 ");
   text = ptstats->AddText("p3       =  1191 #pm 30.2 ");
   text = ptstats->AddText("p4       = 0.1367 #pm 0.0003 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00011 ");
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
   fmb->SetParameter(0,93.60294);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,3243.262);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-9487.797);
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
   fpeak->SetParameter(0,1190.688);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.13666);
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
