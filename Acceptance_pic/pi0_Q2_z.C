{
//=========Macro generated from canvas: c/c
//=========  (Tue Jul 19 13:25:30 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",0,51,1745,1004);
   c->Range(-2.805256,-0.006056768,18.50288,0.05669532);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridy();
   c->SetLeftMargin(0.08472142);
   c->SetRightMargin(0.1174612);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *haccq2 = new TH1F("haccq2","Acceptance #pi^{0} (Q^{2}, z)",17,-1,16);
   haccq2->SetBinContent(2,0.01105619);
   haccq2->SetBinContent(3,0.01253897);
   haccq2->SetBinContent(4,0.0155675);
   haccq2->SetBinContent(5,0.01450854);
   haccq2->SetBinContent(6,0.01192826);
   haccq2->SetBinContent(7,0.02204254);
   haccq2->SetBinContent(8,0.02637875);
   haccq2->SetBinContent(9,0.03013743);
   haccq2->SetBinContent(10,0.03150436);
   haccq2->SetBinContent(11,0.02786065);
   haccq2->SetBinContent(12,0.03194721);
   haccq2->SetBinContent(13,0.03957105);
   haccq2->SetBinContent(14,0.04573742);
   haccq2->SetBinContent(15,0.04784894);
   haccq2->SetBinContent(16,0.03557038);
   haccq2->SetEntries(15);
   haccq2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   haccq2->SetLineColor(ci);
   haccq2->SetMarkerStyle(8);
   haccq2->GetXaxis()->SetTitle("bin");
   haccq2->GetXaxis()->SetLabelFont(42);
   haccq2->GetXaxis()->SetLabelSize(0.035);
   haccq2->GetXaxis()->SetTitleSize(0.035);
   haccq2->GetXaxis()->SetTitleFont(42);
   haccq2->GetYaxis()->SetTitle("Nrec/Nthrown");
   haccq2->GetYaxis()->SetLabelFont(42);
   haccq2->GetYaxis()->SetLabelSize(0.035);
   haccq2->GetYaxis()->SetTitleSize(0.035);
   haccq2->GetYaxis()->SetTitleFont(42);
   haccq2->GetZaxis()->SetLabelFont(42);
   haccq2->GetZaxis()->SetLabelSize(0.035);
   haccq2->GetZaxis()->SetTitleSize(0.035);
   haccq2->GetZaxis()->SetTitleFont(42);
   haccq2->Draw("p");
   
   TPaveText *pt = new TPaveText(0.2964824,0.9216028,0.5979299,0.9773519,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Acceptance #pi^{0} (Q^{2}, z)");
   pt->Draw();
      tex = new TLatex(-2.111933,0.05466666,"");
   tex->SetLineWidth(2);
   tex->Draw();
   TMarker *marker = new TMarker(-2.111933,0.05466666,1);
   marker->Draw();
      tex = new TLatex(0.8807471,0.004269526,"Q^{2} #epsilon [1.0 , 1.33]");
   tex->SetTextSize(0.03797469);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(5.826868,0.01380149,"Q^{2} #epsilon [1.33 , 1.77]");
   tex->SetTextSize(0.03797469);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(11.23707,0.02492211,"Q^{2} #epsilon [1.77 ,4.1]");
   tex->SetTextSize(0.03797469);
   tex->SetLineWidth(2);
   tex->Draw();
   TGaxis *gaxis = new TGaxis(-0.01077595,0.009498866,4.996408,0.009498866,0.3,0.8,5,"");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.03);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(0.7);
   gaxis->SetTitleSize(0.04);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("z");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   gaxis = new TGaxis(5.002514,0.01903083,9.997486,0.01903083,0.3,0.8,5,"");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.03);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(0.7);
   gaxis->SetTitleSize(0.04);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("z");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   gaxis = new TGaxis(10.13793,0.03015145,15.14511,0.03015145,0.3,0.8,5,"");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.03);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(0.7);
   gaxis->SetTitleSize(0.04);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("z");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
   c->ToggleToolBar();
}
