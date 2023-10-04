#include <iostream>
#include <string>
#include <cmath>

namespace mlb {
    class Complex {
    private:
        double real;
        double imaginary;

    public:
        // Constructor
        Complex(double r, double i) : real(r), imaginary(i) {}

        // Getter functions
        double getReal() const {
            return real;
        }

        double getImaginary() const {
            return imaginary;
        }

        // Function to calculate the magnitude of the complex number
        double magnitude() const {
            return sqrt(real * real + imaginary * imaginary);
        }

        // Function to calculate the phase (argument) of the complex number in radians
        double phase() const {
            return atan2(imaginary, real);
        }

        // Overloaded addition operator
        Complex operator+(const Complex& other) const {
            return Complex(real + other.real, imaginary + other.imaginary);
        }

        // Overloaded subtraction operator
        Complex operator-(const Complex& other) const {
            return Complex(real - other.real, imaginary - other.imaginary);
        }

        // Overloaded multiplication operator
        Complex operator*(const Complex& other) const {
            return Complex(real * other.real - imaginary * other.imaginary,
                real * other.imaginary + imaginary * other.real);
        }

        // Overloaded division operator
        Complex operator/(const Complex& other) const {
            double denominator = other.real * other.real + other.imaginary * other.imaginary;
            return Complex((real * other.real + imaginary * other.imaginary) / denominator,
                (imaginary * other.real - real * other.imaginary) / denominator);
        }

        // Function to display the complex number
        void display() const {
            if (imaginary >= 0) {
                std::cout << real << " + " << imaginary << "i";
            }
            else {
                std::cout << real << " - " << -imaginary << "i";
            }
        }
    };
}


