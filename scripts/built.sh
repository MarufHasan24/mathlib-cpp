#!/usr/bin/env bash

path="https://raw.githubusercontent.com/MarufHasan24/mathlib-cpp/master/"
for entry in `ls ${path}/`; do
if [[ $entry == *".cpp" ]]; then
    if [ -f ${path}/test/${entry} ]; then
        g++ ${path}/test/$entry -std=c++11 -o ${path}/test/out/${entry%.*}.out
        echo "Successfullly built ${entry%.*}.out"
    else
        echo "No test file for ${entry%.*}.cpp"
        exit 1
    fi
fi
done