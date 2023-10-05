#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

namespace mlb {
    class Matrix {
    private:
         vector<vector<double>> matrix;
        int row;
        int column;
        // Function to calculate the determinant of a square matrix
        double determinant(vector<vector<double>>& mat) {
            int n = mat.size();
            if (n == 0 || n != mat[0].size()) {
                throw invalid_argument("Input matrix must be a square matrix.");
            }

            if (n == 1) {
                return mat[0][0];
            }

            double det = 0.0;

            for (int i = 0; i < n; i++) {
                // Create a submatrix without the first row and i-th column
                vector<vector<double>> submatrix(n - 1, vector<double>(n - 1));
                for (int j = 1; j < n; j++) {
                    for (int k = 0, l = 0; k < n; k++) {
                        if (k == i) {
                            continue;
                        }
                        submatrix[j - 1][l++] = mat[j][k];
                    }
                }

                // Calculate the cofactor and recursively find the determinant
                double cofactor = mat[0][i] * determinant(submatrix);

                // Alternate signs for cofactors
                if (i % 2 == 1) {
                    cofactor = -cofactor;
                }

                det += cofactor;
            }

            return det;
        }

    public:
        // Constructor
        Matrix(int row, int col) : row(row), column(col) {
            if (row > 0 && col > 0) {
                matrix =  vector<vector<double>>(row, vector<double>(col, 0));
            }
            else {
                throw  invalid_argument("Invalid input. Rows and columns must be greater than zero.");
            }
        }

        // Check if the matrix is valid (all rows have the same length)
        bool validMatrix(const  vector< vector<double>>& mat) {
            if (mat.empty()) {
                return false;
            }
            int expectedCol = mat[0].size();
            for (const auto& row : mat) {
                if (row.size() != expectedCol) {
                    return false;
                }
            }
            return true;
        }

        // Constructor with a provided matrix
        Matrix( vector< vector<double>> inputMatrix) : matrix(inputMatrix) {
            row = inputMatrix.size();
            if (row > 0) {
                column = inputMatrix[0].size();
            }
            else {
                throw  invalid_argument("Invalid input matrix. Matrix must have at least one row.");
            }
            if (!validMatrix(matrix)) {
                throw  invalid_argument("Invalid matrix. All rows must have the same length.");
            }
        }

        
        
        // Calculate the determinant
        double det() {
            if (row != column) {
                throw  runtime_error("Matrix is not square.");
            }
            else {
                return determinant(matrix);
            }
        }

        // Calculate the inverse
       

        // Addition of matrices
        Matrix add(const Matrix& other) {
            if (row != other.row || column != other.column) {
                throw  invalid_argument("Matrix size mismatch.");
            }
            else {
                 vector< vector<double>> result(row,  vector<double>(column, 0));
                for (int i = 0; i < row; i++) {
                    for (int j = 0; j < column; j++) {
                        result[i][j] = matrix[i][j] + other.matrix[i][j];
                    }
                }
                return Matrix(result);
            }
        }

        // Subtraction of matrices
        Matrix sub(const Matrix& other) {
            if (row != other.row || column != other.column) {
                throw  invalid_argument("Matrix size mismatch.");
            }
            else {
                 vector< vector<double>> result(row,  vector<double>(column, 0));
                for (int i = 0; i < row; i++) {
                    for (int j = 0; j < column; j++) {
                        result[i][j] = matrix[i][j] - other.matrix[i][j];
                    }
                }
                return Matrix(result);
            }
        }

        Matrix mul(const Matrix& other) {
            if (!validMatrix(other.matrix) &&  other.row!=column) {
                throw  invalid_argument("Matrix multiplication mismatch.");
            }
                auto otherMatrix=other.matrix;
                int R1 = row;
                int C2 = otherMatrix[0].size();
                int R2 = otherMatrix.size();

                vector<vector<double>>result(R1, vector<double>(C2, 0));
            for (int i = 0; i < R1; i++) {
                for (int j = 0; j < C2; j++) {
                    result[i][j] = 0;

                    for (int k = 0; k < R2; k++) {
                        result[i][j] += matrix[i][k] * otherMatrix[k][j];
                    }
                }

            }
            return Matrix(result);
        }

        // Division of matrices (element-wise)
        Matrix div(const Matrix& other) {
            if (row != other.row || column != other.column) {
                throw  invalid_argument("Matrix size mismatch.");
            }
            else {
                 vector< vector<double>> result(row,  vector<double>(column, 0));
                for (int i = 0; i < row; i++) {
                    for (int j = 0; j < column; j++) {
                        result[i][j] = matrix[i][j] / other.matrix[i][j];
                    }
                }
                return Matrix(result);
            }
        }

        vector<vector<double>> getMatrix() const
        {
            return matrix;
        }
    };
}




