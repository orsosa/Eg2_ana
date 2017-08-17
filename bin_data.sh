#!/bin/bash
outdir="Pt2Q2NuZpi0c_fullrange/data"
./get_data_binned -f pi0_PbD.root -t Pb -d $outdir;
./get_data_binned -f pi0_PbD.root -t Pb -d $outdir -l;

./get_data_binned -f pi0_CD.root -t C -d $outdir;
./get_data_binned -f pi0_CD.root -t C -d $outdir -l;

./get_data_binned -f pi0_FeD.root -t Fe -d $outdir;
./get_data_binned -f pi0_FeD.root -t Fe -d $outdir -l;