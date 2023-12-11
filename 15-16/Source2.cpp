#include <iostream>
#include <cmath>

using namespace std;

// Функции для выполнения арифметических операций
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cerr << "Ошибка: деление на ноль!\n";
        return 0.0;
    }
}

double power(double a, double b) {
    return pow(a, b);
}

double percent(double a, double b) {
    return (a * b) / 100.0;
}

int main() {
    setlocale(LC_ALL, "Russian");
    // 2
    double num1, num2;
    char operation;

    // Ввод чисел и операции
    cout << "Введите число: ";
    cin >> num1;

    cout << "Введите операцию (+, -, *, /, ^, %): ";
    cin >> operation;

    cout << "Введите число: ";
    cin >> num2;

    // Указатель на функцию
    double (*operationFunction)(double, double);

    // Выбор функции в зависимости от операции
    switch (operation) {
        case '+':
            operationFunction = add;
            break;
        case '-':
            operationFunction = subtract;
            break;
        case '*':
            operationFunction = multiply;
            break;
        case '/':
            operationFunction = divide;
            break;
        case '^':
            operationFunction = power;
            break;
        case '%':
            operationFunction = percent;
            break;
        default:
            cerr << "Ошибка: неверная операция!\n";
            return 1;
    }

    // Выполнение операции и вывод результата
    double result = operationFunction(num1, num2);
    cout << "Ответ: " << result << endl;

    return 0;
}