{
//ifstream in("sim_filesFe10.txt");
ifstream in("sim_files_nt10.txt");
char fn[100];
TChain *ch = new TChain();
while(in>>fn)
{
//  std::cout<<"adding file: "<<Form("~/orsosa_ui01/root_ui01%s/h10",fn)<<std::endl;
//  ch->AddFile(Form("~/orsosa_ui01/root_ui01%s/h10",fn));
  std::cout<<"adding file: "<<Form("%s/h10",fn)<<std::endl;
  ch->AddFile(Form("%s/h10",fn));
}
//gROOT->LoadMacro("sim_tree_str.C");
//sim_tree_str *t = new sim_tree_str(ch);
gROOT->LoadMacro("new_str.C");
new_str *t = new new_str(ch);
t->Loop();
}
