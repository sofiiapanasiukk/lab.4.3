// Lab.04.2.cpp
// Панасюк Софія
// Лабораторна робота № 4.4
// «Табуляція функції, заданої формулою: функція з параметрами» 
// Варіант 18
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, x, xp, xk, dx, F;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------------" << endl;
    cout << "|" << setw(10) << "x"
        << " |" << setw(15) << "F" << " |" << endl;
    cout << "---------------------------------" << endl;

    x = xp;  // початкове значення

    while (x <= xk + dx / 2) // щоб включити кінцеву точку
    {
        if (x < 0 && b != 0)
            F = a * pow(x, 2) - b * pow(x, 2);
        else if (x > 0 && b == 0)
            F = (x - a) / (x - c);
        else
            F = (x + 5) / (c * (x - 10));

        cout << "|" << setw(10) << setprecision(2) << x
            << " |" << setw(15) << setprecision(5) << F
            << " |" << endl;

        x += dx; // крок
    }

    cout << "---------------------------------" << endl;

    return 0;
}