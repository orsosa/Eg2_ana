#define new_str_cxx
#include "new_str.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void new_str::Loop(char *rfname)
{
//   In a ROOT session, you can do:
//      Root > .L new_str.C
//      Root > new_str t
//      Root > t.GetEntry(12); // Fill t data members with entry number 12
//      Root > t.Show();       // Show values of entry 12
//      Root > t.Show(16);     // Read and show values of entry 16
//      Root > t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
   if (fChain == 0) return;
   TFidCut("Lorenzo_5GeV.txt");

   Long64_t nentries = fChain->GetEntriesFast();
   TFile *rf = new TFile(rfname,"recreate");
   tnout = new TNtuple("tnout","summary tuple","etot:ec_ei:ec_eo:ec_r:ec_t:sc_r:sc_t:pex:pey:pez");
   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
      if (Cut(ientry) < 0) continue;
    tnout->Fill(etot[ec[0]-1],ec_ei[ec[0]-1],ec_eo[ec[0]-1],ec_r[ec[0]-1],ec_t[ec[0]-1],sc_r[ sc[0]-1],sc_t[ sc[0]-1],p[0]*cx[0],p[0]*cy[0],p[0]*cz[0]);
   }
   tnout->Write("",TObject::kOverwrite);
   rf->Close();
}


