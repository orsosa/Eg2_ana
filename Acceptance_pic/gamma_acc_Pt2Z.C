{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Sep 29 18:35:30 2016) by ROOT version5.34/34
   TCanvas *c1 = new TCanvas("c1", "c1",0,66,1280,734);
   c1->Range(-5,-0.002474702,35,0.02227231);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *haccpt2 = new TH1F("haccpt2","#gamma acceptance (Pt^{2} , Z)",32,-1,31);
   haccpt2->SetBinContent(2,0.01139781);
   haccpt2->SetBinContent(3,0.01209148);
   haccpt2->SetBinContent(4,0.01306326);
   haccpt2->SetBinContent(5,0.01303572);
   haccpt2->SetBinContent(6,0.01413107);
   haccpt2->SetBinContent(7,0.01394372);
   haccpt2->SetBinContent(8,0.01498534);
   haccpt2->SetBinContent(9,0.0145298);
   haccpt2->SetBinContent(10,0.01540234);
   haccpt2->SetBinContent(11,0.01395748);
   haccpt2->SetBinContent(12,0.01470173);
   haccpt2->SetBinContent(13,0.01684012);
   haccpt2->SetBinContent(14,0.01726582);
   haccpt2->SetBinContent(15,0.01666834);
   haccpt2->SetBinContent(16,0.01568835);
   haccpt2->SetBinContent(17,0.01230789);
   haccpt2->SetBinContent(18,0.01703582);
   haccpt2->SetBinContent(19,0.01885487);
   haccpt2->SetBinContent(20,0.01815736);
   haccpt2->SetBinContent(21,0.01613217);
   haccpt2->SetBinContent(22,0.009647211);
   haccpt2->SetBinContent(23,0.01583267);
   haccpt2->SetBinContent(24,0.01751862);
   haccpt2->SetBinContent(25,0.01805123);
   haccpt2->SetBinContent(26,0.01601238);
   haccpt2->SetBinContent(27,0.006837278);
   haccpt2->SetBinContent(28,0.01462181);
   haccpt2->SetBinContent(29,0.01742654);
   haccpt2->SetBinContent(30,0.01818135);
   haccpt2->SetBinContent(31,0.01574803);
   haccpt2->SetEntries(30);
   haccpt2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   haccpt2->SetLineColor(ci);
   haccpt2->SetMarkerStyle(8);
   haccpt2->GetXaxis()->SetTitle("nbin");
   haccpt2->GetXaxis()->SetLabelFont(42);
   haccpt2->GetXaxis()->SetLabelSize(0.035);
   haccpt2->GetXaxis()->SetTitleSize(0.035);
   haccpt2->GetXaxis()->SetTitleFont(42);
   haccpt2->GetYaxis()->SetTitle("Acceptance");
   haccpt2->GetYaxis()->SetLabelFont(42);
   haccpt2->GetYaxis()->SetLabelSize(0.035);
   haccpt2->GetYaxis()->SetTitleSize(0.035);
   haccpt2->GetYaxis()->SetTitleOffset(1.1);
   haccpt2->GetYaxis()->SetTitleFont(42);
   haccpt2->GetZaxis()->SetLabelFont(42);
   haccpt2->GetZaxis()->SetLabelSize(0.035);
   haccpt2->GetZaxis()->SetTitleSize(0.035);
   haccpt2->GetZaxis()->SetTitleFont(42);
   haccpt2->Draw("p");
   TGaxis *gaxis = new TGaxis(0,0.011,5,0.011,0.3,0.8,5,"");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(5);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.025);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Z");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   TLatex *   tex = new TLatex(0.2130324,0.009510787,"Pt^{2} #epsilon (0. , 0.1)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
   gaxis = new TGaxis(5.078247,0.01311452,10.08607,0.01311452,0.3,0.8,5,"");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(5);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.025);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Z");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   gaxis = new TGaxis(10.05477,0.01419808,15.0626,0.01419808,0.3,0.8,5,"");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(5);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.025);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Z");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   gaxis = new TGaxis(15.0939,0.01161152,20.10172,0.01161152,0.3,0.8,5,"");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(5);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.025);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Z");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   gaxis = new TGaxis(20.03912,0.009129831,25.04695,0.009129831,0.3,0.8,5,"");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(5);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.025);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Z");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   gaxis = new TGaxis(25.10955,0.006368512,30.11737,0.006368512,0.3,0.8,5,"");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(5);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.025);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Z");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
      tex = new TLatex(5.48513,0.0116115,"Pt^{2} #epsilon (0.1 , 0.25)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(25.6729,0.00486551,"Pt^{2} #epsilon (0.75 , 0.9)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(20.7277,0.00762683,"Pt^{2} #epsilon (0.55 , 0.75)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(15.8451,0.0101085,"Pt^{2} #epsilon (0.4 , 0.55)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(10.8998,0.0126951,"Pt^{2} #epsilon (0.25 , 0.4)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TPaveText *pt = new TPaveText(0.3499374,0.9238136,0.6500626,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("#gamma acceptance (Pt^{2} , Z)");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
