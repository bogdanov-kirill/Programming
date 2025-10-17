/*****************************************
* Автор:    Богданов.К.А.                *
* Вариант:  2                            *
* Название: Циклы с пред- и постусловием *
******************************************/

#include <iostream>
#include <cmath>

using namespace std;

    int main() {

        double m0, c, v;
        int maxSpeed = 290000;
        int stepWhile = 2000;
        int stepDoWhile = 5000;
        int initialV = 50000;
        v *= 1000;

        cout << "Enter the rest mass (m0) in grams: "; cin >> m0;
        cout << "Enter the speed of light (c) in km/s: "; cin >> c;
        cout << "Enter the initial velocity (v) in km/s: "; cin >> v;

        cout << "Result - While:" << endl; 
        while (v <= maxSpeed) {
            double m = m0 / sqrt(1.0 - pow(v / c, 2.0));
            cout << "v = " << v << ", m = " << m << endl;
            v += stepWhile;
        }
        v = initialV;

        cout << "Result - Do-While: " << endl;
        do {
            double m = m0 / sqrt(1.0 - pow(v / c, 2.0));
            cout << "v = " << v << ", m = " << m << endl;
            v += stepDoWhile;
        } while (v <= maxSpeed);

        return 0;
    }

