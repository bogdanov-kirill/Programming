/*******************************
* Автор:    Богданов.К.А.      *
* Вариант:  2                  *
* Название: Циклы с ветвлением *
********************************/

#include <iostream>
#include <cmath>

using namespace std;

    int main() {

    double D, h, C0, Cp, C;
    int i_less;
    double i_result;

    cout << "i должно быть <= ";
    cin >> i_less;
    cout << "Введите D = ";
    cin >> D;
    cout << "Введите h = ";
    cin >> h;
    cout << "Введите C0 = ";
    cin >> C0;
    cout << "Введите Cp = ";
    cin >> Cp;
    cout << "Введите C = ";
    cin >> C;

    for (int i = 0; i <= i_less; ++i) {

        double C;
        switch (i) {
            case 0: C = 8.0; break;
            case 1: C = 7.5; break;
            case 2: C = 7.0; break;
            case 3: C = 6.0; break;
            case 4: C = 4.0; break;
            case 5: C = 2.0; break;
        }

        double t = sqrt(2.0) * (C0 - Cp) / (M_PI * (C0 - C));

        if (t > 2) {
            i_result = sqrt(2) * D * t / (h * h) * (C0 - Cp);
        } else {
            i_result = 0.25 * D * M_PI * M_PI / (h * h) * (C0 - Cp);
        }

        cout << "t = " << t << ", i = " << i_result << endl;
    }

    return 0;
}
