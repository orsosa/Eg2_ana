{
ifstream in("sim_filesFe10.txt");
char fn[100];
TChain *ch = new TChain();
while(in>>fn)
{
  ch->AddFile(Form("~/orsosa_ui01/root_ui01%s/h10",fn));
}
gROOT->LoadMacro("sim_tree_str.C");
sim_tree_str *t = new sim_tree_str(ch);
//t->Loop();
}
