{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Oct 11 11:07:10 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   c->SetHighLightColor(2);
   c->Range(0.06625,64.43634,0.20375,314.8256);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *hM = new TH1F("hM","Mass, bin (q2,nu,z) = (2,0,4)",75,0.08,0.19);
   hM->SetBinContent(0,420);
   hM->SetBinContent(1,126);
   hM->SetBinContent(2,159);
   hM->SetBinContent(3,114);
   hM->SetBinContent(4,153);
   hM->SetBinContent(5,109);
   hM->SetBinContent(6,149);
   hM->SetBinContent(7,149);
   hM->SetBinContent(8,130);
   hM->SetBinContent(9,167);
   hM->SetBinContent(10,168);
   hM->SetBinContent(11,139);
   hM->SetBinContent(12,142);
   hM->SetBinContent(13,138);
   hM->SetBinContent(14,133);
   hM->SetBinContent(15,176);
   hM->SetBinContent(16,159);
   hM->SetBinContent(17,179);
   hM->SetBinContent(18,153);
   hM->SetBinContent(19,153);
   hM->SetBinContent(20,182);
   hM->SetBinContent(21,189);
   hM->SetBinContent(22,145);
   hM->SetBinContent(23,136);
   hM->SetBinContent(24,204);
   hM->SetBinContent(25,148);
   hM->SetBinContent(26,175);
   hM->SetBinContent(27,167);
   hM->SetBinContent(28,195);
   hM->SetBinContent(29,148);
   hM->SetBinContent(30,170);
   hM->SetBinContent(31,163);
   hM->SetBinContent(32,179);
   hM->SetBinContent(33,165);
   hM->SetBinContent(34,181);
   hM->SetBinContent(35,158);
   hM->SetBinContent(36,195);
   hM->SetBinContent(37,195);
   hM->SetBinContent(38,229);
   hM->SetBinContent(39,176);
   hM->SetBinContent(40,171);
   hM->SetBinContent(41,215);
   hM->SetBinContent(42,184);
   hM->SetBinContent(43,203);
   hM->SetBinContent(44,160);
   hM->SetBinContent(45,224);
   hM->SetBinContent(46,176);
   hM->SetBinContent(47,195);
   hM->SetBinContent(48,178);
   hM->SetBinContent(49,188);
   hM->SetBinContent(50,184);
   hM->SetBinContent(51,264);
   hM->SetBinContent(52,179);
   hM->SetBinContent(53,194);
   hM->SetBinContent(54,216);
   hM->SetBinContent(55,206);
   hM->SetBinContent(56,177);
   hM->SetBinContent(57,216);
   hM->SetBinContent(58,194);
   hM->SetBinContent(59,226);
   hM->SetBinContent(60,203);
   hM->SetBinContent(61,243);
   hM->SetBinContent(62,219);
   hM->SetBinContent(63,219);
   hM->SetBinContent(64,208);
   hM->SetBinContent(65,247);
   hM->SetBinContent(66,228);
   hM->SetBinContent(67,245);
   hM->SetBinContent(68,249);
   hM->SetBinContent(69,204);
   hM->SetBinContent(70,226);
   hM->SetBinContent(71,234);
   hM->SetBinContent(72,192);
   hM->SetBinContent(73,230);
   hM->SetBinContent(74,234);
   hM->SetBinContent(75,235);
   hM->SetBinContent(76,188);
   hM->SetEntries(14470);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 14470  ");
   text = ptstats->AddText("Mean  = 0.1399");
   text = ptstats->AddText("RMS   = 0.03133");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hM->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hM);
   
   TF1 *fmb = new TF1("fmb","pol2",0.08,0.19);
   fmb->SetFillColor(19);
   fmb->SetFillStyle(0);
   fmb->SetLineColor(2);
   fmb->SetLineWidth(2);
   fmb->SetChisquare(155.7401);
   fmb->SetNDF(72);
   fmb->GetXaxis()->SetLabelFont(42);
   fmb->GetXaxis()->SetLabelSize(0.035);
   fmb->GetXaxis()->SetTitleSize(0.035);
   fmb->GetXaxis()->SetTitleFont(42);
   fmb->GetYaxis()->SetLabelFont(42);
   fmb->GetYaxis()->SetLabelSize(0.035);
   fmb->GetYaxis()->SetTitleSize(0.035);
   fmb->GetYaxis()->SetTitleFont(42);
   fmb->SetParameter(0,53.5945);
   fmb->SetParError(0,29.14071);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,1003.372);
   fmb->SetParError(1,456.2698);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-327.5349);
   fmb->SetParError(2,1707.245);
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
   text = pt->AddText("Mass, bin (q2,nu,z) = (2,0,4)");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
