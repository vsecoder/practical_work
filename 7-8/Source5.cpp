#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    // 5
    while (true) {
        string number;
        cout << "Введите число (для завершения введите 0): ";
        cin >> number;

        if (number == "0") {
            break;
        }

        bool hasDuplicates = false;

        for (int i = 0; i < number.length() - 1; i++) {
            if (number[i] == number[i + 1]) {
                hasDuplicates = true;
                break;
            }
        }

        if (hasDuplicates) {
            cout << "есть повторы" << endl;
        }
        else {
            cout << "нет повторов" << endl;
        }
    }

    return 0;
}
