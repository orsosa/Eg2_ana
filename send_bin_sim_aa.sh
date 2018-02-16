#!/bin/bash
basedir=ZQ2NuPt2eta_aa_fullrange_UML_widthfix_bkgExp
#outdir=ZQ2NuPt2eta_aa_fullrange_UML_widthfix
#outdir=ZQ2NuPt2eta_aa_fullrange_UML/sim
#outdir=Pt2Q2NuZeta_aa_fullrange_UML/sim
#xargs -L 1 -0 qsub bin_data_aa_qsub.sh -F "{}"<<eof
#C  ${outdir}
#C  $outdir -l
#Pb $outdir
#Pb $outdir -l
#Fe $outdir
#Fe $outdir -l
#eof
tt="C"
outdir=$basedir/sim
simfile="etaout_simrec_${tt}_aa_all.root"
qsub -F "${tt}  ${outdir} ${simfile} -s"     bin_sim_aa_qsub.sh
qsub -F "${tt}  ${outdir} ${simfile/_aa/D_aa} -sl"  bin_sim_aa_qsub.sh
outdir=$basedir/gsim
simfile="etaout_gsim_${tt}_aa_all.root"
qsub -F "${tt}  ${outdir} ${simfile} -g"     bin_sim_aa_qsub.sh
qsub -F "${tt}  ${outdir} ${simfile/_aa/D_aa} -gl"  bin_sim_aa_qsub.sh
