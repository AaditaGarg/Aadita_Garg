Aadita Garg
1024030461 - 2C32
DSA Assignment 1 

// Question 5 :
Write a program to find the sum of every row and column in a two dimenstional array

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows and columns = " << endl;
    cin >> n;

    int arr1[100][100]; 

    // Input array
    cout << "Enter the array elements = " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr1[i][j];
        }
    }

    // Output array
    cout << "Array is:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    // Row sums
    cout << "Row sums:" << endl;  
    int sumRow = 0;
    
    for (int i = 0; i < n; i++) {
      
        for (int j = 0; j < n; j++) {
            sumRow += arr1[i][j];
        }
        cout << "Sum of row " << i << " = " << sumRow << endl;
    }

    // Column sums
    cout << "Column sums:" << endl;
       int sumColumn = 0;
    for (int j = 0; j < n; j++) {
     
        for (int i = 0; i < n; i++) {
            sumColumn += arr1[i][j];
        }
        cout << "Sum of column " << j << " = " << sumColumn << endl;
    }

    return 0;
}