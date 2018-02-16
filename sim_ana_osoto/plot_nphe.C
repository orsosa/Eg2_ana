{
  char set[10]="osoto";
  TFile *file0 = TFile::Open(Form("all_part_%s.root",set));
  TNtuple *tn = (TNtuple*)file0->Get("tn");
  TCanvas *c = new TCanvas("c","c",1024,728);
  c->SetLogz();
  tn->Draw("nphe:sector>>h(14,-1,6,300,-1100,600)","","colz");
  h->SetStats(0);
  h->Draw("colz");
  c->SaveAs(Form("nphe_vs_sector_%s.gif",set));
  c->SaveAs(Form("nphe_vs_sector_%s.C",set));
  c->SetLogz(0);
  for (int i =0; i<6;i++)
  {
    tn->Draw(Form("nphe>>nphe_s%d(300,-1100,600)",i),Form("sector==%d",i),"");
    c->SaveAs(Form("nphe_sector%d_%s.gif",i,set));
    c->SaveAs(Form("nphe_sector%d_%s.C",i,set));
  }
  for (int i =0; i<6;i++)
  {
    tn->Draw(Form("nphe>>nphe_s%d(150,-50,600)",i),Form("sector==%d",i),"");
    c->SaveAs(Form("nphe_sector%dz_%s.gif",i,set));
    c->SaveAs(Form("nphe_sector%dz_%s.C",i,set));
  }
}
