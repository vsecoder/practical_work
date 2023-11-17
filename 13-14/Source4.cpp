#include <iostream>

using namespace std;

// Функция для вычисления НОД по алгоритму Евклида
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Функция для вычисления НОК
int findLCM(int a, int b) {
    return (a * b) / findGCD(a, b);
}

int main() {
    setlocale(LC_ALL, "Russian");
    // 4
    int num1, num2;

    // Ввод двух натуральных чисел
    cout << "Введите первое натуральное число: ";
    cin >> num1;

    cout << "Введите второе натуральное число: ";
    cin >> num2;

    // Проверка на корректность ввода
    if (num1 <= 0 || num2 <= 0) {
        cout << "Числа должны быть натуральными.\n";
        return 1;
    }

    // Вычисление НОД и НОК
    int gcd = findGCD(num1, num2);
    int lcm = findLCM(num1, num2);

    // Вывод результата
    cout << "Наибольший общий делитель (НОД): " << gcd << endl;
    cout << "Наименьшее общее кратное (НОК): " << lcm << endl;

    return 0;
}
