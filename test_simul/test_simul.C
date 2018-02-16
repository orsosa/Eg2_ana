{
  TClasTool *input = new TClasTool();
  input->InitDSTReader("ROOTDSTR");
  char File[200];
  ifstream in("simulFiles.txt", ios::in);
  while (in >> File) {         
    input->Add(File);        
  }
  in.close();
  TIdentificator *t = new TIdentificator(input); 
}
