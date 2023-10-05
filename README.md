# Mathlib-cpp

## About

This is a C++ library that I wrote. It provides a number of useful utilities, including:

- Mathematical functions (e.g., addition, subtraction, multiplication, division)
- Determining if a number is odd, prime, and more.
- Solving quadratic equations (ax^2 + bx + c = 0) and linear equations (ax + by = c).
- Measuring volume, area, length, angles, and more for various shapes using only their vertex points.
- Providing access to 20+ essential mathematical constants.

## Installation

To install this library, you can either download the source code and build it yourself, or you can use a pre-built package.

To build the library from source, you will need to have CMake installed. Once you haveCMake installed, you can clone the library repository and run the following command:

## Usage

To use the library, you will need to include the library header file in your source code:

```c++
#include "mathlib-cpp/index.cpp"
```

Then, you can use the library functions like any other function in your code. For example, to calculate the sum of two numbers, you would use the following code:

```c++
int arr[] = {1, 2, 3, 4, 5};
int sum = mlb::add(arr, 5);

```

## Documentation

For extensive documentation, visit the [MathLib-cpp Documentation](https://marufhasan24.github.io/mathlib_wiki/cpp/wiki.html).

Bainary documentation: <https://github.com/MarufHasan24/mathlib-cpp/wiki/Bainary-Mathlib‐cpp>

Hexadecimal documentation: <https://github.com/MarufHasan24/mathlib-cpp/wiki/Hexadecimal-Mathlib‐cpp>

Octal documentation: <https://github.com/MarufHasan24/mathlib-cpp/wiki/Octal-Mathlib‐cpp>

Complex Number : <https://github.com/MarufHasan24/mathlib-cpp/wiki/Complex-Number>

## Example

Here is a simple example of how to use the library:

```c++
#include <iostream>
#include "mathlib-cpp/index.cpp"

int main() {
  // Calculate the sum of some numbers
  int arr[] = {1, 2, 3, 4, 5};
  int sum = mlb::add(arr, 5);

  // Print the sum to the console.
  std::cout << "The sum is: " << sum << std::endl;

  return 0;
}
```

## Key Functions

Here's a taste of the functions provided by **MathLib-cpp**:

1. `int add(int a[], int len);`

   - Description: Computes the sum of elements in an integer array.
   - Usage Example: `add(arr, length)` returns the sum of all elements in the array `arr` of length `length`.

2. `int sub(int a[], int len);`

   - Description: Calculates the result of subtracting all elements in an integer array from the first element.
   - Usage Example: `sub(arr, length)` returns the result of subtracting all elements in the array `arr` from the first element.

3. `int mul(int a[], int len);`

   - Description: Multiplies all elements in an integer array together.
   - Usage Example: `mul(arr, length)` returns the product of all elements in the array `arr`.

4. `float div(int a[], int len);`

   - Description: Computes the result of dividing the first element in an integer array by the product of the rest of the elements.
   - Usage Example: `div(arr, length)` returns the result of dividing the first element in the array `arr` by the product of the rest of the elements.

5. `float avg(int a[], int len);`

   - Description: Calculates the average of elements in an integer array.
   - Usage Example: `avg(arr, length)` returns the average value of the elements in the array `arr`.

6. `float logx(int base, int x);`

   - Description: Computes the logarithm of `x` with the specified `base`.
   - Usage Example: `logx(base, x)` returns the logarithm of `x` with the base `base`.

7. `float rootx(int base, int x);`

   - Description: Calculates the `base`-th root of `x`.
   - Usage Example: `rootx(base, x)` returns the `base`-th root of `x`.

8. `int random(int min, int max);`

   - Description: Generates a random integer between `min` and `max`.
   - Usage Example: `random(min, max)` returns a random integer within the specified range.

9. `double limit(int tt, int (*fc)(int));`

   - Description: Evaluates the limit of a given mathematical function `fc` as the variable approaches `tt`.
   - Usage Example: `limit(tt, function)` calculates the limit of the provided function as it approaches `tt`.

10. `double fact(int n);`

    - Description: Computes the factorial of an integer `n`.
    - Usage Example: `fact(n)` returns the factorial of `n`.

11. `float* linearEq(float x[], float y[]);`

    - Description: Solves a system of linear equations with one variable using the provided arrays of `x` and `y` values.
    - Usage Example: `linearEq(x, y)` returns an array containing the solution to the linear equation system.
    - Note: If the system has no solution, the function returns `NULL`. It will return the pointer to the result array.

12. `float* quadEq(float a, float b, float c);`

    - Description: Solves a quadratic equation with coefficients `a`, `b`, and `c`.
    - Usage Example: `quadEq(a, b, c)` returns an array containing the roots of the quadratic equation.
    - Note: If the equation has no real roots, the function returns `NULL`. It will return the pointer to the result array.

13. `bool isPrime(int n);`

    - Description: Checks if an integer `n` is a prime number.
    - Usage Example: `isPrime(n)` returns `true` if `n` is prime; otherwise, it returns `false`.

14. `bool isOdd(int n);`

    - Description: Determines if an integer `n` is an odd number.
    - Usage Example: `isOdd(n)` returns `true` if `n` is odd; otherwise, it returns `false`.

15. `int sums(int start, int end, int (*fc)(int));`

    - Description: Calculates the sum of function values from `start` to `end` using the provided function `fc`.
    - Usage Example: `sums(start, end, function)` returns the sum of function values within the specified range.

16. `double combo(int n, int r);`

    - Description: Computes the number of combinations (n choose r) for given values of `n` and `r`.
    - Usage Example: `combo(n, r)` returns the number of combinations of `n` items taken `r` at a time.

17. `double permt(int n, int r);`

    - Description: Calculates the number of permutations for given values of `n` and `r`.
    - Usage Example: `permt(n, r)` returns the number of permutations of `n` items taken `r` at a time.

18. `int gcd(int a, int b);`

    - Description: Finds the greatest common divisor (GCD) of two integers `a` and `b`.
    - Usage Example: `gcd(a, b)` returns the GCD of `a` and `b`.

19. `int lcm(int a, int b);`

    - Description: Calculates the least common multiple (LCM) of two integers `a` and `b`.
    - Usage Example: `lcm(a, b)` returns the LCM of `a` and `b`.

20. `int* primes(int start, int end);`
    - Description: Generates an array of prime numbers within the specified range `[start, end]`.
    - Usage Example: `primes(start, end)` returns an array of prime numbers between `start` and `end`.
    - Note: It will return the pointer to the result array.

## License

This library is licensed under the MIT License. You can find the full license text in the `LICENSE` file.

## Support

If you have questions, bug reports, feature requests, or need general assistance, don't hesitate to reach out at <gamerid703@gmail.com>, or create an issue on the GitHub repository.
