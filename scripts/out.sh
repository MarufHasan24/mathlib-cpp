path=$(pwd)/../test
cd $path
echo "Running tests in $path"
echo $(ls)
row_count=0
pass_count=0
fail_count=0
for entry in $(ls); do
 if [[ $entry == *".cpp" ]]; then
  echo "Compiling $entry into ${entry%.*}.out"
     g++ $entry -o ${entry%.*}.out -Wfatal-errors -std=c++20
     ./${entry%.*}.out
     rm -rf ${entry%.*}.out
     if [ -f $path/test.txt ]; then
      echo "-----------------------------------"
      row_count=$((row_count+1))
      echo "Querying $entry"
     value=$(<"$path/test.txt")
      out=()
      IFS=',' read -ra out <<< "$value"
      pass_count=$((pass_count+${out[0]}))
      fail_count=$((fail_count+${out[1]}))
      rm -rf $path/test.txt
      else
        echo "got error while compiling $entry"
        exit 1
      fi
    echo "Done"
    echo ""
 fi
done
echo "-----------------------------------"
echo "Test results"
echo "-----------------------------------"
echo ""
echo "total categories: $row_count"
total=$(expr $pass_count + $fail_count)
echo "Total tests: $total"
echo "Passed: $pass_count"
echo "Failed: $fail_count"
if [[ $fail_count -eq 0 ]]; then
      echo "All tests passed"
else
      echo "Sorry, some tests failed!"
      exit 1
fi