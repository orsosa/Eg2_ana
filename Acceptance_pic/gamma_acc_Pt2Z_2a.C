{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Oct 11 14:00:47 2016) by ROOT version5.34/03
   TCanvas *c1 = new TCanvas("c1", "c1",0,51,1920,1004);
   c1->Range(-3.75,0.0006286328,33.75,0.03930421);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *haccpt2 = new TH1F("haccpt2","#gamma acceptance (Pt^{2},Z)",30,0,30);
   haccpt2->SetBinContent(1,0.03366369);
   haccpt2->SetBinContent(2,0.03159792);
   haccpt2->SetBinContent(3,0.03064956);
   haccpt2->SetBinContent(4,0.02944851);
   haccpt2->SetBinContent(5,0.02762455);
   haccpt2->SetBinContent(6,0.02871472);
   haccpt2->SetBinContent(7,0.03078449);
   haccpt2->SetBinContent(8,0.02767196);
   haccpt2->SetBinContent(9,0.03041984);
   haccpt2->SetBinContent(10,0.02677809);
   haccpt2->SetBinContent(11,0.02189901);
   haccpt2->SetBinContent(12,0.02869754);
   haccpt2->SetBinContent(13,0.03062586);
   haccpt2->SetBinContent(14,0.03090957);
   haccpt2->SetBinContent(15,0.02802794);
   haccpt2->SetBinContent(16,0.01453461);
   haccpt2->SetBinContent(17,0.02496155);
   haccpt2->SetBinContent(18,0.02961733);
   haccpt2->SetBinContent(19,0.02905427);
   haccpt2->SetBinContent(20,0.0219182);
   haccpt2->SetBinContent(21,0.01023872);
   haccpt2->SetBinContent(22,0.01795714);
   haccpt2->SetBinContent(23,0.0218477);
   haccpt2->SetBinContent(24,0.02323407);
   haccpt2->SetBinContent(25,0.01761996);
   haccpt2->SetBinContent(26,0.006239846);
   haccpt2->SetBinContent(27,0.01483891);
   haccpt2->SetBinContent(28,0.01958731);
   haccpt2->SetBinContent(29,0.02025807);
   haccpt2->SetBinContent(30,0.01480759);
   haccpt2->SetBinError(1,0.000299603);
   haccpt2->SetBinError(2,0.0004028689);
   haccpt2->SetBinError(3,0.0005320674);
   haccpt2->SetBinError(4,0.0006714799);
   haccpt2->SetBinError(5,0.0007790783);
   haccpt2->SetBinError(6,0.00028452);
   haccpt2->SetBinError(7,0.0003966797);
   haccpt2->SetBinError(8,0.0004884745);
   haccpt2->SetBinError(9,0.0006388921);
   haccpt2->SetBinError(10,0.0006992065);
   haccpt2->SetBinError(11,0.0003197271);
   haccpt2->SetBinError(12,0.0004699473);
   haccpt2->SetBinError(13,0.0006026079);
   haccpt2->SetBinError(14,0.0007230407);
   haccpt2->SetBinError(15,0.0007786487);
   haccpt2->SetBinError(16,0.0002966184);
   haccpt2->SetBinError(17,0.0004868851);
   haccpt2->SetBinError(18,0.0006389859);
   haccpt2->SetBinError(19,0.0007195037);
   haccpt2->SetBinError(20,0.0006292193);
   haccpt2->SetBinError(21,0.0002634393);
   haccpt2->SetBinError(22,0.0003660318);
   haccpt2->SetBinError(23,0.0004639476);
   haccpt2->SetBinError(24,0.0005206079);
   haccpt2->SetBinError(25,0.0004687251);
   haccpt2->SetBinError(26,0.0003404602);
   haccpt2->SetBinError(27,0.0004462767);
   haccpt2->SetBinError(28,0.0005316415);
   haccpt2->SetBinError(29,0.0005877625);
   haccpt2->SetBinError(30,0.0005771491);
   haccpt2->SetEntries(60883.82);
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
   
   TPaveText *pt = new TPaveText(0.3486957,0.9221676,0.6513043,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("#gamma acceptance (Pt^{2},Z)");
   pt->Draw();
   TGaxis *gaxis = new TGaxis(0,0.00449619,5,0.00449619,0.3,0.8,5,"-SW");
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
   gaxis = new TGaxis(5,0.00449619,10,0.00449619,0.3,0.8,5,"-SUW");
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
   gaxis = new TGaxis(10,0.00449619,15,0.00449619,0.3,0.8,5,"-SUW");
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
   gaxis = new TGaxis(15,0.00449619,20,0.00449619,0.3,0.8,5,"-SUW");
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
   gaxis = new TGaxis(20,0.00449619,25,0.00449619,0.3,0.8,5,"-SUW");
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
   gaxis = new TGaxis(25,0.00449619,30,0.00449619,0.3,0.8,5,"-SUW");
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
   TLine *line = new TLine(5,0.00449619,5,0.03543665);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(10,0.00449619,10,0.03543665);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(15,0.00449619,15,0.03543665);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(20,0.00449619,20,0.03543665);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   line = new TLine(25,0.00449619,25,0.03543665);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
      tex = new TLatex(0.7,0.011,"Pt^{2} #epsilon (0. , 0.1)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(5.7,0.011,"Pt^{2} #epsilon (0.1 , 0.25)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(10.7,0.011,"Pt^{2} #epsilon (0.25 , 0.4)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(15.7,0.011,"Pt^{2} #epsilon (0.4 , 0.55)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(20.7,0.011,"Pt^{2} #epsilon (0.55 , 0.75)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(25.7,0.011,"Pt^{2} #epsilon (0.75 , 0.9)");
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
