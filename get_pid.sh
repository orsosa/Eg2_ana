#!/bin/bash
#Send pid on gsim data
debug=""
if [ $# -ne 1 ]; then
    echo "you must supply an option:"
    echo "sim | data | all"
    exit 0;
fi


if [ $1 == "sim" -o $1 == "all" ]; then
#Deuterium
sed -r 's:^opt=.*:opt="gsim":g' run_eta_id.sh | sed 's:^tt=.*:tt="LT":g' > run_eta_id_qsub_gsimD.sh
#Solid Target
sed -r 's:^opt=.*:opt="gsim":g' run_eta_id.sh | sed 's:^tt=.*:tt="ST":g'> run_eta_id_qsub_gsimC.sh

#Send pid on simrec data
#Deuterium
sed -r 's:^opt=.*:opt="simrec":g' run_eta_id.sh | sed 's:^tt=.*:tt="LT":g' > run_eta_id_qsub_simrecD.sh
#Solid Target
sed -r 's:^opt=.*:opt="simrec":g' run_eta_id.sh | sed 's:^tt=.*:tt="ST":g' > run_eta_id_qsub_simrecC.sh
fi

if [ $1 == "data" -o $1 == "all" ]; then
#Send pid on data
#C
sed -r 's:^opt=.*:opt="data":g' run_eta_id.sh | sed 's:^tt=.*:tt="C-thickD2":g' > run_eta_id_qsub_dataCD.sh  
#Fe
sed -r 's:^opt=.*:opt="data":g' run_eta_id.sh | sed 's:^tt=.*:tt="Fe-thickD2":g' > run_eta_id_qsub_dataFeD.sh  
#Pb
sed -r 's:^opt=.*:opt="data":g' run_eta_id.sh | sed 's:^tt=.*:tt="Pb-thinD2":g' > run_eta_id_qsub_dataPbD.sh  
fi

echo "sending jobs to the farm"
find . -maxdepth 1 -name "run_eta_id_qsub_*.sh" -print
find . -maxdepth 1 -name "run_eta_id_qsub_*.sh" -print0 | xargs -0 -n 1 -I arg \
bash -c 'a=arg;\
 if [ -z "${a##*data*C*}" ]; then\
 qsub $a -t 1-119;\
 elif [ -z "${a##*data*Fe*}" ];then\
 qsub $a -t 1-265; \
 elif [ -z "${a##*data*Pb*}" ];then\
 qsub $a -t 1-171;\
 elif [ -z "${a##*sim*D*}" ];then\
 qsub $a -t 1-14; \
 elif [ -z "${a##*sim*C*}" ];then\
 qsub $a -t 1-17; \
 fi\
';


if [ -z $debug ]; then
    echo "removing files"
    find . -maxdepth 1 -name "run_eta_id_qsub_*.sh" -print0| xargs -0 -n 1 rm
fi
