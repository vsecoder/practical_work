#include <iostream>
#include <fstream>

using namespace std;

const int MAX_USERS = 5;

struct User {
    string lastName;
    string firstName;
    string password;
};

void printMenu() {
    cout << "Выберите действие:" << endl;
    cout << "v - вход, a - авторизация, x - выход из системы" << endl;
}

void registerUser(User users[], int& userCount) {
    if (userCount >= MAX_USERS) {
        cout << "Достигнуто максимальное количество пользователей." << endl;
        return;
    }

    cout << "Введите фамилию: ";
    cin >> users[userCount].lastName;

    cout << "Введите имя: ";
    cin >> users[userCount].firstName;

    cout << "Введите пароль: ";
    cin >> users[userCount].password;

    ofstream outFile("users.txt", ios::app);
    if (!outFile.is_open()) {
        cerr << "Ошибка открытия файла для записи." << endl;
        return;
    }

    outFile << users[userCount].lastName << " "
            << users[userCount].firstName << " "
            << users[userCount].password << endl;

    outFile.close();

    cout << "Пользователь зарегистрирован." << endl;
    userCount++;
}

bool loginUser(User users[], int userCount, const string lastName, const string firstName, const string password) {
    for (int i = 0; i < userCount; ++i) {
        if (users[i].lastName == lastName &&
            users[i].firstName == firstName &&
            users[i].password == password) {
            return true;
        }
    }
    return false;
}

void changePassword(User users[], int userCount, const string lastName, const string firstName, const string newPassword) {
    for (int i = 0; i < userCount; ++i) {
        if (users[i].lastName == lastName &&
            users[i].firstName == firstName) {
            users[i].password = newPassword;

            ofstream outFile("users.txt");
            if (!outFile.is_open()) {
                cerr << "Ошибка открытия файла для записи." << endl;
                return;
            }

            for (int j = 0; j < userCount; ++j) {
                outFile << users[j].lastName << " "
                        << users[j].firstName << " "
                        << users[j].password << endl;
            }

            outFile.close();

            cout << "Пароль изменен." << endl;
            return;
        }
    }
    cout << "Пользователь не найден." << endl;
}

int main() {
    User users[MAX_USERS];
    int userCount = 0;

    ifstream inFile("users.txt");
    if (inFile.is_open()) {
        while (
            userCount < MAX_USERS && 
            inFile >> users[userCount].lastName >> users[userCount].firstName >> users[userCount].password
        ) {
            userCount++;
        }
        inFile.close();
    }

    char action;
    do {
        printMenu();
        cin >> action;

        switch (action) {
            case 'v':
            case 'V': {
                string lastName;
                string firstName;
                string password;

                cout << "Введите фамилию: ";
                cin >> lastName;

                cout << "Введите имя: ";
                cin >> firstName;

                cout << "Введите пароль: ";
                cin >> password;

                if (loginUser(users, userCount, lastName, firstName, password)) {
                    cout << "Пароль верный, вход выполнен." << endl;

                    char subAction;
                    do {
                        cout << "Выберите действие: e - выход, s - сменить пароль" << endl;
                        cin >> subAction;

                        switch (subAction) {
                            case 'e':
                            case 'E':
                                cout << "Выход выполнен." << endl;
                                break;
                            case 's':
                            case 'S': {
                                string newPassword;
                                cout << "Введите новый пароль: ";
                                cin >> newPassword;
                                changePassword(users, userCount, lastName, firstName, newPassword);
                                break;
                            }
                            default:
                                cout << "Неверный выбор." << endl;
                        }
                    } while (subAction != 'e' && subAction != 'E');
                } else {
                    cout << "Неверный логин или пароль." << endl;
                }
                break;
            }
            case 'a':
            case 'A': {
                registerUser(users, userCount);
                break;
            }
            case 'x':
            case 'X':
                cout << "Выход из системы." << endl;
                break;
            default:
                cout << "Неверный выбор." << endl;
        }
    } while (action != 'x' && action != 'X');

    return 0;
}