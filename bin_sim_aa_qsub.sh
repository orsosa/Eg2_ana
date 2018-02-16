#!/bin/bash
#PBS -m n # no email
#PBS -l walltime=30:00:00 # maximum time on wall
##PBS -o /dev/null # no stdout
##PBS -e /dev/null # no stderr
#PBS -q utfsm # use specific queue
tt=$1
outdir=$2
flags=$4
simfile=$3

cd $TMPDIR
cp /user/o/orsosa/osoto_ana/binning_info.txt .
cp /user/o/orsosa/osoto_ana/get_data_binned_aa .
cp /user/o/orsosa/orsosa_data/eg2_sim_pruned/$simfile .
./get_data_binned_aa -f $simfile -t $tt -d $outdir $flags

outdir=$(dirname $outdir)
rsync -Pav $outdir /data/user/o/orsosa/.

