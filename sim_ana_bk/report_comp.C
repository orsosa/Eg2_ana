{
TCanvas *c  = new TCanvas("c", "The canvas",800,600);
TFile *fa = new TFile("all_part_ahmed.root");
TNtuple *ta = (TNtuple *)fa->Get("tn");

TFile *fh = new TFile("all_part_hayk.root");
TNtuple *th = (TNtuple *)fh->Get("tn");

TFile *fo = new TFile("all_part_orlando.root");
TNtuple *to = (TNtuple *)fo->Get("tn");

TFile *fd = new TFile("all_part_data.root");
TNtuple *td = (TNtuple *)fd->Get("tn");


to->SetAlias("P","sqrt(pex**2+pey**2+pez**2)");
ta->SetAlias("P","sqrt(pex**2+pey**2+pez**2)");
th->SetAlias("P","sqrt(pex**2+pey**2+pez**2)");
td->SetAlias("P","sqrt(pex**2+pey**2+pez**2)");

td->Draw("E/P:P>>sd(200,0,5,200,0,0.5)","","col");
TH2F * hd = (TH2F *)gROOT->FindObject("sd");
hd->SetTitle("samp_frac_e_data");
hd->GetXaxis()->SetTitle("P (GeV)");
hd->GetYaxis()->SetTitle("E/P");
c->SaveAs("samp_fract_e_data.gif");
c->SaveAs("samp_fract_e_data.C");

ta->Draw("E/P:P>>sa(200,0,5,200,0,0.5)","","col");
TH2F * ha = (TH2F *)gROOT->FindObject("sa");
ha->SetTitle("samp_frac_e_ahmred");
ha->GetXaxis()->SetTitle("P (GeV)");
ha->GetYaxis()->SetTitle("E/P");
c->SaveAs("samp_fract_e_ahmed.gif");
c->SaveAs("samp_fract_e_ahmed.C");

to->Draw("E/P:P>>so(200,0,5,200,0,0.5)","","col");
TH2F * ho = (TH2F *)gROOT->FindObject("so");
ho->SetTitle("samp_frac_e_orlando");
ho->GetXaxis()->SetTitle("P (GeV)");
ho->GetYaxis()->SetTitle("E/P");
c->SaveAs("samp_fract_e_orlando.gif");
c->SaveAs("samp_fract_e_orlando.C");

th->Draw("E/P:P>>sh(200,0,5,200,0,0.5)","","col");
TH2F * hh = (TH2F *)gROOT->FindObject("sh");
hh->SetTitle("samp_frac_e_hayk");
hh->GetXaxis()->SetTitle("P (GeV)");
hh->GetYaxis()->SetTitle("E/P");
c->SaveAs("samp_fract_e_hayk.gif");
c->SaveAs("samp_fract_e_hayk.C");

ta->Draw("P>>ha(200,0,5.1)","","goff");
th->Draw("P>>hh(200,0,5.1)","","goff");
to->Draw("P>>ho(200,0,5.1)","","goff");
td->Draw("P>>hd(200,0,5.1)","","goff");

TH1F * pa = (TH1F *)gROOT->FindObject("ha");
TH1F * ph = (TH1F *)gROOT->FindObject("hh");
TH1F * po = (TH1F *)gROOT->FindObject("ho");
TH1F * pd = (TH1F *)gROOT->FindObject("hd");

pa->SetLineColor(kRed);
pa->GetXaxis()->SetTitle("P (GeV)");
pa->GetYaxis()->SetTitle("dN/dP");

ph->SetLineColor(kBlack);
ph->GetXaxis()->SetTitle("P (GeV)");
ph->GetYaxis()->SetTitle("dN/dP");

po->SetLineColor(kGreen);
po->GetXaxis()->SetTitle("P (GeV)");
po->GetYaxis()->SetTitle("dN/dP");

pd->SetLineColor(kBlue);
pd->GetXaxis()->SetTitle("P (GeV)");
pd->GetYaxis()->SetTitle("dN/dP");

ph->DrawNormalized();
pa->DrawNormalized("same");
pd->DrawNormalized("same");

TLegend *l = new TLegend(0.55,0.75,0.75,0.85);
l->AddEntry(ph,"Hayk sim","lp");
l->AddEntry(pa,"Ahmed sim","lp");
l->AddEntry(pd,"data","lp");
l->Draw();

c->SaveAs("P_distribution_ahd.gif");
c->SaveAs("P_distribution_ahd.C");

// Ahmed format vs orlando translation format, same data.
pa->DrawNormalized();
po->DrawNormalized("same");

TLegend *l = new TLegend(0.55,0.75,0.75,0.85);
l->AddEntry(po,"Orland transl","lp");
l->AddEntry(pa,"Ahmed ","lp");
l->Draw();

c->SaveAs("P_distribution_ao.gif");
c->SaveAs("P_distribution_ao.C");

TCut cutQ2 = "Q2>1.";
TCut cutW = "W>2.";
TCut cuty = "y<0.85";

ta->Draw("P>>hca(300,0,5)",cutQ2&&cutW&&cuty,"goff");
th->Draw("P>>hch(300,0,5)",cutQ2&&cutW&&cuty,"goff");
td->Draw("P>>hcd(300,0,5)",cutQ2&&cutW&&cuty,"goff");


TH1F * pca = (TH1F *)gROOT->FindObject("hca");
TH1F * pch = (TH1F *)gROOT->FindObject("hch");
TH1F * pcd = (TH1F *)gROOT->FindObject("hcd");

pca->SetLineColor(kRed);
//pca->SetTitle("Momentum spectrum");
pca->GetXaxis()->SetTitle("P (GeV)");
pca->GetYaxis()->SetTitle("dN/dP");

pch->SetLineColor(kBlack);
pch->GetXaxis()->SetTitle("P (GeV)");
pch->GetYaxis()->SetTitle("dN/dP");

pcd->SetLineColor(kBlue);
pcd->GetXaxis()->SetTitle("P (GeV)");
pcd->GetYaxis()->SetTitle("dN/dP");

pca->DrawNormalized();
pch->DrawNormalized("same");
pcd->DrawNormalized("same");
ph->SetLineStyle(2);
pa->SetLineStyle(2);
pd->SetLineStyle(2);
//ph->DrawNormalized("same");
//pa->DrawNormalized("same");
//pd->DrawNormalized("same");

TLegend *l = new TLegend(0.55,0.75,0.75,0.85);
//l->AddEntry(ph,"Hayk sim","lp");
//l->AddEntry(pa,"Ahmed sim","lp");
//l->AddEntry(pd,"data","lp");
l->AddEntry(pch,"Hayk sim cut","lp");
l->AddEntry(pca,"Ahmed sim cut","lp");
l->AddEntry(pcd,"data cut","lp");
l->Draw();
c->SaveAs("P_distribution_ahd_cut.gif");
c->SaveAs("P_distribution_ahd_cut.C");
}
