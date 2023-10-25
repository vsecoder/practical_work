#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    // 4

    const int arraySize = 10; // Размер массива
    float arr[arraySize];

    // https://stackoverflow.com/questions/4736485/srandtime0-and-random-number-generation
    srand(time(0));

    // Заполняем массив случайными числами
    for (int i = 0; i < arraySize; i++) {
        arr[i] = rand() % 101 - 50; // Генерируем случайные числа от -50 до 50
    }

    // Вывод исходного массива
    cout << "Исходный массив: [ ";
    for (int i = 0; i < arraySize; i++) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;

    int positiveCount = 0; // Счетчик положительных чисел
    int negativeCount = 0; // Счетчик отрицательных чисел

    // Подсчитываем количество и преобразуем массив
    for (int i = 0; i < arraySize; i++) {
        if (arr[i] > 0) {
            positiveCount++;
            arr[i] = sqrt(arr[i]); // Извлекаем квадратный корень
        }
        else if (arr[i] < 0) {
            negativeCount++;
            arr[i] = pow(arr[i], 2); // Возводим в квадрат
        }
    }

    cout << "Количество положительных элементов: " << positiveCount << endl;
    cout << "Количество отрицательных элементов: " << negativeCount << endl;

    // Вывод измененного массива
    cout << "Измененный массив: [ ";
    for (int i = 0; i < arraySize; i++) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;

    return 0;
}
