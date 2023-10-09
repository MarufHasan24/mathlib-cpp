#include "../octal.cpp" // Replace with the actual header file name
#include "./../scripts/tester.cpp"

using namespace std;
using namespace mlb;
int main()
{
    tester::describe("Octal to Decimal", []()
                     {
     string octal1 = "52";
     string octal2 = "13";
     int decimal1 = 52;
     int decimal2 = 13;
     tester::toEq("Octal to Decimal", 42, octalToDecimal(octal1));
     tester::toEq("Decimal to Octal", "64", decimalToOctal(decimal1));
     tester::toEq("Octal Addition", "65", octalAddition(octal1, octal2));
     tester::toEq("Octal Subtraction", "37", octalSubtraction(octal1, octal2));
     tester::toEq("Octal Multiplication", "716", octalMultiplication(octal1, octal2));
     tester::toEq("Octal Division", "3", octalDivision(octal1, octal2));
     tester::toEq("Decimal Addition", "101", octalAddition(decimal1, decimal2));
     tester::toEq("Decimal Subtraction", "47", octalSubtraction(decimal1, decimal2));
     tester::toEq("Decimal Multiplication", "1244", octalMultiplication(decimal1, decimal2));
     tester::toEq("Decimal Division", "4", octalDivision(decimal1, decimal2)); });
    return 0;
}
