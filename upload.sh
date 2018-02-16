#!/bin/bash
echo "files to be uploaded: `ls $1`"
scp `ls $1` atlasusr:/data/user/orsosa/www/.