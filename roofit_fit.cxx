
inline Float_t fit_pdf(TH1F *histo,Float_t minRange0, Float_t maxRange0,Float_t& err, RooRealVar& Ns, RooRealVar& Nb, int Ni = 1, Float_t kMP=kMPi0, Float_t kSP=kSPi0)
{

  //  TH1F *histo = hM_bin0;
  
  Float_t xmin=minRange0,xmax=maxRange0,R=xmax-xmin;

  RooConstVar xminv=RooConst(xmin);
  RooConstVar xmaxv=RooConst(xmax);
  RooConstVar Rv=RooConst(R);

  //Signal
  RooRealVar x("x","x",xmin,xmax); 
  RooRealVar s("s","#sigma",kSP,0.,kSP*1.15); 
  RooRealVar m("m","mean",kMP,kMP*0.9,1.1*kMP); 
  RooGaussian sig("sig","eta mass",x,m,s);
  ///////////////////
  //Background
  //////regular polynome
  RooRealVar a1("a1","linear term",100.,-1000.,1000.); 
  RooRealVar a2("a2","quadratic term",-80.,-2000.,0.); 
  RooPolynomial bkg("bkg","background",x,RooArgList(a1,a2));
  RooFormulaVar minFunc("minFunc","Minimum formula","-a1/2./a2",RooArgList(a1,a2));

  /*
  ////////Chebychev
  RooRealVar a1("a1","linear term",60,-1000,1000); 
  RooRealVar a2("a2","quadratic term",-150,-1000,0); 
  RooChebychev bkg("bkg","background",x,RooArgList(a1,a2));
  /////////////
  RooFormulaVar minFunc("minFunc","Minimum formula","xmaxv - Rv/2. - a1*Rv*Rv/16./a2",RooArgList(a1,a2,Rv,xmaxv));
  /////////////////////////////////////
  */

  RooGaussian parConst("parConst","Minimum constrain",minFunc,RooConst(0.6),RooConst(0.15));

  //Data
  RooDataHist data("data","dataset",x,histo);
  RooPlot* xframe = x.frame();
  data.plotOn(xframe,MarkerColor(kBlack),LineColor(kBlack));
  ////////////
  //  RooRealVar Ns("Ns","signal counts",100,0,10000);
  //RooRealVar Nb("Nb","background counts",300,0,10000);

  RooAddPdf model("model","sig + bkg",RooArgList(sig,bkg),RooArgList(Ns,Nb));
  //  RooFitResult* res= model.fitTo(data,Range(0.43,0.75),Save());
  RooFitResult* res= model.fitTo(data,Range(0.42,0.75),ExternalConstraints(parConst),Save());
  //  model.plotOn(xframe,VisualizeError(*res,1),Minimizer("Minuit2"),FillColor(kOrange));
  model.plotOn(xframe,VisualizeError(*res,1),FillColor(kOrange));
  model.plotOn(xframe,Components(bkg),LineStyle(kDashed));
  //  model.plotOn(xframe,Components(sig),LineStyle(kDashed),LineColor(kBlack)); 
  model.plotOn(xframe);
  data.plotOn(xframe);
  xframe->Draw();
  return Ns.getVal()/Nb.getVal();
}