Bool_t new_str::GoodTrig(void){
 
 Bool_t trig = kFALSE;
 Int_t dci, cci, sci, eci, sti;
 sti = stat[0];
 dci = dc[0];
 cci = cc[0];
 eci = ec[0];
 sci = sc[0];

 if(sti>0 && eci>0 && cci>0 && dci>0 &&sci>0){
// std::cout<<"going on line:  "<<__LINE__<<std::endl;
     eci--;cci--;dci--;sti--;sci--;
     trig_mom = p[0];
     trig_theta_rad = TMath::ACos((p[0]*cz[0])/p[0]);
     trig_Q2= (4*5.014*(trig_mom)*sin(trig_theta_rad/2)*sin(trig_theta_rad/2));
     trig_nu=(5.014-trig_mom);
     trig_W=sqrt(0.938*0.938+2*0.938*(trig_nu)-trig_Q2);
     trig_y=trig_nu/5.014;     
    
     if(q[0]==-1
	&&dc_stat[dci]>0
        &&ec_stat[eci]>0
	&&sc_stat[sci]>0 
	&&trig_Q2>1
	&&trig_W>2
	){
// std::cout<<"going on line:  "<<__LINE__<<std::endl;
       trig_ql = q_l;
       trig_sect = dc_sect[dci];
       trig_theta = TMath::RadToDeg()*trig_theta_rad; 
       trig_phi = TMath::RadToDeg()*TMath::ATan2(cy[0]*trig_mom,cx[0]*trig_mom);
       trig_nphe = nphe[cci];
       trig_ecin = ec_ei[eci];
       trig_ecout = ec_eo[eci];
       trig_ectot = etot[eci];
       trig_ece = TMath::Max(trig_ectot, trig_ecin+trig_ecout);
       trig_vx = vx[0];
       trig_vy = vy[0];
       trig_vz = vz[0];
       trig_px = cx[0]*trig_mom;
       trig_py = cy[0]*trig_mom;
       trig_pz = cz[0]*trig_mom;
       trig_ecx = ech_x[eci];
       trig_ecy = ech_y[eci];
       trig_ecz = ech_z[eci];
       TVector3 xyzEC(trig_ecx,trig_ecy,trig_ecz);
       TVector3 uvwEC = ec_xyz_uvw(xyzEC);
       trig_ecu = uvwEC.X();
       trig_ecv = uvwEC.Y();
       trig_ecw = uvwEC.Z();
       trig_ect = ec_t[eci];    
       trig_ecl = ec_t[eci]; 
       trig_sct = sc_t[sci];
       trig_sc_stat = sc_stat[sci];
       trig_scl = sc_r[sci];
       MirrorCode = cc_segm[cci]%1000;

       trig_phisect = trig_phi - (trig_phi>32.)*(trig_sect-1)*60.+(trig_phi<-32.)*(7-trig_sect)*60.; // all sectors dist. on one  image;  trig_phi: -180 to 180
       trig_dcfid_flag = 0;
       //    if((trig_theta>14.5)&&(TMath::Abs(trig_phisect)<26.5*TMath::Power(TMath::Sin(TMath::DegToRad()*(trig_theta-14.5)),0.4)))trig_dcfid_flag=1;

       trig_tl1x = tl1_x[dci];
       trig_tl1y = tl1_y[dci];
       trig_tl1z = tl1_z[dci];
       trig_tl1cx = tl1_cx[dci];
       trig_tl1cy = tl1_cy[dci];
       trig_tl1cz = tl1_cz[dci];
       trig_thetal1 = TMath::RadToDeg()*TMath::ACos((trig_tl1z-trig_vz_corr)/sqrt(trig_tl1x*trig_tl1x+trig_tl1y*trig_tl1y+((trig_tl1z-trig_vz_corr)*(trig_tl1z-trig_vz_corr))));
       trig_phil1 = TMath::RadToDeg()*TMath::ATan2(trig_tl1y,trig_tl1x);
       while(trig_phil1> 30)trig_phil1-=60.;
       while(trig_phil1<-30)trig_phil1+=60.;

      LorenzoFlag = CheckCut();
      FillVlassovCoordinates(0);

      Float_t phi;
      phi = trig_phi;
      phi += 30.;
      while(phi<0)phi+=360.;
      sect =  (int)TMath::Floor(phi/60.);//trig_phisect;
     
      //Vertex correction (x,y,z)->(x_corr,y_corr,z_corr). Correction preserves (x,y) in coordinates of Sector1 
      TVector3 RotatedVertPos(trig_vx,trig_vy,trig_vz);
      TVector3 RotatedVertDir(trig_px,trig_py,trig_pz);
      TVector3 TargetPos(0.043,-0.33,0);
      RotatedVertPos.RotateZ(-TMath::DegToRad()*60.*sect);
      RotatedVertDir.RotateZ(-TMath::DegToRad()*60.*sect);
      TargetPos.RotateZ(-TMath::DegToRad()*60.*sect);
      Float_t ShiftLength = (TargetPos.X()-RotatedVertPos.X())/RotatedVertDir.X();
      RotatedVertDir = ShiftLength*RotatedVertDir;
      RotatedVertPos = RotatedVertPos+RotatedVertDir;
      trig_vx_corr =  (RotatedVertPos-TargetPos).X();
      trig_vy_corr =  (RotatedVertPos-TargetPos).Y();
      trig_vz_corr =  RotatedVertPos.Z();
      TVector3 TransvShift = RotatedVertPos-TargetPos;
      TransvShift.SetZ(0);
      trig_transv_pos = TransvShift.Mag();
      if(TransvShift.Y()<0)trig_transv_pos *= -1.;
      target=0;

      //  if (trig_vy_corr>-2.4 && trig_vy_corr<2 &&  trig_vz_corr>-25.7 && trig_vz_corr<-24.0)target=2; //SOLID  GENERAL
      if (trig_vy_corr>-2.2 && trig_vy_corr<2. && trig_vz_corr>-31.8 &&  trig_vz_corr<-28.4)target=1;   //DEUTERIUM
     // if (trig_vy_corr>-2.2 && trig_vy_corr<2. &&  trig_vz_corr>-25.3 && trig_vz_corr<-24.1)target=2; //CARBON
      if (trig_vy_corr>-2.2 && trig_vy_corr<2 &&  trig_vz_corr>-25.65 && trig_vz_corr<-24.26)target=2; //Fe
     // if (trig_vy_corr>-2.2 && trig_vy_corr<2 &&  trig_vz_corr>-25.54 && trig_vz_corr<-24.36)target=2; //Pb
    

      //  NpheSect(); not nessesary when applying Trig CC matching procedure
         if(kTRUE 
//           &&trig_mom>0.75 	        
//           &&ec_ei[eci]>0.06
//           &&ec_ei[eci]*ec_eo[eci]>0
       //    &&TrigCCmatch()
       //    &&NpheSect() 
//           &&SamplingCutFe()
//           &&TMath::Abs(trig_ect-trig_sct-0.7)<5*0.35
	   &&trig_ecu<400 
	   &&trig_ecu>40
	   &&trig_ecw<390
	   &&trig_ecv<360 
//           &&LorenzoFlag==1
	   ){
// std::cout<<"going on line:  "<<__LINE__<<std::endl;
//	   if(target==1) eND++;
//     if(target==2) eNS++;
     trig=kTRUE;
	 }

      } 
  }
  if (trig) std::cout<<"got electron"<<std::endl;
//  else std::cout<<"got electron"<<std::endl;
  return trig;
   }

