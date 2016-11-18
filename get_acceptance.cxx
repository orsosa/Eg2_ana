{
  TCanvas *c = new TCanvas("c","c",800,600);
  c->SetGrid();
  char *outdir = Form("accpic");
  //  struct stat sb;
  //if (stat(outdir, &sb) != 0)
  // {
  //     system(Form("mkdir %s",outdir));
  //}

  TFile * fr = new TFile("pi0_eta_id_pictures_sim_2aOnly_FeD_Fe/pi0_eta_sim_FeD_Fe_binned.root","read");
  TFile * fg = new TFile("pi0_eta_id_pictures_gsim_2aOnly_FeD_Fe/pi0_eta_sim_FeD_Fe_binned.root","read");
  TH1F *hgsim = new TH1F("hgsim","",32,-1,31);
  TH1F *hrec = new TH1F("hrec","",32,-1,31);
  TH1F *haccpt2 = new TH1F("haccpt2","#pi^{0} (P_{t}^{2},Z) 2#gamma events",32,-1,31);
  TH1F *haccq2 = new TH1F("haccq2","#pi^{0}  (Q^{2},Z) 2#gamma events",17,-1,16);
  //TH1F *hgsim,*hrec;
  TGraph *grec, *ggsim;
  TNtuple *tr1, *tr2, *tr1s, *tr2s, *tg1, *tg2, *tg1s, *tg2s;
  Float_t Ng,Nr;

  tr1 = (TNtuple *)fr ->Get("tuple1");
  tr2 = (TNtuple *)fr ->Get("tuple2");
  tr1s = (TNtuple *)fr ->Get("tuple1s");
  tr2s = (TNtuple *)fr ->Get("tuple2s");
  tg1 = (TNtuple *)fg ->Get("tuple1");
  tg2 = (TNtuple *)fg ->Get("tuple2");
  tg1s = (TNtuple *)fg ->Get("tuple1s");
  tg2s = (TNtuple *)fg ->Get("tuple2s");

  Nr = tr1->GetEntries();
  Ng = tg1->GetEntries();
  
  Int_t NZBin =5;
  Int_t  NQ2Bin = 3;
  Int_t NNuBin = 1;
  Int_t NPt2Bin = 6;
  Float_t Nbins = NQ2Bin*NZBin*NNuBin,Nr=0,Ngs=0;

  Int_t nbr = tr1s->Draw(Form("(amp*mbratio):bin"),"","goff");
  Int_t nbg = tg1s->Draw(Form("(amp*mbratio):bin"),"","goff");
  cout<<"nbr\tnbg\n";

  cout<<nbr<<"\t"<<nbg<<endl;
  if (nbr!=nbg) cout<<"warning nbins different: "<<endl;
  std::cout<<"binq2\trec\tthr\tacc\n";
  for (int i=0; i<nbr;i++)
  {
    //    hrec->Fill(tr1s->GetV2()[i],tr1s->GetV1()[i]/Nr);
    // hgsim->Fill(tg1s->GetV2()[i],tg1s->GetV1()[i]/Ng);
    haccq2->Fill(tr1s->GetV2()[i],tr1s->GetV1()[i]/tg1s->GetV1()[i]);
    haccq2->SetBinError(i+2,(tr1s->GetV1()[i]/tg1s->GetV1()[i])*TMath::Sqrt(1./tr1s->GetV1()[i]+1./tg1s->GetV1()[i]));
    std::cout<<tr1s->GetV2()[i]<<"\t"<<tr1s->GetV1()[i]<<"\t"<<tg1s->GetV1()[i]<<"\t"<<tr1s->GetV1()[i]/tg1s->GetV1()[i]<<std::endl;
  }  
 
  hgsim->SetMarkerColor(kRed);
  hgsim->SetMarkerStyle(kFullDotLarge);
 
  hrec->SetMarkerColor(kBlack);
  hrec->SetMarkerStyle(kFullDotLarge);
  
  haccq2->SetMarkerColor(kBlack);
  haccq2->SetMarkerStyle(kFullDotLarge);
  haccq2->SetStats(0);
  haccq2->GetXaxis()->SetTitle("nbin");
  haccq2->GetYaxis()->SetTitle("Acceptance");
  haccq2->GetYaxis()->SetTitleOffset(1.1);


  haccq2->Draw("p");
  c->SaveAs(Form("%s/acc_q2_Z.gif",outdir));
  c->SaveAs(Form("%s/acc_q2_Z.C",outdir));

  TCanvas *c1 = new TCanvas("c1","c1",800,600);
  c1->SetGrid();
  nbr = tr2s->Draw(Form("(amp*mbratio):bin"),"","goff");
  nbg = tg2s->Draw(Form("(amp*mbratio):bin"),"","goff");
  cout<<"nbr\tnbg\n";
  cout<<nbr<<"\t"<<nbg<<endl;
  if (nbr!=nbg) cout<<"warning nbins different: "<<endl;
  std::cout<<"binpt2\trec\tthr\tacc\n";
  for (int i=0; i<nbr;i++)
  {
    //hrec->Fill(tr2s->GetV2()[i],tr2s->GetV1()[i]/Nr);
    //hgsim->Fill(tg2s->GetV2()[i],tg2s->GetV1()[i]/Ng);
    if(tg2s->GetV1()[i]!=0&&(tr2s->GetV1()[i]>0))
    {
      haccpt2->Fill(tr2s->GetV2()[i],tr2s->GetV1()[i]/tg2s->GetV1()[i]);
      haccpt2->SetBinError(i+2,(tr2s->GetV1()[i]/tg2s->GetV1()[i])*TMath::Sqrt(1./tr2s->GetV1()[i]+1./tg2s->GetV1()[i])); 
    std::cout<<tr2s->GetV2()[i]<<"\t"<<tr2s->GetV1()[i]<<"\t"<<tg2s->GetV1()[i]<<"\t"<<tr2s->GetV1()[i]/tg2s->GetV1()[i]<<std::endl;
    }

 }

  haccpt2->SetMarkerColor(kBlack);
  haccpt2->SetMarkerStyle(kFullDotLarge);
  haccpt2->SetStats(0);
  haccpt2->GetXaxis()->SetTitle("nbin");
  haccpt2->GetYaxis()->SetTitle("Acceptance");
  haccpt2->GetYaxis()->SetTitleOffset(1.1);

  haccpt2->Draw("p");
  c1->SaveAs(Form("%s/acc_pt2_Z.gif",outdir));
  c1->SaveAs(Form("%s/acc_pt2_Z.C",outdir));

  /*  c->Divide(2,1);
  c->cd(1);
  c->GetPad(1)->DrawFrame(-1,0,17,1);
  hrec->Draw("psame");
  hgsim->Draw("psame");
  c->cd(2);
  c->GetPad(2)->DrawFrame(-1,0,17,0.1);
  haccq2->Draw("psame");
  */
  
}
