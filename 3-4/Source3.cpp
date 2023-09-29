using namespace std;
#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Russian");
    // 3

    double a, b, c, d, e, x;            // переменные a, b, c, d, e и x
    double x_square, x_cube, x_quartic; // переменные x^2, x^3, x^4

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

    // Вычисляем
    double x_square = x * x;
    double x_cube = x_square * x;
    double x_quartic = x_cube * x;

    // Вычисляем значение выражения
    double result = a * x_quartic - b * x_cube + c * x_square - d * x + e;

    cout << "Значение выражения: " << result << endl;

    return 0;
}
