#!/usr/bin/env bash

for entry in `ls ./../`; do
if [[ $entry == *".cpp" ]]; then
    if [ -f ./../test/${entry} ]; then
        g++ ./../test/$entry -std=c++11 -o ./../test/out/${entry%.*}.out
        echo "Built ${entry%.*}.out"
    else
        echo "No test file for ${entry%.*}.cpp"
        exit 1
    fi
fi
done