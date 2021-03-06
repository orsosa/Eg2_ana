{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue May  9 16:30:17 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.08024,-136.6004,0.350906,1229.403);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin30 = new TH1F("hM_bin30","M_{#gamma #gamma}",100,-0.0371254,0.3077914);
   hM_bin30->SetBinContent(13,1);
   hM_bin30->SetBinContent(14,11);
   hM_bin30->SetBinContent(15,35);
   hM_bin30->SetBinContent(16,48);
   hM_bin30->SetBinContent(17,69);
   hM_bin30->SetBinContent(18,93);
   hM_bin30->SetBinContent(19,93);
   hM_bin30->SetBinContent(20,125);
   hM_bin30->SetBinContent(21,117);
   hM_bin30->SetBinContent(22,133);
   hM_bin30->SetBinContent(23,137);
   hM_bin30->SetBinContent(24,140);
   hM_bin30->SetBinContent(25,158);
   hM_bin30->SetBinContent(26,116);
   hM_bin30->SetBinContent(27,212);
   hM_bin30->SetBinContent(28,229);
   hM_bin30->SetBinContent(29,161);
   hM_bin30->SetBinContent(30,178);
   hM_bin30->SetBinContent(31,178);
   hM_bin30->SetBinContent(32,201);
   hM_bin30->SetBinContent(33,211);
   hM_bin30->SetBinContent(34,276);
   hM_bin30->SetBinContent(35,246);
   hM_bin30->SetBinContent(36,258);
   hM_bin30->SetBinContent(37,309);
   hM_bin30->SetBinContent(38,334);
   hM_bin30->SetBinContent(39,392);
   hM_bin30->SetBinContent(40,404);
   hM_bin30->SetBinContent(41,484);
   hM_bin30->SetBinContent(42,507);
   hM_bin30->SetBinContent(43,627);
   hM_bin30->SetBinContent(44,793);
   hM_bin30->SetBinContent(45,855);
   hM_bin30->SetBinContent(46,844);
   hM_bin30->SetBinContent(47,985);
   hM_bin30->SetBinContent(48,973);
   hM_bin30->SetBinContent(49,978);
   hM_bin30->SetBinContent(50,893);
   hM_bin30->SetBinContent(51,1009);
   hM_bin30->SetBinContent(52,839);
   hM_bin30->SetBinContent(53,810);
   hM_bin30->SetBinContent(54,709);
   hM_bin30->SetBinContent(55,684);
   hM_bin30->SetBinContent(56,586);
   hM_bin30->SetBinContent(57,571);
   hM_bin30->SetBinContent(58,466);
   hM_bin30->SetBinContent(59,386);
   hM_bin30->SetBinContent(60,428);
   hM_bin30->SetBinContent(61,368);
   hM_bin30->SetBinContent(62,392);
   hM_bin30->SetBinContent(63,397);
   hM_bin30->SetBinContent(64,317);
   hM_bin30->SetBinContent(65,355);
   hM_bin30->SetBinContent(66,347);
   hM_bin30->SetBinContent(67,333);
   hM_bin30->SetBinContent(68,343);
   hM_bin30->SetBinContent(69,314);
   hM_bin30->SetBinContent(70,313);
   hM_bin30->SetBinContent(71,344);
   hM_bin30->SetBinContent(72,319);
   hM_bin30->SetBinContent(73,315);
   hM_bin30->SetBinContent(74,403);
   hM_bin30->SetBinContent(75,264);
   hM_bin30->SetBinContent(76,288);
   hM_bin30->SetBinContent(77,300);
   hM_bin30->SetBinContent(78,323);
   hM_bin30->SetBinContent(79,335);
   hM_bin30->SetBinContent(80,280);
   hM_bin30->SetBinContent(81,245);
   hM_bin30->SetBinContent(82,293);
   hM_bin30->SetBinContent(83,291);
   hM_bin30->SetBinContent(84,272);
   hM_bin30->SetBinContent(85,265);
   hM_bin30->SetBinContent(86,270);
   hM_bin30->SetBinContent(87,285);
   hM_bin30->SetBinContent(88,257);
   hM_bin30->SetBinContent(89,268);
   hM_bin30->SetBinContent(90,264);
   hM_bin30->SetBinContent(91,248);
   hM_bin30->SetBinContent(92,284);
   hM_bin30->SetBinContent(93,255);
   hM_bin30->SetBinContent(94,247);
   hM_bin30->SetBinContent(95,263);
   hM_bin30->SetBinContent(96,236);
   hM_bin30->SetBinContent(97,214);
   hM_bin30->SetBinContent(98,272);
   hM_bin30->SetBinContent(99,255);
   hM_bin30->SetBinContent(100,229);
   hM_bin30->SetBinContent(101,20633);
   hM_bin30->SetEntries(51788);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.07153907,0.1874725);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(72.35943);
   fsig->SetNDF(27);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,122.4621);
   fsig->SetParError(0,16.13449);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,1126.84);
   fsig->SetParError(1,122.4936);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-1.148146e-08);
   fsig->SetParError(2,1965.495);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,695.3068);
   fsig->SetParError(3,12.35208);
   fsig->SetParLimits(3,0,2018);
   fsig->SetParameter(4,0.1295103);
   fsig->SetParError(4,0.0003733995);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.01932224);
   fsig->SetParError(5,9.200636e-05);
   fsig->SetParLimits(5,0.01932224,0.02898336);
   hM_bin30->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin30");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 51788  ");
   text = ptstats->AddText("Mean  = 0.1614");
   text = ptstats->AddText("RMS   = 0.06726");
   text = ptstats->AddText("#chi^{2} / ndf = 72.36 / 27");
   text = ptstats->AddText("p0       = 122.5 #pm 16.1 ");
   text = ptstats->AddText("p1       =  1127 #pm 122.5 ");
   text = ptstats->AddText("p2       = -1.148e-08 #pm 1.965e+03 ");
   text = ptstats->AddText("p3       = 695.3 #pm 12.4 ");
   text = ptstats->AddText("p4       = 0.1295 #pm 0.0004 ");
   text = ptstats->AddText("p5       = 0.01932 #pm 0.00009 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin30->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin30);

   ci = TColor::GetColor("#0000ff");
   hM_bin30->SetMarkerColor(ci);
   hM_bin30->SetMarkerStyle(24);
   hM_bin30->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin30->GetXaxis()->SetLabelFont(42);
   hM_bin30->GetXaxis()->SetLabelSize(0.035);
   hM_bin30->GetXaxis()->SetTitleSize(0.035);
   hM_bin30->GetXaxis()->SetTitleFont(42);
   hM_bin30->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin30->GetYaxis()->SetLabelFont(42);
   hM_bin30->GetYaxis()->SetLabelSize(0.035);
   hM_bin30->GetYaxis()->SetTitleSize(0.035);
   hM_bin30->GetYaxis()->SetTitleFont(42);
   hM_bin30->GetZaxis()->SetLabelFont(42);
   hM_bin30->GetZaxis()->SetLabelSize(0.035);
   hM_bin30->GetZaxis()->SetTitleSize(0.035);
   hM_bin30->GetZaxis()->SetTitleFont(42);
   hM_bin30->Draw("e");
   
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
   fmb->SetParameter(0,122.4621);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1126.84);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-1.148146e-08);
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
   fpeak->SetParameter(0,695.3068);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.1295103);
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
