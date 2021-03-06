{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Oct 11 11:00:42 2016) by ROOT version5.34/19
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,1200,720);
   c1->Range(-3.75,0.01385727,33.75,0.09209042);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *haccp = new TH1F("haccp","#gamma acceptance (P,#theta)",30,0,30);
   haccp->SetBinContent(1,0.02473368);
   haccp->SetBinContent(2,0.03450968);
   haccp->SetBinContent(3,0.03812166);
   haccp->SetBinContent(4,0.03708372);
   haccp->SetBinContent(5,0.02541195);
   haccp->SetBinContent(6,0.03450345);
   haccp->SetBinContent(7,0.05232678);
   haccp->SetBinContent(8,0.0589668);
   haccp->SetBinContent(9,0.06038682);
   haccp->SetBinContent(10,0.04754903);
   haccp->SetBinContent(11,0.03826567);
   haccp->SetBinContent(12,0.05680823);
   haccp->SetBinContent(13,0.06375273);
   haccp->SetBinContent(14,0.06422059);
   haccp->SetBinContent(15,0.05015786);
   haccp->SetBinContent(16,0.04226573);
   haccp->SetBinContent(17,0.06370497);
   haccp->SetBinContent(18,0.06832334);
   haccp->SetBinContent(19,0.06709229);
   haccp->SetBinContent(20,0.05286347);
   haccp->SetBinContent(21,0.04457173);
   haccp->SetBinContent(22,0.06766346);
   haccp->SetBinContent(23,0.07200711);
   haccp->SetBinContent(24,0.06832135);
   haccp->SetBinContent(25,0.05593269);
   haccp->SetBinContent(26,0.04930571);
   haccp->SetBinContent(27,0.07522579);
   haccp->SetBinContent(28,0.08025659);
   haccp->SetBinContent(29,0.07584435);
   haccp->SetBinContent(30,0.07130262);
   haccp->SetBinError(1,0.0002147043);
   haccp->SetBinError(2,0.0002120203);
   haccp->SetBinError(3,0.0002050319);
   haccp->SetBinError(4,0.0001960585);
   haccp->SetBinError(5,0.0001363396);
   haccp->SetBinError(6,0.0002603604);
   haccp->SetBinError(7,0.0002859848);
   haccp->SetBinError(8,0.0003013339);
   haccp->SetBinError(9,0.0003207503);
   haccp->SetBinError(10,0.0002667901);
   haccp->SetBinError(11,0.0003546095);
   haccp->SetBinError(12,0.0004053178);
   haccp->SetBinError(13,0.0004497868);
   haccp->SetBinError(14,0.0005031856);
   haccp->SetBinError(15,0.0004428435);
   haccp->SetBinError(16,0.0004796482);
   haccp->SetBinError(17,0.0005772295);
   haccp->SetBinError(18,0.0006502367);
   haccp->SetBinError(19,0.0007337405);
   haccp->SetBinError(20,0.0006689503);
   haccp->SetBinError(21,0.0006133059);
   haccp->SetBinError(22,0.0007680667);
   haccp->SetBinError(23,0.0008829365);
   haccp->SetBinError(24,0.001002387);
   haccp->SetBinError(25,0.0009999167);
   haccp->SetBinError(26,0.0006477869);
   haccp->SetBinError(27,0.0008547128);
   haccp->SetBinError(28,0.001030207);
   haccp->SetBinError(29,0.001265059);
   haccp->SetBinError(30,0.001711217);
   haccp->SetEntries(192344.2);
   haccp->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   haccp->SetLineColor(ci);
   haccp->SetMarkerStyle(8);
   haccp->GetXaxis()->SetTitle("nbin");
   haccp->GetXaxis()->SetLabelFont(42);
   haccp->GetXaxis()->SetLabelSize(0.035);
   haccp->GetXaxis()->SetTitleSize(0.035);
   haccp->GetXaxis()->SetTitleFont(42);
   haccp->GetYaxis()->SetTitle("Acceptance");
   haccp->GetYaxis()->SetLabelFont(42);
   haccp->GetYaxis()->SetLabelSize(0.035);
   haccp->GetYaxis()->SetTitleSize(0.035);
   haccp->GetYaxis()->SetTitleOffset(1.1);
   haccp->GetYaxis()->SetTitleFont(42);
   haccp->GetZaxis()->SetLabelFont(42);
   haccp->GetZaxis()->SetLabelSize(0.035);
   haccp->GetZaxis()->SetTitleSize(0.035);
   haccp->GetZaxis()->SetTitleFont(42);
   haccp->Draw("p");
   
   TPaveText *pt = new TPaveText(0.3616555,0.9343064,0.6383445,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("#gamma acceptance (P,#theta)");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