Int_t new_str::CheckCut(void){ 

  Double_t moment = trig_mom;  //momentum
  Double_t phi = trig_phi;     //degrees
  Double_t theta = trig_theta; //degrees
  Double_t  theta_low=0.001;


  fcfidc_fun[0] = new TF1("func2",fitf5,12,60,6);
  fcfidc_fun[1] = new TF1("func3",fitf5,12,60,6);

  if (phi < -30) {
    phi+=360;
  }
  if (phi > 330) {
    phi-=360;
  }
  
 Int_t sector =  (Int_t)(phi + 90) /60;


  for( Int_t side = 0 ; side < 2 ; side++) {
    for(Int_t paraf = 0 ; paraf < 3 ; paraf++) {
      if(side==0) {
	fcfidc_fun[side]->SetParameter(paraf,fcfun[sector][side][paraf]->Eval(moment));
	if(paraf==2) {
         theta_low=fcfun[sector][side][paraf]->Eval(moment);
	}
      }
      else if(side==1 && paraf==2) {
	fcfidc_fun[side]->SetParameter(paraf,theta_low);
      }
      else {
	fcfidc_fun[side]->SetParameter(paraf,fcfun[sector][side][paraf]->Eval(moment));
      }
    }

    fcfidc_fun[side]->SetParameter(3,54); // theta max
    fcfidc_fun[side]->SetParameter(4, side*2 -1);//fixed: upper-lower switch
    fcfidc_fun[side]->SetParameter(5, sector);//fixed: sector switch

    
  }


  if (theta > theta_low && theta < 54 && phi > fcfidc_fun[0]->Eval(theta) && phi < fcfidc_fun[1]->Eval(theta) ) {
    return 1; // Fiducial Cut passed
  }
  else {
    return 0; // Fiducial Cut not passed
  }
}
void new_str:: FillVlassovCoordinates(int track){

  float point[3], dir[3], cc_coor[2];
  point[0] = dc_xsc[dc[track]-1];
  point[1] = dc_ysc[dc[track]-1];
  point[2] = dc_zsc[dc[track]-1];
    dir[0] = dc_cxsc[dc[track]-1];
    dir[1] = dc_cysc[dc[track]-1];
    dir[2] = dc_czsc[dc[track]-1];
  get_cc_special_coord(point,dir,cc_coor);
  trig_cctheta = cc_coor[0];
  trig_ccphi = cc_coor[1];
}

void new_str::get_cc_special_coord(float *point, float *dir, float *cc_coor){
/*
C----------------------------------------------------------------------
C-  This macro was extracted from $CLAS_PACK/cc/cc_stuff.c
C-
C-  Input : point[3] and dir[3]
C-  -------
C-
C-          point[3] - coordinates of the point on the track
C-                     somewhere after CC (where B=0):
C-                     (it could be EC or SC  matching point)
C-          dir[3]   - direction vector at that point.
C-
C-  *** IMPORTANT ! *** Point and direction must be in Sector RS
C-
C-  Example : one can call with in particular (for track num 0, trigger) :
C-  ---------
C-
C-          point[0] = dc_xsc[dc[0]-1];
C-          point[1] = dc_ysc[dc[0]-1];
C-          point[2] = dc_zsc[dc[0]-1];
C-            dir[0] = dc_cxsc[dc[0]-1];
C-            dir[1] = dc_cysc[dc[0]-1];
C-            dir[2] = dc_czsc[dc[0]-1];
C-
C-  Ouput : cc_coor[2]
C   -------
C-          cc_coor[0] = theta
C-          cc_coor[1] = phy
C-          projective angles from the target to the track cross-point with "special plane".
C-
C----------------------------------------------------------------------
*/
  int nt;
  float x[3], dist, r, s, ccTheta, ccPhi;
  float cc_pln[3] = { - 0.0007840784063, 0., - 0.001681461571 }; //was static in original code
  nt = get_vcrpl(point, dir, cc_pln, &dist, x);
  ccTheta = -999.;
  ccPhi = -999.;
  if(nt){
   r = sqrt(x[0]*x[0] + x[1]*x[1] + x[2]*x[2]);
   s = sqrt(x[0]*x[0] + x[1]*x[1]);
   ccTheta = TMath::RadToDeg()*TMath::ACos(x[2]/r);
   ccPhi = TMath::RadToDeg()*TMath::ATan2(x[1]/s,x[0]/s);
  }
  cc_coor[0] = ccTheta;
  cc_coor[1] = ccPhi;
 }//source for void get_cc_special_coord(float *, float *, float *)

