/*******************************
* Автор:    Богданов.К.А.      *
* Вариант:  2                  *
* Название: Линейные алгоритмы *
********************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double a, b, c;

    cout <<"Введите a = ";
    cin >> a;

    cout <<"Введите b = ";
    cin >> b;

    cout <<"Введите c = ";
    cin >> c;

double P = b / a;
double g = c / a;

double numerator = g;

    double denominator = 2 * pow(-P / 3, 1.5);
    double ratio = numerator / denominator;

    double alpha = acos(ratio);
    
    double x1 = -2 * sqrt(-P / 3.0d) * cos(alpha / 3.0d);
    double x2 = 2 * sqrt(-P / 3.0d) * cos((alpha + M_PI) / 3.0d);
    double x3 = 2 * sqrt(-P / 3.0d) * cos((alpha - M_PI) / 3.0d);

    cout << "x1 =" << x1 << endl
         << "x2 =" << x2 << endl
         << "x3 =" << x3 << endl;
    
    return 0;
}