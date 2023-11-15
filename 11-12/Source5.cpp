#include <iostream>
#include <cstdlib>  // Для использования функций rand и srand
#include <ctime>    // Для использования функции time

using namespace std;

const int SIZE = 3;

// Функция для генерации случайного числа в заданном диапазоне
int getRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// Функция для нахождения минимального элемента и его индекса в массиве
void findMinElement(const int matrix[SIZE][SIZE], int& minElement) {
    minElement = 11; // т.к. рандом максимально выдаст 10, будем считать максимальным 11

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (matrix[i][j] < minElement) {
                minElement = matrix[i][j];
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    // 5
    char continueSearch;

    // Инициализация генератора случайных чисел
    srand(time(0));

    do {
        int matrix[SIZE][SIZE];

        // Генерация случайной матрицы
        for (int i = 0; i < SIZE; ++i) {
            for (int j = 0; j < SIZE; ++j) {
                matrix[i][j] = getRandomNumber(-10, 10);
            }
        }

        int minElement;

        // Поиск минимального элемента и его индекса
        findMinElement(matrix, minElement);

        // Вывод сгенерированной матрицы
        cout << "Сгенерированная матрица:" << endl;
        for (int i = 0; i < SIZE; ++i) {
            for (int j = 0; j < SIZE; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }

        // Вывод результата
        for (int i = 0; i < SIZE; ++i) {
            for (int j = 0; j < SIZE; ++j) {
                if (matrix[i][j] == minElement) {
                    cout << "Наименьший элемент " << minElement << " находится на строке " << i + 1 << endl;
                }
            }
        }

        // Запрос на повторение
        cout << "Хотите продолжить? (y-да, n-нет) ";
        cin >> continueSearch;

    } while (continueSearch == 'y' || continueSearch == 'Y');

    return 0;
}
