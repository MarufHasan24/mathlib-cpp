#include <iostream>
#include "../matrix.cpp"


void display(vector<vector<double>>matrix)
{
    int R = matrix.size();
    int C = matrix[0].size();
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}
int main() {
    // Example usage
    mlb::Matrix mat1({ {1.5,2.5,3.5,},{4.5, 5.5, 6.5}, {7.5, 8.5, 9.5} }); // Create a 3x3 matrix with all zeros
    mlb::Matrix mat2({ {1.5, 2, 3}, {4, 5, 6}, {7, 8, 9} }); // Create a matrix with a provided 2D array

    // Perform matrix operations
    mlb::Matrix sum = mat1.add(mat2);
    mlb::Matrix difference = mat1.sub(mat2);
    mlb::Matrix elementWiseDivision = mat1.div(mat2);

    // Calculate determinant and inverse
    double determinant = mat2.det();


    // Display the results
    cout << "Matrix 1:" << endl;
    display(mat1.getMatrix());

    cout << "Matrix 2:" << endl;
    display(mat2.getMatrix());

    cout << "Matrix Sum:" << endl;
    display(sum.getMatrix());

    cout << "Matrix Difference:" << endl;
    display(difference.getMatrix());

    cout << "Element-Wise Division:" << endl;
    display(elementWiseDivision.getMatrix());

    cout << "Determinant of Matrix 2: " << determinant << endl;

    return 0;
}