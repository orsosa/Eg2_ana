#!/bin/bash 
#basedir=ZQ2NuPt2eta_aa_fullrange_UML_widthfix_pol3_0.2-0.8
#basedir=ZQ2NuPt2eta_aa_fullrange_UML_widthfix_pol3
#basedir=ZQ2NuPt2eta_aa_fullrange_UML_widthfix_bkgExpn
basedir=ZQ2NuPt2eta_aa_fullrange_UML_widthfix_bkgExp_new
#basedir=ZQ2NuPt2eta_aa_fullrange_UML_widthfix_bkgExp_pol1
#outdir=ZQ2NuPt2eta_aa_fullrange_UML_widthfix/data
#outdir=ZQ2NuPt2eta_aa_fullrange_UML/data
#outdir=Pt2Q2NuZeta_aa_fullrange_UML/data
datafile="eta_STD_aa_all_bkg.root" #ST will be replaced
#gsimfile="etaout_gsim_ST_aa_all.root" #ST will be replaced
gsimfile="ST/gsim"  #ST will be replaced
#simrecfile="etaout_simrec_ST_aa_all.root" #ST will be replaced
simrecfile="ST/rec"  #ST will be replaced

echo "root dir for output files: $basedir"

./send_bin_data_aa.sh $basedir $datafile
echo ${simrecfile} ${gsimfile} 
./send_bin_sim_aa.sh $basedir ${simrecfile} ${gsimfile}
#./send_bin_sim_aa.sh $basedir ${simrecfile}