#!/bin/bash
input=$1
fname=${input##*/}
fbname=${fname%.*}
output=${fbname}.bin

g++ -I /usr/local/Cellar/eigen/3.3.8_1/include/eigen3 $@ -o ${output}
