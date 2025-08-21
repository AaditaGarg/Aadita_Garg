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
