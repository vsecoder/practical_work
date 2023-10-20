using namespace std;
#include <iostream>


int main()
{
    setlocale(LC_ALL, "Russian");
    // 2
    const int n = 10;

    int Mas[n];

    int input, a;

    cout << "Как вы хотите заполнить массив? 1. Рандом 2. Самим: ";

    cin >> input;

    switch (input){
        case 1:
            for (int i = 0; i < n; i++) {
                Mas[i] = rand() % 20 + -5;
            }
            break;
        case 2:
            for (int i = 0; i < n; i++) {
                cin >> a;
                Mas[i] = a;
            }
            break;
    }

    cout << "[ ";
    for (int i = 0; i < n; i++) {
        cout << Mas[i] << " ";
    }
    cout << " ]" << endl;

    cout << "[ ";
    for (int i = 0; i < n; i++) {
        if (Mas[i] > 0) {
            cout << Mas[i] << " ";
        }
    }
    cout << " ]" << endl;

    return 0;
}
