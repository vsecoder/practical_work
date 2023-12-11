#include <iostream>
#include <fstream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    // 5
    const char* file1Name = "a1.txt";
    const char* file2Name = "a2.txt";

    ifstream file1(file1Name);
    ifstream file2(file2Name);

    if (!file1.is_open() || !file2.is_open()) {
        cout << "Ошибка открытия файлов." << endl;
        return 1;
    }

    int num1, num2;
    int sumPositives = 0;
    int productNegatives = 1;
    int countZeros = 0;

    while (file1 >> num1 && file2 >> num2) {
        if (num1 > 0) {
            sumPositives += num1;
        }

        if (num2 > 0) {
            sumPositives += num2;
        }

        if (num1 < 0) {
            productNegatives *= num1;
        }

        if (num2 < 0) {
            productNegatives *= num2;
        }

        if (num1 == 0) {
            countZeros++;
        }

        if (num2 == 0) {
            countZeros++;
        }
    }

    // Вывод результатов
    cout << "Сумма положительных элементов: " << sumPositives << endl;
    cout << "Произведение отрицательных элементов: " << productNegatives << endl;
    cout << "Количество нулевых элементов: " << countZeros << endl;

    // Закрытие файлов
    file1.close();
    file2.close();

    return 0;
}