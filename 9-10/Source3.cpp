#include <iostream>
#include <algorithm>

using namespace std;


// Функция для поиска элемента в массиве методом последовательного поиска
int sequentialSearch(int arr[], int size, int target, int& steps) {
    // int& обозначает ссылку на переменную типа int. 
    // Ссылка позволяет создать псевдоним (или альтернативное имя) для существующей переменной int, 
    // таким образом, что изменения в ссылке также изменяют исходную переменную.
    for (int i = 0; i < size; i++) {
        steps++; // Увеличиваем счетчик действий
        if (arr[i] == target) {
            return i; // Элемент найден
        }
    }
    return -1; // Элемент не найден
}

// Функция для поиска элемента в отсортированном массиве методом бинарного поиска
int binarySearch(int arr[], int size, int target, int& steps) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        steps++; // Увеличиваем счетчик действий
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid; // Элемент найден
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1; // Элемент не найден
}

int main() {
    setlocale(LC_ALL, "Russian");
    // 3

    const int size = 100;
    int arr[size];

    cout << "[ ";
    // Заполняем массив случайными числами и выводим его
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 1000 + 1;
        cout << arr[i] << " ";
    }
    cout << "]" << endl;

    // Сортируем массив для бинарного поиска
    sort(arr, arr + size);  // https://www.digitalocean.com/community/tutorials/sort-in-c-plus-plus

    int target;
    cout << "Введите число для поиска: ";
    cin >> target;

    int sequentialSteps = 0;
    int binarySteps = 0;

    int sequentialResult = sequentialSearch(arr, size, target, sequentialSteps);
    int binaryResult = binarySearch(arr, size, target, binarySteps);

    if (sequentialResult != -1) {
        cout << "Число найдено методом последовательного поиска на позиции " << sequentialResult << endl;
        cout << "Количество действий в последовательном поиске: " << sequentialSteps << endl;
    }
    else {
        cout << "Число не найдено методом последовательного поиска" << endl;
    }

    if (binaryResult != -1) {
        cout << "Число найдено методом бинарного поиска на позиции " << binaryResult << endl;
        cout << "Количество действий в бинарном поиске: " << binarySteps << endl;
    }
    else {
        cout << "Число не найдено методом бинарного поиска" << endl;
    }

    if (sequentialSteps < binarySteps) {
        cout << "Последовательный поиск был более эффективным." << endl;
    }
    else if (sequentialSteps > binarySteps) {
        cout << "Бинарный поиск был более эффективным." << endl;
    }
    else {
        cout << "Оба метода поиска выполнили одинаковое количество действий." << endl;
    }

    return 0;
}
