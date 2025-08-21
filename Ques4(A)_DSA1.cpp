Aadita Garg
1024030461 - 2C32
DSA Assignment 1 

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


