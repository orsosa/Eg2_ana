#!/bin/bash
acceptance="yes"
opt=""
acc=""
if [ $acceptance == "no" ]; then opt="-n"; acc="_na";echo "NOT USING ACCEPTANCE!";
else 
    echo "USING ACCEPTANCE!"
fi

indir="Pt2Q2NuZpi0c_fullrange" #directory containing data and simulation binned.
dir_suffix="${indir}/RatioPt2_ZQ2Nu$acc" #outdir
bin_order="3,0,1,2" #Last bin is preserved, all others are integrated.
# Pt2, Nu, Q2 schema, don't forget bining_info.txt

./get_MRatio  -o ${bin_order} -i ${indir} -t Fe -d ${dir_suffix} $opt;
./get_MRatio  -o ${bin_order} -i ${indir} -t C -d ${dir_suffix} $opt;
./get_MRatio  -o ${bin_order} -i ${indir} -t Pb -d ${dir_suffix} $opt;

# Q2 Z Nu schema, don't forget bining_info.txt

#./get_MRatio  -o ${bin_order} -i Q2NuZBin -t Fe -d ${dir_suffix};
#./get_MRatio  -o ${bin_order} -i Q2NuZBin -t C -d ${dir_suffix};
#./get_MRatio  -o ${bin_order} -i Q2NuZBin -t Pb -d ${dir_suffix};
