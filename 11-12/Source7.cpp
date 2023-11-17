#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    // 7
    int n;
    // Ввод размеров массива
    cout << "Введите размер: ";
    cin >> n;

    // Создание двумерного массива размера n
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

    // Ввод числа, индексы которого мы ищем
    int target;
    cout << "Введите число для поиска: ";
    cin >> target;

    // Поиск индексов элемента в массиве
    bool found = false;
    int rowIndex, colIndex;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (arr[i][j] == target) {
                found = true;
                rowIndex = i;
                colIndex = j;
                cout << "Элемент равный " << target << " имеет индекс " << rowIndex << " " << colIndex << endl;
            }
        }
    }

    // Вывод результата
    if (!found) {
        cout << "Элемент не найден в массиве.\n";
    }

    // Освобождение памяти
    for (int i = 0; i < n; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
