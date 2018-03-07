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
tt="C"
#datafile="eta_${tt}D_aa_all_bkg.root"
datafile=${2/ST/$tt}
qsub -F "${tt}  ${outdir} ${datafile}"     bin_data_aa_qsub.sh
qsub -F "${tt}  ${outdir} ${datafile} -l"  bin_data_aa_qsub.sh
tt="Pb"
datafile=${2/ST/$tt}
qsub -F "${tt}  ${outdir} ${datafile}"    bin_data_aa_qsub.sh
qsub -F "${tt}  ${outdir} ${datafile} -l" bin_data_aa_qsub.sh
tt="Fe"
datafile=${2/ST/$tt}
qsub -F "${tt}  ${outdir} ${datafile}"    bin_data_aa_qsub.sh
qsub -F "${tt}  ${outdir} ${datafile} -l" bin_data_aa_qsub.sh
