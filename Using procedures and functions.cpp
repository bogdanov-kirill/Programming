/*********************************************
* Автор:    Богданов.К.А.                    *
* Вариант:  2                                *
* Название: Использование процедур и функций *
*********************************************/

#include <iostream>
using namespace std;

int main() {

    int c, d, k, n;
    int sumX = 0;
    int sumZ = 0;

    // Intervals
    cout << "Enter the beginning of the interval: ";
    cin >> c;
    cout << "Enter the end of the interval: ";
    cin >> d;
    // Size of arrays
    cout << "Enter the size of the array №1: ";
    cin >> k;
    cout << "Enter the size of the array #2: ";
    cin >> n;

    // Arrays
    int* X = new int[k];
    cout << "Enter " << k << " the numbers following the size of the array №1: ";
    for(int iArray = 0; iArray < k; ++iArray) {
    cin >> X[iArray];
    }

    int* Z = new int[n];
    cout << "Enter " << n << " the numbers following the size of the array #2: ";
    for(int iArray = 0; iArray < n; ++iArray) {
    cin >> Z[iArray];
    }
  
    // Finding the sum of the elements in array X, outside the interval
    for(int iArray = 0; iArray < k; ++iArray) {
        if(X[iArray] < c | X[iArray] > d) {
            sumX += X[iArray];
        }
    }

    //Finding the sum of the elements in array Z, outside the interval
    for(int iArray = 0; iArray < n; ++iArray) {
        if(Z[iArray] < c | Z[iArray] > d) {
            sumZ += Z[iArray];
        }
    }

    //Output of results
    cout << "The sum of the elements of the array X outside the interval: " << sumX << endl
         << "The sum of the elements of the array Z outside the interval: " << sumZ << endl;

    delete[] X;
    delete[] Z;
         
    return 0;
}
