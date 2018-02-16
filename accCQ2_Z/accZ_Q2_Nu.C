{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 23 15:17:21 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",0,0,1200,900);
   c->SetHighLightColor(2);
   c->Range(-3.125,-0.008524639,18.125,0.07672174);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *hacc = new TH1F("hacc","Acceptance",17,-1,16);
   hacc->SetBinContent(2,0.02639002);
   hacc->SetBinContent(3,0.02636968);
   hacc->SetBinContent(4,0.02603323);
   hacc->SetBinContent(5,0.02497347);
   hacc->SetBinContent(6,0.02077153);
   hacc->SetBinContent(7,0.04666482);
   hacc->SetBinContent(8,0.04720011);
   hacc->SetBinContent(9,0.04651013);
   hacc->SetBinContent(10,0.04258009);
   hacc->SetBinContent(11,0.03865346);
   hacc->SetBinContent(12,0.06298916);
   hacc->SetBinContent(13,0.06438734);
   hacc->SetBinContent(14,0.06444341);
   hacc->SetBinContent(15,0.06060268);
   hacc->SetBinContent(16,0.05153762);
   hacc->SetBinError(2,0.0001864942);
   hacc->SetBinError(3,0.0001949852);
   hacc->SetBinError(4,0.0002015337);
   hacc->SetBinError(5,0.0002064595);
   hacc->SetBinError(6,0.000196407);
   hacc->SetBinError(7,0.0003266075);
   hacc->SetBinError(8,0.0003443134);
   hacc->SetBinError(9,0.0003562104);
   hacc->SetBinError(10,0.0003557311);
   hacc->SetBinError(11,0.0003547773);
   hacc->SetBinError(12,0.0004535929);
   hacc->SetBinError(13,0.0004835726);
   hacc->SetBinError(14,0.0005062154);
   hacc->SetBinError(15,0.000513316);
   hacc->SetBinError(16,0.0004922365);
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
