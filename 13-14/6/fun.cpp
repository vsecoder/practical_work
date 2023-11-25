#include <iostream>
using namespace std;
void init_rand(int mass[10], const int size) {
    for (int i = 0; i < size; i++) {
        mass[i] = rand() % 10;
    }
}
void init_keyboard(int mass[10], const int size) {
    for (int i = 0; i < size; i++) {
        cin >> mass[i];
    }
}
void init_from_num(int mass[10],const int size) {
    cout << "Введите от какого числа заполнять массив: " << endl;
    int num;
    cin >> num;
    for (int i = 0; i < size; i++) {
        mass[i] = num;
        num++;
    }
}
void show(int mass[],const int size) {
    for (int i = 0; i < size; i++) {
        cout << mass[i] << " ";
    }
    cout << endl << endl;
}
void min_mass(int mass[], const int size) {
    int min = mass[0];
    for (int i = 1; i < size; i++) {
        if (mass[i] < min) {
            min = mass[i];
        }
    }
    cout << "Минимальное значение массива:" << min << endl;
}
void max_mass(int mass[], const int size) {
    int max = mass[0];
    for (int i = 1; i < size; i++) {
        if (mass[i] > max) {
            max = mass[i];
        }
    }
    cout << "Максимальное число массива: " << max << endl;
}
void bubble_sort(int mass[], int size)
{
    int i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (mass[j] > mass[j + 1]) {
                swap(mass[j], mass[j + 1]);
            }
        }
    }
}
void sum_mass(int mass[], const int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += mass[i];
    }
    cout << "Сумма элементов массива: " << sum << endl;
}
void razn_mass(int mass[], const int size) {
    int res = mass[0];
    for (int i = 0; i < size; i++) {
        res -= mass[i];
    }
    cout << "Разность элементов массива: " << res << endl;
}
