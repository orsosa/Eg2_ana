int get_sum_plots(char* fname, float factor = 0.97)
{

  Int_t Nch=50;
  std::string aux = fname;
  TFile * f  = new TFile(fname, "read");
  TTree *t = (TTree *)f->Get("data_tree");
  get_calib_map();
  std::string cmd;
  std::string sumx;
  std::string posx;
  std::string sumy;
  std::string posy;
  std::string cmdpos;
  std::string sum_vs_pos;
  std::string cut;
  TCanvas *c  = new TCanvas("c", "The canvas",1920,1080);
  bool x_y;
  char axis;
  //char* sfx = ">>h(80,-1,3)";
  if ((int)aux.find("_X")>-1) {axis = 'x';x_y = 0;}
  else if ((int)aux.find("_Y")>-1) {axis = 'y';x_y = 1;}
  else axis = 'z';
  TH1F *h;

// SUM X
  sumx.append("(");  
  for ( int i = 0; i < Nch/2-1; i++)
  {
    sumx.append(Form("(ch[%d].adc-ch[%d].ped)/%f +",i,i,calib_map[i]));
  }
  sumx.append(Form("(ch[%d].adc-ch[%d].ped)/%f)",Nch/2-1,Nch/2-1,calib_map[Nch/2-1]));

// SUM Y
  sumy.append("(");  
  for ( int i = Nch/2; i < Nch-1; i++)
  {
    sumy.append(Form("(ch[%d].adc-ch[%d].ped)/%f +",i,i,calib_map[i]));
  }
  sumy.append(Form("(ch[%d].adc-ch[%d].ped)/%f)",Nch-1,Nch-1,calib_map[Nch-1]));

// POS Y
  posy.append("(");  
  for ( int i = Nch/2; i < Nch-1; i++)
  {
    posy.append(Form("%d*(ch[%d].adc-ch[%d].ped)/%f +",i-Nch/2,i,i,calib_map[i]));
  }
  posy.append(Form("%d*(ch[%d].adc-ch[%d].ped)/%f)",Nch/2 -1,Nch-1,Nch-1,calib_map[Nch-1]));
  posy.append(Form("/%s",sumy.c_str()));

// POS X
  posx.append("(");  
  for ( int i = 0; i < Nch/2-1; i++)
  {
    posx.append(Form("%d*(ch[%d].adc-ch[%d].ped)/%f +",i,i,i,calib_map[i]));
  }
  posx.append(Form("%d*(ch[%d].adc-ch[%d].ped)/%f)",Nch/2 -1,Nch/2-1,Nch/2-1,calib_map[Nch/2-1]));
  posx.append(Form("/%s",sumx.c_str()));

/////// AXIS X ////////////////
  if (axis == 'x'){
    cmdpos.clear();
    cmdpos.append("(");
    cmd.append("(");
    for (int i =0;i<Nch/2-1;i++)
    {
      cmd.append(Form("(ch[%d].adc-ch[%d].ped)/%f +",i,i,calib_map[i]));
      cmdpos.append(Form("%d*(ch[%d].adc-ch[%d].ped)/%f +",i,i,i,calib_map[i]));
    }
    cmd.append(Form("(ch[%d].adc-ch[%d].ped)/%f)",Nch/2-1,Nch/2-1,calib_map[Nch/2-1]));

    cmdpos.append(Form("%d*(ch[%d].adc-ch[%d].ped)/%f)",Nch/2-1,Nch/2-1,Nch/2-1,calib_map[Nch/2-1]));
    cmdpos.append("/(");
    cmdpos.append(cmd.c_str());
    cmdpos.append(")");
    std::ofstream of("posx_cmd.txt");  
    of<<cmdpos;

    aux.clear();
    aux.append(cmd.c_str());
    cmd.append(">>h(400,-5,150)");
    
//vertical sum.
    t->Draw(cmd.c_str());
    h = (TH1F *)gROOT->FindObject("h");
    h->SetTitle(Form("sum over X, %c fibers vertical",axis));
    c->SaveAs(Form("pictures/validation/sum_vert%c_x.gif",axis));
    c->SaveAs(Form("pictures/validation/sum_vert%c_x.C",axis));
    
//vertical with cut.
    t->Draw(cmd.c_str(),Form("ch[%d].adc>(ch[%d].th*%f)&&ch[%d].adc>(ch[%d].th*%f)", Nch/2, Nch/2,factor, Nch-1, Nch-1,factor));
    h = (TH1F *)gROOT->FindObject("h");
    h->SetTitle(Form("sum over X, %c fibers vertical",axis));
    c->SaveAs(Form("pictures/validation/sum_vert%c_x_cut.gif",axis));
    c->SaveAs(Form("pictures/validation/sum_vert%c_x_cut.C",axis));
    cmd.clear();
    for (int i =Nch/2;i<Nch-1;i++)
    {
      cmd.append(Form("(ch[%d].adc-ch[%d].ped)/%f +",i,i,calib_map[i]));
    }
    cmd.append(Form("(ch[%d].adc-ch[%d].ped)/%f",Nch-1,Nch-1,calib_map[Nch-1]));
    aux.append(":");
    aux.append(cmd.c_str());
    sum_vs_pos.clear();
    sum_vs_pos.append(cmd.c_str());
    sum_vs_pos.append(":");
    sum_vs_pos.append(cmdpos.c_str());
    //std::cout<<sum_vs_pos<<std::endl;
    of<<"\n\n";
    of<<sum_vs_pos;
    of.close();

    cmd.append(">>h(400,-5,150)");
// Horizontal.
    t->Draw(cmd.c_str());
    h = (TH1F *)gROOT->FindObject("h");
    h->SetTitle(Form("sum over Y, %c fibers vertical",axis));
    c->SaveAs(Form("pictures/validation/sum_vert%c_y.gif",axis));
    c->SaveAs(Form("pictures/validation/sum_vert%c_y.C",axis));
    
// Horizontal with cut.
    t->Draw(cmd.c_str(),Form("ch[%d].adc>(ch[%d].th*%f)&&ch[%d].adc>(ch[%d].th*%f)", Nch/2, Nch/2,factor, Nch-1, Nch-1,factor));
    h = (TH1F *)gROOT->FindObject("h");
    h->SetTitle(Form("sum over Y, %c fibers vertical",axis));
    c->SaveAs(Form("pictures/validation/sum_vert%c_y_cut.gif",axis));
    c->SaveAs(Form("pictures/validation/sum_vert%c_y_cut.C",axis));
    
// X/Y plot
    aux.append(">>h(300,-5,150,300,-5,150)");
    t->Draw(aux.c_str(),Form("ch[%d].adc>(ch[%d].th*%f)&&ch[%d].adc>(ch[%d].th*%f)", Nch/2, Nch/2,factor, Nch-1, Nch-1,factor),"col");
    h = (TH1F *)gROOT->FindObject("h");
    h->GetXaxis()->SetTitle("Sum Y (au)");
    h->GetYaxis()->SetTitle("Sum X (au)");
    h->SetTitle(Form("Sum Y vs Sum X, %c fibers vertical",axis));
    c->SaveAs(Form("pictures/validation/sum_vert%c_xy.gif",axis));
    c->SaveAs(Form("pictures/validation/sum_vert%c_xy.C",axis));

//POS/sum
    sum_vs_pos.append(">>h(100,0,25,300,-5,150)");
    t->Draw(sum_vs_pos.c_str(),Form("ch[%d].adc>(ch[%d].th*%f)&&ch[%d].adc>(ch[%d].th*%f)", Nch/2, Nch/2,factor, Nch-1, Nch-1,factor),"col");
    h = (TH1F *)gROOT->FindObject("h");
    h->GetXaxis()->SetTitle("POS X (au)");
    h->GetYaxis()->SetTitle("Sum Y (au)");
    h->SetTitle(Form("POS X vs Sum Y, %c fibers vertical",axis));
    c->SaveAs(Form("pictures/validation/sum_vert%c_posx.gif",axis));
    c->SaveAs(Form("pictures/validation/sum_vert%c_posx.C",axis));

//POS/sum pedestal
    cut.clear();
    for ( int i = Nch/2; i < Nch-1; i++)
    {
      cut.append(Form("(ch[%d].adc>(ch[%d].th*%f))&&",i,i,factor));
    }
    cut.append(Form("(ch[%d].adc>(ch[%d].th*%f))",Nch-1,Nch-1,factor));

    t->Draw(sum_vs_pos.c_str(),cut.c_str(),"col");
    h = (TH1F *)gROOT->FindObject("h");
    h->GetXaxis()->SetTitle("POS X (au)");
    h->GetYaxis()->SetTitle("Sum Y (au)");
    h->SetTitle(Form("POS X vs Sum Y, %c fibers vertical, all>th",axis));
    c->SaveAs(Form("pictures/validation/sum_vert%c_posx_all.gif",axis));
    c->SaveAs(Form("pictures/validation/sum_vert%c_posx_all.C",axis));

  }
    cmd.clear();


/////// AXIS Y ////////////////
  if (axis == 'y'){
    cmdpos.clear();
    cmdpos.append("(");
    for (int i =Nch/2;i<Nch-1;i++)
    {
      cmd.append(Form("(ch[%d].adc-ch[%d].ped)/%f +",i,i,calib_map[i]));
      cmdpos.append(Form("%d*(ch[%d].adc-ch[%d].ped)/%f +",i-Nch/2,i,i,calib_map[i]));
    }
    cmd.append(Form("(ch[%d].adc-ch[%d].ped)/%f",Nch-1,Nch-1,calib_map[Nch-1]));
    cmdpos.append(Form("%d*(ch[%d].adc-ch[%d].ped)/%f)",Nch-1-Nch/2,Nch-1,Nch-1,calib_map[Nch-1]));
    cmdpos.append("/(");
    cmdpos.append(cmd.c_str());
    cmdpos.append(")");
    std::ofstream of("posy_cmd.txt");   
    of<<cmdpos;

    aux.clear();
    aux.append(cmd.c_str());
    cmd.append(">>h(400,-5,150)");

//Vertical.
    t->Draw(cmd.c_str());
    h = (TH1F *)gROOT->FindObject("h");
    h->SetTitle(Form("sum over Y, %c fibers vertical",axis));
    c->SaveAs(Form("pictures/validation/sum_vert%c_y.gif",axis));
    c->SaveAs(Form("pictures/validation/sum_vert%c_y.C",axis));

// vertical with cut.
    t->Draw(cmd.c_str(),Form("ch[%d].adc>(ch[%d].th*%f)&&ch[%d].adc>(ch[%d].th*%f)", 0, 0,factor, Nch/2-1, Nch/2-1,factor));
    h = (TH1F *)gROOT->FindObject("h");
    h->SetTitle(Form("sum over Y, %c fibers vetical",axis));
    c->SaveAs(Form("pictures/validation/sum_vert%c_y_cut.gif",axis));
    c->SaveAs(Form("pictures/validation/sum_vert%c_y_cut.C",axis));
    cmd.clear();
    for (int i =0;i<Nch/2-1;i++)
    {
      cmd.append(Form("(ch[%d].adc-ch[%d].ped)/%f +",i,i,calib_map[i]));
    }
    cmd.append(Form("(ch[%d].adc-ch[%d].ped)/%f",Nch/2-1,Nch/2-1,calib_map[Nch/2-1]));
    aux.append(":");
    aux.append(cmd.c_str());

    sum_vs_pos.clear();
    sum_vs_pos.append(cmd.c_str());
    sum_vs_pos.append(":");
    sum_vs_pos.append(cmdpos.c_str());
    of<<"\n\n";
    of<<sum_vs_pos;
    of.close();
    cmd.append(">>h(400,-5,150)");

// Horizontal.
    t->Draw(cmd.c_str());
    h = (TH1F *)gROOT->FindObject("h");
    h->SetTitle(Form("sum over X, %c fibers vertical",axis));
    c->SaveAs(Form("pictures/validation/sum_vert%c_x.gif",axis));
    c->SaveAs(Form("pictures/validation/sum_vert%c_x.C",axis));
    
// horizontal with cut.
    t->Draw(cmd.c_str(),Form("ch[%d].adc>(ch[%d].th*%f)&&ch[%d].adc>(ch[%d].th*%f)", 0, 0,factor, Nch/2-1, Nch/2-1,factor));
    h = (TH1F *)gROOT->FindObject("h");
    h->SetTitle(Form("sum over X, %c fibers vertical",axis));
    c->SaveAs(Form("pictures/validation/sum_vert%c_x_cut.gif",axis));
    c->SaveAs(Form("pictures/validation/sum_vert%c_x_cut.C",axis));
    
    

// X/Y plot
    aux.append(">>h(300,-5,150,300,-5,150)");
    t->Draw(aux.c_str(),Form("ch[%d].adc>(ch[%d].th*%f)&&ch[%d].adc>(ch[%d].th*%f)", 0, 0,factor, Nch/2-1, Nch/2-1,factor),"col");
    h = (TH1F *)gROOT->FindObject("h");
    h->GetXaxis()->SetTitle("Sum X (au)");
    h->GetYaxis()->SetTitle("Sum Y (au)");
    h->SetTitle(Form("Sum X vs Sum Y, %c fibers vertical",axis));
    c->SaveAs(Form("pictures/validation/sum_vert%c_xy.gif",axis));
    c->SaveAs(Form("pictures/validation/sum_vert%c_xy.C",axis));

//POS/sum
    sum_vs_pos.append(">>h(300,0,25,300,-5,150)");
    t->Draw(sum_vs_pos.c_str(),Form("ch[%d].adc>(ch[%d].th*%f)&&ch[%d].adc>(ch[%d].th*%f)", 0, 0,factor, Nch/2-1, Nch/2-1,factor),"col");
    h = (TH1F *)gROOT->FindObject("h");
    h->GetXaxis()->SetTitle("POS Y (au)");
    h->GetYaxis()->SetTitle("Sum X (au)");
    h->SetTitle(Form("POS Y vs Sum X, %c fibers vertical",axis));
    c->SaveAs(Form("pictures/validation/sum_vert%c_posy.gif",axis));
    c->SaveAs(Form("pictures/validation/sum_vert%c_posy.C",axis));

//POS/sum all<th.
    cut.clear();
    for ( int i = 0; i < Nch/2-1; i++)
    {
      cut.append(Form("(ch[%d].adc>(ch[%d].th*%f))&&",i,i,factor));
    }
    cut.append(Form("(ch[%d].adc>(ch[%d].th*%f))",Nch/2-1,Nch/2-1,factor));
    t->Draw(sum_vs_pos.c_str(),cut.c_str(),"col");
    h = (TH1F *)gROOT->FindObject("h");
    h->GetXaxis()->SetTitle("POS Y (au)");
    h->GetYaxis()->SetTitle("Sum X (au)");
    h->SetTitle(Form("POS Y vs Sum X, %c fibers vertical, all>th",axis));
    c->SaveAs(Form("pictures/validation/sum_vert%c_posy_all.gif",axis));
    c->SaveAs(Form("pictures/validation/sum_vert%c_posy_all.C",axis));

  }
  return 0; 
}
