{
TChain *t = new TChain();
t->Add("/home/orsosa/orsosa_ui01/orsosa_data/Iron_pruned/*.root/ntuple_data");
std::cout<<"number of entries:"<<t->GetEntriesFast()<<std::endl;
char *prefix = "Fe";
t->SetBranchStatus("*",0);
t->SetBranchStatus("Ee",1);
t->SetBranchStatus("Pe",1);
t->SetBranchStatus("SectorEl",1);
t->SetMaxEntryLoop(5e6);


//Fe
//Thesis
//Double_t mean_par[6][3]={{2.22e-1,2.23e-2,-2.41e-3},
//                       {2.34e-1,1.95e-2,-2.08e-3},
//                       {2.52e-1,2.42e-2,-3.39e-3},
//                       {2.51e-1,2.08e-2,-3.27e-3},
//                       {2.72e-1,1.18e-2,-1.87e-3},
//                       {2.52e-1,2.28e-2,-3.11e-3}};

//Double_t sigma_par[6][2]={{9.23e-3,2.98e-2},
//                       {8.66e-3,3.09e-2},
//                       {1.08e-2,2.64e-2},
//                       {7.22e-3,2.98e-2},
//                       {1.84e-2,3.48e-2},
//                       {4.11e-3,3.55e-2}};

Double_t mean_par[6][3]={{0.222404,0.0222688,-0.0024153},
                       {0.234623,0.0194985,-0.00208357},
                       {0.252287,0.024248,-0.00338846},
                       {0.250946,0.0208409,-0.00326824},
                       {0.271956,0.0118487,-0.00187084},
                       {0.252613,0.022819,-0.00311242}};

Double_t sigma_par[6][2]={{9.23027e-03,2.98343e-02},
                       {8.66367e-03,3.08858e-02},
                       {1.07826e-02,2.63854e-02},
                       {7.22581e-03,2.98809e-02},
                       {1.84073e-02,3.48029e-02},
                       {4.11461e-03,3.55081e-02}};


/*
//C
//Thesis.
//Double_t mean_par[6][3]={{2.52e-1,1.22e-2,-7.94e-4},
//                       {2.78e-1,1.87e-2,-2.38e-3},
//                       {2.62e-1,2.31e-2,-3.54e-3},
//                       {2.51e-1,2.01e-2,-3.32e-3},
//                       {2.63e-1,9.55e-3,-1.02e-3},
//                       {2.55e-1,2.32e-2,-3.05e-3}};

//Double_t sigma_par[6][2]={{9.55e-3,3.41e-2},
//                       {1.399e-2,3.75e-2},
//                       {9.32e-3,2.90e-2},
//                       {8.21e-3,2.99e-2},
//                       {2.25e-2,3.06e-2},
//                       {1.17e-2,3.64e-2}};

Double_t mean_par[6][3]={{0.252164,0.0122263,-0.000793937},
                          {0.278574,0.0187482,-0.00238217},
                          {0.262079,0.0230685,-0.00354741},
                          {0.251108,0.0201568,-0.00332367},
                          {0.263396,0.00955238,-0.00102038},
                          {0.255245,0.0232659,-0.00304798}}

Double_t sigma_par[6][2]={{9.55113e-03,3.40672e-02},
                       {1.39889e-02,3.74682e-02},
                       {9.32762e-03,2.90046e-02},
                       {8.21055e-03,2.98893e-02},
                       {2.25684e-02,3.06508e-02},
                       {1.17254e-02,3.64221e-02}};
*/

/*
//Pb
//Thesis
//Double_t mean_par[6][3]={{2.53e-1,1.38e-2,-1.40e-3},
//                       {2.49e-1,1.47e-2,-1.49e-3},
//                       {2.54e-1,2.26e-2,-3.05e-3},
//                       {2.55e-1,1.90e-2,-3.05e-3},
//                       {2.76e-1,1.11e-2,-1.76e-3},
//                       {2.62e-1,1.92e-2,-2.62e-3}};

//Double_t sigma_par[6][2]={{7.67e-3,3.54e-2},
//                       {7.53e-3,3.38e-2},
//                       {8.13e-3,2.77e-2},
//                       {7.20e-3,3.04e-2},
//                       {1.81e-2,3.53e-2},
//                       {1.99e-3,3.76e-2}};


Double_t mean_par[6][3]={{0.253431,0.0138251,-0.0014016},
                       {0.249059,0.0147784,-0.00148693},
                       {0.254573,0.022589,-0.00305686},
                       {0.255589,0.0190419,-0.00305263},
                       {0.276739,0.0111585,-0.00175784},
                       {0.262587,0.0191659,-0.0026264}};

Double_t sigma_par[6][2]={{7.67408e-03,3.54391e-02},
                       {7.52798e-03,3.38371e-02},
                       {8.13241e-03,2.77300e-02},
                       {7.20303e-03,3.03627e-02},
                       {1.80841e-02,3.53020e-02},
                       {1.99220e-03,3.76172e-02}};
*/

TF1 *fmean = new TF1("fmean","[0] + [1]*x + [2]*x**2 ",0,5);
TF1 *fsigma = new TF1("fsigma","TMath::Sqrt([0]**2 + [1]**2/TMath::Sqrt(x))",0,5);
TF1 *fsigmap = new TF1("fsigmap","TMath::Sqrt([0]**2 + [1]**2/x)",0,5);
fmean->SetLineColor(kBlack);

TCanvas *c  = new TCanvas("c", "The canvas",800,600);
TH1F *h;
for ( int i = 0; i < 6; i++)
{
  fmean->SetParameters(mean_par[i]);
  fsigma->SetParameters(sigma_par[i]);
  fsigmap->SetParameters(sigma_par[i]);
  TF1 *fup = new TF1("fup","fmean + 2.5*fsigma",0,5);
  TF1 *flow = new TF1("flow","fmean - 2.5*fsigma",0,5);
  TF1 *fupp = new TF1("fupp","fmean + 2.5*fsigmap",0,5);
  TF1 *flowp = new TF1("flowp","fmean - 2.5*fsigmap",0,5);
  fupp->SetLineColor(kGreen);
  flowp->SetLineColor(kGreen);
  t->Draw(Form("Ee/Pe:Pe>>h%d(500,0,5,500,0,0.5)",i),Form("SectorEl==%d",i),"col");
  h = (TH1F*)gROOT->FindObject(Form("h%d",i));
  h->GetXaxis()->SetTitle("Pe");
  h->GetYaxis()->SetTitle("Ee/Pe");
  h->GetYaxis()->SetTitleOffset(1.2);
  h->SetTitle("Sampling fraction e^{-}");
  fmean->DrawCopy("same");
  fup->DrawCopy("same");
  flow->DrawCopy("same");
  fupp->DrawCopy("same");
  flowp->DrawCopy("same");
  TLegend *l = new TLegend(0.7,0.3,0.9,0.4);
  l->AddEntry("fup","Thesis style","l");
  l->AddEntry("fupp","Code style","l");
  l->Draw();
  c->SaveAs(Form("e-_sfcorr_pictures/%sSector%d.gif",prefix,i));
  c->SaveAs(Form("e-_sfcorr_pictures/%sSector%d.C",prefix,i));
  delete fup;
  delete flow;
}
}
