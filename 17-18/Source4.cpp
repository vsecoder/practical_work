#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    // 4
    cout << "Введите строку символов: ";
    string str;
    getline(cin, str);

    string rev_str;
    for (int i = str.length() - 1; i >= 0; --i) {
        rev_str += str[i];
    }

    cout << "Новая строка, образованная чтением от конца до начала: " << rev_str << endl;

    return 0;
}