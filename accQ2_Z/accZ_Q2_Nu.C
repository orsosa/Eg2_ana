{
//=========Macro generated from canvas: c/c
//=========  (Sun Jan  8 00:36:10 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",0,0,1200,900);
   c->SetHighLightColor(2);
   c->Range(-3.125,-0.008185093,18.125,0.07366583);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *hacc = new TH1F("hacc","Acceptance",17,-1,16);
   hacc->SetBinContent(2,0.02528214);
   hacc->SetBinContent(3,0.02545219);
   hacc->SetBinContent(4,0.02497294);
   hacc->SetBinContent(5,0.02404561);
   hacc->SetBinContent(6,0.01984894);
   hacc->SetBinContent(7,0.04461977);
   hacc->SetBinContent(8,0.04529163);
   hacc->SetBinContent(9,0.04463959);
   hacc->SetBinContent(10,0.04187668);
   hacc->SetBinContent(11,0.03731071);
   hacc->SetBinContent(12,0.0598459);
   hacc->SetBinContent(13,0.06141745);
   hacc->SetBinContent(14,0.06186574);
   hacc->SetBinContent(15,0.05779154);
   hacc->SetBinContent(16,0.05026388);
   hacc->SetBinError(2,0.0001827065);
   hacc->SetBinError(3,0.0001918217);
   hacc->SetBinError(4,0.0001980959);
   hacc->SetBinError(5,0.0002028822);
   hacc->SetBinError(6,0.0001918963);
   hacc->SetBinError(7,0.0003195371);
   hacc->SetBinError(8,0.0003382616);
   hacc->SetBinError(9,0.0003506462);
   hacc->SetBinError(10,0.0003540501);
   hacc->SetBinError(11,0.0003501033);
   hacc->SetBinError(12,0.0004426876);
   hacc->SetBinError(13,0.0004722543);
   hacc->SetBinError(14,0.0004968711);
   hacc->SetBinError(15,0.0005011659);
   hacc->SetBinError(16,0.0004883166);
   hacc->SetEntries(15);
   hacc->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hacc->SetLineColor(ci);
   hacc->SetMarkerStyle(8);
   hacc->GetXaxis()->SetTitle("nbin");
   hacc->GetXaxis()->SetLabelFont(42);
   hacc->GetXaxis()->SetLabelSize(0.035);
   hacc->GetXaxis()->SetTitleSize(0.035);
   hacc->GetXaxis()->SetTitleFont(42);
   hacc->GetYaxis()->SetTitle("Acceptance");
   hacc->GetYaxis()->SetLabelFont(42);
   hacc->GetYaxis()->SetLabelSize(0.035);
   hacc->GetYaxis()->SetTitleSize(0.035);
   hacc->GetYaxis()->SetTitleOffset(1.1);
   hacc->GetYaxis()->SetTitleFont(42);
   hacc->GetZaxis()->SetLabelFont(42);
   hacc->GetZaxis()->SetLabelSize(0.035);
   hacc->GetZaxis()->SetTitleSize(0.035);
   hacc->GetZaxis()->SetTitleFont(42);
   hacc->Draw("p");
   
   TPaveText *pt = new TPaveText(0.3846488,0.9358257,0.6153512,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Acceptance");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
