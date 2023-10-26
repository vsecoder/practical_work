#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int getRnd(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    // 8
    const int len = 5;
    const int n = getRnd(1, 50);
    int nearest;

    int answers[len];

    //cout << n << endl;

    cout << "Кожанный, угадай число, загаданное мной от 1 до 50, у тебя 5 попыток!" << endl;

    for (int i = 0; i < len; i++) {
        cout << "Попытка №" << i + 1 << ": ";
        cin >> answers[i];

        if (answers[i] == n) {
            cout << "Ты угадал... Но как?! ТЫ НАПРАСНО ДЕЛАЕШЬ ВИД, ЧТО ЗНАЕШЬ ВСЁ НАПЕРЁД, ДЖОРНО ДЖОВАННА!" << endl;
            return 0;
        }
    }

    double minDifference = abs(answers[0] - n);

    for (int i = 1; i < len; i++) {
        double difference = abs(answers[i] - n);
        if (difference < minDifference) {
            minDifference = difference;
            nearest = answers[i];
        }
    }

    cout << "Человечишка, ты почти попал, написав " << nearest << endl;
    cout << "Я загадал " << n << endl;

    return 0;
}
