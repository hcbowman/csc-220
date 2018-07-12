#!/bin/bash

echo -n "Enter an integer: "
read my_num

for ((ii=1;ii<=$my_num;ii++))
do
  echo $ii
done

dir1=$1
dir2=$2


diff -rq $dir1 $dir2
