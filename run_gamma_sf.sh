#!/bin/bash -f
#PBS -m n # no email
#PBS -l walltime=30:00:00 # maximum time on wall
#PBS -o /dev/null # no stdout
#PBS -e /dev/null # no stderr
#PBS -q atlas # use utfsm queue

source /user/o/orsosa/set_64bit.sh;
dir=$PBS_O_WORKDIR
#cd $TMPDIR
amin=5.
amax=30.
NBins=1000

bw=`echo "($amax-$amin)/$NBins" | bc -l`
all=`echo "$PBS_ARRAYID*$bw + $amin" | bc -l`
ahl=`echo "($PBS_ARRAYID+1.)*$bw + $amin" | bc -l`
echo $dir
echo $PWD
echo $all
echo $ahl
echo $bw
cd $dir
echo -e "gamma_sf.C($all,$ahl)"

root -b -l -n -q < echo -e "gamma_sf.C($all,$ahl)" > gsf/res$PBS_ARRAYID.txt
