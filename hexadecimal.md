# Hexadecimal Operations

This C++ file provides various functions for performing hexadecimal calculations. This file uses the following standard C++ header files:

- `iostream`
- `sstream`
- `string`
- `stdexcept`

All functions are exported in the `mlb` namespace.

## Functions

### Input hexadecimal as string

#### `std::string decimalToHex(int decimalNumber)`

Converts a decimal number to its hexadecimal representation.

**Example:**

```cpp
int decimalNumber = 42;
std::string hexValue = mlb::decimalToHex(decimalNumber);
```

#### `int hexToDecimal(const std::string& hexStr)`

Converts a hexadecimal string to its decimal representation.

**Example:**

```cpp
std::string hexStr = "2A";
int decimalNumber = mlb::hexToDecimal(hexStr);
```

#### `std::string hexAdd(const std::string& hex1, const std::string& hex2)`

Performs the addition of two hexadecimal strings.

**Example:**

```cpp
std::string hex1 = "2A";
std::string hex2 = "1B";
std::string result = mlb::hexAdd(hex1, hex2);
```

#### `std::string hexSub(const std::string& hex1, const std::string& hex2)`

Performs the subtraction (hex1 - hex2) of two hexadecimal strings.

**Example:**

```cpp
std::string hex1 = "2A";
std::string hex2 = "1B";
std::string result = mlb::hexSub(hex1, hex2);
```

#### `std::string hexMul(const std::string& hex1, const std::string& hex2)`

Performs the multiplication of two hexadecimal strings.

**Example:**

```cpp
std::string hex1 = "2";
std::string hex2 = "A";
std::string result = mlb::hexMul(hex1, hex2);
```

#### `std::string hexDiv(const std::string& hex1, const std::string& hex2)`

Performs the division of two hexadecimal strings.

**Example:**

```cpp
std::string hex1 = "2A";
std::string hex2 = "2";
std::string result = mlb::hexDiv(hex1, hex2);
```

### Input hexadecimal as int

#### `std::string hexAdd(int num1, int num2)`

Performs the addition of two decimal numbers and returns the result as a hexadecimal string.

**Example:**

```cpp
int num1 = 42;
int num2 = 27;
std::string result = mlb::hexAdd(num1, num2);
```

#### `std::string hexSub(int num1, int num2)`

Performs the subtraction (num1 - num2) of two decimal numbers and returns the result as a hexadecimal string.

**Example:**

```cpp
int num1 = 42;
int num2 = 27;
std::string result = mlb::hexSub(num1, num2);
```

#### `std::string hexMul(int num1, int num2)`

Performs the multiplication of two decimal numbers and returns the result as a hexadecimal string.

**Example:**

```cpp
int num1 = 6;
int num2 = 5;
std::string result = mlb::hexMul(num1, num2);
```

#### `std::string hexDiv(int num1, int num2)`

Performs the division of two decimal numbers and returns the result as a hexadecimal string.

**Example:**

```cpp
int num1 = 36;
int num2 = 6;
std::string result = mlb::hexDiv(num1, num2);
```
