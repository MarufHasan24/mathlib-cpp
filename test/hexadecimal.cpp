#include "../hexadecimal.cpp"
#include "../scripts/tester.cpp"

using namespace std;

int main()
{
    tester::describe("Hexadecimal", []()
                     {
tester::toEq("Decimal to Hexadecimal", "FF", mlb::decimalToHex(255));
tester::toEq("Hexadecimal to Decimal", 255, mlb::hexToDecimal("FF"));
tester::toEq("Hexadecimal Addition", "15F", mlb::hexAdd("A1", "BE"));
tester::toEq("Hexadecimal Subtraction", "1D", mlb::hexSub("BE", "A1"));
tester::toEq("Hexadecimal Multiplication", "6E", mlb::hexMul("A", "B"));
tester::toEq("Hexadecimal Division", "C", mlb::hexDiv("64", "8")); 
tester::toEq("Decimal Addition", "1E", mlb::hexAdd(10, 20));
tester::toEq("Decimal Subtraction", "14", mlb::hexSub(30, 10)); 
tester::toEq("Decimal Multiplication", "19", mlb::hexMul(5, 5));
tester::toEq("Decimal Division", "A", mlb::hexDiv(100, 10)); });
    return 0;
}