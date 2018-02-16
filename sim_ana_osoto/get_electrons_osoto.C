
{
TClasTool *input = new TClasTool();
input->InitDSTReader("ROOTDSTR");
//input->Add("simul_Fe100.root");
//input->Add("hayk_sim_ahmed_rec.root");
char File[200];
ifstream in("sim_files.txt", ios::in);
if (!in) {
    cerr << "File Not Opened!" << endl;
    exit(1);
}
while (in >> File) {
    input->Add(File);
}
in.close();
//system("rm dataFiles.txt");

TIdentificator *t = new TIdentificator(input);
TFile *output = new TFile("all_part_osoto.root", "RECREATE", "DIS electrons E & P");
TNtuple *tn_sim = new TNtuple("tn_sim","all particles","E:pex:pey:pez:Q2:W:y");
TNtuple *tn = new TNtuple("tn","all particles","E:pex:pey:pez:Q2:W:y:nphe:sector:number_cc:stat_cc");
Long_t nEntries = (Long_t) input->GetEntries();
Float_t ne_rec=0.0;
Float_t ne_thr=0.0;
cout<<"nentries: "<<nEntries<<endl;
input->Next();
cout.width(4);

for (Int_t k = 0; k < nEntries; k++) 
{
  //  cout<<"processing "<<k<<endl;
  Int_t nRows = input->GetNRows("EVNT");
  Int_t nRowsG= input->GetNRows("GSIM");
  Int_t nRowsCC= input->GetNRows("CCPB");

  if((nRows>0) && (t->GetCategorizationMin(0)) == "electron" && t -> Q2() > 1. && t -> W() > 2. && t -> Nu() / 5.015 < 0.85)
  {
    ne_rec++;
    //    cout<<"I'm in "<<k<<endl;
    tn->Fill(TMath::Max(t->Etot(0),t->Ein(0)+t->Eout(0)),t->Px(0),t->Py(0),t->Pz(0),t -> Q2(), t -> W() , t -> Nu() / 5.015,t->Nphe(0),t->Sector(0),nRowsCC,t->StatCC(0));
  }

  if(nRowsG>0 && t -> Id(0,1)==11 && t -> Q2(1) > 1. && t -> W(1) > 2. && t -> Nu(1) / 5.015 < 0.85)// electron                                                                                                            
    {
      tn_sim->Fill(0,t->Px(0,1),t->Py(0,1),t->Pz(0,1),t -> Q2(1), t -> W(1) , t -> Nu(1) / 5.015);
      /*for(Int_t i=1; i < input->GetNRows("GSIM"); i++)
	if (t->Id(i,1)==2) //positron                                                                                                         
	  {
	    ntpos++;
	    tn_sim->Fill(t->Px(i,1),t->Py(i,1),t->Pz(i,1),t -> Q2(1), t -> W(1) , t -> Nu(1) / 5.015,q,k);
	  }
      */
      ne_thr++;
    }
  cout<<std::right<<float(k+1)/nEntries*100<<"%\r";
  cout.flush();
  input->Next();
}
tn->Write("",TObject::kOverwrite);
tn_sim->Write("",TObject::kOverwrite);
cout << "Efficiency (nelectrons_reconstructed/nelectrons_thrown*100): "<< ne_rec/ne_thr*100.0<<endl;
output->Close();
}
