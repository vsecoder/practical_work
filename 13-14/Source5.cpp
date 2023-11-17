#include <iostream>

using namespace std;

// Рекурсивная функция для вычисления n-го члена ряда
int calculateSeries(int n) {
    if (n == 0) {
        return 1; // Базовый случай: 0-й член ряда равен 1
    }
    else {
        // Рекурсивный случай: n-й член ряда равен предыдущему члену, умноженному на 4
        return 4 * calculateSeries(n - 1);
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    // 5
    int n;

    // Ввод порядкового номера n
    cout << "Введите порядковый номер n (отсчёт от нуля): ";
    cin >> n;

    // Проверка на корректность ввода
    if (n < 0) {
        cout << "Порядковый номер должен быть неотрицательным.\n";
        return 1;
    }

    // Вычисление и вывод значения n-го члена ряда
    cout << "Значение " << n << "-го члена ряда: " << calculateSeries(n) << endl;

    return 0;
}
