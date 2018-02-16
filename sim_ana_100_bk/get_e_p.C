int get_e_p(char *fname = "/data/user/o/orsosa/sim_ahmed/simC12_run0001.root"){
TClasTool *input = new TClasTool();
input->InitDSTReader("ROOTDSTR");
input->Add(fname);
TIdentificator *t = new TIdentificator(input);
TFile *output = new TFile("test.root", "RECREATE", "DIS electrons E & P");
TNtuple *tn = new TNtuple("tn","all particles","E:pex:pey:pez:Q2:W:y:q:evnt");
TNtuple *tn_sim = new TNtuple("tn_sim","all particles sim","pex:pey:pez:Q2:W:y:q:evnt");
Long_t nEntries = (Long_t) input->GetEntries();
input->Next();
TString particle;
Int_t naele=0, napos=0, ntele=0, ntpos=0;
for (Int_t k = 0; k < nEntries; k++) 
{
  Int_t nRows = input->GetNRows("EVNT");
  if(nRows>0 && (t->GetCategorizationMin(0) == "electron") )//&& t -> Q2() > 1. && t -> W() > 2. && t -> Nu() / 5.015 < 0.85)
  {
    Float_t q=-1;
    tn->Fill(TMath::Max(t->Etot(0),t->Ein(0)+t->Eout(0)),t->Px(0),t->Py(0),t->Pz(0),t -> Q2(), t -> W() , t -> Nu() / 5.015,q,k);    
    for(Int_t i=1; i < nRows; i++) 
    {
      if (t->GetCategorizationMin(i)=="positron") 
        {
          q = 1;
          napos++;
          tn->Fill(TMath::Max(t->Etot(i),t->Ein(i)+t->Eout(i)),t->Px(i),t->Py(i),t->Pz(i),t -> Q2(), t -> W() , t -> Nu() / 5.015,q,k);    
        }
    }
    naele++;
  }

  if(t -> Id(0,1)==3)// electron
  {
    Float_t q=-1;
    tn_sim->Fill(t->Px(0,1),t->Py(0,1),t->Pz(0,1),t -> Q2(1), t -> W(1) , t -> Nu(1) / 5.015,q,k);    
    for(Int_t i=1; i < input->GetNRows("GSIM"); i++) 
      if (t->Id(i,1)==2) //positron
        {
          q = 1;
          ntpos++;
          tn_sim->Fill(t->Px(i,1),t->Py(i,1),t->Pz(i,1),t -> Q2(1), t -> W(1) , t -> Nu(1) / 5.015,q,k);    
        }
    ntele++;
  }
  input->Next();
}
tn->Write();
tn_sim->Write();
output->Close();
cout<<"Accepted summary"<<endl; 
cout<<"#e-: "<<naele<<endl; 
cout<<"#e+: "<<napos<<endl;
cout<<"ratio e+/e-: "<<float(napos)/naele<<endl;
cout<<"portion e+: "<<float(napos)/nEntries<<endl;
cout<<"portion e-: "<<float(naele)/nEntries<<endl<<endl;

cout<<"Thrown summary"<<endl; 
cout<<"#e-: "<<ntele<<endl; 
cout<<"#e+: "<<ntpos<<endl;
cout<<"ratio e+/e-: "<<float(ntpos)/ntele<<endl;
cout<<"portion e+: "<<float(ntpos)/nEntries<<endl;
cout<<"portion e-: "<<float(ntele)/nEntries<<endl;
return 0;
}
