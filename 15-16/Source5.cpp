#include <iostream>

using namespace std;

// Функция для инициализации массива
void initializeArray(int** arr, int m, int n) {
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }
}

// Функция для вывода массива на экран
void printArray(int** arr, int m, int n) {
    cout << "Массив:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Функция для сложения двух массивов
void addArrays(int** arrA, int** arrB, int** result, int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            result[i][j] = arrA[i][j] + arrB[i][j];
        }
    }
}

// Функция для освобождения выделенной под массив памяти
void deleteArray(int** arr, int m) {
    for (int i = 0; i < m; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
}

int main() {
    setlocale(LC_ALL, "Russian");
    // 5
    int m, n;

    // Ввод размеров массивов
    cout << "Введите размер массивов (m n): ";
    cin >> m >> n;

    // Выделение памяти под массивы A, B и Result
    int** arrA = new int*[m];
    int** arrB = new int*[m];
    int** result = new int*[m];

    for (int i = 0; i < m; ++i) {
        arrA[i] = new int[n];
        arrB[i] = new int[n];
        result[i] = new int[n];
    }

    // Инициализация массивов A и B
    cout << "Массив A" << endl;
    initializeArray(arrA, m, n);

    cout << "Массив B" << endl;
    initializeArray(arrB, m, n);

    // Сложение массивов A и B
    addArrays(arrA, arrB, result, m, n);

    // Вывод результата
    cout << "Сумма массивов равна" << endl;
    printArray(result, m, n);

    // Освобождение памяти
    deleteArray(arrA, m);
    deleteArray(arrB, m);
    deleteArray(result, m);

    return 0;
}