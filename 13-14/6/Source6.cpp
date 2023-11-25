#include "fun.h"
#include <time.h>
#include <iostream>
using namespace std;


int main()
{
    srand(time(0));
    setlocale(LC_ALL, "Russian");
    // 6
    int user_choice2 = 1;
    while (user_choice2 == 1) {
        cout << "Выберите каким способом заполнить массив: \n1 - Заполнить случайными числами\n2 - Заполнить с клавиатуры\n3 - От введенного числа\n";

        int user_choice;
        cin >> user_choice;

        const int size = 10;
        int mass[size];

        switch (user_choice) {
            case 1:
                init_rand(mass, size);
                show(mass, size);
                break;
            case 2:
                init_keyboard(mass, size);
                show(mass, size);
                break;
            case 3:
                init_from_num(mass, size);
                show(mass, size);
                break;
        }

        string choice_text = "Выберите что сделать: \n1 - Вывести минимальный элемент массива\n2 - Вывести максимальный элемент массива\n3 - Отсортировать массив\n4 - Вывести сумму элементов массива\n5 - Вывести разность элементов массива\n0 - Выйти из программы";
        cout << choice_text << endl;

        int user_choice1;
        cin >> user_choice1;

        do {
            cout << choice_text << endl;
            cin >> user_choice1;
        } while (user_choice1 < 0 || user_choice1 > 5);


        while (user_choice1 != 0) {
            switch (user_choice1) {
                case 1:
                    min_mass(mass, size);
                    break;
                case 2:
                    max_mass(mass, size);
                    break;
                case 3:
                    cout << "Отсортированный массив: " << endl;
                    bubble_sort(mass, size);
                    show(mass, size);
                    break;
                case 4:
                    sum_mass(mass, size);
                    break;
                case 5:
                    razn_mass(mass, size);
                    break;
                case 0:
                    break;
            }
            cout << choice_text << endl;
            cin >> user_choice1;
        }
    }

    do {
        cout << "Чтобы выйти из программы введите 0, или 1 чтобы создать новый массив. " << endl;
        cin >> user_choice2;
    } while (user_choice2 != 1 && user_choice2 != 0);
}
