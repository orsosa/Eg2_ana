{
TClasTool *input = new TClasTool();
input->InitDSTReader("ROOTDSTR");
//input->Add("simFe30_ao.root");
input->("hayk_sim_ahmed_rec_or.root");
TIdentificator *t = new TIdentificator(input);
TFile *output = new TFile("all_part_orlando.root", "RECREATE", "DIS electrons E & P");
TNtuple *tn = new TNtuple("tn","all particles","E:pex:pey:pez:Q2:W:y");
Long_t nEntries = (Long_t) input->GetEntries();
input->Next();
for (Int_t k = 0; k < nEntries; k++) 
{
  Int_t nRows = input->GetNRows("EVNT");
  if(nRows>0 && (t->GetCategorizationMin(0)) == "electron" )//&& t -> Q2() > 1. && t -> W() > 2. && t -> Nu() / 5.015 < 0.85)
  {
    tn->Fill(TMath::Max(t->Etot(0),t->Ein(0)+t->Eout(0)),t->Px(0),t->Py(0),t->Pz(0),t -> Q2(), t -> W() , t -> Nu() / 5.015);
  }
  input->Next();
}
tn->Write();
output->Close();
}
