#!/bin/bash
acceptance="no"
if [ "$2" == "-a" ];then 
    acceptance="yes"
fi
opt=""
acc="_AC"
if [ $acceptance == "no" ]; then opt="-n"; acc="";echo "NOT USING ACCEPTANCE!";
else 
    echo "USING ACCEPTANCE!"
fi

#indir="Pt2Q2NuZpi0c_fullrange" #directory containing data and simulation binned.

#indir="ZQ2NuPt2eta3pi_fullrange_UML" #directory containing data and simulation binned.
#indir="Pt2Q2NuZeta3pi_fullrange_UML" #directory containing data and simulation binned.
#indir="Pt2Q2NuZeta3pi_fullrange_UML"
indir=""
if [ -z "$1" ]; then
    echo "input directory should be given"
    exit 1;
else
    indir=$1
fi
dir_suffix="${indir}/RatioZ_Pt2Q2Nu$acc" #outdir
#dir_suffix="${indir}/RatioPt2_ZQ2Nu$acc" #outdir
bin_order="0,1,3,2" #Last bin is preserved, all others are integrated.
# Pt2, Nu, Q2 schema, don't forget bining_info.txt
rm $dir_suffix.root 2> /dev/null
./get_MRatio  -o ${bin_order} -i ${indir} -t Fe -d ${dir_suffix} $opt;
./get_MRatio  -o ${bin_order} -i ${indir} -t C -d ${dir_suffix} $opt;
./get_MRatio  -o ${bin_order} -i ${indir} -t Pb -d ${dir_suffix} $opt;

# Q2 Z Nu schema, don't forget bining_info.txt

#./get_MRatio  -o ${bin_order} -i Q2NuZBin -t Fe -d ${dir_suffix};
#./get_MRatio  -o ${bin_order} -i Q2NuZBin -t C -d ${dir_suffix};
#./get_MRatio  -o ${bin_order} -i Q2NuZBin -t Pb -d ${dir_suffix};
