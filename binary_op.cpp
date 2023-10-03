#include<cmath>
#include<string>
#include<sstream>
#include<bitset>
#define  BITSET_VAL  16    // Assuming 8 bits fot bitset value

using namespace std;
namespace mlb {
    //function to convert decimal to binary
    string decimalToBinary(int decimalNumber) {
        stringstream ss;
        ss << bitset<BITSET_VAL>(decimalNumber); 
        return ss.str();
    }
    // Function to convert binary to decimal
    int binaryToDecimal(const string& binary) {
    int decimalNumber = stoi(binary, nullptr, 2);
    return decimalNumber;
    }
    // Function to add two binary numbers from string type input (binary1 + binary2)
    string binaryAdd(const string& binary1,const string& binary2) {
        bitset<BITSET_VAL> result;
        bitset<BITSET_VAL>b1(binary1);
        bitset<BITSET_VAL>b2(binary2);

        // Perform binary multiplication
        result = b1.to_ulong() + b2.to_ulong();
        return result.to_string();
    
    }
    // Function to subtract two binary numbers from string type input (binary1 - binary2)
    string binarySub(const string& binary1,const string& binary2) {
        bitset<BITSET_VAL> result;
        bitset<BITSET_VAL>b1(binary1);
        bitset<BITSET_VAL>b2(binary2);
        // Perform binary multiplication
        result = b1.to_ulong() - b2.to_ulong();
        return result.to_string();

    }
    // Function to multiply two binary numbers from string type input (binary1 * binary2)
    string binaryMul(const string& binary1, const string& binary2) {
        bitset<BITSET_VAL> result;

        bitset<BITSET_VAL>b1(binary1);
        bitset<BITSET_VAL>b2(binary2);

        // Perform binary multiplication
        result = b1.to_ulong() * b2.to_ulong();
        return result.to_string();
    }
    // Function to divide two binary numbers from string type input (binary1 / binary2)
    string binaryDiv(const string& binary1, const string& binary2) {
        if (binary2 == "0") {
            throw invalid_argument("Division by zero is not allowed.");
        }
        bitset<BITSET_VAL> result;

        bitset<BITSET_VAL>b1(binary1);
        bitset<BITSET_VAL>b2(binary2);

        // Perform binary multiplication
        result = b1.to_ulong() / b2.to_ulong();
        return result.to_string();
       
    }
    // Function to add two binary numbers from int type input (binary1 + binary2)
     string binaryAdd(int num1, int num2) {
         string s1 = decimalToBinary(num1);
         string s2 = decimalToBinary(num2);
         string s3 = binaryAddition(s1, s2);
        return s3;
    }
    // Function to subtract two binary numbers from int type input (binary1 - binary2)
    string binarySub(int num1, int num2) {
         string s1 = decimalToBinary(num1);
         string s2 = decimalToBinary(num2);
         string s3 = binarySubtraction(s1, s2);
        return s3;
    }
    // Function to multiply two binary numbers from int type input (binary1 * binary2)
    string binaryMul(int num1, int num2) {
         string s1 = decimalToBinary(num1);
         string s2 = decimalToBinary(num2);
         string s3 = binaryMultiplication(s1, s2);
        return s3;
    }
    // Function to divide two binary numbers from int type input (binary1 / binary2)
    string binaryDiv(int num1, int num2) {
        string s1 = decimalToBinary(num1);
        string s2 = decimalToBinary(num2);
        string s3 = binaryDivision(s1, s2);
        return s3;
    }
};


