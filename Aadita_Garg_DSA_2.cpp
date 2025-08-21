Aadita Garg
1024030461 - 2C32
DSA Assignment 2 


// Question 1 :
(A) Implement the Linear search algorithm.
#include <iostream>
using namespace std;

int main() {
    int arr[10]; 
    int n, target;
    cout << "Enter size of array = " << endl;
    cin >> n;      

    cout << "Enter array elements = "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the value to be searched = " << endl;
    cin >> target; 
    
    bool found = false;  // flag to track if key is found

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout << "Key found at index " << i << endl;
            found = true;
            break; 
        }
    }

    if (!found) {
        cout << "No key found" << endl;
    }

    return 0;
}










// Question 1 :
(B) Implement the Binary search algorithm regarded as a fast search algorithm with
run-time complexity of Ο(log n) in comparison to the Linear Search.

#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int n, key;
    
    cout << "Enter size of the array: ";
    cin >> n;

    cout << "Enter array elements (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    int beg = 0, end = n - 1;
    bool found = false;

    while (beg <= end) {
        int mid = (beg + end) / 2;

        if (arr[mid] == key) {
            cout << "Element found at index = " << mid << endl;
            found = true;
            break;
        }
        else if (arr[mid] < key) {
            beg = mid + 1;  // search in right half
        }
        else {
            end = mid - 1;  // search in left half
        }
    }

    if (!found) {
        cout << "Element not found" << endl;
    }

    return 0;
}












// Question 2 :
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping
the adjacent elements if they are in wrong order. Code the Bubble sort with the
following elements:
64, 34, 25, 12, 22, 11, 90


#include <iostream>
using namespace std;

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}









// Question 3 :
Given an array of n-1 distinct integers in the range of 1 to n, find the missing number
in it in a Sorted Array
(A) Linear time
#include <iostream>
using namespace std;

int findMissingLinear(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != i + 1) {
            return i + 1; // missing number found
        }
    }
    return n; //  last number is missing
}

int main() {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int arr[n - 1];
    cout << "Enter " << n - 1 << " sorted elements from 1 to " << n << " (with one missing):" << endl;
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    cout << endl << "Missing number (Linear Search) = " << findMissingLinear(arr, n) << endl;

    return 0;
}












// Question 3 :
Given an array of n-1 distinct integers in the range of 1 to n, find the missing number
in it in a Sorted Array
(B) Binary Search
#include <iostream>
using namespace std;

int findMissingBinary(int arr[], int n) {
    int left = 0, right = n - 2; // size = n-1
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == mid + 1) {
            left = mid + 1; // search right half
        } else {
            right = mid - 1; // search left half
        }
    }
    return left + 1;
}

int main() {
    int n;
    cout << "Enter the value of n (range 1 to n): ";
    cin >> n;

    int arr[n - 1];
    cout << "Enter " << n - 1 << " sorted elements from 1 to " << n << " (with one missing):" << endl;
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    cout << "Missing number (Binary Search) = " << findMissingBinary(arr, n) << endl;

    return 0;
}









// Question 4 :
String Related Programs
(A) Write a program to concatenate one string to another string.

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1, str2;
    cout << "Enter first string = ";
    getline(cin, str1);
    cout << "Enter second string = ";
    getline(cin, str2);
    str1 += str2;
    cout << str1 << endl;
    return 0;
}







// Question 4 :
String Related Programs
(B) Write a program to reverse a string.

#include <iostream>
#include <algorithm>
using namespace std;

int main (){
string str1;
getline (cin, str1);
reverse (str. begin (), str. end());
cout << "Reversed String = " << str << endl;
}






// Question 4 :
String Related Programs
(C) Write a program to delete all the vowels from the string.

#include <iostream>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main() {
    string str, result;
    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str) {
        if (!isVowel(ch)) {
            result += ch;
        }
    }

    cout << "String after deleting vowels: " << result << endl;
    return 0;
}






// Question 4 
String Related Programs
(D) Write a program to sort the strings in alphabetical order.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    cin.ignore();  // ignore newline after number input

    vector<string> arr(n);

    cout << "Enter strings:\n";
    for (int i = 0; i < n; i++) {
        getline(cin, arr[i]);
    }

    sort(arr.begin(), arr.end());

    cout << "Strings in alphabetical order:\n";
    for (string s : arr) {
        cout << s << endl;
    }

    return 0;
}








// Question 4 
String Related Programs
(E) Write a program to convert a character from uppercase to lowercase.
Approach 1

#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + ('a' - 'A');
    }

    cout << "Lowercase character: " << ch << endl;
    return 0;
}

OR 
Approach 2 

