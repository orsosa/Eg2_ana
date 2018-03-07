#!/bin/bash 
#PBS -m n # no email
#PBS -l walltime=30:00:00 # maximum time on wall
#PBS -o /dev/null # no stdout
#PBS -e /dev/null # no stderr
#PBS -q utfsm # use utfsm queue

sim=""
if [ $# -eq 1 ]; then
    sim=1
fi

##PBS_ARRAYID=3
##TMPDIR=.
tt="C-thickD2"
#tt="Fe-thickD2"
#tt="Pb-thinD2"

cd $TMPDIR
mkdir local

cp /user/o/orsosa/osoto_ana/${tt}rn.txt .
cp /user/o/orsosa/osoto_ana/sim_dirs.txt .
cp /user/o/orsosa/osoto_ana/get_simple_tuple .

#cat sim_dirs.txt | sed '/^#/d' | sed '/^.*D.*/d' > simC_list.txt
#cat sim_dirs.txt | sed '/^#/d' | grep D  > simD_list.txt

basedir="/data/user/o/orsosa"
runlist="${tt}rn.txt"
#runlist="/user/o/orsosa/FeThickD2_miss_rn.txt"
outdir="$basedir/eg2_data_pruned/${tt}_new"
#outdir="/data/atlas/users/orsosa/eg2_data_pruned/${tt}_e+e-"
if [ ! -z "$sim" ]; then
    outdir="$basedir/eg2_sim_pruned_new"
fi

############ data ###############
if [ -z "$sim" ]; then
    
    rn=`sed -n "$PBS_ARRAYID{p;q}" $runlist`
    indir=$basedir/eg2_data_ct/$tt/$rn
    echo $indir
    cp -r $indir .
    #find $indir -name "*.root" -print > dataFiles.txt
    find $rn -name "*.root" -print > dataFiles.txt
    ./get_simple_tuple
    cp local/prune_data_test.root $outdir"/pruned_"$rn".root"
else
########## simulation ##########
#    indir=/data/atlas/users/orsosa/simulation/C_D5e6_$PBS_ARRAYID/ClasTool/
 #   indir=/data/user/o/orsosa/simulation/C5e6_$PBS_ARRAYID/ClasTool
    #find $indir -name "*.root" -print >simulFiles.txt
    indir=$(cat sim_dirs.txt | sed '/^#/d' | sed -n "$PBS_ARRAYID{p;q}")
    cp -r $indir .
    
    if [[ "$indir" =~ "D" ]];then
	outdir=$outdir/LT;
    else
	outdir=$outdir/ST;
    fi
    indir=$(basename $indir)
    find $indir/ClasTool -name "*.root" -print >simulFiles.txt
    ./get_simple_tuple 1
    cp local/prune_simul.root $outdir"/$indir.root"
fi
