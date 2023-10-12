using namespace std;
#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Russian");
    // 7
    double x, y;
    double r;

    cout << "Введите координату x: ";
    cin >> x;
    cout << "Введите координату y: ";
    cin >> y;
    cout << "Введите R: ";
    cin >> r;

    double distance = sqrt(x * x + y * y);
    if (distance <= r && ((y >= 0 && x >= -r && x <= r) || (y < 0 && x >= r && x <= -r)))
    {
        cout << "(1) Точка находится внутри круга." << endl;
    }

    if (distance <= r && ((y >= 0 && y <= r && x >= -r && x <= 0) ||
                          (y <= 0 && y >= -r && x <= r && x >= 0)))
    {
        cout << "(2) Точка находится внутри обрезанного круга." << endl;
    }

    if (abs(x) <= r && abs(y) <= r)
    {
        cout << "(3) Точка находится внутри квадрата." << endl;
    }

    if (
        distance <= r && ((y >= 0 && x >= -r && x <= r) || (y < 0 && x >= r && x <= -r)) ||
        ((y >= 0 && x >= r && x <= -r) ||
         (y < 0 && x >= -r && x <= r)))
    {
        cout << "(4) Точка находится внутри пули." << endl;
    }

    return 0;
}
