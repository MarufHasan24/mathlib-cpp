#include <iostream>
#include "./../conversions.cpp"
using namespace std;
using namespace mlb;

int main() {
    cout << "Test convertions: 1 inch = " << inch2cm(1) << " centimeters" << endl;
    cout << "Test convertions: 1 centimeter = " << cm2inch(1) << " inches" << endl;
    cout << "Test convertions: 1 yard = " << yard2cm(1) << " centimeters" << endl;
    cout << "Test convertions: 1 centimeter = " << cm2yard(1) << " yards" << endl;
    cout << "Test convertions: 1 mile = " << mile2km(1) << " kilometers" << endl;
    cout << "Test convertions: 1 kilometer = " << km2mile(1) << " miles" << endl;
    return 0;
}