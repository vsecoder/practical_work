#include <iostream>

using namespace std;

void processVariables(double& a, double& b, double n) {
    // Проверка условия и выполнение соответствующих операций
    if (a > b) {
        a += 3 * n;
        b /= 3 * n;
    }
    else {
        a /= 2 * n;
        b += 3 * n;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    // 1
    double a, b;
    double n;

    // Ввод значений переменных a и b
    cout << "Введите значение переменной a: ";
    cin >> a;

    cout << "Введите значение переменной b: ";
    cin >> b;

    // Ввод значения переменной n
    cout << "Введите значение переменной n: ";
    cin >> n;

    // Вызов функции с передачей переменных по ссылке
    processVariables(a, b, n);

    // Вывод значений переменных и их адресов
    cout << "Значение переменной a: " << a << ", адрес: " << &a << endl;
    cout << "Значение переменной b: " << b << ", адрес: " << &b << endl;

    return 0;
}
