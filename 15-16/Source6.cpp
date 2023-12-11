#include <iostream>

using namespace std;

// Функция для поиска цифры в массиве
int countDigitOccurrences(int digit, int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == digit) {
            count++;
        }
    }
    return count;
}

int main() {
    setlocale(LC_ALL, "Russian");
    // 6
    int m, n;

    // Ввод размеров массивов
    cout << "Введите размер первого массива: ";
    cin >> m;

    cout << "Введите размер второго массива: ";
    cin >> n;

    // Выделение памяти под массивы A и B
    int* arrA = new int[m];
    int* arrB = new int[n];

    // Ввод элементов первого массива
    cout << "Введите элементы первого массива:" << endl;
    for (int i = 0; i < m; ++i) {
        cin >> arrA[i];
    }

    // Ввод элементов второго массива
    cout << "Введите элементы второго массива:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arrB[i];
    }

    // Поиск и подсчет вхождений цифр
    for (int i = 0; i < n; ++i) {
        int digit = arrB[i];
        int occurrencesInA = countDigitOccurrences(digit, arrA, m);
        cout << "Цифра " << digit << " встречается в первом массиве " << occurrencesInA << " раз." << endl;
    }

    for (int i = 0; i < m; ++i) {
        int digit = arrA[i];
        int occurrencesInB = countDigitOccurrences(digit, arrB, n);
        cout << "Цифра " << digit << " встречается во втором массиве " << occurrencesInB << " раз." << endl;
    }

    // Освобождение памяти
    delete[] arrA;
    delete[] arrB;

    return 0;
}