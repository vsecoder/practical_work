#include <iostream>

using namespace std;

// Функция для рассчета суммы
int summa(int number, int sum) {
    return sum + number;
}

// Функция для проверки числа на 0 и рассчета суммы
void chesk(int number, int& sum) {
    if (number != 0) {
        sum = summa(number, sum);
    }
}

// Функция для вывода результата
void output(int sum) {
    cout << "Сумма введенных чисел: " << sum << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    // 1
    int number, sum = 0;
    do {
        cout << "Введите число (что бы закончить введите 0): ";
        cin >> number;
        chesk(number, sum);
    } while (number);

    output(sum);

    return 0;
}
