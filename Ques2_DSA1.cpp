Aadita Garg
1024030461 - 2C32
DSA Assignment 1 

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