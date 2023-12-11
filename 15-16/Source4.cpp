#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    // 4
    // Ввод размера массива
    int size;
    cout << "Введите количество элементов массива: ";
    cin >> size;

    // Выделение памяти под массив цифр
    int* digits = new int[size];

    // Ввод массива цифр
    cout << "Введите цифры: ";
    for (int i = 0; i < size; ++i) {
        cin >> digits[i];
    }

    // Поиск повторяющихся цифр с использованием вложенных циклов
    cout << "Повторяющиеся цифры: ";
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (digits[i] == digits[j]) {
                cout << digits[i] << ",";
                break;  // Переходим к следующей цифре после обнаружения повторения
            }
        }
    }
    cout << endl;

    // Освобождение выделенной памяти
    delete[] digits;

    return 0;
}