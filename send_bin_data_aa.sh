#!/bin/bash
outdir=ZQ2NuPt2eta_aa_fullrange_UML/data
#xargs -L 1 -0 qsub bin_data_aa_qsub.sh -F "{}"<<eof
#C  ${outdir}
#C  $outdir -l
#Pb $outdir
#Pb $outdir -l
#Fe $outdir
#Fe $outdir -l
#eof
qsub -F "C  ${outdir}"     bin_data_aa_qsub.sh
qsub -F "C  ${outdir} -l"  bin_data_aa_qsub.sh
qsub -F "Pb  ${outdir}"    bin_data_aa_qsub.sh
qsub -F "Pb  ${outdir} -l" bin_data_aa_qsub.sh
qsub -F "Fe  ${outdir}"    bin_data_aa_qsub.sh
qsub -F "Fe  ${outdir} -l" bin_data_aa_qsub.sh
