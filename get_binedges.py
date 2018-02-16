#!/usr/bin/env python
from sys import argv
min=None
max=None
n=None
for c in range(len(argv)):
    if (argv[c] in ["-m","--min="]):
        min=float(argv[c+1])
    elif (argv[c] in ["-M","--max="]):
        max=float(argv[c+1])
    elif (argv[c] in ["-n","--nbins="]):
        n=int(argv[c+1])
if (not min or not max or not n):
    print "you must specify min, max and number of bins"
    print "-m <n> | --min= <n>: <n> minimum"
    print "-M <n> | --max= <n>: <n> maximum"
    print "-n <n> | --nbins= <n>: <n> number of bins"
    print "e.g."
    print "./get_binedges.py -m 0.13 --max= 0.56 -n 14 "
    exit(1)
    
s=reduce( lambda x,y: str(x) + " " +str(y),map(lambda x: (max - min )/n*x + min,range(n+1)) )
print s
