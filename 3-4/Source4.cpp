using namespace std;
#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Russian");
    // 4

    int n, distance_limit, months;

    cout << "Введите количество километров, которые проезжаете в день: ";
    cin >> n;

    // Проверяем данные
    if (n <= 0)
    {
        cout << "Ошибка: в день должно проезжаться больше нуля";
        return 0; // выход из программы
    }

    distance_limit = 12000;             // предельное расстояние для замены масла
    months = distance_limit / (n * 30); // вычисляем количество месяцев

    cout << "Необходимо заменить масло через " << months << " месяцев" << endl;

    return 0;
}
