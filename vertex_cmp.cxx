{
  TCanvas *c = new TCanvas("c","c",1600,1280);
  c->SetGrid();
  c->SetLogy();
  Float_t vert[4][2]={
    {-25.33,-24.10}, //C
    {-25.65,-24.26}, //Fe
    {-25.54,-24.36}, //Pb
    {-31.80,-28.40}  //D2
  };
  TString targ[3]={"C","Fe","Pb"};
  /*  Float_t D2x0 =-31.80, D2x1=-28.40;
  Float_t Cx0  =-25.33, Cx1 =-24.10;
  Float_t Fex0 =-25.65, Fex1=-24.26;
  Float_t Pbx0 =-25.54, Pbx1=-24.36;*/
  TLine *lin = new TLine();
  lin->SetLineWidth(2);
  TFile *f;
  TNtuple *NElectrons;
  for (int k=0;k<3;k++)
  {
    std::cout<<"making "<<targ[k]<<std::endl;

    f = new TFile(Form("/user/o/orsosa/orsosa_data/eg2_data_electrons/Nelec%sD_TargType_sf.root",targ[k].Data()));
    //    std::cout<<__LINE__<<std::endl;
    NElectrons=(TNtuple*)f->Get("NElectrons");
    NElectrons->Draw("vzec>>h(500,-40,-19)","TargType==1");
    //std::cout<<__LINE__<<std::endl;
    lin->DrawLine(vert[3][0],0,vert[3][0],1e6);
    //std::cout<<__LINE__<<std::endl;
    lin->DrawLine(vert[3][1],0,vert[3][1],1e6);
    //std::cout<<__LINE__<<std::endl;
    c->SaveAs(Form("~/osoto_ana/TargType%sD_sf.gif",targ[k].Data()));
    c->SaveAs(Form("~/osoto_ana/TargType%sD_sf.C",targ[k].Data()));
    //std::cout<<__LINE__<<std::endl;
    NElectrons->Draw("vzec>>h(500,-40,-19)","TargType==2");
    lin->DrawLine(vert[k][0],0,vert[k][0],1e6);
    lin->DrawLine(vert[k][1],0,vert[k][1],1e6);
    c->SaveAs(Form("~/osoto_ana/TargType%s_sf.gif",targ[k].Data()));
    c->SaveAs(Form("~/osoto_ana/TargType%s_sf.C",targ[k].Data()));
    f->Close();
    delete f;
  }

}
