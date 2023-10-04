# Octal Number Conversion and Operations
This C++ namespace mlb provides a set of functions for working with octal numbers. Octal numbers are base-8 numbers, often represented with digits 0-7. 
These functions allow you to perform various operations, including conversion between decimal and octal, addition, subtraction, multiplication, and division of octal numbers.
This file use following header files:

- `cmath`
- `string`
- `bitset`
- `sstream`
- `stdexcept`

## Functions

### `string decimalToOctal(int &decimalNumber)`
This function converts a decimal number to its octal representation.

**Example:**
```cpp
int decimal = 42;
string octal = mlb::decimalToOctal(decimal);
```
### `int octalToDecimal(string& octal)`
This function converts an octal number (as a string) to its decimal representation.

**Example:**
```cpp
string octal = "52";
int decimal = mlb::octalToDecimal(octal);
```
### `string octalAddition(string& octal1, string& octal2)`
This function adds two octal numbers and returns the result as an octal string.

**Example:**

```cpp
string octal1 = "42";
string octal2 = "17";
string sum = mlb::octalAddition(octal1, octal2);
```
### `string octalSubtraction(string& octal1, string& octal2)`
This function subtracts one octal number from another and returns the result as an octal string.

**Example:**
```cpp
string octal1 = "64";
string octal2 = "17";
string difference = mlb::octalSubtraction(octal1, octal2);
```

### `string octalMultiplication(string& octal1, string& octal2)`
This function multiplies two octal numbers and returns the result as an octal string.

**Example:**

```cpp
string octal1 = "52";
string octal2 = "25";
string product = mlb::octalMultiplication(octal1, octal2);
```

### `string octalDivision(string& octal1, string& octal2)`
This function divides one octal number by another (integer division) and returns the quotient as an octal string.

**Example:**

```cpp
string octal1 = "100";
string octal2 = "20";
string quotient = mlb::octalDivision(octal1, octal2);
```

### `string octalAddition(int& decimal1, int& decimal2)`
This overload of the addition function allows you to add two decimal numbers and returns the result as an octal string.

**Example:**
```cpp
int decimal1 = 42;
int decimal2 = 17;
string sum = mlb::octalAddition(decimal1, decimal2);
```
### `string octalSubtraction(int& decimal1, int& decimal2)`
This overload of the subtraction function allows you to subtract one decimal number from another and returns the result as an octal string.

**Example:**
```
cpp
int decimal1 = 64;
int decimal2 = 17;
string difference = mlb::octalSubtraction(decimal1, decimal2);
```
###	`string octalMultiplication(int& decimal1, int& decimal2)`
This overload of the multiplication function allows you to multiply two decimal numbers and returns the result as an octal string.

**Example:**
```
cpp
int decimal1 = 52;
int decimal2 = 25;
string product = mlb::octalMultiplication(decimal1, decimal2);
```
### `string octalDivision(int& decimal1, int& decimal2)`
This overload of the division function allows you to divide one decimal number by another (integer division) and returns the quotient as an octal string.

** Example:**
```
cpp
int decimal1 = 100;
int decimal2 = 20;
string quotient = mlb::octalDivision(decimal1, decimal2);
```
**Note:** 
These functions provide a convenient way to work with octal numbers in C++. 
Ensure that the input values are valid octal or decimal representations as needed. 
Division by zero is also handled with an exception in the octalDivision functions.
