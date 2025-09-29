/*******************************
* Автор:    Богданов.К.А.      *
* Вариант:  2                  *
* Название: Линейные алгоритмы *
********************************/

#include <iostream>
#include <cmath>

using namespace std;

    int main() {

    double a, b, c, P, g;
    double x1, x2, x3;
    double numerator = g;

    cout <<"Введите a = ";
    cin >> a;

    cout <<"Введите b = ";
    cin >> b;

    cout <<"Введите c = ";
    cin >> c;

    P = b / a;
    g = c / a;  

    double denominator = 2 * pow(-P / 3, 1.5);
    double ratio = numerator / denominator;

    double alpha = acos(ratio);
    
    x1 = -2 * sqrt(-P / 3.0) * cos(alpha / 3.0);
    x2 = 2 * sqrt(-P / 3.0) * cos((alpha + M_PI) / 3.0);
    x3 = 2 * sqrt(-P / 3.0) * cos((alpha - M_PI) / 3.0);

    cout << "x1 =" << x1 << endl
         << "x2 =" << x2 << endl
         << "x3 =" << x3 << endl;
    
    return 0;

}
