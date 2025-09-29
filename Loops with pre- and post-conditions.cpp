/*****************************************
* Автор:    Богданов.К.А.                *
* Вариант:  2                            *
* Название: Циклы с пред- и постусловием *
******************************************/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    long double m0, c;
    cout << "Введите массу покоя (m0): ";
    cin >> m0;

    cout << "Введите скорость света (c): ";
    cin >> c;

    long double v[9];

    cout << fixed << setprecision (3);

    cout << "Введите 9 скоростей (в тыс. км/с): ";

    int i = 0;
    do {
        cin >> v[i];
        v[i] *= 1000;
        i++;
    } while (i < 9);

    long double results[9];

    i = 0;

    do {
        if (v[i] >= c) {
            cout << "Скорость: " << v[i] << " км/с, Ошибка: скорость не может быть равна или превышать скорость света" << endl;
            results[i] = -1;
        } else {
            long double m = m0 / sqrt(1 - pow(v[i] / c, 2));
            cout << "Скорость: " << v[i] << " км/с, Масса: " << m << " г" << endl;
            results[i] = m;
        }

        i++;

    } while (i < 9);

    return 0;
}