Bool_t new_str::NpheSect(void){
 Bool_t result=kFALSE;
 if(trig_sect==1||trig_sect==2)result = trig_nphe>25.; 
 else if(trig_sect==3)result = trig_nphe>26.;
 else if(trig_sect==4)result = trig_nphe>21.;
 else if(trig_sect==5||trig_sect==6)result = trig_nphe>28.; 
 else cout << "NpheSect could not find the sector ! " << trig_sect << endl;
// NpheCutSect = result;
 return result;
}

Bool_t new_str::TrigCCmatch(void){
 Bool_t result = 
       TMath::Abs(
       trig_cctheta-(7.306737e+00+1.383339e-01*MirrorCode+3.672767e-04*MirrorCode*MirrorCode)
                 )<2.5;
 return result;
}


Bool_t new_str::SamplingCutFe(void){
  Bool_t result=kFALSE;
 if (trig_sect==1)result = TMath::Abs(trig_ece/trig_mom -(0.222404  +0.0222688 *trig_mom  -0.0024153*trig_mom*trig_mom))   
            		    <2.5*TMath::Sqrt( 9.23027e-03*9.23027e-03 + 2.98343e-02*2.98343e-02 /trig_mom);
 else if(trig_sect==2)result = TMath::Abs(trig_ece/trig_mom -(0.234623 +0.0194985*trig_mom  -0.00208357*trig_mom*trig_mom))
			<2.5*TMath::Sqrt( 8.66367e-03*8.66367e-03 + 3.08858e-02*3.08858e-02/trig_mom);
 else if(trig_sect==3)result =TMath::Abs(trig_ece/trig_mom -(0.252287 +0.024248*trig_mom  -0.00338846*trig_mom*trig_mom))
			<2.5*TMath::Sqrt( 1.07826e-02*1.07826e-02 + 2.63854e-02*2.63854e-02/trig_mom);
 else if(trig_sect==4)result =TMath::Abs(trig_ece/trig_mom -( 0.250946 +0.0208409*trig_mom -0.00326824*trig_mom*trig_mom))
			<2.5*TMath::Sqrt( 7.22581e-03*7.22581e-03 + 2.98809e-02*2.98809e-02 /trig_mom);
 else if(trig_sect==5)result = TMath::Abs(trig_ece/trig_mom -(0.271956 +0.0118487*trig_mom  -0.00187084*trig_mom*trig_mom))
			<2.5*TMath::Sqrt( 1.84073e-02*1.84073e-02 +  3.48029e-02* 3.48029e-02/trig_mom);
 else if(trig_sect==6)result = TMath::Abs(trig_ece/trig_mom -(0.252613 + 0.022819*trig_mom  -0.00311242*trig_mom*trig_mom))
			<2.5*TMath::Sqrt(4.11461e-03 *4.11461e-03 + 3.55081e-02*3.55081e-02 /trig_mom);
 return result;

}
 
TVector3 new_str::ec_xyz_uvw(TVector3 xyz){
  // Converts x,y,z EC hit in CLAS coordinate system
  // into u,v,w distances of the EC hit.

  Float_t ex=0.;
  Float_t wy=0.;
  Float_t zd=0.;
  Float_t yu=0.;
  Float_t ve=0.;
  Float_t wu=0.;
  Float_t xi=0.; 
  Float_t yi=0.; 
  Float_t zi=0.;
  Float_t ec_phy = 0.;  
  Float_t phy = 0.;
  Float_t rot[3][3];

  // Parameters
  Float_t ec_the = 0.4363323;
  Float_t ylow = -182.974;
  Float_t yhi = 189.956;
  Float_t tgrho = 1.95325; 
  Float_t sinrho = 0.8901256; 
  Float_t cosrho = 0.455715;

  // Variables
  ex = xyz[0];
  wy = xyz[1];
  zd = xyz[2];
  
  phy = TMath::ATan2(wy,ex)*57.29578;
  if(phy<0.){phy = phy + 360;}
  phy = phy+30.;
  if(phy>360.){phy = phy-360.;}

  ec_phy = ((Int_t) (phy/60.))*1.0471975;

  rot[0][0] = TMath::Cos(ec_the)*TMath::Cos(ec_phy);
  rot[0][1] = -TMath::Sin(ec_phy);
  rot[0][2] = TMath::Sin(ec_the)*TMath::Cos(ec_phy);
  rot[1][0] = TMath::Cos(ec_the)*TMath::Sin(ec_phy);
  rot[1][1] = TMath::Cos(ec_phy);
  rot[1][2] = TMath::Sin(ec_the)*TMath::Sin(ec_phy);
  rot[2][0] = -TMath::Sin(ec_the);
  rot[2][1] = 0.;
  rot[2][2] = TMath::Cos(ec_the);

  yi = ex*rot[0][0]+wy*rot[1][0]+zd*rot[2][0];
  xi = ex*rot[0][1]+wy*rot[1][1]+zd*rot[2][1];
  zi = ex*rot[0][2]+wy*rot[1][2]+zd*rot[2][2];
  zi = zi-510.32 ;

  yu = (yi-ylow)/sinrho;
  ve = (yhi-ylow)/tgrho - xi + (yhi-yi)/tgrho;
  wu = ((yhi-ylow)/tgrho + xi + (yhi-yi)/tgrho)/2./cosrho;

  TVector3 result3(yu,ve,wu);

  return result3;
}

