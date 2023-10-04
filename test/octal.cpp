#include <iostream>
#include <cassert>
#include <string>
// Include your octal operations header file here
#include "../octal.cpp"  // Replace with the actual header file name

using namespace std;
using namespace mlo;
int main() {
    
    string octal1 = "52";
    string octal2 = "13";
    int decimal1 = 52;
    int decimal2 = 13;
    
    cout << decimalToOctal(decimal1) << endl; // 64
    cout << octalToDecimal(octal1) << endl; // 42
    cout << octalAddition(octal1, octal2) << endl; // 65
    cout << octalSubtraction(octal1, octal2) << endl; // 37
    cout << octalMultiplication(octal1, octal2) << endl; // 716
    cout << octalDivision(octal1, octal2) << endl; // 3
    cout << octalAddition(decimal1, decimal2) << endl; // 101
    cout << octalSubtraction(decimal1, decimal2) << endl; // 47
    cout << octalMultiplication(decimal1, decimal2) << endl; // 1244
    cout << octalDivision(decimal1, decimal2) << endl; // 4
    
    return 0;
}
