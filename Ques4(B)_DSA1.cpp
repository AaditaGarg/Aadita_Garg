Aadita Garg
1024030461 - 2C32
DSA Assignment 1 


// Question 4 :
(B) Implement the logic to find the matrix multiplication

#include <iostream>
using namespace std;

int main() {
    int m, n, p;

    // Input dimensions
    cout << "Enter rows and columns for first matrix (m x n): ";
    cin >> m >> n;

    cout << "Enter columns for second matrix (n x p): ";
    cin >> p;

    int A[100][100], B[100][100], C[100][100];

    // Input first matrix
    cout << "Enter elements of Matrix A (" << m << "x" << n << "):" << endl;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];

    // Input second matrix
    cout << "Enter elements of Matrix B (" << n << "x" << p << "):" << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++)
            cin >> B[i][j];

    // Initialize result matrix C to 0
    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
            C[i][j] = 0;

    // Matrix multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output the result
    cout << "Resulting Matrix C (" << m << "x" << p << "):" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}