#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    // 8
    int n;

    // Ввод количества команд
    cout << "Введите количество команд: ";
    cin >> n;

    // Создание динамического двумерного массива для хранения результатов матчей
    int** results = new int* [n];
    for (int i = 0; i < n; ++i) {
        results[i] = new int[n];
    }

    // Ввод результатов матчей
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i > j) continue;
            if (i != j) {
                int a, b;
                cout << "Введите счет матча команды " << i + 1 << " и команды " << j + 1 << " – ";
                cin >> a >> b;
                results[i][j] = a - b;
                results[j][i] = b - a;
            }
            else {
                results[i][j] = 0;  // Главная диагональ заполняется нулями
            }
        }
    }

    // Вывод итоговой таблицы
    cout << "Таблица итогов:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << results[i][j] << " ";
        }
        cout << endl;
    }

    // Подсчет суммы каждой строки и определение победителя
    int maxSum = -100;
    int winner = -1;

    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = 0; j < n; ++j) {
            sum += results[i][j];
        }

        cout << "Сумма по команде " << i + 1 << ": " << sum << endl;

        if (sum > maxSum) {
            maxSum = sum;
            winner = i + 1;
        }
    }

    // Вывод результата
    cout << "Выиграла команда " << winner << endl;

    // Освобождение памяти
    for (int i = 0; i < n; ++i) {
        delete[] results[i];
    }
    delete[] results;

    return 0;
}
