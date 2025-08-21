Aadita Garg
1024030461 - 2C32
DSA Assignment 1 

// Question 1 : 
Develop a menu driven program to demonstrate the following operations of arrays - 
1) Create 
2) Display
3) Insert 
4) Delete 
5) Linear Search 
6) Exit

#include <iostream>
using namespace std;

int arr[100];  
int n = 0;  

// Function to create array
void createMenu() {
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

// Function to display array
void displayMenu() {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to insert an element
void insertMenu() {
    int pos, val;
    cout << "Enter position : ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> val;

    if (pos < 0 || pos > n) {
        cout << "Invalid position!" << endl;
        return;
    }

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    n++;
}

// Function to delete an element
void deleteMenu() {
    int pos;
    cout << "Enter position to delete (0-" << n - 1 << "): ";
    cin >> pos;

    if (pos < 0 || pos >= n) {
        cout << "Invalid position!" << endl;
        return;
    }

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

// Function to search element
void linearSearch() {
    int key;
    cout << "Enter value to search: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at index " << i << endl;
            return;
        }
    }
    cout << "Element not found!" << endl;
}

int main() {
    int choice;
    while (true) {
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1: createMenu(); break;
        case 2: displayMenu(); break;
        case 3: insertMenu(); break;
        case 4: deleteMenu(); break;
        case 5: linearSearch(); break;
        case 6: cout << "Exiting program." << endl; return 0;
        default: cout << "Invalid choice! Try again.\n";
        }
    }
}










// Question 2 :
Design the logic to remove duplicates from an array and then the printed array should only contain unique elements

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements = " << endl;
    cin >> n;

    int arr[100];     
    int unique[100];  
    int k = 0;      
    
     // Input values
    cout << "Enter the array elements = " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Remove duplicates
    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;

        // Check if arr[i] already exists in unique[]
        for (int j = 0; j < k; j++) {
            if (arr[i] == unique[j]) {
                isDuplicate = true;
                break;
            }
        }

        // If not duplicate, add to unique[]
        if (!isDuplicate) {
            unique[k] = arr[i];
            k++;
        }
    }

    // Output unique elements
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < k; i++) {
        cout << unique[i] << " ";
    }
    cout << endl;

    return 0;
}












// Question 3 :
Predict the output of the following program

#include <iostream>
using namespace std;
int main(){
    int i;
    int arr[5]= {1};
    for (int i=0; i<5; i++){
        printf ("%d", arr[i]);
        return 0;
    }

}

// Output = 1 












// Question 4 :
(A) Implement the logic to reverse the elements of an array

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in an array = " << endl;
    cin >> n;
    
    int arr[100];  // Use fixed size or dynamic memory for larger input

    // Input array
    cout << "Enter the array elements = " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Print original array
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Print reversed array
    cout << "Reversed array: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}










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










// Question 4 :
(C) Implement the logic to find the transpose of a matrix

#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input matrix dimensions
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[rows][cols];

    // Input matrix elements
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // Display original matrix
    cout << "Original Matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Transpose of matrix
    cout << "Transpose of Matrix:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}









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