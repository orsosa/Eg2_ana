{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Oct 11 13:17:56 2016) by ROOT version5.34/03
   TCanvas *c1 = new TCanvas("c1", "c1",0,51,1920,1004);
   c1->Range(-5,-0.003837491,35,0.03453742);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *haccpt2 = new TH1F("haccpt2","#pi^{0} (P_{t}^{2},Z) 2#gamma events",32,-1,31);
   haccpt2->SetBinContent(2,0.02422948);
   haccpt2->SetBinContent(3,0.02452766);
   haccpt2->SetBinContent(4,0.02323624);
   haccpt2->SetBinContent(5,0.01775744);
   haccpt2->SetBinContent(6,0.007808559);
   haccpt2->SetBinContent(7,0.02269366);
   haccpt2->SetBinContent(8,0.02546467);
   haccpt2->SetBinContent(9,0.02323701);
   haccpt2->SetBinContent(10,0.02285657);
   haccpt2->SetBinContent(11,0.0214094);
   haccpt2->SetBinContent(12,0.01758667);
   haccpt2->SetBinContent(13,0.02483418);
   haccpt2->SetBinContent(14,0.02664155);
   haccpt2->SetBinContent(15,0.02670493);
   haccpt2->SetBinContent(16,0.02070685);
   haccpt2->SetBinContent(17,0.01237775);
   haccpt2->SetBinContent(18,0.02227543);
   haccpt2->SetBinContent(19,0.02619313);
   haccpt2->SetBinContent(20,0.02823392);
   haccpt2->SetBinContent(21,0.01858264);
   haccpt2->SetBinContent(22,0.009447931);
   haccpt2->SetBinContent(23,0.0166974);
   haccpt2->SetBinContent(24,0.02006044);
   haccpt2->SetBinContent(25,0.02127351);
   haccpt2->SetBinContent(26,0.01656237);
   haccpt2->SetBinContent(28,0.01268067);
   haccpt2->SetBinContent(29,0.01931933);
   haccpt2->SetBinContent(30,0.02042625);
   haccpt2->SetBinContent(31,0.009169312);
   haccpt2->SetBinError(2,0.0003578434);
   haccpt2->SetBinError(3,0.000500358);
   haccpt2->SetBinError(4,0.0006542705);
   haccpt2->SetBinError(5,0.0007349212);
   haccpt2->SetBinError(6,0.0005827832);
   haccpt2->SetBinError(7,0.0003566817);
   haccpt2->SetBinError(8,0.0005089838);
   haccpt2->SetBinError(9,0.0006325232);
   haccpt2->SetBinError(10,0.0007815964);
   haccpt2->SetBinError(11,0.0008851134);
   haccpt2->SetBinError(12,0.000404958);
   haccpt2->SetBinError(13,0.0006173825);
   haccpt2->SetBinError(14,0.0007949245);
   haccpt2->SetBinError(15,0.0009489703);
   haccpt2->SetBinError(16,0.0009440689);
   haccpt2->SetBinError(17,0.0003868563);
   haccpt2->SetBinError(18,0.0006506393);
   haccpt2->SetBinError(19,0.0008488146);
   haccpt2->SetBinError(20,0.001004109);
   haccpt2->SetBinError(21,0.0008203186);
   haccpt2->SetBinError(22,0.0003580461);
   haccpt2->SetBinError(23,0.0004993077);
   haccpt2->SetBinError(24,0.0006298379);
   haccpt2->SetBinError(25,0.0007041004);
   haccpt2->SetBinError(26,0.0006427581);
   haccpt2->SetBinError(28,0.0005842724);
   haccpt2->SetBinError(29,0.0007468852);
   haccpt2->SetBinError(30,0.0008352336);
   haccpt2->SetBinError(31,0.0006420528);
   haccpt2->SetEntries(29);
   haccpt2->SetStats(0);

   Int_t ci;   // for color index setting
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
   
   TPaveText *pt = new TPaveText(0.3342211,0.9047902,0.6657789,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("#pi^{0} (P_{t}^{2},Z) 2#gamma events");
   pt->Draw();
   TGaxis *gaxis = new TGaxis(0,0,5,0,0.3,0.8,5,"-SW");
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
   gaxis = new TGaxis(5,0,10,0,0.3,0.8,5,"-SUW");
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
   gaxis = new TGaxis(10,0,15,0,0.3,0.8,5,"-SUW");
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
   gaxis = new TGaxis(15,0,20,0,0.3,0.8,5,"-SUW");
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
   gaxis = new TGaxis(20,0,25,0,0.3,0.8,5,"-SUW");
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
   gaxis = new TGaxis(25,0,30,0,0.3,0.8,5,"-SUW");
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
   TLine *line = new TLine(5,0,5,0.03069993);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(10,0,10,0.03069993);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(15,0,15,0.03069993);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(20,0,20,0.03069993);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(25,0,25,0.03069993);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
      tex = new TLatex(0.7,-0.0015,"Pt^{2} #epsilon (0. , 0.1)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(5.7,-0.0015,"Pt^{2} #epsilon (0.1 , 0.25)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(10.7,-0.0015,"Pt^{2} #epsilon (0.25 , 0.4)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(15.7,-0.0015,"Pt^{2} #epsilon (0.4 , 0.55)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(20.7,-0.0015,"Pt^{2} #epsilon (0.55 , 0.75)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(25.7,-0.0015,"Pt^{2} #epsilon (0.75 , 0.9)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
