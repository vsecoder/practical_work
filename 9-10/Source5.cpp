#include <iostream>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    // 5

    const int n = 40; // вариант #4, умноженный на 10
    int arr[n];

    srand(time(0));

    // Заполняем массив случайными числами
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 101; // Генерируем случайные числа от 0 до 100
    }

    // Вывод исходного массива
    cout << "Исходный массив: \n[ ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;

    // Проверяем и обрабатываем дубликаты
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                arr[j] = arr[j] * i; // Заменяем один из дубликатов
            }
        }
    }

    // Вывод измененного массива
    cout << "Измененный массив: \n[ ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;

    return 0;
}
