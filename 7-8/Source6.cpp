#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    // 6

    int num, digit=0, save, remains;

    cout << "Введите число: ";
    cin >> num;

    save = num;

    while (num != 0) {
        remains = num % 10;
        digit = digit * 10 + remains;
        num /= 10;
    }

    if (digit == save) {
        cout << "Палиндром";
        return 0;
    }

    cout << "Не палиндром";
    return 0;
}
