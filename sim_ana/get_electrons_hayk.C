{
TClasTool *input = new TClasTool();
input->InitDSTReader("ROOTDSTR");
//input->Add("simul_Fe100.root");
//input->Add("hayk_sim_ahmed_rec.root");
char File[200];
ifstream in("/user/o/orsosa/osoto_ana/sim_ana/sim_files_rec_Fe_hayk.txt", ios::in);
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
TFile *output = new TFile("all_part_hayk.root", "RECREATE", "DIS electrons E & P");
TNtuple *tn = new TNtuple("tn","all particles","E:pex:pey:pez:Q2:W:y");
Long_t nEntries = (Long_t) input->GetEntries();
input->Next();
for (Int_t k = 0; k < nEntries; k++) 
{

  Int_t nRows = input->GetNRows("EVNT");
  if(nRows>0 && (t->GetCategorizationMin(0)) == "electron" )//&& t -> Q2() > 1. && t -> W() > 2. && t -> Nu() / 5.015 < 0.85)
  {
    cout<<k<<endl;
    tn->Fill(TMath::Max(t->Etot(0),t->Ein(0)+t->Eout(0)),t->Px(0),t->Py(0),t->Pz(0),t -> Q2(), t -> W() , t -> Nu() / 5.015);
  }
  input->Next();
}
tn->Write();
output->Close();
}
