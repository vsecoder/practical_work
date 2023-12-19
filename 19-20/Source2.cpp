#include <iostream>

using namespace std;

class Fraction {
private:
    int numerator;   // числитель
    int denominator; // знаменатель

public:
    // Конструктор по умолчанию инициализирует дробь единицей
    Fraction() : numerator(1), denominator(1) {}

    // Конструктор с параметрами для инициализации дроби
    Fraction(int num, int denom) : numerator(num), denominator(denom) {}

    // Функция для вывода дроби
    void display() {
        cout << numerator << '/' << denominator;
    }

    // Функции для установки и получения числителя
    void setNumerator(int num) {
        numerator = num;
    }

    int getNumerator() {
        return numerator;
    }

    // Функции для установки и получения знаменателя
    void setDenominator(int denom) {
        if (denom != 0) {
            denominator = denom;
            return;
        }
        cout << "Ошибка: Знаменатель не может быть равен нулю.\n";
    }

    int getDenominator() {
        return denominator;
    }

    // Функция для сложения двух дробей
    Fraction add(Fraction other) {
        int resultNumerator = numerator * other.denominator + other.numerator * denominator;
        int resultDenominator = denominator * other.denominator;
        return Fraction(resultNumerator, resultDenominator);
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    // 2
    int num1, denom1, num2, denom2;
    cout << "Введите числитель и знаменатель первой дроби через пробел: ";
    cin >> num1 >> denom1;

    cout << "Введите числитель и знаменатель второй дроби через пробел: ";
    cin >> num2 >> denom2;

    // Создание объектов класса Fraction и их инициализация введенными значениями
    Fraction fraction1(num1, denom1);
    Fraction fraction2(num2, denom2);

    // Вычисление суммы двух дробей
    Fraction sum = fraction1.add(fraction2);

    // Вывод результата на экран
    cout << "Сумма дробей: ";
    sum.display();
    cout << endl;

    return 0;
}