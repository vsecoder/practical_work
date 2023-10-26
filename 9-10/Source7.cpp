#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    // 7
    const int n = 10;

    int arr[n];// = { 1, 2, 3, 3, 7, 7, 7, 8, 9, 7 };

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 9 + 1;
    }

    cout << "Ваш массив: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }
    cout << endl;

    // Удаление рядом стоящих
    // После каждого числа будет образовываться новый цикл,
    // который будет проверять, совпадают ли числа, если нет, прервёт
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                arr[j] = 0;
            }
            else {
                break;
            }
        }
    }

    // Новый массив, сдвинутый (не на голову)
    int shiftedArr[n];
    int newIndex = 0;

    // Перебираем исходный массив
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            // помещаем в новый массив всё, кроме 0
            shiftedArr[newIndex] = arr[i];
            newIndex++;
        }
    }

    // Заполняем оставшиеся элементы нулями
    while (newIndex < n) {
        shiftedArr[newIndex] = 0;
        newIndex++;
    }

    // Вывод измененного массива
    cout << "Измененный массив: ";
    for (int i = 0; i < n; i++) {
        cout << shiftedArr[i];
    }
    cout << endl;
    return 0;
}
