for n in $(seq 8003 16448);do while [ -z "$(qsub nt2ct_qsub.sh -t $n-$n 2>/dev/null)" ];do echo "sending $n"; done; done