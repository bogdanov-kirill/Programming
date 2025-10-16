/*********************************************
* Автор:    Богданов.К.А.                    *
* Вариант:  2                                *
* Название: Использование процедур и функций *
*********************************************/

#include <iostream>
using namespace std;

int main() {

    // Intervals
    int c;  // Entering the start of the interval
    cout << "Enter the beginning of the interval: ";
    cin >> c;
    int d;  // Entering the end of the interval
    cout << "Enter the end of the interval: ";
    cin >> d;

    // Size of arrays
    int k;  // Entering the array size №1
    cout << "Enter the size of the array №1: ";
    cin >> k;
    int n;  // Entering the array size №2
    cout << "Enter the size of the array #2: ";
    cin >> n;

    // Arrays
    int* X = new int[k];  // Arrays №1
    cout << "Enter " << k << " the numbers following the size of the array №1: ";
    for(int iArray = 0; iArray < k; ++iArray) {
    cin >> X[iArray];
    }

    int* Z = new int[n];  // Arrays №2
    cout << "Enter " << n << " the numbers following the size of the array #2: ";
    for(int iArray = 0; iArray < n; ++iArray) {
    cin >> Z[iArray];
    }

    // Sums of arrays
    int sumX = 0;  // The amount of the array X
    int sumZ = 0;  // The amount of the array Z

    // Finding the sum of the elements in array X, outside the interval
    for(int iArray = 0; iArray < k; ++iArray) {
        if(X[iArray] < c | X[iArray] > d) {  //Conditions for going beyond the interval
            sumX += X[iArray];
        }
    }

    //Finding the sum of the elements in array Z, outside the interval
    for(int iArray = 0; iArray < n; ++iArray) {
        if(Z[iArray] < c | Z[iArray] > d) {  //Conditions for going beyond the interval
            sumZ += Z[iArray];
        }
    }

    //Output of results
    cout << "The sum of the elements of the array X outside the interval: " << sumX << endl
         << "The sum of the elements of the array Z outside the interval: " << sumZ << endl;
         
    return 0;
}


