#!/bin/bash
# osoto may,2014
file_list=""
jsub_xml=""
function print_help
{
  echo " "
  echo "-----Help-----"
  echo "This application generate a farm submission xml file,"
  echo "You should give a file with a list of files and a name of the xml output file."
  echo "It uses a template file called \"template.jsub.xml\""
  echo "usage:"
  echo "./build_xml_job.sh -i <file_list> -o <outfile.xml>"
  echo "After this you can submit the jobs using the command:"
  echo "jsub -xml <outfile.xml>"
  echo "------------- "
  echo " "
}
tm_file="template.jsub.xml"
if [ ! -f ${tm_file} ]; 
then
  echo "file ${tm_file} not found"
  print_help
  exit 1
fi 

# parsing options.
while getopts ":i:o:h" opt;
do
  case $opt in
  i)  file_list=$OPTARG;;
  o)  jsub_xml=$OPTARG;;
  h)  print_help; exit 0;;
  \?) 
    echo "invalid option -$OPTARG"
    print_help
    exit 1;;
  :) 
    echo "option -$OPTARG should come with an argument"
    print_help
    exit 1
  esac
done

Nh=$(grep -n -m 1 List  ${tm_file} | cut -d : -f 1)
Nt=$(( $(wc -l ${tm_file} | cut -d " " -f 1) - $(grep -n -m 1 /List ${tm_file} | cut -d : -f 1) + 1 ))
head ${tm_file} -n ${Nh} > ${jsub_xml}
cat ${file_list} >> ${jsub_xml}
tail -n ${Nt} ${tm_file} >> ${jsub_xml}
echo "file ${jsub_xml} created."

