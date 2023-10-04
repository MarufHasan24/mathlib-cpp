# Complex Number Class

The `Complex` class is a C++ class that represents complex numbers with real and imaginary parts. It provides methods for performing various operations on complex numbers.

# Class Details

### `Constructor`
**Complex(double r, double i)**
**Creates a complex number with the given real and imaginary parts.**
```cpp
Complex a(3.0, 4.0);
Complex b(1.0, -2.0);
```



### `Getter Functions`

**double getReal() const**
**double getImaginary() const**
**Returns the real and imaginary parts of the complex number, respectively.**
```cpp
Complex a(3.0, 4.0);
a.getReal();
a.getImaginary();
```


### `Magnitude`
**double magnitude() const**
**Calculates and returns the magnitude (absolute value) of the complex number.**
```cpp
Complex a(3.0, 4.0);
a.magnitude();
```


### `Phase`
**double phase() const**
**Calculates and returns the phase (argument) of the complex number in radians.**
```cpp
Complex a(3.0, 4.0);
a.phase();
```


### `Addition Operator`
**Complex operator+(const Complex& other) const**
**Overloads the + operator to perform complex number addition.**
```cpp
Complex a(3.0, 4.0);
Complex b(1.0, -2.0);
cout<<a+b<<endl;

```


### `Subtraction Operator`
**Complex operator-(const Complex& other) const**
**Overloads the - operator to perform complex number subtraction.**
```cpp
Complex a(3.0, 4.0);
Complex b(1.0, -2.0);
cout<<a-b<<endl;

```


### `Multiplication Operator`
__Complex operator*(const Complex& other) const__
**Overloads the * operator to perform complex number multiplication.**
```cpp
Complex a(3.0, 4.0);
Complex b(1.0, -2.0);
cout<<a*b<<endl;
```


### `Division Operator`
__Complex operator/(const Complex& other) const__
**Overloads the / operator to perform complex number division.**
```cpp
Complex a(3.0, 4.0);
Complex b(1.0, -2.0);
cout<<a/b<<endl;
```


### `Display`
**void display() const**
**Displays the complex number in a user-friendly format.**
```cpp
Complex a(3.0, 4.0);
a.display();
```











Complex a(3.0, 4.0);
    Complex b(1.0, -2.0);

    // Perform operations
    Complex sum = a + b;
    Complex diff = a - b;
    Complex product = a * b;
    Complex quotient = a / b;

    // Display results
    std::cout << "a = ";
    a.display();
    std::cout << std::endl;

    std::cout << "b = ";
    b.display();
    std::cout << std::endl;

    std::cout << "a + b = ";
    sum.display();
    std::cout << std::endl;

    std::cout << "a - b = ";
    diff.display();
    std::cout << std::endl;

    std::cout << "a * b = ";
    product.display();
    std::cout << std::endl;

    std::cout << "a / b = ";
    quotient.display();
    std::cout << std::endl;
