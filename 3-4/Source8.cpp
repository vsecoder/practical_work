using namespace std;
#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Russian");
    // 8

    double v, t, a;  // переменные для скорости, времени и ускорения
    double distance; // переменная для пройденного расстояния

    cout << "Введите значение скорости (v): ";
    cin >> v;

    cout << "Введите значение времени (t): ";
    cin >> t;

    if (t <= 0)
    {
        cout << "Ошибка: время не может быть отрицательным(путешествие в прошлое и телепортацию не рассматриваем)";
        return 0;
    }

    cout << "Введите значение ускорения (a): ";
    cin >> a;

    // Вычисляем пройденное расстояние по формуле S = v*t + (a*t^2) / 2
    distance = v * t + 0.5 * a * t * t;

    cout << "Пройденное расстояние: " << distance << endl;

    return 0;
}
