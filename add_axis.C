{
  bool flag = true; //true: pt2, false: q2
  Double_t ytext = 0.011;
  if(!flag) ytext = 0.06;
  Double_t text_size = 0.025;
  Double_t xmin=0,
    ymin = 0.09,
    xmax = 5,
    ymax = 0.09,
    wmin = 0.3,
    wmax = 0.8;
  Int_t ndivisions = 5;
  
  
  TGaxis *ax = new TGaxis(0,1,1,1,2,4);

  ax->SetLineColor(kRed);
  ax->SetLabelColor(kRed);
  ax->SetLabelSize(text_size);


  ax->SetTitle("Z ");
  ax->SetTitleColor(kRed);
  ax->SetTitleSize(text_size);
  ax->SetOption("-SW");
  if(!flag)
  {
    
  //Q2
    ax->DrawAxis(xmin,gPad->GetFrame()->GetY1()
		 ,xmax,gPad->GetFrame()->GetY1(),wmin, wmax,ndivisions,"-SW",0.8);
    ax->DrawAxis(5,gPad->GetFrame()->GetY1()
		 ,10,gPad->GetFrame()->GetY1(),wmin, wmax,ndivisions,"-SUW",0.8);
    ax->DrawAxis(10,gPad->GetFrame()->GetY1()
		 ,15,gPad->GetFrame()->GetY1(),wmin, wmax,ndivisions,"-SUW",0.8);
    TLine *l= new TLine();
    l->SetLineColor(kRed);
    l->SetLineWidth(1);
    l->DrawLine(5,gPad->GetFrame()->GetY1(),5,gPad->GetFrame()->GetY2()); 
    l->DrawLine(10,gPad->GetFrame()->GetY1(),10,gPad->GetFrame()->GetY2());
  }  
  else
  {
    //Pt2
    ax->DrawAxis(xmin,gPad->GetFrame()->GetY1()
		 ,xmax,gPad->GetFrame()->GetY1(),wmin, wmax,ndivisions,"-SW",0.8);
    ax->DrawAxis(5,gPad->GetFrame()->GetY1()
		 ,10,gPad->GetFrame()->GetY1(),wmin, wmax,ndivisions,"-SUW",0.8);
    ax->DrawAxis(10,gPad->GetFrame()->GetY1()
		 ,15,gPad->GetFrame()->GetY1(),wmin, wmax,ndivisions,"-SUW",0.8);
    ax->DrawAxis(15,gPad->GetFrame()->GetY1()
		 ,20,gPad->GetFrame()->GetY1(),wmin, wmax,ndivisions,"-SUW",0.8);
    ax->DrawAxis(20,gPad->GetFrame()->GetY1()
		 ,25,gPad->GetFrame()->GetY1(),wmin, wmax,ndivisions,"-SUW",0.8);
    ax->DrawAxis(25,gPad->GetFrame()->GetY1()
		 ,30,gPad->GetFrame()->GetY1(),wmin, wmax,ndivisions,"-SUW",0.8);
    TLine *l= new TLine();
    l->SetLineColor(kRed);
    l->SetLineWidth(1);
    l->DrawLine(5,gPad->GetFrame()->GetY1(),5,gPad->GetFrame()->GetY2()); 
    l->DrawLine(10,gPad->GetFrame()->GetY1(),10,gPad->GetFrame()->GetY2());
    l->DrawLine(15,gPad->GetFrame()->GetY1(),15,gPad->GetFrame()->GetY2());
    l->DrawLine(20,gPad->GetFrame()->GetY1(),20,gPad->GetFrame()->GetY2());
    l->DrawLine(25,gPad->GetFrame()->GetY1(),25,gPad->GetFrame()->GetY2());
  }

  
  TLatex *tl = new TLatex ();
  tl->SetTextSize(text_size);
  
   //Z 0.3 0.4 0.5 0.6 0.7 0.8
  //Q2 1.0 1.33 1.77 4.1
  //Nu 2.2 4.25
  //Pt2 0. 0.1 0.25 0.4 0.55 0.75 0.9
  
  if(!flag)
  {
  //q2
  
    tl->DrawLatex(0.7,ytext,"Q^{2} #epsilon (1 , 1.33)");
    tl->DrawLatex(5.7,ytext,"Q^{2} #epsilon (1.33 , 1.77)");
    tl->DrawLatex(10.7,ytext,"Q^{2} #epsilon (1.77 , 4.1)");
  
  }   
  else
  {
    //pt2
    tl->DrawLatex(0.7,ytext,"Pt^{2} #epsilon (0. , 0.1)");
    tl->DrawLatex(5.7,ytext,"Pt^{2} #epsilon (0.1 , 0.25)");
    tl->DrawLatex(10.7,ytext,"Pt^{2} #epsilon (0.25 , 0.4)");
    tl->DrawLatex(15.7,ytext,"Pt^{2} #epsilon (0.4 , 0.55)");
    tl->DrawLatex(20.7,ytext,"Pt^{2} #epsilon (0.55 , 0.75)");
    tl->DrawLatex(25.7,ytext,"Pt^{2} #epsilon (0.75 , 0.9)");
  }  
}
