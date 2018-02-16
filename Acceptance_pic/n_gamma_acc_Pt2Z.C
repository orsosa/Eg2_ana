{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Oct  4 05:15:41 2016) by ROOT version5.34/34
   TCanvas *c1 = new TCanvas("c1", "c1",0,66,1280,734);
   c1->Range(-3.75,0.004151467,33.75,0.02160347);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *haccpt2 = new TH1F("haccpt2","#gamma acceptance (Pt^{2},Z)",30,0,30);
   haccpt2->SetBinContent(1,0.01139781);
   haccpt2->SetBinContent(2,0.01209148);
   haccpt2->SetBinContent(3,0.01306326);
   haccpt2->SetBinContent(4,0.01303572);
   haccpt2->SetBinContent(5,0.01413107);
   haccpt2->SetBinContent(6,0.01394372);
   haccpt2->SetBinContent(7,0.01498534);
   haccpt2->SetBinContent(8,0.0145298);
   haccpt2->SetBinContent(9,0.01540234);
   haccpt2->SetBinContent(10,0.01395748);
   haccpt2->SetBinContent(11,0.01470173);
   haccpt2->SetBinContent(12,0.01684012);
   haccpt2->SetBinContent(13,0.01726582);
   haccpt2->SetBinContent(14,0.01666834);
   haccpt2->SetBinContent(15,0.01568835);
   haccpt2->SetBinContent(16,0.01230789);
   haccpt2->SetBinContent(17,0.01703582);
   haccpt2->SetBinContent(18,0.01885487);
   haccpt2->SetBinContent(19,0.01815736);
   haccpt2->SetBinContent(20,0.01613217);
   haccpt2->SetBinContent(21,0.009647211);
   haccpt2->SetBinContent(22,0.01583267);
   haccpt2->SetBinContent(23,0.01751862);
   haccpt2->SetBinContent(24,0.01805123);
   haccpt2->SetBinContent(25,0.01601238);
   haccpt2->SetBinContent(26,0.006837278);
   haccpt2->SetBinContent(27,0.01462181);
   haccpt2->SetBinContent(28,0.01742654);
   haccpt2->SetBinContent(29,0.01818135);
   haccpt2->SetBinContent(30,0.01574803);
   haccpt2->SetBinError(1,6.997973e-05);
   haccpt2->SetBinError(2,0.0001095489);
   haccpt2->SetBinError(3,0.0001671185);
   haccpt2->SetBinError(4,0.0002351193);
   haccpt2->SetBinError(5,0.0003237565);
   haccpt2->SetBinError(6,0.0001010298);
   haccpt2->SetBinError(7,0.0001443667);
   haccpt2->SetBinError(8,0.0001927658);
   haccpt2->SetBinError(9,0.0002602705);
   haccpt2->SetBinError(10,0.0003056782);
   haccpt2->SetBinError(11,0.0001631848);
   haccpt2->SetBinError(12,0.000215316);
   haccpt2->SetBinError(13,0.0002722304);
   haccpt2->SetBinError(14,0.0003259902);
   haccpt2->SetBinError(15,0.0003814573);
   haccpt2->SetBinError(16,0.0002014161);
   haccpt2->SetBinError(17,0.0002723948);
   haccpt2->SetBinError(18,0.0003385603);
   haccpt2->SetBinError(19,0.000389378);
   haccpt2->SetBinError(20,0.0004207194);
   haccpt2->SetBinError(21,0.0002107312);
   haccpt2->SetBinError(22,0.0002701948);
   haccpt2->SetBinError(23,0.0003190386);
   haccpt2->SetBinError(24,0.0003658818);
   haccpt2->SetBinError(25,0.0003966205);
   haccpt2->SetBinError(26,0.0003074314);
   haccpt2->SetBinError(27,0.0003740998);
   haccpt2->SetBinError(28,0.0004238367);
   haccpt2->SetBinError(29,0.0004878811);
   haccpt2->SetBinError(30,0.0005625521);
   haccpt2->SetEntries(70574.42);
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
   
   TPaveText *pt = new TPaveText(0.3486957,0.9221676,0.6513043,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("#gamma acceptance (Pt^{2},Z)");
   pt->Draw();
   TGaxis *gaxis = new TGaxis(0,0.005896668,5,0.005896668,0.3,0.8,5,"-SW");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0.8);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.025);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Z ");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   gaxis = new TGaxis(5,0.005896668,10,0.005896668,0.3,0.8,5,"-SUW");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0.8);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.025);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Z ");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   gaxis = new TGaxis(10,0.005896668,15,0.005896668,0.3,0.8,5,"-SUW");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0.8);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.025);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Z ");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   gaxis = new TGaxis(15,0.005896668,20,0.005896668,0.3,0.8,5,"-SUW");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0.8);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.025);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Z ");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   gaxis = new TGaxis(20,0.005896668,25,0.005896668,0.3,0.8,5,"-SUW");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0.8);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.025);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Z ");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   gaxis = new TGaxis(25,0.005896668,30,0.005896668,0.3,0.8,5,"-SUW");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0.8);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.025);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Z ");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   TLine *line = new TLine(5,0.005896668,5,0.01985827);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(10,0.005896668,10,0.01985827);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(15,0.005896668,15,0.01985827);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(20,0.005896668,20,0.01985827);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(25,0.005896668,25,0.01985827);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
      tex = new TLatex(1,0.01,"Pt^{2} #epsilon (0. , 0.1)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(5.84507,0.01073294,"Pt^{2} #epsilon (0.1 , 0.25)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(10.83333,0.01115199,"Pt^{2} #epsilon (0.25 , 0.4)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(15.32277,0.01115199,"Pt^{2} #epsilon (0.4 , 0.55)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(20.31103,0.01196543,"Pt^{2} #epsilon (0.55 , 0.75)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(25.2993,0.01196543,"Pt^{2} #epsilon (0.75 , 0.9)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
