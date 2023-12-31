#include <iostream>
#include <string>


using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    // 1
    cout << "Введите строку символов: ";
    string str;
    getline(cin, str);

    cout << "Введите символ для поиска: ";
    char c;
    cin >> c;

    //cout << str.find(c) << endl;

    // Поиск символа в строке
    bool found = false;
    
    // диапазонный цикл, он предназначен для упрощения прохода по элементам переменной, такого как строка или массив
    for (char ch : str) {
        if (ch == c) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Символ '" << c << "' найден в строке." << endl;
    } else {
        cout << "Символ '" << c << "' не найден в строке." << endl;
    }

    return 0;
}