#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    // 8
    int num1, num2, num3, num4;

    cout << "Введите четыре числа: ";
    cin >> num1 >> num2 >> num3 >> num4;

    int choice;
    cout << "Выберите действие:" << endl;
    cout << "1 - найти наибольшее" << endl;
    cout << "2 - найти наименьшее" << endl;
    cout << "3 - найти сумму всех чисел" << endl;
    cout << "4 - найти произведение всех чисел" << endl;
    cout << "5 - найти разность наибольшего и наименьшего" << endl;

    cin >> choice;

    switch (choice) {
    case 1:
        if (num1 >= num2 && num1 >= num3 && num1 >= num4) {
            cout << "Ответ: " << num1 << endl;
        }
        else if (num2 >= num1 && num2 >= num3 && num2 >= num4) {
            cout << "Ответ: " << num2 << endl;
        }
        else if (num3 >= num1 && num3 >= num2 && num3 >= num4) {
            cout << "Ответ: " << num3 << endl;
        }
        else {
            cout << "Ответ: " << num4 << endl;
        }
        break;

    case 2:
        if (num1 <= num2 && num1 <= num3 && num1 <= num4) {
            cout << "Ответ: " << num1 << endl;
        }
        else if (num2 <= num1 && num2 <= num3 && num2 <= num4) {
            cout << "Ответ: " << num2 << endl;
        }
        else if (num3 <= num1 && num3 <= num2 && num3 <= num4) {
            cout << "Ответ: " << num3 << endl;
        }
        else {
            cout << "Ответ: " << num4 << endl;
        }
        break;

    case 3:
        cout << "Ответ: " << num1 + num2 + num3 + num4 << endl;
        break;

    case 4:
        cout << "Ответ: " << num1 * num2 * num3 * num4 << endl;
        break;

    case 5:
        int maxNum, minNum;
        maxNum = minNum = num1;

        if (num2 > maxNum) {
            maxNum = num2;
        }
        else if (num2 < minNum) {
            minNum = num2;
        }

        if (num3 > maxNum) {
            maxNum = num3;
        }
        else if (num3 < minNum) {
            minNum = num3;
        }

        if (num4 > maxNum) {
            maxNum = num4;
        }
        else if (num4 < minNum) {
            minNum = num4;
        }

        cout << "Ответ: " << maxNum - minNum << endl;
        break;

    default:
        cout << "Некорректный выбор действия." << endl;
        break;
    }

    return 0;
}
