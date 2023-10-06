using namespace std;
#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Russian");
    // 5

    int M, N; double result; // переменные M и N и result

    cout << "Введите значение M: ";
    cin >> M;

    cout << "Введите значение N: ";
    cin >> N;

    if (N < 0 || M < 0) {
        cout << "Ошибка: инвалид(,) данные" << endl;
        return 0; // выход из программы
    }

    // Проверяем деление на ноль
    if (N == 0)
    {
        cout << "Ошибка: деление на ноль" << endl;
        return 0; // выход из программы
    }

    // Вычисляем результат деления M на N
    result = float(M) / N;

    cout << "Результат: " << result << endl;

    return 0;
}
