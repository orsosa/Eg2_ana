#!/bin/bash
#PBS -m n
#PBS -l walltime=30:00:00
##PBS -o /dev/null
##PBS -e /dev/null
#PBS -q atlas

debug=""
#TMPDIR=tmpdir
#PBS_ARRAYID=1

cd $TMPDIR
echo working on `pwd`

################################ PARAMETERS  ###################################
sim_src="H" # Simulation source. O | H | R
cut_src="H" # Electron vertex cut source. T | R | O | L | H  (Taya, Raphael, Orlando, Lamiaa, Hayk).
fix_vz_high="ok" # Fix solid vz high limit to -20 cm if value assigned different from "".
cmd_arg="-s ${sim_src} -c ${cut_src}"
############  OUTPUT FILENAME ##############################

fout="/data/user/o/orsosa/osoto_ana/Ne_AllTarg_${sim_src}Sim_${cut_src}cut_noycut"

if [ ! -z ${fix_vz_high} ]; then
    fout=${fout}_fix_vz_high.root
    cmd_arg="${cmd_arg} -f"
else
    fout=${fout}.root
fi
##############################################################################

############################################################
echo "============================ GETTING FILES NEEDED ========================="

find /data/user/o/orsosa/eg2_data_electrons -name "Nelec*D_sector.root" -exec sh -c 'f="$(basename {})"; cp {} ${f%%_*}.root ' \;

cp /data/user/o/orsosa/osoto_ana/get_Ne_local .
cp /data/user/o/orsosa/osoto_ana/binning_info_elec.txt .


if [ ${sim_src} == "O" ]; then
    cp /data/user/o/orsosa/eg2_sim_electrons/Electrons_dis_C*.root . # osoto sim
elif [ ${sim_src} == "H" ]; then
    cp /data/user/o/orsosa/sim_Hayk/*_elec.root . # hayk sim
fi

echo "============================ FILES GOT! ========================="

echo "============================ RUNING APLICATION ========================="
#./get_Ne_local

./get_Ne_local ${cmd_arg} 

echo "============================ END CONVERSION ========================="

echo "================== COPYING FILES ======================================"

cp Ne_TargConf.root $fout

