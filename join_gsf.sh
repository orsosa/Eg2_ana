#!/bin/bash
#PBS -o /dev/null
#PBS -e /dev/null
#PBS -q utfsm
cd $PBS_O_WORKDIR
rm  gammE_corr.txt;
for n in `find gsf -name "res*.txt"`;do
#for n in `ls gsf/res*.txt`;do
    sed -n '3{p;q}' $n >> gammE_corr.txt
done