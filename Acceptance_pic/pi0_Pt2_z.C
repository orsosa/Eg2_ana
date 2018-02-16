{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Jul 19 13:49:37 2016) by ROOT version5.34/19
   TCanvas *c1 = new TCanvas("c1", "c1",0,51,1745,1004);
   c1->Range(-5.298851,-0.001794819,34.72414,0.01617178);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *haccpt2 = new TH1F("haccpt2","Acceptance #pi^{0} (Pt^{2}, z)",32,-1,31);
   haccpt2->SetBinContent(2,0.004789037);
   haccpt2->SetBinContent(3,0.004092326);
   haccpt2->SetBinContent(4,0.004071795);
   haccpt2->SetBinContent(5,0.002933395);
   haccpt2->SetBinContent(6,0.001987787);
   haccpt2->SetBinContent(7,0.008384091);
   haccpt2->SetBinContent(8,0.007939445);
   haccpt2->SetBinContent(9,0.006371726);
   haccpt2->SetBinContent(10,0.005811969);
   haccpt2->SetBinContent(11,0.005263537);
   haccpt2->SetBinContent(12,0.01038431);
   haccpt2->SetBinContent(13,0.01094557);
   haccpt2->SetBinContent(14,0.01200386);
   haccpt2->SetBinContent(15,0.008491809);
   haccpt2->SetBinContent(16,0.007108926);
   haccpt2->SetBinContent(17,0.009509307);
   haccpt2->SetBinContent(18,0.01288914);
   haccpt2->SetBinContent(19,0.01293542);
   haccpt2->SetBinContent(20,0.01182782);
   haccpt2->SetBinContent(21,0.008384186);
   haccpt2->SetBinContent(22,0.008018714);
   haccpt2->SetBinContent(23,0.01188858);
   haccpt2->SetBinContent(24,0.01223327);
   haccpt2->SetBinContent(25,0.01130419);
   haccpt2->SetBinContent(26,0.009429076);
   haccpt2->SetBinContent(27,0.003735024);
   haccpt2->SetBinContent(28,0.01066719);
   haccpt2->SetBinContent(29,0.0128024);
   haccpt2->SetBinContent(30,0.01369234);
   haccpt2->SetBinContent(31,0.007085303);
   haccpt2->SetEntries(30);
   haccpt2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   haccpt2->SetLineColor(ci);
   haccpt2->SetMarkerStyle(8);
   haccpt2->GetXaxis()->SetTitle("bin");
   haccpt2->GetXaxis()->SetLabelFont(42);
   haccpt2->GetXaxis()->SetLabelSize(0.035);
   haccpt2->GetXaxis()->SetTitleSize(0.035);
   haccpt2->GetXaxis()->SetTitleFont(42);
   haccpt2->GetYaxis()->SetTitle("Nrec/Nthrown");
   haccpt2->GetYaxis()->SetLabelFont(42);
   haccpt2->GetYaxis()->SetLabelSize(0.035);
   haccpt2->GetYaxis()->SetTitleSize(0.035);
   haccpt2->GetYaxis()->SetTitleOffset(1.08);
   haccpt2->GetYaxis()->SetTitleFont(42);
   haccpt2->GetZaxis()->SetLabelFont(42);
   haccpt2->GetZaxis()->SetLabelSize(0.035);
   haccpt2->GetZaxis()->SetTitleSize(0.035);
   haccpt2->GetZaxis()->SetTitleFont(42);
   haccpt2->Draw("p");
   
   TPaveText *pt = new TPaveText(0.3461172,0.924918,0.6607754,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Acceptance #pi^{0} (Pt^{2}, z)");
   pt->Draw();
   TGaxis *gaxis = new TGaxis(0.1264368,0.001629143,5.137931,0.001629143,0.3,0.8,5,"");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(0.75);
   gaxis->SetTitleSize(0.03);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("z");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   gaxis = new TGaxis(4.908046,0.004813796,9.896552,0.004813796,0.3,0.8,5,"");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(0.75);
   gaxis->SetTitleSize(0.03);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("z");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   gaxis = new TGaxis(10.03448,0.006820311,15.04598,0.006820311,0.3,0.8,5,"");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(0.75);
   gaxis->SetTitleSize(0.03);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("z");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   gaxis = new TGaxis(15,0.008127307,19.98851,0.008127307,0.3,0.8,5,"");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(0.75);
   gaxis->SetTitleSize(0.03);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("z");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   gaxis = new TGaxis(20.17241,0.00648896,25.18391,0.00648896,0.3,0.8,5,"");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(0.75);
   gaxis->SetTitleSize(0.03);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("z");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   gaxis = new TGaxis(25.04598,0.003304307,30.03448,0.003304307,0.3,0.8,5,"");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(0.75);
   gaxis->SetTitleSize(0.03);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("z");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
      tex = new TLatex(1.45977,0.00053629,"Pt^{2} #epsilon [0, 0.1]");
   tex->SetTextSize(0.02757353);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(5.505747,0.003720244,"Pt^{2} #epsilon [0.1, 0.25]");
   tex->SetTextSize(0.02757353);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(10.56322,0.005729167,"Pt^{2} #epsilon [0.25, 0.4]");
   tex->SetTextSize(0.02757353);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(15.73563,0.007036862,"Pt^{2} #epsilon [0.4, 0.55]");
   tex->SetTextSize(0.02757353);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(20.42529,0.005406981,"Pt^{2} #epsilon [0.55, 0.75]");
   tex->SetTextSize(0.02757353);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(25.66667,0.002223027,"Pt^{2} #epsilon [0.75, 0.9]");
   tex->SetTextSize(0.02757353);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
   c1->ToggleToolBar();
}
