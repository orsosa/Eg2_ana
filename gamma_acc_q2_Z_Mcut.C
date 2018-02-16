{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct  4 05:18:22 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",1,1,1200,696);
   c->Range(-1.875,0.005571277,16.875,0.06974271);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *haccq2Mc = new TH1F("haccq2Mc","#gamma acceptance (Q^{2},Z)  M_{#pi^{0}} Cut",15,0,15);
   haccq2Mc->SetBinContent(1,0.01747533);
   haccq2Mc->SetBinContent(2,0.01751237);
   haccq2Mc->SetBinContent(3,0.01932524);
   haccq2Mc->SetBinContent(4,0.01815357);
   haccq2Mc->SetBinContent(5,0.01484814);
   haccq2Mc->SetBinContent(6,0.03556963);
   haccq2Mc->SetBinContent(7,0.038271);
   haccq2Mc->SetBinContent(8,0.03919807);
   haccq2Mc->SetBinContent(9,0.03845643);
   haccq2Mc->SetBinContent(10,0.03332929);
   haccq2Mc->SetBinContent(11,0.0515168);
   haccq2Mc->SetBinContent(12,0.05566468);
   haccq2Mc->SetBinContent(13,0.05974471);
   haccq2Mc->SetBinContent(14,0.05909117);
   haccq2Mc->SetBinContent(15,0.04345784);
   haccq2Mc->SetBinError(1,0.0002630072);
   haccq2Mc->SetBinError(2,0.0003392109);
   haccq2Mc->SetBinError(3,0.0004339011);
   haccq2Mc->SetBinError(4,0.0005018993);
   haccq2Mc->SetBinError(5,0.0005315084);
   haccq2Mc->SetBinError(6,0.0004791009);
   haccq2Mc->SetBinError(7,0.0006404058);
   haccq2Mc->SetBinError(8,0.0007944262);
   haccq2Mc->SetBinError(9,0.0009400225);
   haccq2Mc->SetBinError(10,0.001022455);
   haccq2Mc->SetBinError(11,0.0006590019);
   haccq2Mc->SetBinError(12,0.0008831379);
   haccq2Mc->SetBinError(13,0.00113623);
   haccq2Mc->SetBinError(14,0.001342458);
   haccq2Mc->SetBinError(15,0.001332429);
   haccq2Mc->SetEntries(28788.96);
   haccq2Mc->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   haccq2Mc->SetLineColor(ci);
   haccq2Mc->SetMarkerStyle(8);
   haccq2Mc->GetXaxis()->SetTitle("nbin");
   haccq2Mc->GetXaxis()->SetLabelFont(42);
   haccq2Mc->GetXaxis()->SetLabelSize(0.035);
   haccq2Mc->GetXaxis()->SetTitleSize(0.035);
   haccq2Mc->GetXaxis()->SetTitleFont(42);
   haccq2Mc->GetYaxis()->SetTitle("Acceptance");
   haccq2Mc->GetYaxis()->SetLabelFont(42);
   haccq2Mc->GetYaxis()->SetLabelSize(0.035);
   haccq2Mc->GetYaxis()->SetTitleSize(0.035);
   haccq2Mc->GetYaxis()->SetTitleOffset(1.1);
   haccq2Mc->GetYaxis()->SetTitleFont(42);
   haccq2Mc->GetZaxis()->SetLabelFont(42);
   haccq2Mc->GetZaxis()->SetLabelSize(0.035);
   haccq2Mc->GetZaxis()->SetTitleSize(0.035);
   haccq2Mc->GetZaxis()->SetTitleFont(42);
   haccq2Mc->Draw("p");
   
   TPaveText *pt = new TPaveText(0.2939298,0.9013584,0.7060702,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("#gamma acceptance (Q^{2},Z)  M_{#pi^{0}} Cut");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
