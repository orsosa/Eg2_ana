{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Apr 18 12:15:26 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0.1901558,9.783729,0.8890623,300.8469);
   c->SetBorderSize(2);
   c->SetFrameFillColor(0);
   
   TH1F *hM_bin14 = new TH1F("hM_bin14","M_{#gamma #gamma}",100,0.2600464,0.8191716);
   hM_bin14->SetBinContent(0,4885);
   hM_bin14->SetBinContent(1,57);
   hM_bin14->SetBinContent(2,80);
   hM_bin14->SetBinContent(3,78);
   hM_bin14->SetBinContent(4,80);
   hM_bin14->SetBinContent(5,70);
   hM_bin14->SetBinContent(6,66);
   hM_bin14->SetBinContent(7,90);
   hM_bin14->SetBinContent(8,117);
   hM_bin14->SetBinContent(9,82);
   hM_bin14->SetBinContent(10,96);
   hM_bin14->SetBinContent(11,83);
   hM_bin14->SetBinContent(12,107);
   hM_bin14->SetBinContent(13,124);
   hM_bin14->SetBinContent(14,114);
   hM_bin14->SetBinContent(15,118);
   hM_bin14->SetBinContent(16,129);
   hM_bin14->SetBinContent(17,108);
   hM_bin14->SetBinContent(18,120);
   hM_bin14->SetBinContent(19,127);
   hM_bin14->SetBinContent(20,127);
   hM_bin14->SetBinContent(21,140);
   hM_bin14->SetBinContent(22,151);
   hM_bin14->SetBinContent(23,150);
   hM_bin14->SetBinContent(24,122);
   hM_bin14->SetBinContent(25,150);
   hM_bin14->SetBinContent(26,157);
   hM_bin14->SetBinContent(27,165);
   hM_bin14->SetBinContent(28,155);
   hM_bin14->SetBinContent(29,181);
   hM_bin14->SetBinContent(30,169);
   hM_bin14->SetBinContent(31,142);
   hM_bin14->SetBinContent(32,186);
   hM_bin14->SetBinContent(33,171);
   hM_bin14->SetBinContent(34,175);
   hM_bin14->SetBinContent(35,183);
   hM_bin14->SetBinContent(36,176);
   hM_bin14->SetBinContent(37,193);
   hM_bin14->SetBinContent(38,187);
   hM_bin14->SetBinContent(39,204);
   hM_bin14->SetBinContent(40,184);
   hM_bin14->SetBinContent(41,193);
   hM_bin14->SetBinContent(42,214);
   hM_bin14->SetBinContent(43,211);
   hM_bin14->SetBinContent(44,206);
   hM_bin14->SetBinContent(45,223);
   hM_bin14->SetBinContent(46,200);
   hM_bin14->SetBinContent(47,233);
   hM_bin14->SetBinContent(48,224);
   hM_bin14->SetBinContent(49,213);
   hM_bin14->SetBinContent(50,231);
   hM_bin14->SetBinContent(51,211);
   hM_bin14->SetBinContent(52,217);
   hM_bin14->SetBinContent(53,222);
   hM_bin14->SetBinContent(54,227);
   hM_bin14->SetBinContent(55,231);
   hM_bin14->SetBinContent(56,245);
   hM_bin14->SetBinContent(57,221);
   hM_bin14->SetBinContent(58,234);
   hM_bin14->SetBinContent(59,232);
   hM_bin14->SetBinContent(60,234);
   hM_bin14->SetBinContent(61,226);
   hM_bin14->SetBinContent(62,243);
   hM_bin14->SetBinContent(63,243);
   hM_bin14->SetBinContent(64,221);
   hM_bin14->SetBinContent(65,233);
   hM_bin14->SetBinContent(66,218);
   hM_bin14->SetBinContent(67,242);
   hM_bin14->SetBinContent(68,220);
   hM_bin14->SetBinContent(69,226);
   hM_bin14->SetBinContent(70,243);
   hM_bin14->SetBinContent(71,229);
   hM_bin14->SetBinContent(72,219);
   hM_bin14->SetBinContent(73,235);
   hM_bin14->SetBinContent(74,235);
   hM_bin14->SetBinContent(75,224);
   hM_bin14->SetBinContent(76,243);
   hM_bin14->SetBinContent(77,237);
   hM_bin14->SetBinContent(78,234);
   hM_bin14->SetBinContent(79,227);
   hM_bin14->SetBinContent(80,213);
   hM_bin14->SetBinContent(81,211);
   hM_bin14->SetBinContent(82,232);
   hM_bin14->SetBinContent(83,207);
   hM_bin14->SetBinContent(84,221);
   hM_bin14->SetBinContent(85,217);
   hM_bin14->SetBinContent(86,237);
   hM_bin14->SetBinContent(87,231);
   hM_bin14->SetBinContent(88,228);
   hM_bin14->SetBinContent(89,234);
   hM_bin14->SetBinContent(90,191);
   hM_bin14->SetBinContent(91,221);
   hM_bin14->SetBinContent(92,230);
   hM_bin14->SetBinContent(93,204);
   hM_bin14->SetBinContent(94,206);
   hM_bin14->SetBinContent(95,234);
   hM_bin14->SetBinContent(96,222);
   hM_bin14->SetBinContent(97,202);
   hM_bin14->SetBinContent(98,185);
   hM_bin14->SetBinContent(99,202);
   hM_bin14->SetBinContent(100,226);
   hM_bin14->SetBinContent(101,9827);
   hM_bin14->SetEntries(33400);
   
   TF1 *fsig = new TF1("fsig","fmb+fpeak",0.3275008,0.758451);
   fsig->SetFillColor(19);
   fsig->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   fsig->SetLineColor(ci);
   fsig->SetLineWidth(3);
   fsig->SetChisquare(41.44892);
   fsig->SetNDF(71);
   fsig->GetXaxis()->SetLabelFont(42);
   fsig->GetXaxis()->SetLabelSize(0.035);
   fsig->GetXaxis()->SetTitleSize(0.035);
   fsig->GetXaxis()->SetTitleFont(42);
   fsig->GetYaxis()->SetLabelFont(42);
   fsig->GetYaxis()->SetLabelSize(0.035);
   fsig->GetYaxis()->SetTitleSize(0.035);
   fsig->GetYaxis()->SetTitleFont(42);
   fsig->SetParameter(0,-141.9766);
   fsig->SetParError(0,65.97872);
   fsig->SetParLimits(0,0,0);
   fsig->SetParameter(1,985.9691);
   fsig->SetParError(1,272.4137);
   fsig->SetParLimits(1,0,0);
   fsig->SetParameter(2,-662.1334);
   fsig->SetParError(2,251.977);
   fsig->SetParLimits(2,-10000,0);
   fsig->SetParameter(3,26.71188);
   fsig->SetParError(3,10.33325);
   fsig->SetParLimits(3,0,490);
   fsig->SetParameter(4,0.5477935);
   fsig->SetParError(4,0.01496311);
   fsig->SetParLimits(4,0,0);
   fsig->SetParameter(5,0.07182503);
   fsig->SetParError(5,0.02130389);
   fsig->SetParLimits(5,0.04788336,0.07182504);
   hM_bin14->GetListOfFunctions()->Add(fsig);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.515,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetTextAlign(12);
   TText *text = ptstats->AddText("hM_bin14");
   text->SetTextSize(0.04014545);
   text = ptstats->AddText("Entries = 33400  ");
   text = ptstats->AddText("Mean  = 0.5769");
   text = ptstats->AddText("RMS   = 0.1461");
   text = ptstats->AddText("#chi^{2} / ndf = 41.45 / 71");
   text = ptstats->AddText("p0       =  -142 #pm 66.0 ");
   text = ptstats->AddText("p1       =   986 #pm 272.4 ");
   text = ptstats->AddText("p2       = -662.1 #pm 252.0 ");
   text = ptstats->AddText("p3       = 26.71 #pm 10.33 ");
   text = ptstats->AddText("p4       = 0.5478 #pm 0.0150 ");
   text = ptstats->AddText("p5       = 0.07183 #pm 0.02130 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hM_bin14->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM_bin14);

   ci = TColor::GetColor("#0000ff");
   hM_bin14->SetMarkerColor(ci);
   hM_bin14->SetMarkerStyle(24);
   hM_bin14->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV)");
   hM_bin14->GetXaxis()->SetLabelFont(42);
   hM_bin14->GetXaxis()->SetLabelSize(0.035);
   hM_bin14->GetXaxis()->SetTitleSize(0.035);
   hM_bin14->GetXaxis()->SetTitleFont(42);
   hM_bin14->GetYaxis()->SetTitle("dN/dM (GeV)");
   hM_bin14->GetYaxis()->SetLabelFont(42);
   hM_bin14->GetYaxis()->SetLabelSize(0.035);
   hM_bin14->GetYaxis()->SetTitleSize(0.035);
   hM_bin14->GetYaxis()->SetTitleFont(42);
   hM_bin14->GetZaxis()->SetLabelFont(42);
   hM_bin14->GetZaxis()->SetLabelSize(0.035);
   hM_bin14->GetZaxis()->SetTitleSize(0.035);
   hM_bin14->GetZaxis()->SetTitleFont(42);
   hM_bin14->Draw("e");
   
   TF1 *fmb = new TF1("fmb","pol2",0.3600464,0.7191716);
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
   fmb->SetParameter(0,-141.9766);
   fmb->SetParError(0,0);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,985.9691);
   fmb->SetParError(1,0);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-662.1334);
   fmb->SetParError(2,0);
   fmb->SetParLimits(2,0,0);
   fmb->Draw("same");
   
   TF1 *fpeak = new TF1("fpeak","gaus",0.3600464,0.7191716);
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
   fpeak->SetParameter(0,26.71188);
   fpeak->SetParError(0,0);
   fpeak->SetParLimits(0,0,0);
   fpeak->SetParameter(1,0.5477935);
   fpeak->SetParError(1,0);
   fpeak->SetParLimits(1,0,0);
   fpeak->SetParameter(2,0.07182503);
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
