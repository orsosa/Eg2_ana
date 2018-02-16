{
  TCanvas *c1 = new TCanvas("c1","c1",1200,800);
  TFile *_file0 = TFile::Open("all_part_data.root");
  TFile *_file1 = TFile::Open("all_part_osoto.root");
  TNtuple *td = (TNtuple *)_file0->Get("tn");
  TNtuple *to = (TNtuple *)_file1->Get("tn");
  td->Draw("number_cc>>hd(40,0,20)","","");
  to->Draw("number_cc>>ho(40,0,20)","","");
  ho->SetTitle("NRows in CCPB");
  hd->SetTitle("NRows in CCPB");
  ho->SetFillColor(kBlue);
  ho->SetFillStyle(3001);
  ho->DrawNormalized();
  hd->SetLineColor(kRed);
  hd->SetLineStyle(7);
  hd->SetLineWidth(3);
  hd->DrawNormalized("same");
  TLegend *l=new TLegend(0.4,0.6,0.75,0.7);
  l->AddEntry(hd,"reconstructed data");
  l->AddEntry(ho,"reconstructed sim");
  l->Draw();
  c1->SaveAs("nRCC_comp.C");
  c1->SaveAs("nRCC_comp.gif");

}
