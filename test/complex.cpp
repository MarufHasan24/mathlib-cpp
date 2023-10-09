#include "../complex.cpp"
#include "../scripts/tester.cpp"

using namespace mlb;
using namespace tester;

int main()
{
    // Test the magnitude function
    describe(
        "Magnitude of complex number", []()
        {
        Complex a(3.0, 4.0);
        Complex b(1.0, -2.0);
        // Perform operations
        Complex sum = a + b;
        Complex diff = a - b;
        Complex product = a * b;
        Complex quotient = a / b;
            toEq("Magnitude of a", 5, a.magnitude());
            toClose("Pahse of a", 0.927295, a.phase(), 0.00001); 
            toEq("Real part of sum", 4, sum.getReal());
            toEq("Imaginary part of sum", 2, sum.getImaginary());
            toEq("Real part of difference", 2, diff.getReal());
            toEq("Imaginary part of difference", 6, diff.getImaginary());
            toEq("Real part of product", 11, product.getReal());
            toEq("Imaginary part of product", -2, product.getImaginary());
            toEq("Real part of quotient", -1, quotient.getReal());
            toEq("Imaginary part of quotient", 2, quotient.getImaginary()); });
    return 0;
}
