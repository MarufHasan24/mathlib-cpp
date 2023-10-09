#include "../matrix.cpp"
#include "../scripts/tester.cpp"

using namespace std;
using namespace mlb;

int display(vector<vector<double>> matrix, int row, int col)
{
    return matrix[row][col];
}

int main()
{
    tester::describe("Matrix", []()
                     {
                         Matrix mat1({{
                     1.5,
                     2.5,
                     3.5,
                 },
                 {4.5, 5.5, 6.5},
                 {7.5, 8.5, 9.5}}); // Create a 3x3 matrix with all zeros
    Matrix mat2({{
                     1,
                     2.5,
                     3,
                 },
                 {4, 5.5, 4},
                 {3, 9, 1}}); 
    // print matrix
    float **sum = toArray(mat1.add(mat2));
    float **difference = toArray(mat1.sub(mat2));
    float **product = toArray(mat1.mul(mat2));
    float **quotient = toArray(mat1.div(mat2));
    tester::toEq("Matrix Addition", 8.5, sum[1][0]);
    tester::toEq("Matrix Subtraction", 0.5, difference[1][0]);
    tester::toEq("Matrix Multiplication", 49, product[0][1]);
    tester::toEq("Matrix Multiplication", 18, product[0][2]);
    tester::toEq("Matrix Division", 1, quotient[0][1]);
    tester::toEq("Matrix Division", 2.5, quotient[2][0]); });
    return 0;
}