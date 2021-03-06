{
//=========Macro generated from canvas: c/The canvas
//=========  (Tue Oct 11 11:07:11 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   c->SetHighLightColor(2);
   c->Range(0.06625,54.13873,0.20375,233.7705);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *hM = new TH1F("hM","Mass, bin (q2,nu,z) = (2,0,4)",75,0.08,0.19);
   hM->SetBinContent(0,362);
   hM->SetBinContent(1,136);
   hM->SetBinContent(2,111);
   hM->SetBinContent(3,96);
   hM->SetBinContent(4,107);
   hM->SetBinContent(5,88);
   hM->SetBinContent(6,120);
   hM->SetBinContent(7,90);
   hM->SetBinContent(8,97);
   hM->SetBinContent(9,116);
   hM->SetBinContent(10,101);
   hM->SetBinContent(11,102);
   hM->SetBinContent(12,108);
   hM->SetBinContent(13,129);
   hM->SetBinContent(14,133);
   hM->SetBinContent(15,134);
   hM->SetBinContent(16,100);
   hM->SetBinContent(17,130);
   hM->SetBinContent(18,129);
   hM->SetBinContent(19,99);
   hM->SetBinContent(20,98);
   hM->SetBinContent(21,112);
   hM->SetBinContent(22,142);
   hM->SetBinContent(23,111);
   hM->SetBinContent(24,103);
   hM->SetBinContent(25,109);
   hM->SetBinContent(26,132);
   hM->SetBinContent(27,128);
   hM->SetBinContent(28,147);
   hM->SetBinContent(29,147);
   hM->SetBinContent(30,146);
   hM->SetBinContent(31,148);
   hM->SetBinContent(32,139);
   hM->SetBinContent(33,118);
   hM->SetBinContent(34,147);
   hM->SetBinContent(35,173);
   hM->SetBinContent(36,142);
   hM->SetBinContent(37,120);
   hM->SetBinContent(38,143);
   hM->SetBinContent(39,149);
   hM->SetBinContent(40,159);
   hM->SetBinContent(41,122);
   hM->SetBinContent(42,133);
   hM->SetBinContent(43,132);
   hM->SetBinContent(44,130);
   hM->SetBinContent(45,138);
   hM->SetBinContent(46,191);
   hM->SetBinContent(47,138);
   hM->SetBinContent(48,132);
   hM->SetBinContent(49,147);
   hM->SetBinContent(50,151);
   hM->SetBinContent(51,173);
   hM->SetBinContent(52,156);
   hM->SetBinContent(53,148);
   hM->SetBinContent(54,174);
   hM->SetBinContent(55,150);
   hM->SetBinContent(56,185);
   hM->SetBinContent(57,148);
   hM->SetBinContent(58,153);
   hM->SetBinContent(59,136);
   hM->SetBinContent(60,142);
   hM->SetBinContent(61,175);
   hM->SetBinContent(62,165);
   hM->SetBinContent(63,109);
   hM->SetBinContent(64,137);
   hM->SetBinContent(65,173);
   hM->SetBinContent(66,161);
   hM->SetBinContent(67,154);
   hM->SetBinContent(68,162);
   hM->SetBinContent(69,181);
   hM->SetBinContent(70,195);
   hM->SetBinContent(71,155);
   hM->SetBinContent(72,166);
   hM->SetBinContent(73,162);
   hM->SetBinContent(74,183);
   hM->SetBinContent(75,182);
   hM->SetBinContent(76,154);
   hM->SetEntries(10894);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hM");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 10894  ");
   text = ptstats->AddText("Mean  = 0.1396");
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
   fmb->SetChisquare(156.4978);
   fmb->SetNDF(72);
   fmb->GetXaxis()->SetLabelFont(42);
   fmb->GetXaxis()->SetLabelSize(0.035);
   fmb->GetXaxis()->SetTitleSize(0.035);
   fmb->GetXaxis()->SetTitleFont(42);
   fmb->GetYaxis()->SetLabelFont(42);
   fmb->GetYaxis()->SetLabelSize(0.035);
   fmb->GetYaxis()->SetTitleSize(0.035);
   fmb->GetYaxis()->SetTitleFont(42);
   fmb->SetParameter(0,36.41683);
   fmb->SetParError(0,25.70141);
   fmb->SetParLimits(0,0,0);
   fmb->SetParameter(1,865.9963);
   fmb->SetParError(1,401.7442);
   fmb->SetParLimits(1,0,0);
   fmb->SetParameter(2,-885.9509);
   fmb->SetParError(2,1500.168);
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
