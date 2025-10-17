/*******************************
* Автор:    Богданов.К.А.      *
* Вариант:  2                  *
* Название: Циклы с ветвлением *
********************************/

#include <iostream>
#include <cmath>

using namespace std;

    int main() {

        double D, h, C0, Cp, Cstart, Cend, step = 0.5, iResult;
        
        cout << "Enter the diffusion coefficient (D): ";
        cin >> D;
        cout << "Enter the height of the crucible (h): ";
        cin >> h;
        cout << "Enter the initial concentration (C0): ";
        cin >> C0;
        cout << "Enter the equilibrium concentration (Cp): ";
        cin >> Cp;
        cout << "Enter the initial value (C): ";
        cin >> Cstart;
        cout << "Enter the final value (C): ";
        cin >> Cend;
        
        double start = min(Cstart, Cend);
        double end = max(Cstart, Cend);
        double direction = (Cstart <= Cend) ? step : -step;
        
        for (double C = Cstart; 
            (direction > 0 && C <= Cend) || (direction < 0 && C >= Cend); 
            C += direction) {
            
            double t = sqrt(2.0) * (C0 - Cp) / (M_PI * (C0 - C));
            if (t > 2) {
                iResult = sqrt(2.0) * D * t / (h * h) * (C0 - Cp);
            } else {
                iResult = 0.25 * D * M_PI * M_PI / (h * h) * (C0 - Cp);
            }
            
            cout << " t = " << t << " i = " << iResult << endl;        
        }
        
        return 0;
    }
