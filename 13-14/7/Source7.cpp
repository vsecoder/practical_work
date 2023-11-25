#include<iostream>
#include "fun.h"
#include <time.h>

using namespace std;


int main()
{
    srand(time(0));
    setlocale(LC_ALL, "Russian");
    // 7
    int user_choice2 = 1;
    int user_choice1;

    while (user_choice2 == 1) {
        cout << "Выберите каким способом заполнить массив: \n1 - Заполнить случайными числами\n2 - Заполнить с клавиатуры\n3 - От введенного числа\n";
        
        int user_choice;
        cin >> user_choice;

        const int size1 = 3;
        const int size2 = 4;

        int mass[size1][size2];

        switch (user_choice) {
            case 1:
                init_rand(mass);
                show(mass);
                break;
            case 2:
                init_keyboard(mass);
                show(mass);
                break;
            case 3:
                init_from_num(mass);
                show(mass);
                break;
        }

        do {
            cout << "Выберите что сделать: \n1 - Вывести минимальный элемент массива\n2 - Вывести максимальный элемент массива\n3 - Отсортировать массив\n4 - Вывести сумму элементов массива\n5 - Вывести разность элементов массива\n6 - Найти минимальный элемент каждой строки\n7 - Найти максимальный элемент каждой строки\n0 - Выйти из программы" << endl;
            cin >> user_choice1;
        } while (user_choice1 < 0 || user_choice1 > 7);

        while (user_choice1 != 0) {
            switch (user_choice1) {
                case 1:
                    min_mass(mass);
                    break;
                case 2:
                    max_mass(mass);
                    break;
                case 3:
                    cout << "Отсортированный массив: " << endl;
                    bubble_sort(mass);
                    show(mass);
                    break;
                case 4:
                    sum_mass(mass);
                    break;
                case 5:
                    razn_mass(mass);
                    break;
                case 6:
                    min_str(mass);
                    break;
                case 7:
                    max_str(mass);
                    break;
                case 0:
                    break;
            }

            do {
                cout << "Выберите что сделать: \n1 - Вывести минимальный элемент массива\n2 - Вывести максимальный элемент массива\n3 - Отсортировать массив\n4 - Вывести сумму элементов массива\n5 - Вывести разность элементов массива\n6 - Найти минимальный элемент каждой строки\n7 - Найти максимальный элемент каждой строки\n0 - Выйти из программы" << endl;
                cin >> user_choice1;
            } while (user_choice1 < 0 || user_choice1 > 7);
        }

        do {
            cout << "Чтобы выйти из программы введите 0, или 1 чтобы создать новый массив. " << endl;
            cin >> user_choice2;
        } while (user_choice2 != 1 && user_choice2 != 0);

    }
}