#include <iostream>
#include <string>
using namespace std;
int main (){
    string str;
    cout << "Enter string = "<<endl;
    getline (cin,str);
    for (int i=0; i<str.length(); i++){
         str[i]= tolower(str[i]);
    }
   
    cout << str;
    return 0;
}









// Question 5 :
(A) Diagonal Matrix 

#include <iostream>
using namespace std;

class Diagonal {
    int n;
    int *A;  // store only diagonal elements
public:
    Diagonal(int n) {
        this->n = n;
        A = new int[n];
        for (int i=0; i<n; i++) A[i] = 0;
    }
    void set(int i, int j, int x) {
        if (i == j) A[i-1] = x;
    }
    int get(int i, int j) {
        if (i == j) return A[i-1];
        return 0;
    }
    void display() {
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if (i == j) cout << A[i] << " ";
                else cout << "0 ";
            }
            cout << endl;
        }
    }
};
int main() {
    int n;
    cout << "Enter dimension of square matrix (n x n): ";
    cin >> n;

    cout << "Diagonal Matrix : ";
    Diagonal d(n);
    d.set(1,1,5); d.set(2,2,8); d.set(3,3,9);
    d.display();
    return 0;
}









// Question 5 :
(B) Tridiaogonal Matrix 

#include <iostream>
using namespace std;

class TriDiagonal {
    int n;
    int *A; // size 3n-2
public:
    TriDiagonal(int n) {
        this->n = n;
        A = new int[3*n - 2];
        for (int i=0; i<3*n-2; i++) A[i] = 0;
    }
    void set(int i, int j, int x) {
        if (i-j == 1) A[i-2] = x;               // lower diagonal
        else if (i-j == 0) A[n-1 + i-1] = x;    // main diagonal
        else if (i-j == -1) A[2*n-1 + i-1] = x; // upper diagonal
    }
    int get(int i, int j) {
        if (i-j == 1) return A[i-2];
        else if (i-j == 0) return A[n-1 + i-1];
        else if (i-j == -1) return A[2*n-1 + i-1];
        return 0;
    }
    void display() {
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=n; j++) {
                cout << get(i,j) << " ";
            }
            cout << endl;
        }
    }
};

int main (){
    
    int n;
    cout << "Enter dimension of square matrix (n x n): ";
    cin >> n;
    
    cout << "Tri-diagonal Matrix : ";
    TriDiagonal td(n);
    td.set(1,1,1); td.set(1,2,2);
    td.set(2,1,3); td.set(2,2,4); td.set(2,3,5);
    td.set(3,2,6); td.set(3,3,7);
    td.display();
}






// Question 5 :
(C) Lower Triangular Matrix

#include <iostream>
using namespace std;

class LowerTriangular {
    int n;
    int *A;
public:
    LowerTriangular(int n) {
        this->n = n;
        A = new int[n*(n+1)/2];
        for (int i=0; i<n*(n+1)/2; i++) A[i] = 0;
    }

    ~LowerTriangular() {   // destructor
        delete []A;
    }

    void set(int i, int j, int x) {
        if (i >= j) 
            A[(i*(i-1))/2 + (j-1)] = x;
    }

    int get(int i, int j) {
        if (i >= j) 
            return A[(i*(i-1))/2 + (j-1)];
        return 0;
    }

    void display() {
        cout << "Lower Triangular Matrix:" << endl;
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=n; j++) {
                cout << get(i,j) << " ";
            }
            cout << endl;
        }
    }
};


int main() {
    int n;
    cout << "Enter dimension of square matrix (n x n): ";
    cin >> n;

    LowerTriangular lt(n);
    lt.set(1,1,1);
    lt.set(2,1,2); lt.set(2,2,3);
    lt.set(3,1,4); lt.set(3,2,5); lt.set(3,3,6);

    lt.display();
    return 0;
}




// Question 5 :
(D) Upper Triangonal Matrix

#include <iostream>
using namespace std;

class UpperTriangular {
    int n;
    int *A;
public:
    UpperTriangular(int n) {
        this->n = n;
        A = new int[n*(n+1)/2];
        for (int i=0; i<n*(n+1)/2; i++) A[i] = 0;
    }

    ~UpperTriangular() {   // destructor
        delete []A;
    }

    void set(int i, int j, int x) {
        if (i <= j) {
            int index = (i-1)*n - ((i-1)*(i-2))/2 + (j-i);
            A[index] = x;
        }
    }

    int get(int i, int j) {
        if (i <= j) {
            int index = (i-1)*n - ((i-1)*(i-2))/2 + (j-i);
            return A[index];
        }
        return 0;
    }

