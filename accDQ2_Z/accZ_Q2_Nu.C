{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 23 15:19:06 2017) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",0,0,1200,900);
   c->SetHighLightColor(2);
   c->Range(-3.125,-0.00877734,18.125,0.07899606);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *hacc = new TH1F("hacc","Acceptance",17,-1,16);
   hacc->SetBinContent(2,0.02674913);
   hacc->SetBinContent(3,0.02752958);
   hacc->SetBinContent(4,0.02621652);
   hacc->SetBinContent(5,0.02473747);
   hacc->SetBinContent(6,0.0221819);
   hacc->SetBinContent(7,0.04581296);
   hacc->SetBinContent(8,0.05000659);
   hacc->SetBinContent(9,0.04964346);
   hacc->SetBinContent(10,0.04529344);
   hacc->SetBinContent(11,0.0372798);
   hacc->SetBinContent(12,0.06552696);
   hacc->SetBinContent(13,0.06637955);
   hacc->SetBinContent(14,0.06422571);
   hacc->SetBinContent(15,0.06020438);
   hacc->SetBinContent(16,0.05158794);
   hacc->SetBinError(2,0.0001936599);
   hacc->SetBinError(3,0.0002066619);
   hacc->SetBinError(4,0.0002101215);
   hacc->SetBinError(5,0.0002121835);
   hacc->SetBinError(6,0.0002101076);
   hacc->SetBinError(7,0.0003311979);
   hacc->SetBinError(8,0.000365966);
   hacc->SetBinError(9,0.0003821445);
   hacc->SetBinError(10,0.0003783499);
   hacc->SetBinError(11,0.0003587546);
   hacc->SetBinError(12,0.0004660863);
   hacc->SetBinError(13,0.0004954219);
   hacc->SetBinError(14,0.0005097884);
   hacc->SetBinError(15,0.0005172296);
   hacc->SetBinError(16,0.0004965105);
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
