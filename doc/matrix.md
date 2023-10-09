# mlb::Matrix - C++ Matrix Class

`mlb::Matrix` is a C++ class that provides functionalities for working with matrices, including matrix creation, addition, subtraction, multiplication, division, and determinant calculation.

## Table of Contents

- [Introduction](#introduction)
- [Functions](#functions)
  - [Constructor](#constructor)
  - [validMatrix](#validmatrix)
  - [determinant](#determinant)
  - [det](#det)
  - [add](#add)
  - [sub](#sub)
  - [mul](#mul)
  - [div](#div)

## Introduction

`mlb::Matrix` is a C++ class designed to work with matrices. It provides a variety of functions for matrix operations, including addition, subtraction, multiplication, division, and determinant calculation. The class is intended to make working with matrices in C++ easier and more efficient.

## Functions

### Constructor

```cpp
Matrix(int row, int col);
mlb::Matrix mat(3,3);
```

This constructor initializes a matrix with the specified number of rows and columns. It checks for valid input and throws an exception if the input is invalid.

### `validMatrix`

**bool validMatrix(const vector<vector<double>>& mat)**

```cpp
 mlb::Matrix mat2({ {1.5, 2, 3}, {4, 5, 6}, {7, 8, 9} });
bool isValid = mat2.validMatrix(mat2.matrix);
```

This function checks if a given matrix is valid, ensuring that all rows have the same length.

### `determinant`

**double determinant(vector<vector<double>>& mat)**

This function  is private calculates the determinant of a square matrix using a recursive algorithm based on cofactor expansion.

### `det`

**double det()**

```cpp
mlb::Matrix mat2({ {1.5, 2, 3}, {4, 5, 6}, {7, 8, 9} });
double determinant = mat2.det();
```

This member function calculates the determinant of the matrix and returns the result. It checks if the matrix is square before performing the calculation.

## `add`

**Matrix add(const Matrix& other)**

```cpp
mlb::Matrix mat1(3,3);
mlb::Matrix mat2({ {1.5, 2, 3}, {4, 5, 6}, {7, 8, 9} });
Matrix sum = mat2.add(mat1);
```

This member function performs matrix addition with another matrix and returns the result. It checks for matrix size compatibility.

### `sub`

**Matrix sub(const Matrix& other)**

```cpp
mlb::Matrix mat1(3,3);
mlb::Matrix mat2({ {1.5, 2, 3}, {4, 5, 6}, {7, 8, 9} });
Matrix difference = mat1.sub(mat2);
```

This member function performs matrix subtraction with another matrix and returns the result. It checks for matrix size compatibility.

### `mul`

**Matrix mul(const Matrix& other)**

```cpp
mlb::Matrix mat1(3,3);
mlb::Matrix mat2({ {1.5, 2, 3}, {4, 5, 6}, {7, 8, 9} });
Matrix product = mat1.mul(mat2);
````

This member function performs matrix multiplication with another matrix and returns the result. It checks for matrix size compatibility and performs the multiplication.

### `div`

**Matrix div(const Matrix& other)**

```cpp
mlb::Matrix mat1(3,3);
mlb::Matrix mat2({ {1.5, 2, 3}, {4, 5, 6}, {7, 8, 9} });
Matrix product = mat1.div(mat2);
```

This member function performs element-wise division of the matrix by another matrix and returns the result. It checks for matrix size compatibility.

### `Usage`

To use the mlb::Matrix class in your C++ project, include the matrix.h header file and create instances of mlb::Matrix to work with matrices. You can then use the member functions to perform various matrix operations.
