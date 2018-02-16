{
TCanvas *c  = new TCanvas("c", "The canvas",800,600);

TFile *fo = new TFile("all_part_osoto.root");
TNtuple *to = (TNtuple *)fo->Get("tn");


TFile *fd = new TFile("all_part_data.root");
TNtuple *td = (TNtuple *)fd->Get("tn");


to->SetAlias("P","sqrt(pex**2+pey**2+pez**2)");
td->SetAlias("P","sqrt(pex**2+pey**2+pez**2)");

td->Draw("E/P:P>>sd(200,0,5,200,0,0.5)","","col");
TH2F * hd = (TH2F *)gROOT->FindObject("sd");
hd->SetTitle("samp_frac_e_data");
hd->GetXaxis()->SetTitle("P (GeV)");
hd->GetYaxis()->SetTitle("E/P");
c->SaveAs("samp_fract_e_data.gif");
c->SaveAs("samp_fract_e_data.C");


to->Draw("E/P:P>>so(200,0,5,200,0,0.5)","","col");
TH2F * ho = (TH2F *)gROOT->FindObject("so");
ho->SetTitle("samp_frac_e_orlando");
ho->GetXaxis()->SetTitle("P (GeV)");
ho->GetYaxis()->SetTitle("E/P");
c->SaveAs("samp_fract_e_orlando.gif");
c->SaveAs("samp_fract_e_orlando.C");



to->Draw("P>>ho(200,0,5.1)","","goff");
td->Draw("P>>hd(200,0,5.1)","","goff");


TH1F * po = (TH1F *)gROOT->FindObject("ho");
TH1F * pd = (TH1F *)gROOT->FindObject("hd");

po->SetLineColor(kGreen);
po->GetXaxis()->SetTitle("P (GeV)");
po->GetYaxis()->SetTitle("dN/dP");

pd->SetLineColor(kBlue);
pd->GetXaxis()->SetTitle("P (GeV)");
pd->GetYaxis()->SetTitle("dN/dP");

po->DrawNormalized();
pd->DrawNormalized("same");

TLegend *l = new TLegend(0.55,0.75,0.75,0.85);
l->AddEntry(po,"Orlando sim","lp");
l->AddEntry(pd,"data","lp");
l->Draw();

c->SaveAs("P_distribution_od.gif");
c->SaveAs("P_distribution_od.C");

TCut cutQ2 = "Q2>1.";
TCut cutW = "W>2.";
TCut cuty = "y<0.85";

to->Draw("P>>hco(300,0,5)",cutQ2&&cutW&&cuty,"goff");
td->Draw("P>>hcd(300,0,5)",cutQ2&&cutW&&cuty,"goff");

TH1F * pco = (TH1F *)gROOT->FindObject("hco");
TH1F * pcd = (TH1F *)gROOT->FindObject("hcd");

pco->SetLineColor(kBlack);
pco->GetXaxis()->SetTitle("P (GeV)");
pco->GetYaxis()->SetTitle("dN/dP");

pcd->SetLineColor(kBlue);
pcd->GetXaxis()->SetTitle("P (GeV)");
pcd->GetYaxis()->SetTitle("dN/dP");

pco->DrawNormalized();
pcd->DrawNormalized("same");
//po->SetLineStyle(2);
//pd->SetLineStyle(2);
//po->DrawNormalized("same");
//pd->DrawNormalized("same");

TLegend *l = new TLegend(0.55,0.75,0.75,0.85);
//l->AddEntry(po,"Orlando sim","lp");
//l->AddEntry(pd,"data","lp");
l->AddEntry(pco,"Orlando sim cut","lp");
l->AddEntry(pcd,"data cut","lp");
l->Draw();
c->SaveAs("P_distribution_od_cut.gif");
c->SaveAs("P_distribution_od_cut.C");
}
