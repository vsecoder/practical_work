using namespace std;
#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Russian");
    // 7

    int x1, y1, x2, y2; // координаты двух персонажей
    double distance;

    cout << "Введите координаты первого персонажа (x1 и y1): ";
    cin >> x1 >> y1;

    cout << "Введите координаты второго персонажа (x2 и y2): ";
    cin >> x2 >> y2;

    // Вычисляем расстояние между двумя точками по формуле расстояния между двумя точками
    // Формулу недавно повторяли на ЭВМ, когда пиали практическую по трёхмерным векторам
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "Расстояние между двумя персонажами: " << distance << endl;

    return 0;
}
