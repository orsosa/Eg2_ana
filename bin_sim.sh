#!/bin/bash
outdir="Pt2Q2NuZpi0c_fullrange/gsim"
./get_data_binned -f pi0_gsimC.root -t C -d $outdir -g
./get_data_binned -f pi0_gsimCD.root -t C -d $outdir -gl

outdir="Pt2Q2NuZpi0c_fullrange/sim"
./get_data_binned -f pi0_simC.root -t C -d $outdir -s
./get_data_binned -f pi0_simCD.root -t C -d $outdir -sl
