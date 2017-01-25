#!/bin/bash
./get_data_binned -f pi0_PbD.root -t Pb -d data;
./get_data_binned -f pi0_PbD.root -t Pb -d data -l;

./get_data_binned -f pi0_CD.root -t C -d data;
./get_data_binned -f pi0_CD.root -t C -d data -l;

./get_data_binned -f pi0_FeD.root -t Fe -d data;
./get_data_binned -f pi0_FeD.root -t Fe -d data -l;
