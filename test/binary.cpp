#include "../binary.cpp"
#include "../scripts/tester.cpp"

using namespace std;
using namespace tester;
int main()
{
    describe("Binary", []()
             {
                 toEqWithPadding("Decimal to Binary", "101", mlb::decimalToBinary(5));
                 toEq("Binary to Decimal", 5, mlb::binaryToDecimal("101"));
                 toEqWithPadding("Binary Addition", "1010", mlb::binaryAdd("101", "101"));
                 toEqWithPadding("Binary Subtraction", "0", mlb::binarySub("101", "101"));
                 toEqWithPadding("Binary Multiplication", "11001", mlb::binaryMul("101", "101"));
                 toEqWithPadding("Binary Division", "1", mlb::binaryDiv("101", "101"));
                 toEqWithPadding("Decimal Addition", "1010", mlb::binaryAdd(5, 5));
                 toEqWithPadding("Decimal Subtraction", "0", mlb::binarySub(5, 5));
                 toEqWithPadding("Decimal Multiplication", "11001", mlb::binaryMul(5, 5));
                 toEqWithPadding("Decimal Division", "1", mlb::binaryDiv(5, 5)); });
    return 0;
}