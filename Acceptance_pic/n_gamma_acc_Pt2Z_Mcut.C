{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Oct  4 05:19:45 2016) by ROOT version5.34/34
   TCanvas *c1 = new TCanvas("c1", "c1",0,66,1280,734);
   c1->Range(-3.75,0.00102768,33.75,0.02486422);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *haccpt2Mc = new TH1F("haccpt2Mc","#gamma acceptance (Pt^{2},Z) M_{#pi^{0}} Cut",30,0,30);
   haccpt2Mc->SetBinContent(1,0.02125972);
   haccpt2Mc->SetBinContent(2,0.007169001);
   haccpt2Mc->SetBinContent(3,0.006051778);
   haccpt2Mc->SetBinContent(4,0.004721175);
   haccpt2Mc->SetBinContent(5,0.004597188);
   haccpt2Mc->SetBinContent(6,0.01926897);
   haccpt2Mc->SetBinContent(7,0.01169354);
   haccpt2Mc->SetBinContent(8,0.009401164);
   haccpt2Mc->SetBinContent(9,0.008202875);
   haccpt2Mc->SetBinContent(10,0.007429212);
   haccpt2Mc->SetBinContent(11,0.01488275);
   haccpt2Mc->SetBinContent(12,0.0148974);
   haccpt2Mc->SetBinContent(13,0.01495662);
   haccpt2Mc->SetBinContent(14,0.01154656);
   haccpt2Mc->SetBinContent(15,0.009353012);
   haccpt2Mc->SetBinContent(16,0.01158503);
   haccpt2Mc->SetBinContent(17,0.0159813);
   haccpt2Mc->SetBinContent(18,0.01603403);
   haccpt2Mc->SetBinContent(19,0.0147353);
   haccpt2Mc->SetBinContent(20,0.01103139);
   haccpt2Mc->SetBinContent(21,0.009075843);
   haccpt2Mc->SetBinContent(22,0.01409317);
   haccpt2Mc->SetBinContent(23,0.01490202);
   haccpt2Mc->SetBinContent(24,0.01351585);
   haccpt2Mc->SetBinContent(25,0.01120478);
   haccpt2Mc->SetBinContent(26,0.00608815);
   haccpt2Mc->SetBinContent(27,0.01271379);
   haccpt2Mc->SetBinContent(28,0.01496756);
   haccpt2Mc->SetBinContent(29,0.01575311);
   haccpt2Mc->SetBinContent(30,0.01070941);
   haccpt2Mc->SetBinError(1,0.0003127856);
   haccpt2Mc->SetBinError(2,0.0001793069);
   haccpt2Mc->SetBinError(3,0.0002297553);
   haccpt2Mc->SetBinError(4,0.0002696482);
   haccpt2Mc->SetBinError(5,0.0003210367);
   haccpt2Mc->SetBinError(6,0.0002602403);
   haccpt2Mc->SetBinError(7,0.0002415997);
   haccpt2Mc->SetBinError(8,0.0002901086);
   haccpt2Mc->SetBinError(9,0.0003390893);
   haccpt2Mc->SetBinError(10,0.0003621322);
   haccpt2Mc->SetBinError(11,0.0002731892);
   haccpt2Mc->SetBinError(12,0.0003525675);
   haccpt2Mc->SetBinError(13,0.000437537);
   haccpt2Mc->SetBinError(14,0.0004453394);
   haccpt2Mc->SetBinError(15,0.0004500179);
   haccpt2Mc->SetBinError(16,0.0002803022);
   haccpt2Mc->SetBinError(17,0.0004134463);
   haccpt2Mc->SetBinError(18,0.000492252);
   haccpt2Mc->SetBinError(19,0.0005363164);
   haccpt2Mc->SetBinError(20,0.0005000691);
   haccpt2Mc->SetBinError(21,0.0002688437);
   haccpt2Mc->SetBinError(22,0.0003543606);
   haccpt2Mc->SetBinError(23,0.0004202732);
   haccpt2Mc->SetBinError(24,0.0004442805);
   haccpt2Mc->SetBinError(25,0.0004517809);
   haccpt2Mc->SetBinError(26,0.0003623633);
   haccpt2Mc->SetBinError(27,0.0004575253);
   haccpt2Mc->SetBinError(28,0.0005246712);
   haccpt2Mc->SetBinError(29,0.000607061);
   haccpt2Mc->SetBinError(30,0.0006075948);
   haccpt2Mc->SetEntries(26868.77);
   haccpt2Mc->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   haccpt2Mc->SetLineColor(ci);
   haccpt2Mc->SetMarkerStyle(8);
   haccpt2Mc->GetXaxis()->SetTitle("nbin");
   haccpt2Mc->GetXaxis()->SetLabelFont(42);
   haccpt2Mc->GetXaxis()->SetLabelSize(0.035);
   haccpt2Mc->GetXaxis()->SetTitleSize(0.035);
   haccpt2Mc->GetXaxis()->SetTitleFont(42);
   haccpt2Mc->GetYaxis()->SetTitle("Acceptance");
   haccpt2Mc->GetYaxis()->SetLabelFont(42);
   haccpt2Mc->GetYaxis()->SetLabelSize(0.035);
   haccpt2Mc->GetYaxis()->SetTitleSize(0.035);
   haccpt2Mc->GetYaxis()->SetTitleOffset(1.1);
   haccpt2Mc->GetYaxis()->SetTitleFont(42);
   haccpt2Mc->GetZaxis()->SetLabelFont(42);
   haccpt2Mc->GetZaxis()->SetLabelSize(0.035);
   haccpt2Mc->GetZaxis()->SetTitleSize(0.035);
   haccpt2Mc->GetZaxis()->SetTitleFont(42);
   haccpt2Mc->Draw("p");
   
   TPaveText *pt = new TPaveText(0.2943478,0.9013584,0.7056522,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("#gamma acceptance (Pt^{2},Z) M_{#pi^{0}} Cut");
   pt->Draw();
   TGaxis *gaxis = new TGaxis(0,0.003411334,5,0.003411334,0.3,0.8,5,"-SW");
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
   gaxis = new TGaxis(5,0.003411334,10,0.003411334,0.3,0.8,5,"-SUW");
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
   gaxis = new TGaxis(10,0.003411334,15,0.003411334,0.3,0.8,5,"-SUW");
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
   gaxis = new TGaxis(15,0.003411334,20,0.003411334,0.3,0.8,5,"-SUW");
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
   gaxis = new TGaxis(20,0.003411334,25,0.003411334,0.3,0.8,5,"-SUW");
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
   gaxis = new TGaxis(25,0.003411334,30,0.003411334,0.3,0.8,5,"-SUW");
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
   TLine *line = new TLine(5,0.003411334,5,0.02248056);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(10,0.003411334,10,0.02248056);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(15,0.003411334,15,0.02248056);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(20,0.003411334,20,0.02248056);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(25,0.003411334,25,0.02248056);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
      tex = new TLatex(1,0.01,"Pt^{2} #epsilon (0. , 0.1)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(5.610328,0.01432631,"Pt^{2} #epsilon (0.1 , 0.25)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(10.59859,0.01705337,"Pt^{2} #epsilon (0.25 , 0.4)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(15.85094,0.01762572,"Pt^{2} #epsilon (0.4 , 0.55)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(20.60446,0.01705337,"Pt^{2} #epsilon (0.55 , 0.75)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(25.82746,0.01789506,"Pt^{2} #epsilon (0.75 , 0.9)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
