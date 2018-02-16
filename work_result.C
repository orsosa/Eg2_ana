TFile *f1;
TFile *f0;
TNtuple *t1;
TNtuple *t2;
TNtuple *t1mb;
TNtuple *t2mb;
TH1F* hpt2;
TH1F* hpt2_mb;
TCanvas *c;


int read_files(){
  f1 = new TFile("pi0_eta_id_pictures_sim_FeD_Fe/pi0_eta_sim_FeD_Fe_MB.root");
  f0 = new TFile("pi0_eta_id_pictures_sim_FeD_Fe/pi0_eta_sim_FeD_Fe_binned.root");
  t1 =(TNtuple *)f0->Get("tuple1");
  t2 =(TNtuple *)f0->Get("tuple2");
  t1mb =(TNtuple *)f1->Get("tuple1");
  t2mb =(TNtuple *)f1->Get("tuple2");
  hpt2 = new TH1F("hpt2","Pt2 rec sim",300,-0.5,1.4);
  hpt2_mb = new TH1F("hpt2_mb","Pt2 mb",300,-0.5,1.4);
  hpt2_mb->SetLineColor(kRed);

  hz = new TH1F("hz","Z rec sim",300,0,1.2);
  hz_mb = new TH1F("hz_mb","Z rec sim mb",300,0,1.2);
  hz_mb->SetLineColor(kRed);

  c = new TCanvas("c","Dist",800,600);
  return 0;
}

int plot_pt_zbin(int zbin=0)
{
  t1->Draw("M>>hpt2",Form("binz==%d",zbin),"goff");
  t1mb->Draw("M>>hpt2_mb",Form("binz==%d",zbin),"goff");
  hpt2->DrawNormalized();
  hpt2_mb->DrawNormalized("same");
}

int plot_z_ptbin(int ptbin=0)
{
  t2->Draw("M>>hz",Form("binpt2==%d",ptbin),"goff");
  t2mb->Draw("M>>hz_mb",Form("binpt2==%d",ptbin),"goff");
  hz->DrawNormalized();
  hz_mb->DrawNormalized("same");

  return 0;
}
int work_result()
{
  read_files();
  return 0;
}
