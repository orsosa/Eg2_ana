
int gamma_sf(Float_t all=0,Float_t ahl=1)
{
  TFile *file0 = TFile::Open("/user/o/orsosa/osoto_ana/pi0_CD_2aonly.root");
  
  TF1 *fe = new TF1 ("fe","2*((x/[0])*(0.3<x&&x<0.45) + (x/[1])*(0.45<x&&x<0.6) + (x/[2])*(0.6<x&&x<0.75) + (x/[3])*(0.75<x&&x<0.9) + (x/[4])*(0.9<x&&x<1.05) + (x/[5])*(1.05<x&&x<2.2))");
  
  TNtuple *outdata = (TNtuple*)file0->Get("outdata");
  //  outdata->Print();
  outdata->SetAlias("E1q","TMath::Sqrt(qx1*qx1 + qy1*qy1 + qz1*qz1)");
  outdata->SetAlias("E2q","TMath::Sqrt(qx2*qx2 + qy2*qy2 + qz2*qz2)");
  outdata->SetAlias("alpha","acos((qx1*qx2 + qy1*qy2 +qz1*qz2 )/E1q/E2q)");
  outdata->SetAlias("alpha_d","TMath::RadToDeg()*alpha");
  TCut E1_cut="0.3<E1&&E1<0.5";
  TCut E2_cut="0.3<E2&&E2<0.5";
  TCut alpha_cut0="14.99<alpha_d&&alpha_d<15.01";
  TCut alpha_cut1="19.99<alpha_d&&alpha_d<20.01";
  TCut alphamin="3.2<alpha_d";
  TCut mass_cut="0.1<M&&M<0.2";
  Float_t DE=0.1;
  TCut E_cut = Form("E2-%f/2.<E1&&E1<E2+%f/2.",DE,DE);
  //fe->SetParameters(1.,1.,1.,1.,1.);
  
  //  TF1 *fm = new TF1 ("fm","0.1349766*0.1349766/(4.*TMath::Sin(15*TMath::DegToRad()/2)*TMath::Sin(15*TMath::DegToRad()/2)*x/[0])",0.3,2.2);
  //fm->SetParameter(0,1.);
  //  outdata->Draw("E1:E2>>h(500,0.3,2.2,500,0.3,2.2)",alpha_cut0&&mass_cut);
  /*
  Int_t NBins=1000;
  Float_t amin=5;
  Float_t amax=30;
  Float_t bw=(amax-amin)/NBins;  
  std::ofstream outf("energy_corr.txt");
  outf<<"#E\tcorr"<<std::endl;
  */
  //  for (int k=0;k<NBins;k++)
  //{

    //std::cout<<(float)k/NBins*100<<std::endl;
    //    Float_t all=amin+k*bw;
    //Float_t ahl=amin+(k+1)*bw;

  TCut alpha_cut0=Form("%f<alpha_d&&alpha_d<%f",all,ahl);
  outdata->Draw("E1:E2>>h(500,0.3,2.2,500,0.3,2.2)",alpha_cut0&&mass_cut,"goff");
  TH2F * h = (TH2F*)gROOT->FindObject("h");
  TF1 *fm = new TF1 ("fm",Form("0.1349766*0.1349766/(4.*TMath::Sin(%f*TMath::DegToRad()/2)*TMath::Sin(%f*TMath::DegToRad()/2)*x/[0])",(all+ahl)/2.,(all+ahl)/2.),0.3,2.2);
  h->Fit("fm","RQ");
  Float_t E = (h->GetMean(1)+ h->GetMean(2))/2.;
  std::cout<<E<<"\t"<<fm->GetParameter(0)<<std::endl;
   
    //}

  //out.close();
  //outdata->Draw("E1:E2>>h(500,0.3,2.2,500,0.3,2.2)",alpha_cut0&&mass_cut);
  //outdata->Draw("2*E1*E2*(1-sqrt(2)/2) - 0.1349766*0.1349766 >>h(1000,-1,1)",alpha_cut&&mass_cut&&E2_cut);
  return 1;
}
