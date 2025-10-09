/*******************************
* Автор:    Богданов.К.А.      *
* Вариант:  2                  *
* Название: Обработка массивов *
********************************/

#include <iostream>

using namespace std;

    int main() {

    const int m = 100, n = 100;
    double t[m][n];
    int a, b, c, d;
    
    cout << "Введите количество строк a и столбцов b: ";
    cin >> a >> b;
    
    cout << "Введите элементы матрицы: " << endl;

    for (c = 0; c < a; ++c) {
        for (d = 0; d < b; ++d) {
            cin >> t[c][d];
        }
    }
    
    cout << "Исходная матрица:" << endl;

    for (c = 0; c < a; ++c) {
        for (d = 0; d < b; ++d) {
            cout << t[c][d] << " ";
        }
        cout << endl;
    }
    
    cout << "\nРезультаты:" << endl;
    cout << "Сумма отрицательных элементов | Количество отрицательных элементов" << endl;

    for (c = 0; c < a; ++c) {
        double sum = 0;
        int count = 0;
        for (d = 0; d < b; ++d) {
            if (t[c][d] < 0) {
                sum += t[c][d];
                count++;
            }
        }
        
        cout << sum << "   |   " << count << endl;
    }
    
    return 0;
}

