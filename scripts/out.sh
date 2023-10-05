path=$(pwd)/../test
cd $path
for entry in $(ls); do
 if [[ $entry == *".cpp" ]]; then
  echo "Compiling $entry into ${entry%.*}.out"
     g++ $entry -o $path/out/${entry%.*}.out -Wfatal-errors -std=c++11
 fi
done