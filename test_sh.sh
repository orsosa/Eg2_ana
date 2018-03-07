#!/bin/bash
basedir=$1
outdir=$basedir/data
#ZQ2NuPt2eta_aa_fullrange_UML_widthfix_bkgExp_pol/
#outdir=ZQ2NuPt2eta_aa_fullrange_UML_widthfix/data
#outdir=ZQ2NuPt2eta_aa_fullrange_UML/data
#outdir=Pt2Q2NuZeta_aa_fullrange_UML/data
#xargs -L 1 -0 qsub bin_data_aa_qsub.sh -F "{}"<<eof
#C  ${outdir}
#C  $outdir -l
#Pb $outdir
#Pb $outdir -l
#Fe $outdir
#Fe $outdir -l
#eof
datafile=$2
tt="C"
echo $datafile
#datafile="eta_${tt}D_aa_all_bkg.root"
datafile=${datafile/"ST"/$tt}
echo $basedir
echo $datafile