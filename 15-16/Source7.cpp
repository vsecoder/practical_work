#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    // 7
    int n;

    // Ввод размерности матрицы
    cout << "Введите размерность матрицы (n): ";
    cin >> n;

    // Создание двумерного массива и ввод элементов
    int** matrix = new int*[n];
    for (int i = 0; i < n; ++i) {
        matrix[i] = new int[n];
        for (int j = 0; j < n; ++j) {
            cout << "Введите элемент матрицы [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Вычисление суммы цифр в верхнем, нижнем, правом и левом треугольниках
    int upperSum = 0, lowerSum = 0, rightSum = 0, leftSum = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i < j && i + j < n - 1) {
                upperSum += matrix[i][j];
            }

            if (i > j && i + j > n - 1) {
                lowerSum += matrix[i][j];
            }

            if (i + j > n - 1 && i < j) {
                rightSum += matrix[i][j];
            }

            if (i + j < n - 1 && i > j) {
                leftSum += matrix[i][j];
            }
        }
    }

    // Вывод результатов
    cout << "Сумма цифр в верхнем треугольнике: " << upperSum << endl;
    cout << "Сумма цифр в нижнем треугольнике: " << lowerSum << endl;
    cout << "Сумма цифр в правом треугольнике: " << rightSum << endl;
    cout << "Сумма цифр в левом треугольнике: " << leftSum << endl;

    // Освобождение памяти
    for (int i = 0; i < n; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}