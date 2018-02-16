{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 11 13:48:42 2016) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "c",0,0,1200,720);
   c->Range(-1.875,0.01515209,16.875,0.1427933);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *haccq2 = new TH1F("haccq2","#gamma acceptance (Q^{2},Z)",15,0,15);
   haccq2->SetBinContent(1,0.03838413);
   haccq2->SetBinContent(2,0.04026913);
   haccq2->SetBinContent(3,0.03944919);
   haccq2->SetBinContent(4,0.03947214);
   haccq2->SetBinContent(5,0.03327394);
   haccq2->SetBinContent(6,0.07263596);
   haccq2->SetBinContent(7,0.0800811);
   haccq2->SetBinContent(8,0.08195285);
   haccq2->SetBinContent(9,0.08383056);
   haccq2->SetBinContent(10,0.07587358);
   haccq2->SetBinContent(11,0.1051917);
   haccq2->SetBinContent(12,0.1114604);
   haccq2->SetBinContent(13,0.1171856);
   haccq2->SetBinContent(14,0.1233635);
   haccq2->SetBinContent(15,0.1053633);
   haccq2->SetBinError(1,0.0004105212);
   haccq2->SetBinError(2,0.0005103776);
   haccq2->SetBinError(3,0.0005944316);
   haccq2->SetBinError(4,0.0006928267);
   haccq2->SetBinError(5,0.000726746);
   haccq2->SetBinError(6,0.0007175291);
   haccq2->SetBinError(7,0.0009181803);
   haccq2->SetBinError(8,0.001101793);
   haccq2->SetBinError(9,0.001297543);
   haccq2->SetBinError(10,0.00141531);
   haccq2->SetBinError(11,0.0009808294);
   haccq2->SetBinError(12,0.001219157);
   haccq2->SetBinError(13,0.00150072);
   haccq2->SetBinError(14,0.00180317);
   haccq2->SetBinError(15,0.001890348);
   haccq2->SetEntries(67302.74);
   haccq2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   haccq2->SetLineColor(ci);
   haccq2->SetMarkerStyle(8);
   haccq2->GetXaxis()->SetTitle("nbin");
   haccq2->GetXaxis()->SetLabelFont(42);
   haccq2->GetXaxis()->SetLabelSize(0.035);
   haccq2->GetXaxis()->SetTitleSize(0.035);
   haccq2->GetXaxis()->SetTitleFont(42);
   haccq2->GetYaxis()->SetTitle("Acceptance");
   haccq2->GetYaxis()->SetLabelFont(42);
   haccq2->GetYaxis()->SetLabelSize(0.035);
   haccq2->GetYaxis()->SetTitleSize(0.035);
   haccq2->GetYaxis()->SetTitleOffset(1.1);
   haccq2->GetYaxis()->SetTitleFont(42);
   haccq2->GetZaxis()->SetLabelFont(42);
   haccq2->GetZaxis()->SetLabelSize(0.035);
   haccq2->GetZaxis()->SetTitleSize(0.035);
   haccq2->GetZaxis()->SetTitleFont(42);
   haccq2->Draw("p");
   
   TPaveText *pt = new TPaveText(0.3524582,0.9221676,0.6475418,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("#gamma acceptance (Q^{2},Z)");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
