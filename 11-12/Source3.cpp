#include <iostream>
#include <ctime>
#include <algorithm>
#include <random>

using namespace std;

const int ROWS = 3;
const int COLS = 3;

void bubbleSort(int arr[][COLS]) {
    for (int gi = 0; gi < COLS * ROWS; ++gi) {
        int i = gi / COLS; // строка
        int j = gi % COLS; // столбец

        for (int k = 0; k < COLS * ROWS - 1; ++k) {
            int i1 = k / COLS; // строка
            int j1 = k % COLS; // столбец

            if (arr[i][j] < arr[i1][j1]) {
                swap(arr[i][j], arr[i1][j1]);
            }
        }
    }
}


// Функция для сортировки двумерного массива методом выбора
void selectionSort(int arr[][COLS]) {    
    for (int gi = 0; gi < COLS * ROWS; ++gi) {
        int i = gi % COLS; // строка
        int j = gi / COLS; // столбец

        int min = arr[i][j];
        int min_i = i;
        int min_j = j;

        for (int k = gi + 1; k < COLS * ROWS; ++k) {
            int i1 = k % COLS; // строка
            int j1 = k / COLS; // столбец

            if (arr[i1][j1] < min) {
                min = arr[i1][j1];
                min_i = i1;
                min_j = j1;
            }
        }

        swap(arr[i][j], arr[min_i][min_j]);
    }
}

// Функция для вывода массива
void printArray(int arr[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    // 3
    int array1[ROWS][COLS] = {
        {5, 4, 7},
        {1, 3, 9},
        {6, 7, 5}
    };
    int array2[ROWS][COLS] = {
        {5, 4, 7},
        {1, 3, 9},
        {6, 7, 5}
    };

    cout << "Исходный массив:" << endl;
    printArray(array1);

    // Сортировка по строкам
    bubbleSort(array1);
    cout << "Построчно:" << endl;
    printArray(array1);

    selectionSort(array2);
    cout << "По столбцам:" << endl;
    printArray(array2);

    return 0;
}
