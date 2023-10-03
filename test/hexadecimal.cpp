#include <iostream>
#include "../hexadecimal.cpp"

using namespace std;

int main() {
    // Test decimal to hexadecimal conversion
    cout << "Decimal 255 to Hex: " << mlh::decimalToHex(255) << endl;

    // Test hexadecimal to decimal conversion
    cout << "Hexadecimal 'FF' to Decimal: " << mlh::hexToDecimal("FF") << endl;

    // Test addition of two hexadecimal numbers (string input)
    cout << "Hexadecimal addition of 'A1' and 'BE': " << mlh::hexAdd("A1", "BE") << endl;

    // Test subtraction of two hexadecimal numbers (string input)
    cout << "Hexadecimal subtraction of 'BE' and 'A1': " << mlh::hexSub("BE", "A1") << endl;

    // Test multiplication of two hexadecimal numbers (string input)
    cout << "Hexadecimal multiplication of 'A' and 'B': " << mlh::hexMul("A", "B") << endl;

    // Test division of two hexadecimal numbers (string input)
    cout << "Hexadecimal division of '64' and '8': " << mlh::hexDiv("64", "8") << endl;

    // Test addition of two decimal numbers (integer input) and returning result as hex
    cout << "Decimal addition of 10 and 20 (result in Hex): " << mlh::hexAdd(10, 20) << endl;

    // Test subtraction of two decimal numbers (integer input) and returning result as hex
    cout << "Decimal subtraction of 30 and 10 (result in Hex): " << mlh::hexSub(30, 10) << endl;

    // Test multiplication of two decimal numbers (integer input) and returning result as hex
    cout << "Decimal multiplication of 5 and 5 (result in Hex): " << mlh::hexMul(5, 5) << endl;

    // Test division of two decimal numbers (integer input) and returning result as hex
    cout << "Decimal division of 100 and 10 (result in Hex): " << mlh::hexDiv(100, 10) << endl;

    return 0;
}