    void display() {
        cout << "Upper Triangular Matrix:" << endl;
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=n; j++) {
                cout << get(i,j) << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter dimension of square matrix (n x n): ";
    cin >> n;

    UpperTriangular ut(n);

    ut.set(1,1,1); ut.set(1,2,2); ut.set(1,3,3);
    ut.set(2,2,4); ut.set(2,3,5);
    ut.set(3,3,6);

    ut.display();
    return 0;
}









// Question 5 :
(E) Symmetric Matrix

#include <iostream>
using namespace std;

class Symmetric {
    int n;
    int *A;
public:
    Symmetric(int n) {
        this->n = n;
        A = new int[n*(n+1)/2];
        for (int i=0; i<n*(n+1)/2; i++) A[i] = 0;
    }
    ~Symmetric() { delete []A; }

    void set(int i, int j, int x) {
        if (i >= j) 
            A[(i*(i-1))/2 + (j-1)] = x;
        else 
            A[(j*(j-1))/2 + (i-1)] = x;  // use symmetry
    }

    int get(int i, int j) {
        if (i >= j) 
            return A[(i*(i-1))/2 + (j-1)];
        return A[(j*(j-1))/2 + (i-1)];
    }

    void display() {
        cout << "\n--- Symmetric Matrix ---\n";
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=n; j++) {
                cout << get(i,j) << " ";
            }
            cout << endl;
        }
    }
};

int main (){
    int n;
    cout << "Enter dimension of square matrix (n x n): ";
    cin >> n;

    Symmetric sm(n);

    // Example input
    sm.set(1,1,1); sm.set(2,1,2); sm.set(2,2,3);
    sm.set(3,1,4); sm.set(3,2,5); sm.set(3,3,6);

    sm.display();

    return 0;
}













// Question 6 :
Write a program to implement the following operations on a Sparse Matrix,
assuming the matrix is represented using a triplet.
(A) Transpose of a matrix.

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter rows and columns: ";
    cin >> n >> m;

    int arr[10][10], transpose[10][10];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Original matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            transpose[j][i] = arr[i][j];
        }
    }

    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < m; i++) {       
        for (int j = 0; j < n; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}









// Question 6 :
Write a program to implement the following operations on a Sparse Matrix,
assuming the matrix is represented using a triplet.
(B) Addition of two matrices.

#include <iostream>
using namespace std;

int main() {
    int n, i, j;
    cout << "Enter size of square matrices: ";
    cin >> n;

    int arr1[10][10], arr2[10][10], sum[10][10] = {0};

    cout << "Enter elements of Matrix 1:\n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> arr1[i][j];
        }
    }

    cout << "Matrix 1:\n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter elements of Matrix 2:\n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> arr2[i][j];
        }
    }

    cout << "Matrix 2:\n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    // Matrix Addition
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    cout << "Sum of the two matrices:\n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}






// Question 6 :
Write a program to implement the following operations on a Sparse Matrix,
assuming the matrix is represented using a triplet.
(C) Multiplication of two matrices.

#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    cout << "Enter rows and columns of Matrix 1: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns of Matrix 2: ";
    cin >> r2 >> c2;

    // Check compatibility
    if (c1 != r2) {
        cout << "Matrix multiplication not possible (columns of A != rows of B)" << endl;
        return 0;
    }

    int A[10][10], B[10][10], C[10][10] = {0};

    cout << "Enter elements of Matrix 1:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of Matrix 2:\n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> B[i][j];
        }
    }

    // Multiplication logic
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Resultant Matrix (A x B):\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}






// Question 7 :
Let A[1 …. n] be an array of n real numbers. A pair (A[i], A[j ]) is said to be an
inversion if these numbers are out of order, i.e., i < j but A[i]>A[j ]. Write a program to
count the number of inversions in an array

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int count = 0;
    cout << "Inversion pairs: ";
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                count++;
                cout << "(" << arr[i] << "," << arr[j] << ") ";
            }
        }
    }
    cout << endl;

    cout << "Number of inversions = " << count << endl;
    return 0;
}









// Question 8 :
Write a program to count the total number of distinct elements in an array of length
n.
Approach 1

#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    set<int> distinct;  // stores only unique elements
    for (int i = 0; i < n; i++) {
        distinct.insert(arr[i]);
    }

    cout << "Total number of distinct elements = " << distinct.size() << endl;

    return 0;
}




Approach 2 

#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "Enter the size of an array = "<<endl;
    cin >> n;
    int arr[20];
    cout << "Enter the elements of an array = "<<endl;
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "The array is = "<<endl;
    for (int i=0; i<n; i++){
        cout << arr[i];
    }
       cout << endl;
       
    cout << "The array with only distinct elements is = "<<endl;
    for (int i=0; i<n; i++){
        bool seen = false;
        for (int j=0; j<i; j++){
            if (arr[i]==arr[j]){
                seen = true;
                break;
            }
        }
        if (!seen){
            cout << arr[i]<< " ";
        }
       
    }
     return 0;
}
