using namespace std;
#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Russian");
    // 3

    double x, y;

    cout << "Введите значение x: ";
    cin >> x;
    cout << "Введите значение y: ";
    cin >> y;

    if (
        x > 0.5 && 
        pow(x, 2) + pow(y, 2) < 1
    ) {
        cout << "Точка принадлежит области.";
    } else {
        if (
            x < 0.5 &&
            pow(x, 2) + pow(y, 2) > 1
        ) {
            cout << "Точка не принадлежит области.";
        } else {
            cout << "Точка лежит на границе.";
        }
    }

    return 0;
}
