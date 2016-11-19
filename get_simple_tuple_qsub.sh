#!/bin/bash -f
#PBS -m n
#PBS -l walltime=30:00:00
#PBS -o /dev/null
#PBS -e /dev/null
sim=""
if [ $# -eq 1 ]; then
    sim=1
fi


##PBS_ARRAYID=3
##TMPDIR=.
tt="Fe-thickD2"
runlist="/user/o/orsosa/osoto_ana/${tt}rn.txt"
#runlist="/user/o/orsosa/FeThickD2_miss_rn.txt"
outdir="/data/atlas/users/orsosa/eg2_data_pruned/$tt"
if [ ! -z "$sim" ]; then
    outdir="/data/atlas/users/orsosa/eg2_sim_pruned/C"
fi
cd $TMPDIR
mkdir local
source /user/o/orsosa/set_64bit.sh;
if [ -z "$sim" ]; then
    
    rn=`sed -n "$PBS_ARRAYID{p;q}" $runlist`
    indir=/data/atlas/users/orsosa/eg2_data_ct/$tt/$rn/
    echo $indir
    find $indir -name "*.root" -print > dataFiles.txt
    /user/o/orsosa/osoto_ana/get_simple_tuple
    cp local/prune_data_test.root $outdir"/pruned_"$rn".root"
else
    indir=/data/atlas/users/orsosa/simulation/Fe5e6_$PBS_ARRAYID/ClasTool/
    find $indir -name "*.root" -print >simulFiles.txt
    /user/o/orsosa/osoto_ana/get_simple_tuple 1
    cp local/prune_simul.root $outdir"/pruned_simul_$PBS_ARRAYID.root"
fi
