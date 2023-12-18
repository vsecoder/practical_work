#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    // 3
    cout << "Введите строку символов: ";
    string str;
    getline(cin, str);

    int position = str.find('.');

    if (position) {
        cout << "Первая точка найдена на позиции " << position + 1 << "." << endl;
    } else {
        cout << "Точка не найдена в строке." << endl;
    }

    return 0;
}