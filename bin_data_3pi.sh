#!/bin/bash
#outdir="ZQ2NuPt2eta3pi_fullrange_UML/data"
outdir="Pt2Q2NuZeta3pi_fullrange_UML/data"
./get_data_binned_3pi -f eta_3pi_PbD.root -t Pb -d $outdir;
./get_data_binned_3pi -f eta_3pi_PbD.root -t Pb -d $outdir -l;

./get_data_binned_3pi -f eta_3pi_CD.root -t C -d $outdir;
./get_data_binned_3pi -f eta_3pi_CD.root -t C -d $outdir -l;

./get_data_binned_3pi -f eta_3pi_FeD.root -t Fe -d $outdir;
./get_data_binned_3pi -f eta_3pi_FeD.root -t Fe -d $outdir -l;