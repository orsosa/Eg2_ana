#!/bin/bash
outdir="ZQ2NuPt2eta_aa_fullrange_UML/data"
#outdir="Pt2Q2NuZeta_aa_fullrange_UML/data"
./get_data_binned_aa -f eta_PbD_aa_all.root -t Pb -d $outdir;
./get_data_binned_aa -f eta_PbD_aa_all.root -t Pb -d $outdir -l;

./get_data_binned_aa -f eta_CD_aa_all.root -t C -d $outdir;
./get_data_binned_aa -f eta_CD_aa_all.root -t C -d $outdir -l;

./get_data_binned_aa -f eta_FeD_aa_all.root -t Fe -d $outdir;
./get_data_binned_aa -f eta_FeD_aa_all.root -t Fe -d $outdir -l;