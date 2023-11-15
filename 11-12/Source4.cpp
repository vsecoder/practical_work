#include <iostream>
#include <ctime>
#include <random>

using namespace std;
const int SIZE = 3;

// Функция для генерации случайного числа в заданном диапазоне
int getRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// Функция для рандомной генерации матрицы
void generateRandomMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            matrix[i][j] = getRandomNumber(-10, 10);
        }
    }
}

// Функция для вывода массива
void printArray(int arr[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    // 4
    int matrix[SIZE][SIZE];

    generateRandomMatrix(matrix);
    printArray(matrix);

    int mainDiagonalSum = 0;
    int positiveSecondaryDiagonalCount = 0;

    // Подсчет суммы элементов главной диагонали и количества положительных элементов побочной диагонали
    for (int i = 0; i < SIZE; ++i) {
        mainDiagonalSum += matrix[i][i];
        if (matrix[i][SIZE - 1 - i] > 0) {
            positiveSecondaryDiagonalCount++;
        }
    }

    // Вывод результатов
    cout << "Сумма элементов главной диагонали: " << mainDiagonalSum << endl;
    cout << "Количество положительных элементов побочной диагонали: " << positiveSecondaryDiagonalCount << endl;

    return 0;
}
