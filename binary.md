# Binary Operations

This C++ file provides various functions for performing binary calculations. This file use following header files:

- `cmath`
- `string`
- `bitset`
- `sstream`

all are standard C++ header files. This export all functions in `mlb` namespace.

## Functions

### input binary as string

#### `std::string decimalToBinary(int decimalNumber)`

This function converts a decimal number to its binary representation and returns it as a string.

**Example:**

```cpp
int decimalNumber = 42;
std::string binary = mlb::decimalToBinary(decimalNumber);
```

#### `int binaryToDecimal(std::string& binary)`

This function converts a binary string to its decimal representation and returns it as an integer.

**Example:**

```cpp
std.::string binary = "1010";
int decimalNumber = mlb::binaryToDecimal(binary);
```

#### `std::string binaryAdd(std::string& binary1, std::string& binary2)`

This function performs binary addition of two binary strings and returns the result as a binary string.
**Example:**

```cpp
std::string binary1 = "1010";
std::string binary2 = "1101";
std::string result = mlb::binaryAdd(binary1, binary2);
```

#### `std::string binarySub(std::string& binary1, std::string& binary2)`

This function performs binary subtraction (binary1 - binary2) of two binary strings and returns the result as a binary string.

**Example:**

```cpp
std::string binary1 = "1010";
std::string binary2 = "1101";
std::string result = mlb::binarySub(binary1, binary2);
```

#### `std::string binaryMul(std::string& binary1, std::string& binary2)`

This function performs binary multiplication of two binary strings and returns the result as a binary string.

**Example:**

```cpp
std::string binary1 = "1010";
std::string binary2 = "1101";
std::string result = mlb::binaryMul(binary1, binary2);
```

#### `std::string binaryDiv(const std::string& binary1, const std::string& binary2)`

This function performs binary division (integer division, returns quotient) of two binary strings and returns the result as a binary string.

**Example:**

```cpp
std::string binary1 = "1010";
std::string binary2 = "1101";
std::string result = mlb::binaryDiv(binary1, binary2);
```

### input binary as int

#### `std::string binaryAdd(int num1, int num2)`

This function performs binary addition of two decimal numbers and returns the result as a binary string. It internally uses decimalToBinary and binaryAdd functions.

**Example:**

```cpp
int num1 = 42;
int num2 = 13;
std::string result = mlb::binaryAdd(num1, num2);
```

#### `std::string binarySub(int num1, int num2)`

This function performs binary subtraction (num1 - num2) of two decimal numbers and returns the result as a binary string. It internally uses decimalToBinary and binarySub functions.

**Example:**

```cpp
int num1 = 42;
int num2 = 13;
std::string result = mlb::binarySub(num1, num2);
```

#### `std::string binaryMul(int num1, int num2)`

This function performs binary multiplication of two decimal numbers and returns the result as a binary string. It internally uses decimalToBinary and binaryMul functions.

**Example:**

```cpp
int num1 = 6;
int num2 = 5;
std::string result = mlb::binaryMul(num1, num2);
```

#### `std::string binaryDiv(int num1, int num2)`

This function performs binary division (integer division, returns quotient) of two decimal numbers and returns the result as a binary string. It internally uses decimalToBinary and binaryDiv functions.

**Example:**

```cpp
int num1 = 36;
int num2 = 6;
std::string result = mlb::binaryDiv(num1, num2);
```
