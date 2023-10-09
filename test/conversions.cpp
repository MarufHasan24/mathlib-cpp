#include "./../conversions.cpp"
#include "./../scripts/tester.cpp"
using namespace std;
using namespace mlb;

int main()
{
    tester::describe("Convertions", []()
                     {
        tester::toEq("1 inch = 2.54 centimeters", 2.54, inch2cm(1));
        tester::toEq("1 centimeter = 0.393701 inches", 0.393701, cm2inch(1));
        tester::toClose("1 yard = 91.44 centimeters", 91.44, yard2cm(1));
        tester::toClose("1 centimeter = 0.0109361 yards", 0.0109361, cm2yard(1));
        tester::toClose("1 mile = 1.60934 kilometers", 1.60934, mile2km(1));
        tester::toClose("1 kilometer = 0.621371 miles", 0.621371, km2mile(1)); });
    return 0;
}