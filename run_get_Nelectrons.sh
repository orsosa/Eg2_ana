#!/bin/bash
#PBS -m n # no email
#PBS -l walltime=30:00:00 # maximum time on wall
#PBS -o /dev/null # no stdout
#PBS -e /dev/null # no stderr
#PBS -q atlas # use utfsm queue

sim=""
if [ $# -eq 1 ]; then
    sim=1
fi

#PBS_ARRAYID=153
#TMPDIR=.
#tt="C-thickD2"
#tt="Fe-thickD2"
tt="Pb-thinD2"
runlist="/user/o/orsosa/osoto_ana/${tt}rn.txt"
#runlist="/user/o/orsosa/FeThickD2_miss_rn.txt"
outdir="/data/user/o/orsosa/eg2_data_electrons/${tt}"
#outdir="/data/atlas/users/orsosa/eg2_data_pruned/${tt}_e+e-"
if [ ! -z "$sim" ]; then
    outdir="/data/user/o/orsosa/eg2_sim_electrons"
fi
cd $TMPDIR
cp /user/o/orsosa/osoto_ana/get_Nelectrons .
#source /user/o/orsosa/set_64bit.sh;
if [ -z "$sim" ]; then
    
    rn=`sed -n "$PBS_ARRAYID{p;q}" $runlist`

    find /data/user/jlab/mss/clas/eg2a/production/Pass2/Clas/ -name "*$rn*.root" -exec cp {} . \;
    #indir=/data/atlas/users/orsosa/eg2_data_ct/$tt/$rn/
#    echo $indir
    find . -name "clas*.root" -print > dataFiles.txt
    ./get_Nelectrons -t $tt
    cp Nelec.root $outdir"/Nelec_"$rn".root"
else
#    indir=/data/atlas/users/orsosa/simulation/C_D5e6_$PBS_ARRAYID/ClasTool/

#    cp /data/atlas/users/orsosa/simulation/C_C5e6_$PBS_ARRAYID/ClasTool/* . #sim only
    cp /data/atlas/users/orsosa/simulation/C_D5e6_$PBS_ARRAYID/ClasTool/* . #sim only

    find . -name "sim*.root" -print >dataFiles.txt
    ./get_Nelectrons -s
    cp Nelec.root $outdir"/Nelec_$PBS_ARRAYID.root"
fi
