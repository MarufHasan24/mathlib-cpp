#include <iostream>
#include <sstream>
#include <string>
#include <stdexcept>

using namespace std;

namespace mlb
{
    // Function to convert decimal to hexadecimal
    string decimalToHex(int decimalNumber)
    {
        stringstream ss;
        ss << hex << uppercase << decimalNumber;
        return ss.str();
    }

    // Function to convert hexadecimal to decimal
    int hexToDecimal(const string &hexStr)
    {
        int decimalNumber;
        stringstream ss(hexStr);
        ss >> hex >> decimalNumber;
        return decimalNumber;
    }

    // Function to add two hexadecimal numbers
    string hexAdd(const string &hex1, const string &hex2)
    {
        int num1 = hexToDecimal(hex1);
        int num2 = hexToDecimal(hex2);
        int sum = num1 + num2;
        return decimalToHex(sum);
    }

    // Function to subtract two hexadecimal numbers
    string hexSub(const string &hex1, const string &hex2)
    {
        int num1 = hexToDecimal(hex1);
        int num2 = hexToDecimal(hex2);
        return decimalToHex(num1 - num2);
    }

    // Function to multiply two hexadecimal numbers
    string hexMul(const string &hex1, const string &hex2)
    {
        int num1 = hexToDecimal(hex1);
        int num2 = hexToDecimal(hex2);
        return decimalToHex(num1 * num2);
    }

    // Function to divide two hexadecimal numbers
    string hexDiv(const string &hex1, const string &hex2)
    {
        int num1 = hexToDecimal(hex1);
        int num2 = hexToDecimal(hex2);
        if (num2 == 0)
        {
            throw invalid_argument("Division by zero is not allowed.");
        }
        return decimalToHex(num1 / num2);
    }

    string hexAdd(int num1, int num2)
    {
        return decimalToHex(num1 + num2);
    }

    string hexSub(int num1, int num2)
    {
        return decimalToHex(num1 - num2);
    }

    string hexMul(int num1, int num2)
    {
        return decimalToHex(num1 * num2);
    }

    string hexDiv(int num1, int num2)
    {
        if (num2 == 0)
        {
            throw invalid_argument("Division by zero is not allowed.");
        }
        return decimalToHex(num1 / num2);
    }
};
