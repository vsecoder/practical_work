using namespace std;
#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Russian");
    // 3

    double a, b, c, d, e, x;            // переменные a, b, c, d, e и x
    double result;                      // переменная результата

    cout << "Введите значение переменной a: ";
    cin >> a;

    cout << "Введите значение переменной b: ";
    cin >> b;

    cout << "Введите значение переменной c: ";
    cin >> c;

    cout << "Введите значение переменной d: ";
    cin >> d;

    cout << "Введите значение переменной e: ";
    cin >> e;

    cout << "Введите значение переменной x: ";
    cin >> x;

    // Вычисляем значение выражения
    result = x * (x * x * (a * x - b) + (c * x - d)) + e;

    cout << "Значение выражения: " << result << endl;

    return 0;
}
