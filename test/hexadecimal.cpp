#include <iostream>
#include "../hexadecimal.cpp"

using namespace std;

int main() {
    // Test decimal to hexadecimal conversion
    cout << "Decimal 255 to Hex: " << mlb::decimalToHex(255) << endl;

    // Test hexadecimal to decimal conversion
    cout << "Hexadecimal 'FF' to Decimal: " << mlb::hexToDecimal("FF") << endl;

    // Test addition of two hexadecimal numbers (string input)
    cout << "Hexadecimal addition of 'A1' and 'BE': " << mlb::hexAdd("A1", "BE") << endl;

    // Test subtraction of two hexadecimal numbers (string input)
    cout << "Hexadecimal subtraction of 'BE' and 'A1': " << mlb::hexSub("BE", "A1") << endl;

    // Test multiplication of two hexadecimal numbers (string input)
    cout << "Hexadecimal multiplication of 'A' and 'B': " << mlb::hexMul("A", "B") << endl;

    // Test division of two hexadecimal numbers (string input)
    cout << "Hexadecimal division of '64' and '8': " << mlb::hexDiv("64", "8") << endl;

    // Test addition of two decimal numbers (integer input) and returning result as hex
    cout << "Decimal addition of 10 and 20 (result in Hex): " << mlb::hexAdd(10, 20) << endl;

    // Test subtraction of two decimal numbers (integer input) and returning result as hex
    cout << "Decimal subtraction of 30 and 10 (result in Hex): " << mlb::hexSub(30, 10) << endl;

    // Test multiplication of two decimal numbers (integer input) and returning result as hex
    cout << "Decimal multiplication of 5 and 5 (result in Hex): " << mlb::hexMul(5, 5) << endl;

    // Test division of two decimal numbers (integer input) and returning result as hex
    cout << "Decimal division of 100 and 10 (result in Hex): " << mlb::hexDiv(100, 10) << endl;

    return 0;
}
