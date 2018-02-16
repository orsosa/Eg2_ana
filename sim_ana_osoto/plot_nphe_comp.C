{
  TString set("osoto");
  char savedir[20]="pictures_nphe_comp";
  TFile *file0 = TFile::Open(Form("all_part_%s.root",set.Data()));
  TNtuple *tns = (TNtuple*)file0->Get("tn");
  set = "data";
  TFile *file1 = TFile::Open(Form("all_part_%s.root",set.Data()));
  TNtuple *tnd = (TNtuple*)file1->Get("tn");
  TCanvas *c = new TCanvas("c","c",1024,728);
  TH1F *hd,*hs;
  for (int i =0; i<6;i++)
  {
    hd = new TH1F(Form("nphe_data_%d",i),Form("Nphe for sector %d",i),150,-50,400);
    hs = new TH1F(Form("nphe_sim_%d",i),Form("Nphe for sector %d",i),150,-50,400);
    hs->SetLineColor(kRed);
    tnd->Draw(Form("nphe>>nphe_data_%d",i),Form("sector==%d",i),"");
    tns->Draw(Form("nphe>>nphe_sim_%d",i),Form("sector==%d",i),"same");
    hd->DrawNormalized();
    hs->DrawNormalized("same");
    TLegend *l = new TLegend(0.6,0.6,0.75,0.7);
    l->AddEntry(hd,"Data");
    l->AddEntry(hs,"Simulation");
    l->Draw();
    c->SaveAs(Form("%s/nphe_sector%d_comp.gif",savedir,i));
    c->SaveAs(Form("%s/nphe_sector%d_comp.C",savedir,i));
  
  }
  tnd->AddFriend("tns=tn","all_part_osoto.root");
  for (int i =0; i<6;i++)
  {
    tnd->Draw(Form("nphe:tns.nphe>>h%d(200,-50,400,200,-50,400)",i),Form("sector==%d",i));
    c->SaveAs(Form("%s/nphe_corr%d.gif",savedir,i));
    c->SaveAs(Form("%s/nphe_corr%d.C",savedir,i));
  }
  
}