Double_t fitf5(Double_t *y, Double_t *par2)
{
  // par2[4] is 1 for the upper part (p1) and -1 for the lower (p0)
  // par2[5] is the sector number

  
  Double_t arg = 0., fitval = 0.;
  arg = y[0];
  if(arg <= par2[2] || arg >= par2[3]) fitval = 60.*(par2[5] - 1); 
  else fitval = 60.*(par2[5] - 1) + par2[4]*par2[0]*(1. - 1./((arg - par2[2])/(par2[1]) + 1.));
 
  return fitval;
}

void new_str::TFidCut(Char_t* FileName){
  cout << "Executing constructor" << endl;
 
  Double_t fidc_par[7][2][4][6] ;
  Int_t sector;
  Int_t side;
  Int_t paraf;
  Char_t tmp[10];
  Char_t Title[40];
  float p0, p1, p2, p3, p4, p5;

  cout << "Copying name " << endl;
  fInFileLorenzo = TString( FileName );


  cout << "Opening file " << fInFileLorenzo.Data() <<endl;
  ifstream inputfile;
  inputfile.open(fInFileLorenzo.Data(), ifstream::in);
  if( !inputfile ) {
    cerr << "Error opening input stream" << endl;
    return;
  }              

  cout << "Reading files " << fInFileLorenzo.Data() << endl; 

 
  
  
  inputfile >> tmp  >> tmp >> tmp  >> tmp >> tmp  >> tmp >> tmp >> tmp  >> tmp >> tmp ;
  while( !inputfile.eof() ){
 
    inputfile >> sector >> side >> paraf >> p0 >> p1 >> p2 >> p3 >> p4 >> p5;

    
    fidc_par[sector][side][paraf][0] = p0;
    fidc_par[sector][side][paraf][1] = p1 ;
    fidc_par[sector][side][paraf][2] = p2;
    fidc_par[sector][side][paraf][3] = p3;
    fidc_par[sector][side][paraf][4] = p4;
    fidc_par[sector][side][paraf][5] = p5;

  }
  inputfile.close();
  
  for(sector = 1 ; sector < 7 ; sector++) {
    for(side = 0 ; side < 2 ; side ++) {
      for(paraf = 0 ; paraf < 3 ; paraf++) {
	sprintf(Title,"fidc_fun_se%i_si%i_p_%i",sector,side,paraf);
	if (paraf==0) {
	  fcfun[sector][side][paraf] = new TF1(Title,"[0]+[1]*exp([2]*(x-[3]))",0.2,6);
	}
	else if (paraf==1) {
	  fcfun[sector][side][paraf] = new TF1(Title,"[0]+[1]*x*exp([2]*(x-[3])**2)",0.2,6);
	}
	else if (paraf==2) {
	  fcfun[sector][side][paraf] = new TF1(Title,"[0]+[1]/x**2+[2]*x+[3]/x+[4]*exp([5]*x)",0.2,6);
	}
	else {
	  fcfun[sector][side][paraf] = new TF1(Title,"[0]+[1]*x+[2]/x+[3]*x**2",0.2,6);
	}
	
	
	fcfun[sector][side][paraf]->SetParameter(0,fidc_par[sector][side][paraf][0]);
	fcfun[sector][side][paraf]->SetParameter(1,fidc_par[sector][side][paraf][1]);
	fcfun[sector][side][paraf]->SetParameter(2,fidc_par[sector][side][paraf][2]);
	fcfun[sector][side][paraf]->SetParameter(3,fidc_par[sector][side][paraf][3]);
	if (paraf==2) {
          fcfun[sector][side][paraf]->SetParameter(4,fidc_par[sector][side][paraf][4]);
          fcfun[sector][side][paraf]->SetParameter(5,fidc_par[sector][side][paraf][5]);
	}
      }
    }
  }
}


