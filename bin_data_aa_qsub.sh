#!/bin/bash
#PBS -m n # no email
#PBS -l walltime=30:00:00 # maximum time on wall
##PBS -o /dev/null # no stdout
##PBS -e /dev/null # no stderr
#PBS -q utfsm # use specific queue
tt=$1
outdir=$2
lt=$3
datafile="eta_${tt}D_aa_all_bkg.root"

cd $TMPDIR
cp /user/o/orsosa/osoto_ana/binning_info.txt .
cp /user/o/orsosa/osoto_ana/get_data_binned_aa .
cp /user/o/orsosa/orsosa_data/eg2_data_pruned/$datafile .
./get_data_binned_aa -f $datafile -t $tt -d $outdir $lt

outdir=$(dirname $outdir)
cp -r $outdir /data/user/o/orsosa/.

