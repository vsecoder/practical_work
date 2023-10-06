using namespace std;
#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Russian");
    // 6

    int number; // переменная для хранения пятизначного числа

    cout << "Введите пятизначное число: ";
    cin >> number;

    // Проверка на пятизначность числа
    if (number < 10000 || number > 99999)
    {
        cout << "Ошибка: число не пятизначное" << endl;
        return 0; // выход из программы
    }

    // Разделим число на цифры
    int digit1 = number / 10000;
    int digit2 = (number % 10000) / 1000;
    int digit3 = (number % 1000) / 100;
    int digit4 = (number % 100) / 10;
    int digit5 = number % 10;

    // Вычисляем сумму цифр
    int sum = digit1 + digit2 + digit3 + digit4 + digit5;

    // Вычисляем произведение цифр
    int product = digit1 * digit2 * digit3 * digit4 * digit5;

    cout << "Сумма цифр: " << sum << endl;
    cout << "Произведение цифр: " << product << endl;

    return 0;
}
