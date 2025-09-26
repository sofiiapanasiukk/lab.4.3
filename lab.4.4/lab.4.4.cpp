// Lab.04.4.cpp
// Панасюк Софія
// Лабораторна робота № 4.4
// Табуляція функції, заданої формулою: функція однієї змінної
// Варіант 18
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x, xp, xk, dx, R1, R2, y;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "R1 = "; cin >> R1;
    cout << "R2 = "; cin >> R2;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(10) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;

    while (x <= xk + dx / 2)  // щоб включити останню точку
    {
        if (x <= -2 * R1)
            y = -x - R1;   // пряма зліва
        else if (x > -2 * R1 && x <= 0)
            y = sqrt(pow(R1, 2) - pow(x + R1, 2));  // півколо радіуса R1 (вище осі)
        else if (x > 0 && x <= 2 * R2)
            y = -sqrt(pow(R2, 2) - pow(x - R2, 2)); // півколо вниз (центр у (R2,0))
        else if (x > 2 * R2 && x <= 6)
            y = ((x - 2 * R2) * (0 - (-R2))) / (6 - 2 * R2) + (-R2); // пряма від (2R2,-R2) до (6,0)
        else
            y = -R2;  // горизонтальна пряма праворуч

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;

        x += dx;
    }

    cout << "---------------------------" << endl;

    return 0;
}