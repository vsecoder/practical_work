using namespace std;
#include <iostream>


int main()
{
    setlocale(LC_ALL, "Russian");
    // 1
    const int l = 10;
    int Mas[l];

    for (int i = 0; i < l; i++) {
        Mas[i] = rand()%20 + -5;
    }

    int sum = 0, kol = 0;

    for (int i = 0; i < l; i++) {
        if (Mas[i] <= 5 && Mas[i] >= -5) {
            sum += Mas[i];
        }

        if (Mas[i] % 2 != 0) {
            kol += 1;
        }
    }

    cout << "[ ";
    for (int i = 0; i < l; i++) {
        cout << Mas[i] << " ";
    }
    cout << " ]" << endl;

    cout << "Сумма от 5 до -5 в массиве: " << sum << endl;
    cout << "Кол-во нечётных чисел: " << kol << endl;

    return 0;
}
