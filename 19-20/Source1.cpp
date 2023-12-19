#include <iostream>
#include <string>

using namespace std;

string encryptPassword(const string& password) {
    string encryptedPassword = password;
    const char key = 'X';

    for (char& ch : encryptedPassword) {
        ch = ch ^ key;
    }

    return encryptedPassword;
}

struct User {
    int userID;
    string lastName;
    string firstName;
    string patronymic;
    string login;
    string password;
};

int main() {
    setlocale(LC_ALL, "Russian");
    // 1
    cout << "Введите количество пользователей: ";
    int userCount;
    cin >> userCount;

    User* users = new User[userCount];

    for (int i = 0; i < userCount; ++i) {
        users[i].userID = i + 1;
        cout << "Введите фамилию пользователя " << i + 1 << ": ";
        cin >> users[i].lastName;
        cout << "Введите имя пользователя " << i + 1 << ": ";
        cin >> users[i].firstName;
        cout << "Введите отчество пользователя " << i + 1 << ": ";
        cin >> users[i].patronymic;
        cout << "Введите логин пользователя " << i + 1 << ": ";
        cin >> users[i].login;
        cout << "Введите пароль пользователя " << i + 1 << ": ";
        cin >> users[i].password;

        users[i].password = encryptPassword(users[i].password);
    }

    cout << "\nВыберите действие:\n";
    cout << "1. Вывести информацию о пользователе по порядковому номеру\n";
    cout << "2. Вывести данные всех пользователей\n";
    
    int choice;
    cin >> choice;

    if (choice == 1) {
        int userNumber;
        cout << "Введите порядковый номер пользователя: ";
        cin >> userNumber;

        if (userNumber >= 1 && userNumber <= userCount) {
            const User& user = users[userNumber - 1];
            cout << "\nИнформация о пользователе " << userNumber << ":\n";
            cout << "Фамилия: " << user.lastName << "\n";
            cout << "Имя: " << user.firstName << "\n";
            cout << "Отчество: " << user.patronymic << "\n";
            cout << "Логин: " << user.login << "\n";
            cout << "Зашифрованный пароль: " << user.password << "\n";
        } else {
            cout << "Неверный порядковый номер пользователя.\n";
        }
    } else if (choice == 2) {
        // Вывод данных всех пользователей
        cout << "\nИнформация о всех пользователях:\n";
        for (int i = 0; i < userCount; ++i) {
            const User& user = users[i];
            cout << "\nПользователь " << user.userID << ":\n";
            cout << "Фамилия: " << user.lastName << "\n";
            cout << "Имя: " << user.firstName << "\n";
            cout << "Отчество: " << user.patronymic << "\n";
            cout << "Логин: " << user.login << "\n";
            cout << "Зашифрованный пароль: " << user.password << "\n";
        }
    } else {
        cout << "Неверный выбор.\n";
    }

    delete[] users;

    return 0;
}