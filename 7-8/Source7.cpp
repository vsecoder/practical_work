#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    // 7

    double S = 0.0, first = 1.0, second = 1.0, third = 1, num;

    cout << "Введите последовательность (число): ";
    cin >> num;

    while (num != 0) {
        S += first / (second + third);
        first += 1;
        second += second;
        third *= 3;
        num -= 1;
    }

    cout << round(S * 1000) / 1000;
    return 0;
}
