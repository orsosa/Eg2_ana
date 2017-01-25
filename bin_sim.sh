#!/bin/bash
./get_data_binned -f pi0_gsimC.root -t C -d gsim -g
./get_data_binned -f pi0_gsimCD.root -t C -d gsim -gl

./get_data_binned -f pi0_simC.root -t C -d sim -s
./get_data_binned -f pi0_simCD.root -t C -d sim -sl
