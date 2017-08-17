#include "Riostream.h"
#include "TApplication.h"
#include "TROOT.h"
#include "TFile.h"
#include "TNtuple.h"
#include "TClasTool.h"
#include "TIdentificator.h"
#include "TMath.h"
#include "TDatabasePDG.h"
#include "TParticlePDG.h"


int main(int argc, char **argv)
{
  //gROOT->Reset();

  bool simul_key = 0;
  
  TClasTool *input = new TClasTool();
  input->InitDSTReader("ROOTDSTR");
  
  if(argc == 1) {    
    char File[200];
    //system("ls -l *.root > dataFiles.txt");
    ifstream in("dataFiles.txt", ios::in);
    if (!in) {
        cerr << "File Not Opened!" << endl;
        exit(1);
    }
    while (in >> File) {
        input->Add(File);
    }
    in.close();
    //system("rm dataFiles.txt");
  } else {
    simul_key = 1;
    char File[200];
    //system("ls -1 *.root > simulFiles.txt");
    ifstream in("simulFiles.txt", ios::in);
    if (!in) {
        cerr << "File Not Opened!" << endl;
        exit(1);
    }
    while (in >> File) {
        input->Add(File);
    }
    in.close();
    //system("rm simulFiles.txt");
  }
  TDatabasePDG pdg;
  Double_t kMe =pdg.GetParticle(11)->Mass();
  const char* NtupleName;
  const char* VarList = "TargType:Q2:Nu:Xb:W:SectorEl:ThetaPQ:PhiPQ:Zh:Pt:W2p:Xf:T:P:T4:deltaZ:E:Ee:Pe:Ect:Sct:Ecr:Scr:evnt:Px:Py:Pz:Xe:Ye:Ze:Xec:Yec:Zec:TEc:ECX:ECY:ECZ:Pex:Pey:Pez:Ein:Eout:Eine:Eoute:pid:Betta:vxh:vyh:vzh";
  Int_t Nvar = 49;
  Float_t *vars = new Float_t[Nvar];
  TVector3 *vert;
  TIdentificator *t = new TIdentificator(input);
  
  Long_t nEntries = (Long_t) input->GetEntries();

  TFile *output;
  if(simul_key == 0) {
    NtupleName = "ntuple_data";
    output = new TFile("local/prune_data_test.root", "RECREATE", "Data of particles");
  } else { 
    NtupleName = "ntuple_accept";
    output = new TFile("local/prune_simul.root", "RECREATE", "Data of particles");
  }

  TNtuple *tElec = new TNtuple("e_rec","All Electrons","Q2:W:Nu:vzec:Pex:Pey:Pez:event");
  Float_t DataElec[tElec->GetNvar()];

  TNtuple *ntuple = new TNtuple(NtupleName,"stable particles",VarList);
  TNtuple *ntuple_thrown = 0;
  TNtuple *e_thrown=0;
  if(simul_key == 1) {
    ntuple_thrown = new TNtuple("ntuple_thrown","pi0 pluses",VarList);
    e_thrown = new TNtuple("e_thrown","All Electrons","Q2:W:Nu:vzec:Pex:Pey:Pez:event");
}

//  TH1F *ht = new TH1F("ht","tdiff",1000,-15,15); 
  cout.width(4);
  input->Next();
  
  for (Int_t k = 0; k < nEntries; k++) 
  // for (Int_t k = 0; k < 100; k++) 
  {

    Int_t nRows = input->GetNRows("EVNT");
/*
    Int_t number_dc = input->GetNRows("DCPB");
    Int_t number_cc = input->GetNRows("CCPB");
    Int_t number_sc = input->GetNRows("SCPB");
    Int_t number_ec = input->GetNRows("ECPB");
    if(nRows>0&&number_dc != 0)
    {
      ht->Fill(((t->PathEC(0)-t->PathSC(0))/(t->Betta(0)*30)- (t->PathEC(0)-t->PathSC(0))/30));
      if( t->Status(0) > 0 && t->Status(0) < 100 &&
          t->Charge(0) == -1 &&
          number_cc != 0 && number_ec != 0 && number_sc != 0 &&
          t->StatCC(0) > 0 && t->StatSC(0) > 0 &&
          t->StatDC(0) > 0 && t->StatEC(0) > 0 &&
          t->DCStatus(0) > 0 && t->SCStatus(0) == 33 &&
          t->Etot(0) / 0.27 + 0.4 > t->Momentum(0) &&
          t->Etot(0) / 0.27 - 0.4 < t->Momentum(0) &&
          t->Ein(0) + t->Eout(0) > 0.8 * 0.27 * t->Momentum(0) &&
          t->Ein(0) + t->Eout(0) < 1.2 * 0.27 * t->Momentum(0) &&
          t->Nphe(0) > (t->Sector(0)==0||t->Sector(0)==1)*25 //Added sector dependent cut. osoto_mod.
                +(t->Sector(0)==2)*26 
                +(t->Sector(0)==3)*21
                +(t->Sector(0)==4 || t->Sector(0)==5 )*28&&
 //         (t->TimeEC(0)- t->TimeSC(0) - (t->PathEC(0)-t->PathSC(0))/30) < 5*0.35) //&&// elapsed time between sc and ec
         ((t->PathEC(0)-t->PathSC(0))/(t->Betta(0)*30)- (t->PathEC(0)-t->PathSC(0))/30) < 5*0.35) //&&// elapsed time between sc and ec (??). osoto_mod.
          //SampFracCheck()&&
          //t->FidCheckCut() == 1)
      {
        std::cout<<"Np ok: "<<t->Nphe(0)<<std::endl;

        std::cout<<"nRows: "<<nRows<<std::endl;
        std::cout<<"cate.: "<<t->GetCategorization(0)<<std::endl;
        std::cout<<"Q2   : "<<t -> Q2()<<std::endl;
        std::cout<<"W    : "<<t -> W()<<std::endl;
        std::cout<<"y    : "<<t -> Nu() / 5.015 <<std::endl;
      }
    }
*/
    const char * tt = "C";
    //if(nRows>0 && (t->GetCategorization(0,tt)) == "electron" && t -> Q2() > 1. && t -> W() > 2. && t -> Nu() / 5.015 < 0.85)
    if(nRows>0 && (t->GetCategorization(0,tt)) == "electron")  
    {
      DataElec[0] = t -> Q2();
      DataElec[1] = t -> W();
      DataElec[2] = t -> Nu();
      vert = t->GetCorrectedVert();
      Float_t vzec=vert->Z(); 
      DataElec[3] = vzec; 
      DataElec[4] = t -> Px(0);
      DataElec[5] = t -> Py(0);
      DataElec[6] = t -> Pz(0);
      DataElec[7] = k;

      tElec->Fill(DataElec);

      std::cout<<"event: "<<input->GetCurrentEvent()<<std::endl;
      //std::cout<<"got electron data"<<std::endl;
      Int_t NmbPion = 0;
      for (Int_t i = 1; i < nRows; i++) 
      {
	std::cout<<"\tnr: "<<i<<std::endl; 
      	TString category = t->GetCategorization(i,tt);
      	if (category == "gamma" || category == "pi-" || category == "high energy pion +" || category == "low energy pion +" || category == "s_electron" || category == "positron") 
        {
	        vars[0] = t -> ElecVertTarg();
	        vars[1] = t -> Q2();
	        vars[2] = t -> Nu();
	        vars[3] = t -> Xb();
	        vars[4] = t -> W();
	        vars[5] = t -> Sector(0);
	        vars[6] = t -> ThetaPQ(i);
	        vars[7] = t -> PhiPQ(i);
	        vars[8] = t -> Zh(i);
	        vars[9] = TMath::Sqrt(t -> Pt2(i));
	        vars[10] = t -> Mx2(i);
	        vars[11] = t -> Xf(i);
	        vars[12] = t -> T(i);
	        vars[13] = t -> Momentum(i);
	        vars[14] = t -> TimeCorr4(0.139570,i);
	        vars[15] = (t -> Z(i)) - (t -> Z(0));
	        vars[16] = TMath::Max(t->Etot(i),t->Ein(i)+t->Eout(i));
          vars[17] = TMath::Max(t->Etot(0),t->Ein(0)+t->Eout(0));
          vars[18] = t->Momentum(0);
          vars[19] = t->TimeEC(0);
          vars[20] = t->TimeSC(0);
          vars[21] = t->PathEC(0);
          vars[22] = t->PathSC(0);
          vars[23] = k;
          vars[24] = t->Px(i);
          vars[25] = t->Py(i);
          vars[26] = t->Pz(i);
          vars[27] = t->X(0);
          vars[28] = t->Y(0);
          vars[29] = t->Z(0);
          vert = t->GetCorrectedVert();
          vars[30] = vert->X(); 
          vars[31] = vert->Y(); 
          vars[32] = vert->Z(); 
          vars[33] = t->TimeEC(i);
          vars[34] = t->XEC(i);
          vars[35] = t->YEC(i);
          vars[36] = t->ZEC(i);
          vars[37] = t->Px(0);
          vars[38] = t->Py(0);
          vars[39] = t->Pz(0);

          vars[40] = t->Ein(i);
          vars[41] = t->Eout(i);
          vars[42] = t->Ein(0);
          vars[43] = t->Eout(0);
	  vars[44] = ((category == "gamma")?22:
		      ((category == "pi-")?-211:
		       (( category == "high energy pion +" || category == "low energy pion +")?211:
			((category == "s_electron")?11:-11)
			)
		       )
		      );
	  vars[45] = t->Betta(i);
          vars[46] = t->X(i);
          vars[47] = t->Y(i);
          vars[48] = t->Z(i);

	  ntuple->Fill(vars);
    	  }
      }
    }


    if(simul_key == 1 && t -> Id(0,1)==11 /*&& t -> Q2(1) > 1. && t -> W(1) > 2. && t -> Nu(1) / 5.015 < 0.85*/) 
    {
      DataElec[0] = t -> Q2(1);
      DataElec[1] = t -> W(1);
      DataElec[2] = t -> Nu(1);
      DataElec[3] = t -> Z(0,1); 
      DataElec[4] = t -> Px(0,1);
      DataElec[5] = t -> Py(0,1);
      DataElec[6] = t -> Pz(0,1);
      DataElec[7] = k;

      e_thrown->Fill(DataElec);

      //      std::cout<<"got electron gsim"<<std::endl;
      Int_t NmbPion = 0;
      for(Int_t i=1; i < input->GetNRows("GSIM"); i++) 

      {
      	if(t -> Id(i,1)==22 || t -> Id(i,1)==-211 || t -> Id(i,1)==211 ) //gamma: 1/22, pi0,+,-: 7/111,8/211,9 (Geant3/pdg)
        {
	        vars[0] = t -> ElecVertTarg(1);
	        vars[1] = t -> Q2(1);
	        vars[2] = t -> Nu(1);
	        vars[3] = t -> Xb(1);
	        vars[4] = t -> W(1);
	        vars[5] = t -> Sector(0,1);
	        vars[6] = t -> ThetaPQ(i,1);
	        vars[7] = t -> PhiPQ(i,1);
	        vars[8] = t -> Zh(i,1);
	        vars[9] = TMath::Sqrt(t -> Pt2(i,1));
	        vars[10] = t -> Mx2(i,1);
	        vars[11] = t -> Xf(i,1);
	        vars[12] = t -> T(i,1);
	        vars[13] = t -> Momentum(i,1);
	        vars[14] = 0;//t -> TimeCorr4(0.139570,i);
	        vars[15] = (t -> Z(i,1)) - (t -> Z(0,1));
	        vars[16] = t->Momentum(i,1);//TMath::Max(t->Etot(i),t->Ein(i)+t->Eout(i));;
		vars[17] = TMath::Sqrt(t->Momentum(0,1)*t->Momentum(0,1)+kMe*kMe); //TMath::Max(t->Etot(0),t->Ein(0)+t->Eout(0));
		vars[18] =t->Momentum(0,1);
          vars[19] = 0;//t->TimeEC(0);
          vars[20] = 0;//t->TimeSC(0);
          vars[21] = 0;//t->PathEC(0);
          vars[22] = 0;//t->PathSC(0);
          vars[23] = k;
          vars[24] = t->Px(i,1);
          vars[25] = t->Py(i,1);
          vars[26] = t->Pz(i,1);
          vars[27] = t->X(0,1);
          vars[28] = t->Y(0,1);
          vars[29] = t->Z(0,1);
          //vert = t->GetCorrectedVert();
          vars[30] = t->X(0,1);//vert->X(); 
          vars[31] = t->Y(0,1);//vert->Y(); 
          vars[32] = t->Z(0,1);//vert->Z(); 
          vars[33] = 0;//t->TimeEC(i);
          vars[34] = 0;//t->XEC(i);
          vars[35] = 0;//t->YEC(i);
          vars[36] = 0;//t->ZEC(i);
          vars[37] = t->Px(0,1);
          vars[38] = t->Py(0,1);
          vars[39] = t->Pz(0,1);

	  vars[40] = 0;
	  vars[41] = 0;
	  vars[42] = 0;
	  vars[43] = 0;
	  vars[44] = t -> Id(i,1);
	  vars[45] = t->Betta(i,1);
          vars[46] = t->X(i,1);
          vars[47] = t->Y(i,1);
          vars[48] = t->Z(i,1);

	  ntuple_thrown->Fill(vars);

    	  }
      }
    }
    //cout<<std::right<<float(k+1)/nEntries*100<<"%\r";
    //cout.flush();
    cout<<std::right<<float(k+1)/nEntries*100<<"%\n";
    input->Next();
    
  }
  
  output->Write();
  output->Close();
  cout << "Done." << endl;
  return 0;
}
