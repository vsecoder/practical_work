#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    const char* fileName = "numbers.txt";

    ifstream inputFile(fileName);
    if (!inputFile.is_open()) {
        cout << "Ошибка открытия файла." << endl;
        return 1;
    }

    int numbers[10];
    int num;

    while (inputFile >> num) {
        cout << num << " ";
    }

    inputFile.close();

    cout << numbers;

    // не готово

    return 0;
}