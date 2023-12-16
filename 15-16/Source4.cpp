#include <iostream>

using namespace std;

int get_count(int digit, int size, int* digits) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (digits[i] == digit) {
            count++;
        }
    }
    return count;
}

void func(int* digits, int size, int* save) {
    int check = 0;
    for (int i = 0; i < size; i++) {
        check = 0;
        int count = get_count(digits[i], size, digits);
        for (int j = 0; j < i; j++) {
            if (digits[i] == save[j]) {
                check = 1;
                break;
            }
        }
        if (check == 0) {
            cout << "Число " << digits[i] << " встречается во втором массиве в количестве : " << count << endl;
            save[i] = digits[i];    
        }
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    // 4
    // Ввод размера массива
    int size;
    cout << "Введите количество элементов массива: ";
    cin >> size;

    // Выделение памяти под массив цифр
    int* digits = new int[size];
    int* save = new int[size];

    // Ввод массива цифр
    cout << "Введите цифры: ";
    for (int i = 0; i < size; ++i) {
        cin >> digits[i];
    }

    func(digits, size, save);
    cout << endl;

    // Освобождение выделенной памяти
    delete[] digits;
    delete[] save;

    return 0;
}