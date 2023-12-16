#include <iostream>
#include <time.h>

using namespace std;

int count_same(int digit, int size, int* mass) {//Подсчет одинаковых элементов
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (mass[i] == digit) {
            count++;
        }
    }
    return count;
}

void init_mass(int* mass, int size) {//Заполнение массива
    for (int i = 0; i < size; i++) {
        mass[i] = rand() % 10 + 1;
    }
}

void show(int* mass, int size) {//Вывод массива
    for (int i = 0; i < size; i++) {
        cout << mass[i] << " ";
    }
}

void init_null(int* mass, int size) { //Заполнение массива для хранения нулями
    for (int i = 0; i < size; i++) {
        mass[i] = 0;
    }
}

void fun(int* mass1, int size1, int* save1, int* mass2, int size2) {
    int check = 0;
    for (int i = 0; i < size1; i++) { //для подсчета одинаковых элементов во втором массиве
        check = 0;
        int count = count_same(mass1[i], size2, mass2); //Подсчет одинаковых элементов
        for (int j = 0; j < i; j++) {
            if (mass1[i] == save1[j]) { //Если элементы равны
                check = 1;
                break;

            }
        }
        if (check == 0) { //Если счетчик не изменился выводим
            cout << "Число " << mass1[i] << " встречается во втором массиве в количестве : " << count << endl;
            save1[i] = mass1[i]; //Присваиваем значение 
        }
    }
}

int main() {
    srand(time(0));
    setlocale(LC_ALL, "Russian");
    // 6
    int size1, size2;

    cout << "Введите размер первого массива: ";
    cin >> size1;

    int* mass1 = new int[size1];

    init_mass(mass1, size1);

    cout << "Введите размер второго массива: ";
    cin >> size2;

    int* mass2 = new int[size2];
    init_mass(mass2, size2);

    cout << "Первый массив: " << endl;
    show(mass1, size1);

    cout << endl << "Второй массив: " << endl;
    show(mass2, size2);
    cout << endl;

    int* save1 = new int[size1];
    init_null(save1, size1);

    fun(mass1, size1, save1, mass2, size2);
    cout << endl << endl << endl;

    int check2 = 0;
    int* save2 = new int[size2];
    init_null(save2, size2);

    fun(mass2, size2, save2, mass1, size1);

    delete[] mass1;
    delete[] mass2;

    return 0;
}