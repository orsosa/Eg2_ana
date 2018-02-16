{
//=========Macro generated from canvas: c/The canvas
//=========  (Thu Sep 24 13:17:46 2015) by ROOT version5.34/19
   TCanvas *c = new TCanvas("c", "The canvas",1,1,800,576);
   c->SetHighLightColor(2);
   c->Range(-0.625,-6.25,5.625,56.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH2F *hEpi0_th = new TH2F("hEpi0_th","Aperture angle vs Energy",700,0,5,700,0,50);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.695,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hEpi0_th");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 0      ");
   text = ptstats->AddText("Mean x =      0");
   text = ptstats->AddText("Mean y =      0");
   text = ptstats->AddText("RMS x =      0");
   text = ptstats->AddText("RMS y =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hEpi0_th->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hEpi0_th);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hEpi0_th->SetLineColor(ci);
   hEpi0_th->GetXaxis()->SetTitle("E_{#gamma_{1}} + E_{#gamma_{2}} (GeV)");
   hEpi0_th->GetXaxis()->SetLabelFont(42);
   hEpi0_th->GetXaxis()->SetLabelSize(0.035);
   hEpi0_th->GetXaxis()->SetTitleSize(0.035);
   hEpi0_th->GetXaxis()->SetTitleFont(42);
   hEpi0_th->GetYaxis()->SetTitle("Aperture angle (Deg)");
   hEpi0_th->GetYaxis()->SetLabelFont(42);
   hEpi0_th->GetYaxis()->SetLabelSize(0.035);
   hEpi0_th->GetYaxis()->SetTitleSize(0.035);
   hEpi0_th->GetYaxis()->SetTitleFont(42);
   hEpi0_th->GetZaxis()->SetLabelFont(42);
   hEpi0_th->GetZaxis()->SetLabelSize(0.035);
   hEpi0_th->GetZaxis()->SetTitleSize(0.035);
   hEpi0_th->GetZaxis()->SetTitleFont(42);
   hEpi0_th->Draw("col");
   
   TPaveText *pt = new TPaveText(0.2695226,0.9341608,0.7304774,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("Aperture angle vs Energy");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
