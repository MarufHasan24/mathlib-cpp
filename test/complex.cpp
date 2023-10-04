#include <iostream>
#include "../complex.cpp"

using namespace mlb;

int main() {
    // Create two complex numbers
    Complex a(3.0, 4.0);
    Complex b(1.0, -2.0);
    // Perform operations
    Complex sum = a + b;
    Complex diff = a - b;
    Complex product = a * b;
    Complex quotient = a / b;
    std::cout << "Magnitude of a = " << a.magnitude() << std::endl;
    std::cout << "Phase of a = " << a.phase() << " radians" << std::endl;
    return 0;
}
