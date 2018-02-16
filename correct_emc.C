TCanvas *c;
TString  dir= "EMC_pic";
TFile *f;
TGraphErrors *gst,*glt;
TH2F *hst2,*hlt2;
TH1D *hst,*hlt;
TH1F *hb;
TString tt;
Int_t Nbins=0;
TMultiGraph *mg;

int correct_tt(TString tt="C")
{
  hst2 = (TH2F*)f->Get(Form("hNelec%s%s",tt.Data(),tt.Data()));
  hlt2 = (TH2F*)f->Get(Form("hNelec%sD",tt.Data()));
  Nbins = hst2->GetNbinsY();
  hst = hst2->ProjectionY("hst",1,hst2->GetNbinsX(),"e");
  hlt = hlt2->ProjectionY("hlt",1,hlt2->GetNbinsX(),"e");
  gst=new TGraphErrors(Nbins);
  glt=new TGraphErrors(Nbins);
  gst->SetMarkerStyle(kFullDotLarge);
  glt->SetMarkerStyle(kFullDotLarge);
  gst->SetMarkerColor(kBlack);
  glt->SetMarkerColor(kRed);
  gst->SetName("g" + tt + tt);
  glt->SetName("g" + tt + "D");
  for (int k = 0;k<Nbins;k++)
  {
    hb = (TH1F*)f->Get(Form("hst%s_%d",tt.Data(),k));
    gst->SetPoint(k,hb->GetMean(),hst->GetBinContent(k+1));
    gst->SetPointError(k,hb->GetRMS()/hb->GetEntries(),hst->GetBinError(k+1));
    //std::cout<<hb->GetMean()<<"\t";
    hb = (TH1F*)f->Get(Form("hlt%s_%d",tt.Data(),k));
    glt->SetPoint(k,hb->GetMean(),hlt->GetBinContent(k+1));
    glt->SetPointError(k,hb->GetRMS()/hb->GetEntries(),hlt->GetBinError(k+1));
    //    std::cout<<hb->GetMean()<<std::endl;
  }
  mg=new TMultiGraph();
  mg->Add(gst);
  mg->Add(glt);
  mg->Draw("ap");
  mg->GetXaxis()->SetNdivisions(520);
  mg->GetXaxis()->SetLabelSize(0.02);
  c->SaveAs(dir + "/Ne" + tt + ".gif");
  c->SaveAs(dir + "/Ne" + tt + ".C");
  delete gst;
  delete glt;
  delete mg;
}

int correct_emc()
{
  c = new TCanvas("c","c",1024,768);
  c->SetGrid();
  f = new TFile("Ne_TargConf_Q2Xb.root");
  tt = "C";
  correct_tt("C");
  correct_tt("Fe");
  correct_tt("Pb");
  return 0;
}
