
# Binary Operations Library

This C++ library provides various functions for performing binary calculations. It uses the `std::bitset` class to handle binary representations.

## Functions

### `std::string decimalToBinary(int decimalNumber)`

This function converts a decimal number to its binary representation and returns it as a string.

**Example:**

```cpp
int decimalNumber = 42;
std::string binary = mlb::decimalToBinary(decimalNumber);
```


### `int binaryToDecimal(std::string& binary)`
This function converts a binary string to its decimal representation and returns it as an integer.

**Example:**
```cpp 
std.::string binary = "1010";
int decimalNumber = mlb::binaryToDecimal(binary);
```

### `std::string binaryAddition(std::string& binary1, std::string& binary2)`
This function performs binary addition of two binary strings and returns the result as a binary string.
**Example:**
```cpp
std::string binary1 = "1010";
std::string binary2 = "1101";
std::string result = mlb::binaryAddition(binary1, binary2);
```

### `std::string binarySubtraction(std::string& binary1, std::string& binary2)`
This function performs binary subtraction (binary1 - binary2) of two binary strings and returns the result as a binary string.

**Example:**
```cpp
std::string binary1 = "1010";
std::string binary2 = "1101";
std::string result = mlb::binarySubtraction(binary1, binary2);
```

### `std::string binaryMultiplication(std::string& binary1, std::string& binary2)`
This function performs binary multiplication of two binary strings and returns the result as a binary string.

**Example:**
```cpp
std::string binary1 = "1010";
std::string binary2 = "1101";
std::string result = mlb::binaryMultiplication(binary1, binary2);
```

### `std::string binaryDivision(const std::string& binary1, const std::string& binary2)`
This function performs binary division (integer division, returns quotient) of two binary strings and returns the result as a binary string.

**Example:**
```cpp
std::string binary1 = "1010";
std::string binary2 = "1101";
std::string result = mlb::binaryDivision(binary1, binary2);
```

### `std::string binaryAddition(int num1, int num2)`
This function performs binary addition of two decimal numbers and returns the result as a binary string. It internally uses decimalToBinary and binaryAddition functions.

**Example:**
```cpp
int num1 = 42;
int num2 = 13;
std::string result = mlb::binaryAddition(num1, num2);
```

### `std::string binarySubtraction(int num1, int num2)`
This function performs binary subtraction (num1 - num2) of two decimal numbers and returns the result as a binary string. It internally uses decimalToBinary and binarySubtraction functions.

**Example:**
```cpp
int num1 = 42;
int num2 = 13;
std::string result = mlb::binarySubtraction(num1, num2);
```

### `std::string binaryMultiplication(int num1, int num2)`
This function performs binary multiplication of two decimal numbers and returns the result as a binary string. It internally uses decimalToBinary and binaryMultiplication functions.

**Example:**
```cpp
int num1 = 6;
int num2 = 5;
std::string result = mlb::binaryMultiplication(num1, num2);
```
### `std::string binaryDivision(int num1, int num2)`
This function performs binary division (integer division, returns quotient) of two decimal numbers and returns the result as a binary string. It internally uses decimalToBinary and binaryDivision functions.

**Example:**
```cpp
int num1 = 36;
int num2 = 6;
std::string result = mlb::binaryDivision(num1, num2);
```
