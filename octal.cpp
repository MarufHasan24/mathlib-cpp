#include <string>
#include <sstream>
#include <bitset>
#include <stdexcept>

using namespace std;

#define BITSET_VAL 16 // Assuming 8 bits for bitset value

namespace mlb {
    // Function to convert decimal to octal
    string decimalToOctal(int &decimalNumber) {
        std::stringstream ss;
        ss << std::oct << decimalNumber;
        return ss.str();
    }

    // Function to convert octal to decimal
    int octalToDecimal(string& octal) {
        int decimalNumber = stoi(octal, nullptr, 8);
        return decimalNumber;
    }

    // Function to add two octal numbers
    string octalAddition(string& octal1, string& octal2) {
        int decimal1 = octalToDecimal(octal1);
        int decimal2 = octalToDecimal(octal2);
        int sum = decimal1 + decimal2;
        return decimalToOctal(sum);
    }

    // Function to subtract two octal numbers (octal1 - octal2)
    string octalSubtraction(string& octal1, string& octal2) {
        int decimal1 = octalToDecimal(octal1);
        int decimal2 = octalToDecimal(octal2);
        int difference = decimal1 - decimal2;
        return decimalToOctal(difference);
    }

    // Function to multiply two octal numbers
    string octalMultiplication(string& octal1, string& octal2) {
        int decimal1 = octalToDecimal(octal1);
        int decimal2 = octalToDecimal(octal2);
        int product = decimal1 * decimal2;
        return decimalToOctal(product);
    }

    // Function to divide two octal numbers (integer division, returns quotient)
    string octalDivision(string& octal1, string& octal2) {
        int decimal1 = octalToDecimal(octal1);
        int decimal2 = octalToDecimal(octal2);
        if (decimal2 == 0) {
            throw invalid_argument("Division by zero is not allowed.");
        }
        int quotient = decimal1 / decimal2;
        return decimalToOctal(quotient);
    }
    string octalAddition(int& decimal1, int& decimal2) {
        int sum = decimal1 + decimal2;
        return decimalToOctal(sum);
    }

    // Function to subtract two octal numbers (octal1 - octal2)
    string octalSubtraction(int& decimal1, int& decimal2) {
        int difference = decimal1 - decimal2;
        return decimalToOctal(difference);
    }

    // Function to multiply two octal numbers
    string octalMultiplication(int& decimal1, int& decimal2) {
        int product = decimal1 * decimal2;
        return decimalToOctal(product);
    }

    // Function to divide two octal numbers (integer division, returns quotient)
    string octalDivision(int& decimal1, int& decimal2) {
        if (decimal2 == 0) {
            throw invalid_argument("Division by zero is not allowed.");
        }
        int quotient = decimal1 / decimal2;
        return decimalToOctal(quotient);
    }
};

