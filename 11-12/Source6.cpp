#include <iostream>
#include <cstdlib>  // Для использования функции rand()
#include <ctime>    // Для инициализации генератора случайных чисел

using namespace std;

int main() {
    int n;
    setlocale(LC_ALL, "Russian");
    // 6
    // Инициализация генератора случайных чисел
    srand(time(0));

    while (true) {
        // Ввод размера массива
        cout << "Введите n (0 для выхода): ";
        cin >> n;

        if (n == 0) {
            cout << "Программа завершена.\n";
            break;
        }

        // Создание динамического двумерного массива размера n x n
        int** arr = new int* [n];
        for (int i = 0; i < n; ++i) {
            arr[i] = new int[n];
        }

        // Заполнение массива случайными числами и вывод
        cout << "Массив:\n";
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                arr[i][j] = rand() % 10;  // Генерация случайных чисел от 0 до 9
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }

        // Проверка на симметричность относительно главной диагонали
        bool isSymmetric = true;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (arr[i][j] != arr[j][i]) {
                    isSymmetric = false;
                    break;
                }
            }
            if (!isSymmetric) {
                break;
            }
        }

        // Вывод результата
        if (isSymmetric) {
            cout << "Массив симметричен относительно главной диагонали.\n";
        }
        else {
            cout << "Массив не симметричен относительно главной диагонали.\n";
        }

        // Освобождение памяти
        for (int i = 0; i < n; ++i) {
            delete[] arr[i];
        }
        delete[] arr;
    }

    return 0;
}
