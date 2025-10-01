/*******************************
* Автор:    Богданов.К.А.      *
* Вариант:  2                  *
* Название: Линейные алгоритмы *
********************************/

#include <iostream>
#include <cmath>

using namespace std;

    int main() {
    
    double D = 6.3e-5;
    double h = 2.5;
    double C0 = 8.2;
    double Cp = 1.7;
    double C[] = {8, 7.5, 7, 6, 4, 2};

    for (double C : C) {
        long double t = sqrt(2) * (C0 - Cp) / (M_PI * (C0 - C));
        long double i;

        if (t > 2) {
            i = sqrt(2) * D * t / (h * h) * (C0 - Cp);
        } else {
            i = 0.25 * D * M_PI * M_PI / (h * h) * (C0 - Cp);
        }

        cout << "t = " << t << ", i = " << i << endl;
    }

    return 0;
}
