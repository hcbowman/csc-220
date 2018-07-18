#!/bin/bash


allfiles=(*)
cfiles=(*.c)
cppfiles=(*.cpp)

echo "Directory"
read dir

echo "string"
read str

echo "optional directory"
read edir

dirs=find  / -type d -name $dir

for filename in ${dirs[*.cpp]}
do
  echo $filename
done
