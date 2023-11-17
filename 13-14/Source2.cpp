#include <iostream>

using namespace std;

// VS домахался до директивов
// Функция для получения наименьшего
int get_min(int number, int minimal) {
    if (number < minimal) {
        return number;
    }
    return minimal;
}

// Функция для проверки числа на 0 и рассчета суммы
void cheсk(int number, int& minimal) {
    minimal = get_min(number, minimal);
}

// Функция для вывода результата
void output(int minimal) {
    cout << "Наименьшее: " << minimal << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    // 2
    int number, minimal, n;
    cout << "Введите кол-во чисел: ";
    cin >> n;

    cout << "Введите число (что бы закончить введите 0): ";
    cin >> number;
    minimal = number;

    for (int i = 1; i < n; i++) {
        cout << "Введите число (что бы закончить введите 0): ";
        cin >> number;
        cheсk(number, minimal);
    }

    output(minimal);

    return 0;
}
