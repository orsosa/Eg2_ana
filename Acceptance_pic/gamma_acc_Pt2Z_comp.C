{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Sep 29 19:23:14 2016) by ROOT version5.34/34
   TCanvas *c1 = new TCanvas("c1", "c1",0,66,1280,734);
   c1->Range(-5,-0.002790338,35,0.02511304);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *haccpt2Mc = new TH1F("haccpt2Mc","#gamma acceptance (Pt^{2},Z)",32,-1,31);
   haccpt2Mc->SetBinContent(2,0.02125972);
   haccpt2Mc->SetBinContent(3,0.007169001);
   haccpt2Mc->SetBinContent(4,0.006051778);
   haccpt2Mc->SetBinContent(5,0.004721175);
   haccpt2Mc->SetBinContent(6,0.004597188);
   haccpt2Mc->SetBinContent(7,0.01926897);
   haccpt2Mc->SetBinContent(8,0.01169354);
   haccpt2Mc->SetBinContent(9,0.009401164);
   haccpt2Mc->SetBinContent(10,0.008202875);
   haccpt2Mc->SetBinContent(11,0.007429212);
   haccpt2Mc->SetBinContent(12,0.01488275);
   haccpt2Mc->SetBinContent(13,0.0148974);
   haccpt2Mc->SetBinContent(14,0.01495662);
   haccpt2Mc->SetBinContent(15,0.01154656);
   haccpt2Mc->SetBinContent(16,0.009353012);
   haccpt2Mc->SetBinContent(17,0.01158503);
   haccpt2Mc->SetBinContent(18,0.0159813);
   haccpt2Mc->SetBinContent(19,0.01603403);
   haccpt2Mc->SetBinContent(20,0.0147353);
   haccpt2Mc->SetBinContent(21,0.01103139);
   haccpt2Mc->SetBinContent(22,0.009075843);
   haccpt2Mc->SetBinContent(23,0.01409317);
   haccpt2Mc->SetBinContent(24,0.01490202);
   haccpt2Mc->SetBinContent(25,0.01351585);
   haccpt2Mc->SetBinContent(26,0.01120478);
   haccpt2Mc->SetBinContent(27,0.00608815);
   haccpt2Mc->SetBinContent(28,0.01271379);
   haccpt2Mc->SetBinContent(29,0.01496756);
   haccpt2Mc->SetBinContent(30,0.01575311);
   haccpt2Mc->SetBinContent(31,0.01070941);
   haccpt2Mc->SetEntries(30);
   haccpt2Mc->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   haccpt2Mc->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   haccpt2Mc->SetMarkerColor(ci);
   haccpt2Mc->SetMarkerStyle(8);
   haccpt2Mc->GetXaxis()->SetTitle("nbin");
   haccpt2Mc->GetXaxis()->SetNdivisions(210);
   haccpt2Mc->GetXaxis()->SetLabelFont(42);
   haccpt2Mc->GetXaxis()->SetLabelSize(0.035);
   haccpt2Mc->GetXaxis()->SetTitleSize(0.035);
   haccpt2Mc->GetXaxis()->SetTickLength(1);
   haccpt2Mc->GetXaxis()->SetTitleFont(42);
   haccpt2Mc->GetYaxis()->SetTitle("Acceptance");
   haccpt2Mc->GetYaxis()->SetLabelFont(42);
   haccpt2Mc->GetYaxis()->SetLabelSize(0.035);
   haccpt2Mc->GetYaxis()->SetTitleSize(0.035);
   haccpt2Mc->GetYaxis()->SetTitleFont(42);
   haccpt2Mc->GetZaxis()->SetLabelFont(42);
   haccpt2Mc->GetZaxis()->SetLabelSize(0.035);
   haccpt2Mc->GetZaxis()->SetTitleSize(0.035);
   haccpt2Mc->GetZaxis()->SetTitleFont(42);
   haccpt2Mc->Draw("p");
   
   TPaveText *pt = new TPaveText(0.3577621,0.9238136,0.6422379,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("#gamma acceptance (Pt^{2},Z)");
   pt->Draw();
   
   TH1F *haccpt2 = new TH1F("haccpt2","#gamma acceptance (Pt^{2},Z)",32,-1,31);
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

   ci = TColor::GetColor("#000099");
   haccpt2->SetLineColor(ci);
   haccpt2->SetMarkerStyle(8);
   haccpt2->GetXaxis()->SetLabelFont(42);
   haccpt2->GetXaxis()->SetLabelSize(0.035);
   haccpt2->GetXaxis()->SetTitleSize(0.035);
   haccpt2->GetXaxis()->SetTitleFont(42);
   haccpt2->GetYaxis()->SetTitle("Acceptance");
   haccpt2->GetYaxis()->SetLabelFont(42);
   haccpt2->GetYaxis()->SetLabelSize(0.035);
   haccpt2->GetYaxis()->SetTitleSize(0.035);
   haccpt2->GetYaxis()->SetTitleFont(42);
   haccpt2->GetZaxis()->SetLabelFont(42);
   haccpt2->GetZaxis()->SetLabelSize(0.035);
   haccpt2->GetZaxis()->SetTitleSize(0.035);
   haccpt2->GetZaxis()->SetTitleFont(42);
   haccpt2->Draw("psame");
   TGaxis *gaxis = new TGaxis(-0.0679966,0.0223069,4.936537,0.0223069,0.3,0.8,5,"-SW");
   gaxis->SetLabelOffset(0);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.1);
   gaxis->SetGridLength(-0.8);
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
      tex = new TLatex(0.6964004,0.0005596439,"Pt^{2} #epsilon (0. , 0.1)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(5.92332,0.0230242,"...");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(5.226654,0.000569134,"Pt^{2} #epsilon (0.1 , 0.25)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(10.33998,0.000569134,"Pt^{2} #epsilon (0.25 , 0.4)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(15.30825,0.000569134,"Pt^{2} #epsilon (0.4 , 0.55)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(20.16772,0.000569134,"Pt^{2} #epsilon (0.55 , 0.75)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(25.38985,0.000569134,"Pt^{2} #epsilon (0.75 , 0.9)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
   gaxis = new TGaxis(-0.0679966,0.0223069,4.936537,0.0223069,0.3,0.8,5,"-SW");
   gaxis->SetLabelOffset(0);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.1);
   gaxis->SetGridLength(-0.8);
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
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
