#include <iostream>
using namespace std;
const int size1 = 3;
const int size2 = 4;
void init_rand(int mass[size1][size2]) {
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            mass[i][j] = rand() % 10;
        }
    }
}
void show(int mass[size1][size2]) {
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }
}
void init_keyboard(int mass[size1][size2]) {
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size1; j++) {
            cin >> mass[i][j];
        }
    }
}
void init_from_num(int mass[size1][size2]) {
    cout << "Введите с какого числа заполнить массив: " << endl;
    int num;
    cin >> num;
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            mass[i][j] = num;
            num++;
        }
    }
}
void bubble_sort(int mass[size1][size2]) {
    for (int k = 0; k < size1; k++)
        for (int l = 0; l < size2; l++)
            for (int i = 0; i < size1; i++)
                for (int j = 0; j < size2; j++)
                    if (j + 1 == size2 && i + 1 == size1) continue;
                    else
                        if (j + 1 == size2 && mass[i][j] > mass[i + 1][0])
                            swap(mass[i][j], mass[i + 1][0]);
                        else
                            if (j + 1 == size2) continue;
                            else
                                if (mass[i][j] > mass[i][j + 1])
                                    swap(mass[i][j], mass[i][j + 1]);
}
void min_mass(int mass[size1][size2]) {
    int min = mass[0][0];
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (mass[i][j] < min) {
                min = mass[i][j];
            }
        }
    }
    cout << "Минимальное число массива: " << min << endl;
}
void max_mass(int mass[size1][size2]) {
    int max = mass[0][0];
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (mass[i][j] > max) {
                max = mass[i][j];
            }
        }
    }
    cout << "Максимальное число массива: " << max << endl;
}
void min_str(int mass[size1][size2]) {
    for (int i = 0; i < size1; i++) {
        int min = mass[i][0];
        for (int j = 0; j < size2; j++) {
            if (mass[i][j] < min) {
                min = mass[i][j];
            }
        }
        cout << "Минимальное значение строки " << i + 1 << "  " << min << endl;
    }
}
void max_str(int mass[size1][size2]) {
    for (int i = 0; i < size1; i++) {
        int max = mass[i][0];
        for (int j = 0; j < size2; j++) {
            if (mass[i][j] > max) {
                max = mass[i][j];
            }
        }
        cout << "Максимальное значение строки " << i + 1 << "  " << max << endl;
    }
}
void sum_mass(int mass[size1][size2]) {
    int res = 0;
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            res += mass[i][j];
        }
    }
    cout << "Сумма всех элементов массива: " << res << endl;
}
void razn_mass(int mass[size1][size2]) {
    int res = mass[0][0];
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            res -= mass[i][j];
        }
    }
    cout << "Разность всех элементов массива: " << res << endl;
}
