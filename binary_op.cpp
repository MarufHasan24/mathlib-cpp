#include<cmath>
#include<iostream>
#include<string>
#include<stdexcept>

#define  BITSET_VAL  16    // Assuming 8 bits fot bitset value


namespace mlb {

    //function to convert decimal to binary
    std::string decimalToBinary(int decimalNumber) {
        std::stringstream ss;
        ss << std::bitset<BITSET_VAL>(decimalNumber); 
        return ss.str();
    }
   
    // Function to convert binary to decimal
    int binaryToDecimal( std::string& binary) {
        int decimalNumber = std::stoi(binary, nullptr, 2);;
        return decimalNumber;
    }

    std::string binaryAddition(std::string& binary1,  std::string& binary2) {
        std::bitset<BITSET_VAL> result;

        std::bitset<BITSET_VAL>b1(binary1);
        std::bitset<BITSET_VAL>b2(binary2);

        // Perform binary multiplication
        result = b1.to_ulong() + b2.to_ulong();
        return result.to_string();
    
    }

    // Function to subtract two binary numbers (binary1 - binary2)
    std::string binarySubtraction(std::string& binary1, std::string& binary2) {
        std::bitset<BITSET_VAL> result;

        std::bitset<BITSET_VAL>b1(binary1);
        std::bitset<BITSET_VAL>b2(binary2);

        // Perform binary multiplication
        result = b1.to_ulong() - b2.to_ulong();
        return result.to_string();

    }

    // Function to multiply two binary numbers
    std::string binaryMultiplication( std::string& binary1,  std::string& binary2) {
        std::bitset<BITSET_VAL> result;

        std::bitset<BITSET_VAL>b1(binary1);
        std::bitset<BITSET_VAL>b2(binary2);

        // Perform binary multiplication
        result = b1.to_ulong() * b2.to_ulong();
        return result.to_string();
    }
    
    // Function to divide two binary numbers (integer division, returns quotient)
    std::string binaryDivision(const std::string& binary1, const std::string& binary2) {
        if (binary2 == "0") {
            throw std::invalid_argument("Division by zero is not allowed.");
        }
        std::bitset<BITSET_VAL> result;

        std::bitset<BITSET_VAL>b1(binary1);
        std::bitset<BITSET_VAL>b2(binary2);

        // Perform binary multiplication
        result = b1.to_ulong() / b2.to_ulong();
        return result.to_string();
       
    }
    std::string binaryAddition( int num1,  int num2)
    {
         std::string s1 = decimalToBinary(num1);
         std::string s2 = decimalToBinary(num2);
         std::string s3 = binaryAddition(s1, s2);

        return s3;
    }

    std::string binarySubtraction(int num1, int num2)
    {
         std::string s1 = decimalToBinary(num1);
         std::string s2 = decimalToBinary(num2);
         std::string s3 = binarySubtraction(s1, s2);
        return s3;
    }

    std::string binaryMultiplication(int num1,  int num2)
    {
         std::string s1 = decimalToBinary(num1);
         std::string s2 = decimalToBinary(num2);
         std::string s3 = binaryMultiplication(s1, s2);
       
        return s3;
    }
    std::string binaryDivision(int num1, int num2)
    {
        std::string s1 = decimalToBinary(num1);
        std::string s2 = decimalToBinary(num2);
        std::string s3 = binaryDivision(s1, s2);

        return s3;
    }
};


