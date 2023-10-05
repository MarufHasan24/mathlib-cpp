#!/usr/bin

path=$(dirname $0)/..
echo "Building all files in ${path}/test"
for entry in `ls ${path}/`; do
if [[ $entry == *".cpp" ]]; then
    if [ -f ${path}/test/${entry} ]; then
        g++ ${path}/test/$entry -std=c++11 -o ${path}/test/out/${entry%.*}.out
        echo "Successfully built ${entry%.*}.out"
    else
        echo "No test file for ${entry%.*}.cpp"
        exit 1
    fi
fi
done