int new_str::get_vcrpl(float *r0, float *dir, float *plane_par, float *dist, float *cross_point){
/*
C----------------------------------------------------------------------
C-
C-   Purpose and Methods : crossing of the stright line(R0,d)
C-                         with a plane
C-
C-   Inputs  :   r0(3) - initial point of line
C-               dir(3) - vector direction: r = R0 + s*D
C-               plane_par(3) - array of plane parameters:
C-      plane_par(1)*x + plane_par(2)*y + plane_par(3)*z + 1 = 0
C-
C-   Outputs :   cc_vcrpl =  0 - no cross with the plane.
C-                           1 - cross in positive direction
C-                          -1 - cross in negative direction
C-               dist    =  Distance to the cross point
C-               cross_point(3) =  Cross point coordinates.
C-
C-   Created    23-NOV-1998   Alexander V. Vlassov
C-   Modified
C-
C----------------------------------------------------------------------
                                                                                                                         
*/
                                                                                                                         
  double a,b,t,c,d[3];
  const double un = 1.0000000000;
  const float vsmall = 0.000001;
  int i, ires;
  a = b = c = 0.;
  *dist = 0.;
  for(i=0;i<3;i++)
    c += un*dir[i]*dir[i];
  c = sqrt(c);
  if(c <= vsmall)
    {
        ires = 0;
        return(ires);
    }
  for(i=0;i<3;i++)
    d[i] = un*dir[i]/c;
  for(i=0;i<3;i++)
    { a += un*plane_par[i]*d[i]; b += un*plane_par[i]*r0[i]; }
  b += un;
  if(fabs(b) <= vsmall)
    {
    for(i=0;i<3;i++)
      cross_point[i] = r0[i];
    ires = 1;
    }
  else
    {
    if(fabs(a) <= vsmall)
      {
      for(i=0;i<3;i++)
        cross_point[i] = 0.;
      ires = 0;
      }
    else
      {
      t = -b/a;
      for(i=0;i<3;i++)
        cross_point[i] = t*dir[i] + r0[i];
      ires = 1;
      *dist = t;
      if(t < 0.)
        { *dist = -t; ires = -1;}
      }
        }
  return(ires);
}//source for int get_vcrpl(float *, float *, float *, float *, float *)

Bool_t new_str::IsElecMin(){
 
 Bool_t trig = kFALSE;
 Int_t dci, cci, sci, eci, sti;
 sti = stat[0];
 dci = dc[0];
 cci = cc[0];
 eci = ec[0];
 sci = sc[0];

 if(sti>0 && eci>0 && cci>0 && dci>0 &&sci>0)
  {
    eci--;cci--;dci--;sti--;sci--;
    trig_mom = p[0];
    trig_theta_rad = TMath::ACos((p[0]*cz[0])/p[0]);
    trig_Q2= (4*5.014*(trig_mom)*sin(trig_theta_rad/2)*sin(trig_theta_rad/2));
    trig_nu=(5.014-trig_mom);
    trig_W=sqrt(0.938*0.938+2*0.938*(trig_nu)-trig_Q2);
    trig_y=trig_nu/5.014;     
    
     if(q[0]==-1
	    &&dc_stat[dci]>0
      &&ec_stat[eci]>0
      &&sc_stat[sci]>0 
    	//&&trig_Q2>1
	    //&&trig_W>2
	    )
      {
        trig = kTRUE;
//        std::cout<<"got electron!"<<std::endl;
      }
  }
 return trig;
}

void new_str::LoopSimple(char *rfname)
{
   if (fChain == 0) return;
   TFidCut("Lorenzo_5GeV.txt");

   Long64_t nentries = fChain->GetEntriesFast();
   TFile *rf = new TFile(rfname,"recreate");
   tnout = new TNtuple("tn","summary tuple","E:pex:pey:pez:Q2:W:y");
   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    if (IsElecMin())
      tnout->Fill(TMath::Max(etot[ec[0]-1],ec_ei[ec[0]-1]+ec_eo[ec[0]-1]),p[0]*cx[0],p[0]*cy[0],p[0]*cz[0],trig_Q2,trig_W,trig_y);
   }
   tnout->Write("",TObject::kOverwrite);
   rf->Close();
}
